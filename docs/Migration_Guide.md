# Migration Guide: Legacy to Modern Build

This guide covers migrating from the legacy build (`LEGACY_BUILD=ON`) to the modern build (`LEGACY_BUILD=OFF`).

## What Changes

| Aspect | Legacy Build | Modern Build |
|--------|-------------|--------------|
| C++ standard | C++11 | C++14 |
| CMake version | 3.1+ | 3.14+ |
| `BUILD_ONLY` | Optional | **Required** (use `AWS_SDK_BUILD_ONLY`) |
| System deps | curl, OpenSSL, zlib | None (CRT provides all) |
| CRT acquisition | Git submodules | FetchContent (automatic) |
| HTTP client | libcurl / WinHTTP | aws-c-http (CRT) |
| Crypto | OpenSSL / CommonCrypto | aws-c-cal (CRT) |
| Option prefix | Unprefixed | `AWS_SDK_` prefix |

## Before/After: Build Commands

**Legacy:**

```sh
mkdir build && cd build
cmake .. \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_ONLY="s3;dynamodb" \
  -DCMAKE_INSTALL_PREFIX=/opt/aws-sdk
cmake --build . --config=Release
cmake --install . --config=Release
```

**Modern:**

```sh
mkdir build && cd build
cmake .. \
  -DLEGACY_BUILD=OFF \
  -DAWS_SDK_BUILD_ONLY="s3;dynamodb" \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_INSTALL_PREFIX=/opt/aws-sdk
cmake --build . --config=Release
cmake --install . --config=Release
```

## Before/After: CMakeLists.txt Consumption

### FetchContent (Recommended)

```cmake
cmake_minimum_required(VERSION 3.14)
project(my_app)

include(FetchContent)
FetchContent_Declare(
  aws-sdk-cpp
  GIT_REPOSITORY https://github.com/aws/aws-sdk-cpp.git
  GIT_TAG        <release-tag>
)
set(LEGACY_BUILD OFF CACHE BOOL "")
set(AWS_SDK_BUILD_ONLY "s3" CACHE STRING "")
FetchContent_MakeAvailable(aws-sdk-cpp)

add_executable(my_app main.cpp)
target_link_libraries(my_app PRIVATE AWS::aws-cpp-sdk-s3 AWS::aws-cpp-sdk-core)
```

### find_package (Per-Service Targets)

```cmake
find_package(aws-cpp-sdk-s3 REQUIRED)
find_package(aws-cpp-sdk-core REQUIRED)

add_executable(my_app main.cpp)
target_link_libraries(my_app PRIVATE AWS::aws-cpp-sdk-s3 AWS::aws-cpp-sdk-core)
```

### Backward Compatibility Shim

The legacy `AWSSDK` package name still works but emits a deprecation warning:

```cmake
# Still works — prints a deprecation warning at configure time
find_package(AWSSDK REQUIRED COMPONENTS s3 dynamodb)
target_link_libraries(my_app PRIVATE ${AWSSDK_LIBRARIES})
```

This shim will be removed in 2.0.

## Option Mapping

| Legacy Option | Modern Equivalent |
|---------------|-------------------|
| `BUILD_ONLY` | `AWS_SDK_BUILD_ONLY` |
| `ENABLE_TESTING` | `AWS_SDK_ENABLE_TESTING` |
| `AWS_SDK_WARNINGS_ARE_ERRORS` | `AWS_SDK_WARNINGS_ARE_ERRORS` (unchanged) |
| `USE_CRT_HTTP_CLIENT` | `AWS_SDK_HTTP_CLIENT="crt"` |

## Deprecated Options

The following options are **silently ignored** in the modern build (no error, no effect):

- `FORCE_CURL`
- `USE_OPENSSL`
- `BUILD_DEPS`
- `USE_IXML_HTTP_REQUEST_2`
- `ENABLE_CURL_LOGGING`
- `ENABLE_ZLIB_REQUEST_COMPRESSION`

These are unnecessary because the modern build uses the CRT for HTTP, TLS, and compression.

## Offline / Air-Gapped Builds

For environments without internet access, several strategies are available:

### Pre-built CRT

```sh
cmake .. -DLEGACY_BUILD=OFF -DUSE_INSTALLED_CRT=ON \
  -DAWS_SDK_BUILD_ONLY="s3"
```

This skips FetchContent and links against a CRT already installed on the system.

### Pre-populated FetchContent Sources

```sh
cmake .. -DLEGACY_BUILD=OFF \
  -DFETCHCONTENT_FULLY_DISCONNECTED=ON \
  -DAWS_SDK_BUILD_ONLY="s3"
```

Requires that FetchContent source directories have been previously populated (e.g., from a prior connected build).

### Explicit Source Directory Override

```sh
cmake .. -DLEGACY_BUILD=OFF \
  -DFETCHCONTENT_SOURCE_DIR_AWS-CRT-CPP=/path/to/aws-crt-cpp \
  -DAWS_SDK_BUILD_ONLY="s3"
```

### Submodule Fallback

Clone with submodules and the build will use them instead of fetching:

```sh
git clone --recurse-submodules https://github.com/aws/aws-sdk-cpp.git
```

## Deprecation Timeline

| Version | Behavior |
|---------|----------|
| **1.11.x** | `LEGACY_BUILD=ON` is the default. Modern build available with `-DLEGACY_BUILD=OFF`. |
| **1.12.x** | `LEGACY_BUILD=OFF` becomes the default. Legacy build deprecated with warnings. |
| **2.0** | Legacy build removed entirely. |

## Migration Checklist

1. Verify your compiler supports C++14 and CMake is 3.14+.
2. Replace `-DBUILD_ONLY=` with `-DAWS_SDK_BUILD_ONLY=` (this option is now required).
3. Add `-DLEGACY_BUILD=OFF` to your CMake invocation.
4. Remove system dependency installation steps (curl, OpenSSL, zlib) from your build scripts/Dockerfiles.
5. Remove any git submodule init/update steps for CRT — FetchContent handles this automatically.
6. Update `target_link_libraries` to use `AWS::` namespaced targets.
7. Replace `find_package(AWSSDK COMPONENTS ...)` with per-service `find_package(aws-cpp-sdk-<service>)` calls.
8. Remove deprecated options (`FORCE_CURL`, `USE_OPENSSL`, `BUILD_DEPS`, etc.) from your CMake invocations.
9. If building offline, configure one of the air-gapped strategies above.
10. Run a full build and test cycle to verify the migration.
