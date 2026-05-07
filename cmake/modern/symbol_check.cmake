# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# symbol_check.cmake - Post-build symbol leakage verification.
# Ensures no internal dependency symbols (gtest, tinyxml2, cjson) are exported.

include_guard(GLOBAL)

# Adds a CTest test that verifies no forbidden symbols are exported.
# Uses a test (not POST_BUILD) to avoid the "TARGET not in this directory" limitation.
function(aws_sdk_add_symbol_check target)
    if(NOT BUILD_TESTING AND NOT AWS_SDK_ENABLE_TESTING)
        # Symbol check runs as a test; skip if testing disabled.
        # Create a standalone custom target instead.
    endif()

    if(WIN32)
        add_test(NAME ${target}_symbol_check
            COMMAND cmd /c "dumpbin /EXPORTS $<TARGET_FILE:${target}> | findstr /I \"gtest gmock tinyxml2 cJSON\" && exit 1 || exit 0"
        )
    elseif(APPLE)
        add_test(NAME ${target}_symbol_check
            COMMAND sh -c "nm -gU $<TARGET_FILE:${target}> | grep -iE 'gtest|gmock|tinyxml2|cJSON' && exit 1 || exit 0"
        )
    elseif(UNIX)
        add_test(NAME ${target}_symbol_check
            COMMAND sh -c "nm -gD $<TARGET_FILE:${target}> 2>/dev/null | grep -iE 'gtest|gmock|tinyxml2|cJSON' && exit 1 || exit 0"
        )
    endif()
endfunction()
