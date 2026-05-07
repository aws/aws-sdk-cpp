# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# symbol_check.cmake - Post-build symbol leakage verification.
# Ensures no internal dependency symbols (gtest, tinyxml2, cjson) are exported.

include_guard(GLOBAL)

function(aws_sdk_add_symbol_check target)
    if(WIN32)
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND cmd /c "dumpbin /EXPORTS $<TARGET_FILE:${target}> | findstr /I \"gtest gmock tinyxml2 cJSON\" && exit 1 || exit 0"
            COMMENT "Verifying no forbidden symbols exported from ${target}"
            VERBATIM
        )
    elseif(APPLE)
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND sh -c "nm -gU $<TARGET_FILE:${target}> | grep -iE 'gtest|gmock|tinyxml2|cJSON' && exit 1 || exit 0"
            COMMENT "Verifying no forbidden symbols exported from ${target}"
            VERBATIM
        )
    elseif(UNIX)
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND sh -c "nm -gD $<TARGET_FILE:${target}> 2>/dev/null | grep -iE 'gtest|gmock|tinyxml2|cJSON' && exit 1 || exit 0"
            COMMENT "Verifying no forbidden symbols exported from ${target}"
            VERBATIM
        )
    endif()
endfunction()
