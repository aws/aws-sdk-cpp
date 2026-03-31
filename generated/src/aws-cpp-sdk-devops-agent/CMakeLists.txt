add_project(aws-cpp-sdk-devops-agent "C++ SDK for the AWS devops-agent service" aws-cpp-sdk-core)

file(GLOB AWS_DEVOPS-AGENT_HEADERS
    "include/aws/devops-agent/*.h"
)

file(GLOB AWS_DEVOPS-AGENT_MODEL_HEADERS
    "include/aws/devops-agent/model/*.h"
)

file(GLOB AWS_DEVOPS-AGENT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DEVOPS-AGENT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DEVOPS-AGENT_UNIFIED_HEADERS
    ${AWS_DEVOPS-AGENT_HEADERS}
    ${AWS_DEVOPS-AGENT_MODEL_HEADERS}
)

file(GLOB DEVOPS-AGENT_UNITY_SRC
    ${AWS_DEVOPS-AGENT_SOURCE}
    ${AWS_DEVOPS-AGENT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DEVOPS-AGENT" DEVOPS-AGENT_UNITY_SRC)
endif()

file(GLOB DEVOPS-AGENT_SRC
    ${DEVOPS-AGENT_UNIFIED_HEADERS}
    ${DEVOPS-AGENT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\devops-agent" FILES ${AWS_DEVOPS-AGENT_HEADERS})
        source_group("Header Files\\aws\\devops-agent\\model" FILES ${AWS_DEVOPS-AGENT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DEVOPS-AGENT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DEVOPS-AGENT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DEVOPS-AGENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DEVOPS-AGENT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DEVOPSAGENT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DEVOPS-AGENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/devops-agent)
install (FILES ${AWS_DEVOPS-AGENT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/devops-agent/model)

do_packaging()


