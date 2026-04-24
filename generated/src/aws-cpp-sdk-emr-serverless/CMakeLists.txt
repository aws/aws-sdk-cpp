add_project(aws-cpp-sdk-emr-serverless "C++ SDK for the AWS emr-serverless service" aws-cpp-sdk-core)

file(GLOB AWS_EMR-SERVERLESS_HEADERS
    "include/aws/emr-serverless/*.h"
)

file(GLOB AWS_EMR-SERVERLESS_MODEL_HEADERS
    "include/aws/emr-serverless/model/*.h"
)

file(GLOB AWS_EMR-SERVERLESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EMR-SERVERLESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EMR-SERVERLESS_UNIFIED_HEADERS
    ${AWS_EMR-SERVERLESS_HEADERS}
    ${AWS_EMR-SERVERLESS_MODEL_HEADERS}
)

file(GLOB EMR-SERVERLESS_UNITY_SRC
    ${AWS_EMR-SERVERLESS_SOURCE}
    ${AWS_EMR-SERVERLESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EMR-SERVERLESS" EMR-SERVERLESS_UNITY_SRC)
endif()

file(GLOB EMR-SERVERLESS_SRC
    ${EMR-SERVERLESS_UNIFIED_HEADERS}
    ${EMR-SERVERLESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\emr-serverless" FILES ${AWS_EMR-SERVERLESS_HEADERS})
        source_group("Header Files\\aws\\emr-serverless\\model" FILES ${AWS_EMR-SERVERLESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EMR-SERVERLESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EMR-SERVERLESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EMR-SERVERLESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EMR-SERVERLESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EMRSERVERLESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EMR-SERVERLESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/emr-serverless)
install (FILES ${AWS_EMR-SERVERLESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/emr-serverless/model)

do_packaging()


