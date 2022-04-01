add_project(aws-cpp-sdk-worklink "C++ SDK for the AWS worklink service" aws-cpp-sdk-core)

file(GLOB AWS_WORKLINK_HEADERS
    "include/aws/worklink/*.h"
)

file(GLOB AWS_WORKLINK_MODEL_HEADERS
    "include/aws/worklink/model/*.h"
)

file(GLOB AWS_WORKLINK_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WORKLINK_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WORKLINK_UNIFIED_HEADERS
    ${AWS_WORKLINK_HEADERS}
    ${AWS_WORKLINK_MODEL_HEADERS}
)

file(GLOB WORKLINK_UNITY_SRC
    ${AWS_WORKLINK_SOURCE}
    ${AWS_WORKLINK_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WORKLINK" WORKLINK_UNITY_SRC)
endif()

file(GLOB WORKLINK_SRC
    ${WORKLINK_UNIFIED_HEADERS}
    ${WORKLINK_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\worklink" FILES ${AWS_WORKLINK_HEADERS})
        source_group("Header Files\\aws\\worklink\\model" FILES ${AWS_WORKLINK_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WORKLINK_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WORKLINK_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WORKLINK_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WORKLINK_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WORKLINK_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WORKLINK_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/worklink)
install (FILES ${AWS_WORKLINK_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/worklink/model)

do_packaging()


