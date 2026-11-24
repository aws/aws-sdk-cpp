add_project(aws-cpp-sdk-agent-discovery "C++ SDK for Agent Discovery" aws-cpp-sdk-core)

file(GLOB AWS_AGENT-DISCOVERY_HEADERS
    "include/aws/agent-discovery/*.h"
)

file(GLOB AWS_AGENT-DISCOVERY_MODEL_HEADERS
    "include/aws/agent-discovery/model/*.h"
)

file(GLOB AWS_AGENT-DISCOVERY_INTERNAL_HEADERS
    "include/aws/agent-discovery/internal/*.h"
)

file(GLOB AWS_AGENT-DISCOVERY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AGENT-DISCOVERY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AGENT-DISCOVERY_UNIFIED_HEADERS
    ${AWS_AGENT-DISCOVERY_HEADERS}
    ${AWS_AGENT-DISCOVERY_INTERNAL_HEADERS}
    ${AWS_AGENT-DISCOVERY_MODEL_HEADERS}
)

file(GLOB AGENT-DISCOVERY_UNITY_SRC
    ${AWS_AGENT-DISCOVERY_SOURCE}
    ${AWS_AGENT-DISCOVERY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AGENT-DISCOVERY" AGENT-DISCOVERY_UNITY_SRC)
endif()

file(GLOB AGENT-DISCOVERY_SRC
    ${AGENT-DISCOVERY_UNIFIED_HEADERS}
    ${AGENT-DISCOVERY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\agent-discovery" FILES ${AWS_AGENT-DISCOVERY_HEADERS})
        source_group("Header Files\\aws\\agent-discovery\\internal" FILES ${AWS_AGENT-DISCOVERY_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\agent-discovery\\model" FILES ${AWS_AGENT-DISCOVERY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AGENT-DISCOVERY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AGENT-DISCOVERY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AGENT-DISCOVERY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${AGENT-DISCOVERY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_AGENTDISCOVERY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_AGENT-DISCOVERY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/agent-discovery)
install (FILES ${AWS_AGENT-DISCOVERY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/agent-discovery/model)

do_packaging()


