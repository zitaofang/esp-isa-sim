softfloat_roundingMode = VFRM;
WRITE_FRD(f64_add(f32_to_f64(f32(HFRS1)), f32_to_f64(f32(HFRS2))));
set_fp_exceptions;
