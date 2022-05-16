include_guard()

function(obtain_project_version resultVar)
    find_package(Git QUIET)
    if (GIT_FOUND)
        execute_process(COMMAND ${GIT_EXECUTABLE} --git-dir=${CMAKE_CURRENT_SOURCE_DIR}/.git describe --abbrev=0 --tags
                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                OUTPUT_VARIABLE VERSION_STRING
                OUTPUT_STRIP_TRAILING_WHITESPACE)
    endif ()

    if (NOT VERSION_STRING)
        # extract it from the existing generated header file
        file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/src/aws-cpp-sdk-core/include/aws/core/VersionConfig.h" __SDK_VERSION_LINE LIMIT_COUNT 1 REGEX "AWS_SDK_VERSION_STRING.*[0-9]+\\.[0-9]+\\.[0-9]+")
        string(REGEX MATCH "([0-9]+\\.[0-9]+\\.[0-9]+)" VERSION_STRING "${__SDK_VERSION_LINE}")
    endif ()

    set(${resultVar} ${VERSION_STRING} PARENT_SCOPE)
    message(STATUS "SDK project version: ${VERSION_STRING}")
endfunction(obtain_project_version)