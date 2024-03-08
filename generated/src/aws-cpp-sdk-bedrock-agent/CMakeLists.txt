add_project(aws-cpp-sdk-bedrock-agent "C++ SDK for the AWS bedrock-agent service" aws-cpp-sdk-core)

file(GLOB AWS_BEDROCK-AGENT_HEADERS
    "include/aws/bedrock-agent/*.h"
)

file(GLOB AWS_BEDROCK-AGENT_MODEL_HEADERS
    "include/aws/bedrock-agent/model/*.h"
)

file(GLOB AWS_BEDROCK-AGENT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BEDROCK-AGENT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BEDROCK-AGENT_UNIFIED_HEADERS
    ${AWS_BEDROCK-AGENT_HEADERS}
    ${AWS_BEDROCK-AGENT_MODEL_HEADERS}
)

file(GLOB BEDROCK-AGENT_UNITY_SRC
    ${AWS_BEDROCK-AGENT_SOURCE}
    ${AWS_BEDROCK-AGENT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BEDROCK-AGENT" BEDROCK-AGENT_UNITY_SRC)
endif()

file(GLOB BEDROCK-AGENT_SRC
    ${BEDROCK-AGENT_UNIFIED_HEADERS}
    ${BEDROCK-AGENT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\bedrock-agent" FILES ${AWS_BEDROCK-AGENT_HEADERS})
        source_group("Header Files\\aws\\bedrock-agent\\model" FILES ${AWS_BEDROCK-AGENT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BEDROCK-AGENT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BEDROCK-AGENT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BEDROCK-AGENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BEDROCK-AGENT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BEDROCKAGENT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BEDROCK-AGENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bedrock-agent)
install (FILES ${AWS_BEDROCK-AGENT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bedrock-agent/model)

do_packaging()


