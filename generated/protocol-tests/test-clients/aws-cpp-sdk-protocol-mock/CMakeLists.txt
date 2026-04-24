add_project(aws-cpp-sdk-protocol-mock "C++ SDK for the AWS protocol-mock service" aws-cpp-sdk-core)

file(GLOB AWS_PROTOCOL-MOCK_HEADERS
    "include/aws/protocol-mock/*.h"
)

file(GLOB AWS_PROTOCOL-MOCK_MODEL_HEADERS
    "include/aws/protocol-mock/model/*.h"
)

file(GLOB AWS_PROTOCOL-MOCK_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PROTOCOL-MOCK_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PROTOCOL-MOCK_UNIFIED_HEADERS
    ${AWS_PROTOCOL-MOCK_HEADERS}
    ${AWS_PROTOCOL-MOCK_MODEL_HEADERS}
)

file(GLOB PROTOCOL-MOCK_UNITY_SRC
    ${AWS_PROTOCOL-MOCK_SOURCE}
    ${AWS_PROTOCOL-MOCK_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PROTOCOL-MOCK" PROTOCOL-MOCK_UNITY_SRC)
endif()

file(GLOB PROTOCOL-MOCK_SRC
    ${PROTOCOL-MOCK_UNIFIED_HEADERS}
    ${PROTOCOL-MOCK_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\protocol-mock" FILES ${AWS_PROTOCOL-MOCK_HEADERS})
        source_group("Header Files\\aws\\protocol-mock\\model" FILES ${AWS_PROTOCOL-MOCK_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PROTOCOL-MOCK_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PROTOCOL-MOCK_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PROTOCOL-MOCK_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PROTOCOL-MOCK_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PROTOCOLMOCK_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PROTOCOL-MOCK_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/protocol-mock)
install (FILES ${AWS_PROTOCOL-MOCK_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/protocol-mock/model)

do_packaging()


