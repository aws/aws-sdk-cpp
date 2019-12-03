add_project(aws-cpp-sdk-sagemaker-a2i-runtime "C++ SDK for the AWS sagemaker-a2i-runtime service" aws-cpp-sdk-core)

file(GLOB AWS_SAGEMAKER-A2I-RUNTIME_HEADERS
    "include/aws/sagemaker-a2i-runtime/*.h"
)

file(GLOB AWS_SAGEMAKER-A2I-RUNTIME_MODEL_HEADERS
    "include/aws/sagemaker-a2i-runtime/model/*.h"
)

file(GLOB AWS_SAGEMAKER-A2I-RUNTIME_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SAGEMAKER-A2I-RUNTIME_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SAGEMAKER-A2I-RUNTIME_UNIFIED_HEADERS
    ${AWS_SAGEMAKER-A2I-RUNTIME_HEADERS}
    ${AWS_SAGEMAKER-A2I-RUNTIME_MODEL_HEADERS}
)

file(GLOB SAGEMAKER-A2I-RUNTIME_UNITY_SRC
    ${AWS_SAGEMAKER-A2I-RUNTIME_SOURCE}
    ${AWS_SAGEMAKER-A2I-RUNTIME_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SAGEMAKER-A2I-RUNTIME" SAGEMAKER-A2I-RUNTIME_UNITY_SRC)
endif()

file(GLOB SAGEMAKER-A2I-RUNTIME_SRC
    ${SAGEMAKER-A2I-RUNTIME_UNIFIED_HEADERS}
    ${SAGEMAKER-A2I-RUNTIME_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sagemaker-a2i-runtime" FILES ${AWS_SAGEMAKER-A2I-RUNTIME_HEADERS})
        source_group("Header Files\\aws\\sagemaker-a2i-runtime\\model" FILES ${AWS_SAGEMAKER-A2I-RUNTIME_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SAGEMAKER-A2I-RUNTIME_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SAGEMAKER-A2I-RUNTIME_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SAGEMAKER-A2I-RUNTIME_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SAGEMAKER-A2I-RUNTIME_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_AUGMENTEDAIRUNTIME_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SAGEMAKER-A2I-RUNTIME_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemaker-a2i-runtime)
install (FILES ${AWS_SAGEMAKER-A2I-RUNTIME_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemaker-a2i-runtime/model)

do_packaging()


