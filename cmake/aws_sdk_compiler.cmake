# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# aws_sdk_compiler.cmake - Compiler flags and warnings applied per-target.

include_guard(GLOBAL)

function(aws_sdk_set_compiler_options target)
    # C++ standard
    target_compile_features(${target} PUBLIC cxx_std_${AWS_SDK_CPP_STANDARD})
    set_target_properties(${target} PROPERTIES
        CXX_EXTENSIONS OFF
        CXX_STANDARD_REQUIRED ON
    )

    # Hide symbols by default — only explicitly exported symbols are visible
    set_target_properties(${target} PROPERTIES
        CXX_VISIBILITY_PRESET hidden
        VISIBILITY_INLINES_HIDDEN YES
    )

    if(MSVC)
        _aws_sdk_msvc_options(${target})
    else()
        _aws_sdk_gcc_clang_options(${target})
    endif()
endfunction()

# -- GCC / Clang --
function(_aws_sdk_gcc_clang_options target)
    target_compile_options(${target} PRIVATE
        -fno-exceptions
        -Wall -pedantic -Wextra
    )

    if(NOT BUILD_SHARED_LIBS)
        target_compile_options(${target} PRIVATE -fPIC)
    endif()

    if(NOT AWS_SDK_ENABLE_RTTI)
        target_compile_options(${target} PRIVATE -fno-rtti)
    endif()

    if(AWS_SDK_WARNINGS_ARE_ERRORS)
        target_compile_options(${target} PRIVATE -Werror)
    endif()

    # Suppress warnings in existing SDK source that are not bugs
    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        target_compile_options(${target} PRIVATE -Wno-unused-const-variable)
    endif()
endfunction()

# -- MSVC --
function(_aws_sdk_msvc_options target)
    if(POLICY CMP0091)
        cmake_policy(SET CMP0091 NEW)
    endif()

    target_compile_options(${target} PRIVATE
        /MP        # parallel compilation
        /bigobj    # large object files
        /utf-8     # source charset
        /W4        # warning level 4
    )

    if(AWS_SDK_WARNINGS_ARE_ERRORS)
        target_compile_options(${target} PRIVATE /WX)
    endif()

    if(NOT AWS_SDK_ENABLE_RTTI)
        target_compile_options(${target} PRIVATE /GR-)
    endif()

    # CRT linkage
    if(BUILD_SHARED_LIBS)
        set_property(TARGET ${target} PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreadedDLL$<$<CONFIG:Debug>:Debug>")
    else()
        set_property(TARGET ${target} PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    endif()
endfunction()
