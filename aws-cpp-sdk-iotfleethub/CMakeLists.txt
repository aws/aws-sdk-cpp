add_project(aws-cpp-sdk-iotfleethub "C++ SDK for the AWS iotfleethub service" aws-cpp-sdk-core)

file(GLOB AWS_IOTFLEETHUB_HEADERS
    "include/aws/iotfleethub/*.h"
)

file(GLOB AWS_IOTFLEETHUB_MODEL_HEADERS
    "include/aws/iotfleethub/model/*.h"
)

file(GLOB AWS_IOTFLEETHUB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTFLEETHUB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTFLEETHUB_UNIFIED_HEADERS
    ${AWS_IOTFLEETHUB_HEADERS}
    ${AWS_IOTFLEETHUB_MODEL_HEADERS}
)

file(GLOB IOTFLEETHUB_UNITY_SRC
    ${AWS_IOTFLEETHUB_SOURCE}
    ${AWS_IOTFLEETHUB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTFLEETHUB" IOTFLEETHUB_UNITY_SRC)
endif()

file(GLOB IOTFLEETHUB_SRC
    ${IOTFLEETHUB_UNIFIED_HEADERS}
    ${IOTFLEETHUB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotfleethub" FILES ${AWS_IOTFLEETHUB_HEADERS})
        source_group("Header Files\\aws\\iotfleethub\\model" FILES ${AWS_IOTFLEETHUB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTFLEETHUB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTFLEETHUB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTFLEETHUB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTFLEETHUB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTFLEETHUB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTFLEETHUB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotfleethub)
install (FILES ${AWS_IOTFLEETHUB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotfleethub/model)

do_packaging()


