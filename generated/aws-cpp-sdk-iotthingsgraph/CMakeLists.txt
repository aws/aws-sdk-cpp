add_project(aws-cpp-sdk-iotthingsgraph "C++ SDK for the AWS iotthingsgraph service" aws-cpp-sdk-core)

file(GLOB AWS_IOTTHINGSGRAPH_HEADERS
    "include/aws/iotthingsgraph/*.h"
)

file(GLOB AWS_IOTTHINGSGRAPH_MODEL_HEADERS
    "include/aws/iotthingsgraph/model/*.h"
)

file(GLOB AWS_IOTTHINGSGRAPH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTTHINGSGRAPH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTTHINGSGRAPH_UNIFIED_HEADERS
    ${AWS_IOTTHINGSGRAPH_HEADERS}
    ${AWS_IOTTHINGSGRAPH_MODEL_HEADERS}
)

file(GLOB IOTTHINGSGRAPH_UNITY_SRC
    ${AWS_IOTTHINGSGRAPH_SOURCE}
    ${AWS_IOTTHINGSGRAPH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTTHINGSGRAPH" IOTTHINGSGRAPH_UNITY_SRC)
endif()

file(GLOB IOTTHINGSGRAPH_SRC
    ${IOTTHINGSGRAPH_UNIFIED_HEADERS}
    ${IOTTHINGSGRAPH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotthingsgraph" FILES ${AWS_IOTTHINGSGRAPH_HEADERS})
        source_group("Header Files\\aws\\iotthingsgraph\\model" FILES ${AWS_IOTTHINGSGRAPH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTTHINGSGRAPH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTTHINGSGRAPH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTTHINGSGRAPH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTTHINGSGRAPH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTTHINGSGRAPH_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTTHINGSGRAPH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotthingsgraph)
install (FILES ${AWS_IOTTHINGSGRAPH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotthingsgraph/model)

do_packaging()


