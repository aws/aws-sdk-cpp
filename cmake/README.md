# Modern CMake Build Architecture

## Overview

The modern build path (`-DLEGACY_BUILD=OFF`) provides a clean, target-based build
using FetchContent for dependency management. No system-installed libraries
(curl, OpenSSL) are required; zlib is optional and fetched automatically.

## Architecture

```
CMakeLists.txt (top-level)
└── cmake/
    ├── aws_sdk_options.cmake        — All cache options (AWS_SDK_ prefix)
    ├── aws_sdk_platform.cmake       — Platform detection + external deps (curl, zlib)
    ├── aws_sdk_compiler.cmake       — Per-target compiler flags (GCC/Clang/MSVC)
    ├── fetch_dependencies.cmake     — CRT acquisition via FetchContent/submodule/find_package
    ├── fetch_test_dependencies.cmake— GoogleTest via FetchContent
    ├── aws_sdk_service_clients.cmake— Service discovery + BUILD_ONLY enforcement
    └── aws_sdk_packaging.cmake      — CPack source distribution
```

## Module Responsibilities

### aws_sdk_options.cmake
Defines all user-facing cache variables with the `AWS_SDK_` prefix. Includes a
deprecation shim mapping legacy `BUILD_ONLY` → `AWS_SDK_BUILD_ONLY`. Provides
`aws_sdk_resolve_http_client()` for validation and
`aws_sdk_apply_option_definitions(target)` for per-target compile definitions.

### aws_sdk_platform.cmake
Detects host OS (WINDOWS/APPLE/LINUX), resolves platform-specific system
libraries via `aws_sdk_get_platform_libs()`, finds external dependencies (curl
if selected, zlib via FetchContent or system), and applies platform compile
definitions per-target via `aws_sdk_apply_platform_definitions(target)`.

### aws_sdk_compiler.cmake
Sets C++ standard, warning flags, and RTTI/exceptions per-target via
`aws_sdk_set_compiler_options(target)`. Handles GCC/Clang and MSVC separately.
No global `CMAKE_CXX_FLAGS` mutations.

### fetch_dependencies.cmake
Acquires the AWS Common Runtime (aws-crt-cpp) with three strategies:
1. `USE_INSTALLED_CRT=ON` → `find_package(aws-crt-cpp)`
2. Existing `crt/aws-crt-cpp/` submodule → `add_subdirectory()`
3. Default → FetchContent download (pinned tag)

Saves/restores `BUILD_TESTING` to prevent CRT tests from building.

### fetch_test_dependencies.cmake
Acquires GoogleTest via FetchContent when `AWS_SDK_ENABLE_TESTING=ON`.

### aws_sdk_service_clients.cmake
Discovers available service clients by scanning `generated/src/aws-cpp-sdk-*`.
Requires `AWS_SDK_BUILD_ONLY` (or legacy `BUILD_ONLY`). Resolves inter-service
dependencies and creates targets via `aws_sdk_add_service_client()` with proper
ALIAS targets (`AWS::aws-cpp-sdk-<service>`).

### aws_sdk_packaging.cmake
Configures CPack for source archive generation (TGZ + ZIP).

## Key Differences from Legacy Build

| Aspect | Legacy | Modern |
|--------|--------|--------|
| Options | Unprefixed (`BUILD_ONLY`) | Namespaced (`AWS_SDK_BUILD_ONLY`) |
| Compile defs | Global `add_definitions()` | Per-target `target_compile_definitions()` |
| HTTP client | curl/WinHTTP/CRT | CRT default, curl/WinHTTP deprecated |
| C++ standard | C++11 | C++14 minimum |
| CMake minimum | 3.14 | 3.14 (FetchContent) |
| Dependencies | git submodule required | FetchContent (auto-download) |
| Targets | Plain names | ALIAS targets (`AWS::`) |
| Install | Custom find modules | Standard CMake package config |

## Usage

```sh
cmake -DLEGACY_BUILD=OFF \
      -DAWS_SDK_BUILD_ONLY="s3;dynamodb" \
      -DCMAKE_BUILD_TYPE=Release ..
cmake --build . --config=Release
cmake --install . --config=Release
```

Legacy scripts using `-DBUILD_ONLY=s3` continue to work with a deprecation warning.

## Consuming in Downstream Projects

### Via find_package (after install):
```cmake
find_package(aws-sdk-cpp REQUIRED)
target_link_libraries(my_app PRIVATE AWS::aws-cpp-sdk-s3 AWS::aws-cpp-sdk-core)
```

### Via FetchContent:
```cmake
include(FetchContent)
FetchContent_Declare(aws-sdk-cpp
  GIT_REPOSITORY https://github.com/aws/aws-sdk-cpp.git
  GIT_TAG <release-tag>)
set(LEGACY_BUILD OFF CACHE BOOL "")
set(AWS_SDK_BUILD_ONLY "s3" CACHE STRING "")
FetchContent_MakeAvailable(aws-sdk-cpp)
target_link_libraries(my_app PRIVATE AWS::aws-cpp-sdk-s3 AWS::aws-cpp-sdk-core)
```
