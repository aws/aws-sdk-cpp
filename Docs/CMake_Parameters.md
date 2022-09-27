# CMake Parameters

## General CMake Variables/Options
CMake options are variables that can either be ON or OFF, with a controllable default.  You can set an option either with CMake Gui tools or the command line via -D.

### BUILD_ONLY
Allows you to only build the clients you want to use. This will resolve low level client dependencies if you set this to a high-level sdk such as aws-cpp-sdk-transfer. This will also build integration and unit tests related to the projects you select if they exist. aws-cpp-sdk-core always builds regardless of the value of this argument. This is a list argument.
Example:
```sh
-DBUILD_ONLY="s3;dynamodb;cognito-identity"
```

### ADD_CUSTOM_CLIENTS
Allows you to build any arbitrary clients based on the api definition. Simply place your definition in the code-generation/api-definitions folder. Then pass this arg to cmake. The cmake configure step will generate your client and include it as a subdirectory in your build. This is particularly useful if you want to generate a C++ client for using one of your API Gateway services. To use this feature you need to have python 2.7, java, jdk1.8, and maven installed and in your executable path. Example:
```sh
-DADD_CUSTOM_CLIENTS="serviceName=myCustomService, version=2015-12-21;serviceName=someOtherService, version=2015-08-15"
```

### REGENERATE_CLIENTS
This argument will wipe out all generated code and generate the client directories from the code-generation/api-definitions folder. To use this argument, you need to have python 2.7, java, jdk1.8, and maven installed in your executable path. Example:
```sh
-DREGENERATE_CLIENTS=1
```

### REGENERATE_DEFAULTS
This argument will wipe out all generated defaults code and generate it again from the code-generation/defaults folder. To use this argument, you need to have python 2.7, java, jdk1.8, and maven installed in your executable path. Example:
```sh
-DREGENERATE_DEFAULTS=1
```

### CUSTOM_MEMORY_MANAGEMENT
To use a custom memory manager, set the value to ON. You can install a custom allocator, and all STL types will use the custom allocation interface. If the value is set to OFF, you still might want to use the STL template types to help with DLL safety on Windows.

If static linking is enabled, custom memory management defaults to off. If dynamic linking is enabled, custom memory management defaults to on and avoids cross-DLL allocation and deallocation.

Note: To prevent linker mismatch errors, you must use the same value (ON or OFF) throughout your build system.

### TARGET_ARCH
To cross compile or build for a mobile platform, you must specify the target platform. By default the build detects the host operating system and builds for that operating system.
Options: `WINDOWS | LINUX | APPLE | ANDROID`

### G
Use this variable to generate build artifacts, such as Visual Studio solutions and Xcode projects.

Windows example:
```sh
-G "Visual Studio 12 Win64"
```

For more information, see the CMake documentation for your platform.

### ENABLE_UNITY_BUILD
(Defaults to ON) If enabled, most SDK libraries will be built as a single, generated .cpp file.  This can significantly reduce static library size as well as speed up compilation time.

### MINIMIZE_SIZE
(Defaults to OFF) A superset of ENABLE_UNITY_BUILD, if enabled this option turns on ENABLE_UNITY_BUILD as well as some additional binary size reduction settings.  This is a work-in-progress and may change in the future (symbol stripping in particular).

### BUILD_SHARED_LIBS
(Defaults to ON) A built-in CMake option, reexposed here for visibility.  If enabled, shared libraries will be built, otherwise static libraries will be built.

### FORCE_SHARED_CRT
(Defaults to ON) If enabled, the SDK will link to the C runtime dynamically, otherwise it will use the BUILD_SHARED_LIBS setting (weird but necessary for backwards compatibility with older versions of the SDK)

### SIMPLE_INSTALL
(Defaults to ON) If enabled, the install process will not insert platform-specific intermediate directories underneath bin/ and lib/.  Turn OFF if you need to make multi-platform releases under a single install directory.

### NO_HTTP_CLIENT
(Defaults to OFF) If enabled, prevents the default platform-specific http client from being built into the library.  Turn this ON if you wish to inject your own http client implementation.

### NO_ENCRYPTION
(Defaults to OFF) If enabled, prevents the default platform-specific cryptography implementation from being built into the library.  Turn this ON if you wish to inject your own cryptography implementation.

### ENABLE_RTTI
(Defaults to ON) Controls whether or not the SDK is built with RTTI information

### CPP_STANDARD
(Defaults to 11) Allows you to specify a custom c++ standard for use with C++ 14 and 17 code-bases

### ENABLE_TESTING
(Defaults to ON) Controls whether or not the unit and integration test projects are built

### USE_OPENSSL
(Defaults to ON) Set this if you want to use your system's OpenSSL 1.0.2/1.1.1 compatible libcrypto

If disabled, SDK will build and install [AWS-LC](https://github.com/awslabs/aws-lc) on Linux system when `BUILD_DEPS` is `ON`. This is an experimental feature. It will install AWS-LC as replacement of OpenSSL in the system default directory. Do not use if you have an OpenSSL installation in your system already.

### ENABLE_VIRTUAL_OPERATIONS
(Defaults to ON) This option usually works with REGENERATE_CLIENTS.
If enabled when doing code generation (REGENERATE_CLIENTS=ON), operation related functions in service clients will be marked as `virtual`.

If disabled when doing code generation (REGENERATE_CLIENTS=ON), `virtual` will not be added to operation functions and service client classes will be marked as final.

If disabled, SDK will also add compiler flags `-ffunction-sections -fdata-sections` for gcc and clang when compiling.

You can utilize this feature to work with your linker to reduce binary size of your application on Unix platforms when doing static linking in Release mode.

For example, if your system uses `ld` as linker, then you can turn this option OFF when building SDK, and specify linker flag `--gc-sections` (or `-dead_strip` on Mac) in your own build scripts.

You can also tell gcc or clang to pass these linker flags by specifying `-Wl,--gc-sections`, or `-Wl,-dead_strip`. Or via `-DCMAKE_CXX_FLAGS="-Wl,[flag]"` if you use CMake.

## Android CMake Variables/Options

### NDK_DIR
An override path for where the build system should find the Android NDK.  By default, the build system will check environment variables (ANDROID_NDK) if this CMake variable is not set.

### ANDROID_STL
(Defaults to libc++\_shared)  Controls what flavor of the C++ standard library the SDK will use.  Valid values are one of {libc++\_shared, libc++\_static, gnustl_shared, gnustl_static}.  There are severe performance problems within the SDK if gnustl is used and gnustl was deprecated starting from Android NDK 18, so we recommend libc++.

### ANDROID_ABI
(Defaults to armeabi-v7a) Controls what abi to output code for.  Not all valid Android ABI values are currently supported, but we intend to provide full coverage in the future.  We welcome patches to our Openssl build wrapper that speed this process up.  Valid values are one of {arm64, armeabi-v7a, x86_64, x86, mips64, mips}.

### ANDROID_TOOLCHAIN
(Defaults to clang) Controls which compiler is used to build the SDK.  With GCC being deprecated by Android NDK, we recommend using the default (clang).

### ANDROID_NATIVE_API_LEVEL
(Default varies by STL choice) Controls what API level the SDK will be built against.  If you use gnustl, you have complete freedom with the choice of API level.  If you use libc++, you must use an API level of at least 21.