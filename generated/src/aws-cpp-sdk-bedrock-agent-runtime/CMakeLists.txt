add_project(aws-cpp-sdk-bedrock-agent-runtime "C++ SDK for the AWS bedrock-agent-runtime service" aws-cpp-sdk-core)

file(GLOB AWS_BEDROCK-AGENT-RUNTIME_HEADERS
    "include/aws/bedrock-agent-runtime/*.h"
)

file(GLOB AWS_BEDROCK-AGENT-RUNTIME_MODEL_HEADERS
    "include/aws/bedrock-agent-runtime/model/*.h"
)

file(GLOB AWS_BEDROCK-AGENT-RUNTIME_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BEDROCK-AGENT-RUNTIME_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BEDROCK-AGENT-RUNTIME_UNIFIED_HEADERS
    ${AWS_BEDROCK-AGENT-RUNTIME_HEADERS}
    ${AWS_BEDROCK-AGENT-RUNTIME_MODEL_HEADERS}
)

file(GLOB BEDROCK-AGENT-RUNTIME_UNITY_SRC
    ${AWS_BEDROCK-AGENT-RUNTIME_SOURCE}
    ${AWS_BEDROCK-AGENT-RUNTIME_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BEDROCK-AGENT-RUNTIME" BEDROCK-AGENT-RUNTIME_UNITY_SRC)
endif()

file(GLOB BEDROCK-AGENT-RUNTIME_SRC
    ${BEDROCK-AGENT-RUNTIME_UNIFIED_HEADERS}
    ${BEDROCK-AGENT-RUNTIME_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\bedrock-agent-runtime" FILES ${AWS_BEDROCK-AGENT-RUNTIME_HEADERS})
        source_group("Header Files\\aws\\bedrock-agent-runtime\\model" FILES ${AWS_BEDROCK-AGENT-RUNTIME_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BEDROCK-AGENT-RUNTIME_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BEDROCK-AGENT-RUNTIME_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BEDROCK-AGENT-RUNTIME_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BEDROCK-AGENT-RUNTIME_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BEDROCKAGENTRUNTIME_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BEDROCK-AGENT-RUNTIME_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bedrock-agent-runtime)
install (FILES ${AWS_BEDROCK-AGENT-RUNTIME_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bedrock-agent-runtime/model)

do_packaging()


