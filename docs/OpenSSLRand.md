# OpenSSL RAND Engine override and S2N

One of our dependencies [s2n](https://github.com/aws/s2n-tls) overrides the openssl RAND engine, For reasons elaborated on in [their documentation](https://github.com/aws/s2n-tls/blob/main/docs/BUILD.md#rand-engine-override). this functionally means that `RAND_poll` is not implemented on the override and using the function after initializing the SDK will result in error. You can disable this behavior completely by specifying

`-DS2N_OVERRIDE_LIBCRYPTO_RAND_ENGINE=OFF`

as part of the SDK build. This will continue to use the RAND Engine from the detected OpenSSL dependency.

