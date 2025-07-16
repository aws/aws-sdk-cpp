add_project(aws-cpp-sdk-bedrock-agentcore "C++ SDK for the AWS bedrock-agentcore service" aws-cpp-sdk-core)

file(GLOB AWS_BEDROCK-AGENTCORE_HEADERS
    "include/aws/bedrock-agentcore/*.h"
)

file(GLOB AWS_BEDROCK-AGENTCORE_MODEL_HEADERS
    "include/aws/bedrock-agentcore/model/*.h"
)

file(GLOB AWS_BEDROCK-AGENTCORE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BEDROCK-AGENTCORE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BEDROCK-AGENTCORE_UNIFIED_HEADERS
    ${AWS_BEDROCK-AGENTCORE_HEADERS}
    ${AWS_BEDROCK-AGENTCORE_MODEL_HEADERS}
)

file(GLOB BEDROCK-AGENTCORE_UNITY_SRC
    ${AWS_BEDROCK-AGENTCORE_SOURCE}
    ${AWS_BEDROCK-AGENTCORE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BEDROCK-AGENTCORE" BEDROCK-AGENTCORE_UNITY_SRC)
endif()

file(GLOB BEDROCK-AGENTCORE_SRC
    ${BEDROCK-AGENTCORE_UNIFIED_HEADERS}
    ${BEDROCK-AGENTCORE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\bedrock-agentcore" FILES ${AWS_BEDROCK-AGENTCORE_HEADERS})
        source_group("Header Files\\aws\\bedrock-agentcore\\model" FILES ${AWS_BEDROCK-AGENTCORE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BEDROCK-AGENTCORE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BEDROCK-AGENTCORE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BEDROCK-AGENTCORE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BEDROCK-AGENTCORE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BEDROCKAGENTCORE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BEDROCK-AGENTCORE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bedrock-agentcore)
install (FILES ${AWS_BEDROCK-AGENTCORE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bedrock-agentcore/model)

do_packaging()


