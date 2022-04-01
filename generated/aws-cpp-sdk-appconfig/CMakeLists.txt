add_project(aws-cpp-sdk-appconfig "C++ SDK for the AWS appconfig service" aws-cpp-sdk-core)

file(GLOB AWS_APPCONFIG_HEADERS
    "include/aws/appconfig/*.h"
)

file(GLOB AWS_APPCONFIG_MODEL_HEADERS
    "include/aws/appconfig/model/*.h"
)

file(GLOB AWS_APPCONFIG_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPCONFIG_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPCONFIG_UNIFIED_HEADERS
    ${AWS_APPCONFIG_HEADERS}
    ${AWS_APPCONFIG_MODEL_HEADERS}
)

file(GLOB APPCONFIG_UNITY_SRC
    ${AWS_APPCONFIG_SOURCE}
    ${AWS_APPCONFIG_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPCONFIG" APPCONFIG_UNITY_SRC)
endif()

file(GLOB APPCONFIG_SRC
    ${APPCONFIG_UNIFIED_HEADERS}
    ${APPCONFIG_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\appconfig" FILES ${AWS_APPCONFIG_HEADERS})
        source_group("Header Files\\aws\\appconfig\\model" FILES ${AWS_APPCONFIG_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPCONFIG_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPCONFIG_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPCONFIG_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPCONFIG_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPCONFIG_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPCONFIG_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appconfig)
install (FILES ${AWS_APPCONFIG_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appconfig/model)

do_packaging()


