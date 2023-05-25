add_project(aws-cpp-sdk-discovery "C++ SDK for the AWS discovery service" aws-cpp-sdk-core)

file(GLOB AWS_DISCOVERY_HEADERS
    "include/aws/discovery/*.h"
)

file(GLOB AWS_DISCOVERY_MODEL_HEADERS
    "include/aws/discovery/model/*.h"
)

file(GLOB AWS_DISCOVERY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DISCOVERY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DISCOVERY_UNIFIED_HEADERS
    ${AWS_DISCOVERY_HEADERS}
    ${AWS_DISCOVERY_MODEL_HEADERS}
)

file(GLOB DISCOVERY_UNITY_SRC
    ${AWS_DISCOVERY_SOURCE}
    ${AWS_DISCOVERY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DISCOVERY" DISCOVERY_UNITY_SRC)
endif()

file(GLOB DISCOVERY_SRC
    ${DISCOVERY_UNIFIED_HEADERS}
    ${DISCOVERY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\discovery" FILES ${AWS_DISCOVERY_HEADERS})
        source_group("Header Files\\aws\\discovery\\model" FILES ${AWS_DISCOVERY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DISCOVERY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DISCOVERY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DISCOVERY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DISCOVERY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPLICATIONDISCOVERYSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DISCOVERY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/discovery)
install (FILES ${AWS_DISCOVERY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/discovery/model)

do_packaging()


