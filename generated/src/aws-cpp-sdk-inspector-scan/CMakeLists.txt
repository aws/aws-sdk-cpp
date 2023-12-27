add_project(aws-cpp-sdk-inspector-scan "C++ SDK for the AWS inspector-scan service" aws-cpp-sdk-core)

file(GLOB AWS_INSPECTOR-SCAN_HEADERS
    "include/aws/inspector-scan/*.h"
)

file(GLOB AWS_INSPECTOR-SCAN_MODEL_HEADERS
    "include/aws/inspector-scan/model/*.h"
)

file(GLOB AWS_INSPECTOR-SCAN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_INSPECTOR-SCAN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB INSPECTOR-SCAN_UNIFIED_HEADERS
    ${AWS_INSPECTOR-SCAN_HEADERS}
    ${AWS_INSPECTOR-SCAN_MODEL_HEADERS}
)

file(GLOB INSPECTOR-SCAN_UNITY_SRC
    ${AWS_INSPECTOR-SCAN_SOURCE}
    ${AWS_INSPECTOR-SCAN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("INSPECTOR-SCAN" INSPECTOR-SCAN_UNITY_SRC)
endif()

file(GLOB INSPECTOR-SCAN_SRC
    ${INSPECTOR-SCAN_UNIFIED_HEADERS}
    ${INSPECTOR-SCAN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\inspector-scan" FILES ${AWS_INSPECTOR-SCAN_HEADERS})
        source_group("Header Files\\aws\\inspector-scan\\model" FILES ${AWS_INSPECTOR-SCAN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_INSPECTOR-SCAN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_INSPECTOR-SCAN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(INSPECTOR-SCAN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${INSPECTOR-SCAN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_INSPECTORSCAN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_INSPECTOR-SCAN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/inspector-scan)
install (FILES ${AWS_INSPECTOR-SCAN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/inspector-scan/model)

do_packaging()


