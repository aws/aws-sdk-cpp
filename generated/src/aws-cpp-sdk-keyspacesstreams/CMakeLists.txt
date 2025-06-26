add_project(aws-cpp-sdk-keyspacesstreams "C++ SDK for the AWS keyspacesstreams service" aws-cpp-sdk-core)

file(GLOB AWS_KEYSPACESSTREAMS_HEADERS
    "include/aws/keyspacesstreams/*.h"
)

file(GLOB AWS_KEYSPACESSTREAMS_MODEL_HEADERS
    "include/aws/keyspacesstreams/model/*.h"
)

file(GLOB AWS_KEYSPACESSTREAMS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KEYSPACESSTREAMS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KEYSPACESSTREAMS_UNIFIED_HEADERS
    ${AWS_KEYSPACESSTREAMS_HEADERS}
    ${AWS_KEYSPACESSTREAMS_MODEL_HEADERS}
)

file(GLOB KEYSPACESSTREAMS_UNITY_SRC
    ${AWS_KEYSPACESSTREAMS_SOURCE}
    ${AWS_KEYSPACESSTREAMS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KEYSPACESSTREAMS" KEYSPACESSTREAMS_UNITY_SRC)
endif()

file(GLOB KEYSPACESSTREAMS_SRC
    ${KEYSPACESSTREAMS_UNIFIED_HEADERS}
    ${KEYSPACESSTREAMS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\keyspacesstreams" FILES ${AWS_KEYSPACESSTREAMS_HEADERS})
        source_group("Header Files\\aws\\keyspacesstreams\\model" FILES ${AWS_KEYSPACESSTREAMS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KEYSPACESSTREAMS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KEYSPACESSTREAMS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KEYSPACESSTREAMS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KEYSPACESSTREAMS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KEYSPACESSTREAMS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KEYSPACESSTREAMS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/keyspacesstreams)
install (FILES ${AWS_KEYSPACESSTREAMS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/keyspacesstreams/model)

do_packaging()


