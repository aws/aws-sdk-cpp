add_project(aws-cpp-sdk-bcm-data-exports "C++ SDK for the AWS bcm-data-exports service" aws-cpp-sdk-core)

file(GLOB AWS_BCM-DATA-EXPORTS_HEADERS
    "include/aws/bcm-data-exports/*.h"
)

file(GLOB AWS_BCM-DATA-EXPORTS_MODEL_HEADERS
    "include/aws/bcm-data-exports/model/*.h"
)

file(GLOB AWS_BCM-DATA-EXPORTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BCM-DATA-EXPORTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BCM-DATA-EXPORTS_UNIFIED_HEADERS
    ${AWS_BCM-DATA-EXPORTS_HEADERS}
    ${AWS_BCM-DATA-EXPORTS_MODEL_HEADERS}
)

file(GLOB BCM-DATA-EXPORTS_UNITY_SRC
    ${AWS_BCM-DATA-EXPORTS_SOURCE}
    ${AWS_BCM-DATA-EXPORTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BCM-DATA-EXPORTS" BCM-DATA-EXPORTS_UNITY_SRC)
endif()

file(GLOB BCM-DATA-EXPORTS_SRC
    ${BCM-DATA-EXPORTS_UNIFIED_HEADERS}
    ${BCM-DATA-EXPORTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\bcm-data-exports" FILES ${AWS_BCM-DATA-EXPORTS_HEADERS})
        source_group("Header Files\\aws\\bcm-data-exports\\model" FILES ${AWS_BCM-DATA-EXPORTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BCM-DATA-EXPORTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BCM-DATA-EXPORTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BCM-DATA-EXPORTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BCM-DATA-EXPORTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BCMDATAEXPORTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BCM-DATA-EXPORTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bcm-data-exports)
install (FILES ${AWS_BCM-DATA-EXPORTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bcm-data-exports/model)

do_packaging()


