add_project(aws-cpp-sdk-sagemaker-edge "C++ SDK for the AWS sagemaker-edge service" aws-cpp-sdk-core)

file(GLOB AWS_SAGEMAKER-EDGE_HEADERS
    "include/aws/sagemaker-edge/*.h"
)

file(GLOB AWS_SAGEMAKER-EDGE_MODEL_HEADERS
    "include/aws/sagemaker-edge/model/*.h"
)

file(GLOB AWS_SAGEMAKER-EDGE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SAGEMAKER-EDGE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SAGEMAKER-EDGE_UNIFIED_HEADERS
    ${AWS_SAGEMAKER-EDGE_HEADERS}
    ${AWS_SAGEMAKER-EDGE_MODEL_HEADERS}
)

file(GLOB SAGEMAKER-EDGE_UNITY_SRC
    ${AWS_SAGEMAKER-EDGE_SOURCE}
    ${AWS_SAGEMAKER-EDGE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SAGEMAKER-EDGE" SAGEMAKER-EDGE_UNITY_SRC)
endif()

file(GLOB SAGEMAKER-EDGE_SRC
    ${SAGEMAKER-EDGE_UNIFIED_HEADERS}
    ${SAGEMAKER-EDGE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sagemaker-edge" FILES ${AWS_SAGEMAKER-EDGE_HEADERS})
        source_group("Header Files\\aws\\sagemaker-edge\\model" FILES ${AWS_SAGEMAKER-EDGE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SAGEMAKER-EDGE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SAGEMAKER-EDGE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SAGEMAKER-EDGE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SAGEMAKER-EDGE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SAGEMAKEREDGEMANAGER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SAGEMAKER-EDGE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemaker-edge)
install (FILES ${AWS_SAGEMAKER-EDGE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemaker-edge/model)

do_packaging()


