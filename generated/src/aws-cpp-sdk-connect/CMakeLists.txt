add_project(aws-cpp-sdk-connect "C++ SDK for the AWS connect service" aws-cpp-sdk-core)

file(GLOB AWS_CONNECT_HEADERS
    "include/aws/connect/*.h"
)

file(GLOB AWS_CONNECT_MODEL_HEADERS
    "include/aws/connect/model/*.h"
)

file(GLOB AWS_CONNECT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CONNECT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CONNECT_UNIFIED_HEADERS
    ${AWS_CONNECT_HEADERS}
    ${AWS_CONNECT_MODEL_HEADERS}
)

file(GLOB CONNECT_UNITY_SRC
    ${AWS_CONNECT_SOURCE}
    ${AWS_CONNECT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CONNECT" CONNECT_UNITY_SRC)
endif()

file(GLOB CONNECT_SRC
    ${CONNECT_UNIFIED_HEADERS}
    ${CONNECT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\connect" FILES ${AWS_CONNECT_HEADERS})
        source_group("Header Files\\aws\\connect\\model" FILES ${AWS_CONNECT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CONNECT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CONNECT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CONNECT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CONNECT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CONNECT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CONNECT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/connect)
install (FILES ${AWS_CONNECT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/connect/model)

do_packaging()


