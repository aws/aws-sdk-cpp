# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# aws_sdk_options.cmake - Centralized option definitions for the modern (non-legacy) build.
# All options use the AWS_SDK_ prefix per CMake community conventions.

include_guard(GLOBAL)

# -- Build type options --
option(BUILD_SHARED_LIBS "Build shared libraries" ON)
option(AWS_SDK_ENABLE_UNITY_BUILD "Combine translation units for faster builds and smaller binaries" ON)

# -- Feature toggles --
option(AWS_SDK_ENABLE_TESTING "Build tests" OFF)
option(AWS_SDK_ENABLE_RTTI "Enable RTTI" ON)
option(AWS_SDK_WARNINGS_ARE_ERRORS "Treat compiler warnings as errors" ON)

# -- HTTP client selection --
# Design doc: CRT HTTP client is the default in the non-legacy path.
# Curl and WinHTTP are deprecated and will be removed in a future release.
set(AWS_SDK_HTTP_CLIENT "crt" CACHE STRING "HTTP client backend: crt, curl, winhttp, ixmlhttprequest2, none")
set_property(CACHE AWS_SDK_HTTP_CLIENT PROPERTY STRINGS crt curl winhttp ixmlhttprequest2 none)

# -- Encryption --
set(AWS_SDK_CRYPTO "crt" CACHE STRING "Crypto backend: crt, none")
set_property(CACHE AWS_SDK_CRYPTO PROPERTY STRINGS crt none)

# -- Compression --
option(AWS_SDK_ENABLE_ZLIB_COMPRESSION "Enable gzip/deflate request compression" ON)

# -- TLS --
option(AWS_SDK_ENFORCE_TLS_V1_2 "Enforce TLS 1.2 minimum" ON)
option(AWS_SDK_ENFORCE_TLS_V1_3 "Enforce TLS 1.3 minimum" OFF)

# -- Service selection --
set(AWS_SDK_BUILD_ONLY "" CACHE STRING "Semicolon-delimited list of services to build (empty = all)")

# Deprecation shim: map legacy BUILD_ONLY to AWS_SDK_BUILD_ONLY
if(DEFINED BUILD_ONLY AND NOT AWS_SDK_BUILD_ONLY)
    message(DEPRECATION "BUILD_ONLY is deprecated. Use -DAWS_SDK_BUILD_ONLY=\"${BUILD_ONLY}\" instead.")
    set(AWS_SDK_BUILD_ONLY "${BUILD_ONLY}" CACHE STRING "" FORCE)
endif()

# -- C++ standard --
# Design doc: minimum C++14 (aligns with Abseil, gtest, Azure C++ SDK)
set(AWS_SDK_CPP_STANDARD "14" CACHE STRING "C++ standard version (minimum 14)")

if(AWS_SDK_CPP_STANDARD LESS 14)
    message(FATAL_ERROR
        "The modern build requires C++14 minimum. "
        "AWS_SDK_CPP_STANDARD is set to '${AWS_SDK_CPP_STANDARD}'. "
        "Remove the override or set -DAWS_SDK_CPP_STANDARD=14 or higher.")
endif()

# -- Memory management --
option(AWS_SDK_CUSTOM_MEMORY_MANAGEMENT
    "Enable custom memory management (default ON for shared, OFF for static)" OFF)

# -- Misc --
option(AWS_SDK_DISABLE_IMDSV1 "Disable IMDSv1 internal client calls" OFF)
set(AWS_SDK_USER_AGENT "" CACHE STRING "Custom user agent string extension")

# -- Validate HTTP client selection --
function(aws_sdk_resolve_http_client)
    set(_valid_clients crt curl winhttp ixmlhttprequest2 none)
    if(NOT AWS_SDK_HTTP_CLIENT IN_LIST _valid_clients)
        message(FATAL_ERROR "Invalid AWS_SDK_HTTP_CLIENT: ${AWS_SDK_HTTP_CLIENT}. Must be one of: ${_valid_clients}")
    endif()
    message(STATUS "HTTP client: ${AWS_SDK_HTTP_CLIENT}")
endfunction()

# -- Apply compile definitions from options --
function(aws_sdk_apply_option_definitions target)
    if(AWS_SDK_DISABLE_IMDSV1)
        target_compile_definitions(${target} PRIVATE DISABLE_IMDSV1)
    endif()
    if(AWS_SDK_ENFORCE_TLS_V1_2)
        target_compile_definitions(${target} PRIVATE ENFORCE_TLS_V1_2)
    endif()
    if(AWS_SDK_ENFORCE_TLS_V1_3)
        target_compile_definitions(${target} PRIVATE ENFORCE_TLS_V1_3)
    endif()
    if(NOT AWS_SDK_USER_AGENT STREQUAL "")
        target_compile_definitions(${target} PRIVATE "AWS_USER_AGENT_CUSTOMIZATION=${AWS_SDK_USER_AGENT}")
    endif()
endfunction()
