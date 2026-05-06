# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# aws_sdk_platform.cmake - Platform detection and external dependency resolution.
# Consolidates resolve_platform.cmake + cmake/platform/*.cmake into one module.

include_guard(GLOBAL)
include(CheckCXXSourceCompiles)
include(CMakePushCheckState)

# -- Platform detection --
if(WIN32)
    set(AWS_SDK_PLATFORM "WINDOWS")
elseif(APPLE)
    set(AWS_SDK_PLATFORM "APPLE")
    set(CMAKE_MACOSX_RPATH TRUE)
    set(CMAKE_INSTALL_RPATH "@executable_path")
elseif(UNIX)
    set(AWS_SDK_PLATFORM "LINUX")
else()
    message(FATAL_ERROR "Unsupported target OS")
endif()

# Allow override via TARGET_ARCH for cross-compilation
if(TARGET_ARCH)
    string(TOUPPER "${TARGET_ARCH}" AWS_SDK_PLATFORM)
endif()

message(STATUS "AWS SDK target platform: ${AWS_SDK_PLATFORM}")

# -- Platform-specific system libraries --
function(aws_sdk_get_platform_libs out_var)
    if(AWS_SDK_PLATFORM STREQUAL "WINDOWS")
        set(${out_var} Userenv version ws2_32 PARENT_SCOPE)
    elseif(AWS_SDK_PLATFORM STREQUAL "LINUX")
        set(_libs pthread)
        # Check if libatomic is needed
        set(_atomic_test "
            #include <cstdint>
            #include <atomic>
            std::atomic<uintptr_t> x;
            std::atomic<uintmax_t> y;
            int main() { return x + y; }")
        cmake_push_check_state()
        list(APPEND CMAKE_REQUIRED_FLAGS "-std=c++${AWS_SDK_CPP_STANDARD}")
        check_cxx_source_compiles("${_atomic_test}" _HAS_ATOMICS)
        if(NOT _HAS_ATOMICS)
            set(CMAKE_REQUIRED_LIBRARIES atomic)
            check_cxx_source_compiles("${_atomic_test}" _HAS_ATOMICS_WITH_LIB)
            if(_HAS_ATOMICS_WITH_LIB)
                list(APPEND _libs atomic)
            endif()
        endif()
        cmake_pop_check_state()
        set(${out_var} ${_libs} PARENT_SCOPE)
    elseif(AWS_SDK_PLATFORM STREQUAL "APPLE")
        set(${out_var} pthread PARENT_SCOPE)
    else()
        set(${out_var} "" PARENT_SCOPE)
    endif()
endfunction()

# -- Find external dependencies based on options --
function(aws_sdk_find_external_dependencies)
    # HTTP client
    if(AWS_SDK_HTTP_CLIENT STREQUAL "curl")
        find_package(CURL REQUIRED)
        # Promote to global scope for core CMakeLists to use
        set(AWS_SDK_CURL_TARGET CURL::libcurl CACHE INTERNAL "")
        message(STATUS "HTTP client: curl")
    elseif(AWS_SDK_HTTP_CLIENT STREQUAL "crt")
        add_compile_definitions(AWS_SDK_USE_CRT_HTTP HAVE_H2_CLIENT)
        message(STATUS "HTTP client: CRT")
    elseif(AWS_SDK_HTTP_CLIENT STREQUAL "none")
        message(STATUS "HTTP client: none (user must inject)")
    endif()

    # Zlib (optional — fetched via FetchContent to eliminate system dependency)
    if(AWS_SDK_ENABLE_ZLIB_COMPRESSION)
        include(FetchContent)
        option(AWS_SDK_USE_INSTALLED_ZLIB "Use system zlib via find_package instead of FetchContent" OFF)
        if(AWS_SDK_USE_INSTALLED_ZLIB)
            find_package(ZLIB QUIET)
            if(NOT ZLIB_FOUND)
                set(AWS_SDK_ENABLE_ZLIB_COMPRESSION OFF CACHE BOOL "" FORCE)
                set(AWS_SDK_HAS_ZLIB FALSE CACHE INTERNAL "")
                message(STATUS "Zlib: not found, compression disabled")
                return()
            endif()
        else()
            set(ZLIB_VERSION "v1.3.1" CACHE STRING "zlib version tag to fetch")
            message(STATUS "Fetching zlib ${ZLIB_VERSION} via FetchContent...")
            FetchContent_Declare(
                zlib
                GIT_REPOSITORY https://github.com/madler/zlib.git
                GIT_TAG        ${ZLIB_VERSION}
                GIT_SHALLOW    TRUE
            )
            # Prevent zlib from installing or building tests
            set(ZLIB_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
            set(SKIP_INSTALL_ALL ON CACHE BOOL "" FORCE)
            FetchContent_MakeAvailable(zlib)
            # Create ZLIB::ZLIB alias target for compatibility
            if(NOT TARGET ZLIB::ZLIB)
                add_library(ZLIB::ZLIB ALIAS zlibstatic)
            endif()
        endif()
        set(AWS_SDK_HAS_ZLIB TRUE CACHE INTERNAL "")
        message(STATUS "Zlib: enabled")
    endif()
endfunction()

# -- Platform compile definitions for a target --
function(aws_sdk_apply_platform_definitions target)
    target_compile_definitions(${target} PRIVATE "PLATFORM_${AWS_SDK_PLATFORM}")
    target_compile_definitions(${target} PUBLIC "NON_LEGACY_BUILD")

    if(AWS_SDK_PLATFORM STREQUAL "WINDOWS")
        target_compile_definitions(${target} PUBLIC USE_WINDOWS_DLL_SEMANTICS)
        if(BUILD_SHARED_LIBS)
            target_compile_definitions(${target} PUBLIC USE_IMPORT_EXPORT=1)
            target_compile_definitions(${target} PRIVATE AWS_CORE_EXPORTS=1 SMITHY_EXPORTS=1)
        endif()
    elseif(BUILD_SHARED_LIBS)
        target_compile_definitions(${target} PUBLIC USE_IMPORT_EXPORT=1)
        target_compile_definitions(${target} PRIVATE SMITHY_EXPORTS=1)
    endif()

    if(AWS_SDK_HTTP_CLIENT STREQUAL "curl")
        target_compile_definitions(${target} PRIVATE ENABLE_CURL_CLIENT)
    elseif(AWS_SDK_HTTP_CLIENT STREQUAL "crt")
        target_compile_definitions(${target} PRIVATE AWS_SDK_USE_CRT_HTTP HAVE_H2_CLIENT)
    elseif(AWS_SDK_HTTP_CLIENT STREQUAL "winhttp")
        target_compile_definitions(${target} PRIVATE ENABLE_WINDOWS_CLIENT)
    endif()

    if(AWS_SDK_CRYPTO STREQUAL "none")
        target_compile_definitions(${target} PRIVATE NO_ENCRYPTION)
    endif()

    if(AWS_SDK_HAS_ZLIB)
        target_compile_definitions(${target} PRIVATE ENABLED_ZLIB_REQUEST_COMPRESSION ENABLED_REQUEST_COMPRESSION)
    endif()
endfunction()
