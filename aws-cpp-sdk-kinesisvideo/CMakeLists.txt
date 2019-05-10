add_project(aws-cpp-sdk-kinesisvideo "C++ SDK for the AWS kinesisvideo service" aws-cpp-sdk-core)

file(GLOB AWS_KINESISVIDEO_HEADERS
    "include/aws/kinesisvideo/*.h"
)

file(GLOB AWS_KINESISVIDEO_MODEL_HEADERS
    "include/aws/kinesisvideo/model/*.h"
)

file(GLOB AWS_KINESISVIDEO_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KINESISVIDEO_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KINESISVIDEO_UNIFIED_HEADERS
    ${AWS_KINESISVIDEO_HEADERS}
    ${AWS_KINESISVIDEO_MODEL_HEADERS}
)

file(GLOB KINESISVIDEO_UNITY_SRC
    ${AWS_KINESISVIDEO_SOURCE}
    ${AWS_KINESISVIDEO_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KINESISVIDEO" KINESISVIDEO_UNITY_SRC)
endif()

file(GLOB KINESISVIDEO_SRC
    ${KINESISVIDEO_UNIFIED_HEADERS}
    ${KINESISVIDEO_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kinesisvideo" FILES ${AWS_KINESISVIDEO_HEADERS})
        source_group("Header Files\\aws\\kinesisvideo\\model" FILES ${AWS_KINESISVIDEO_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KINESISVIDEO_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KINESISVIDEO_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KINESISVIDEO_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KINESISVIDEO_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KINESISVIDEO_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KINESISVIDEO_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesisvideo)
install (FILES ${AWS_KINESISVIDEO_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesisvideo/model)

do_packaging()


