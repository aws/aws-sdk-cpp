add_project(aws-cpp-sdk-kinesis-video-archived-media "C++ SDK for the AWS kinesis-video-archived-media service" aws-cpp-sdk-core)

file(GLOB AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_HEADERS
    "include/aws/kinesis-video-archived-media/*.h"
)

file(GLOB AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_MODEL_HEADERS
    "include/aws/kinesis-video-archived-media/model/*.h"
)

file(GLOB AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KINESIS-VIDEO-ARCHIVED-MEDIA_UNIFIED_HEADERS
    ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_HEADERS}
    ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_MODEL_HEADERS}
)

file(GLOB KINESIS-VIDEO-ARCHIVED-MEDIA_UNITY_SRC
    ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_SOURCE}
    ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KINESIS-VIDEO-ARCHIVED-MEDIA" KINESIS-VIDEO-ARCHIVED-MEDIA_UNITY_SRC)
endif()

file(GLOB KINESIS-VIDEO-ARCHIVED-MEDIA_SRC
    ${KINESIS-VIDEO-ARCHIVED-MEDIA_UNIFIED_HEADERS}
    ${KINESIS-VIDEO-ARCHIVED-MEDIA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kinesis-video-archived-media" FILES ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_HEADERS})
        source_group("Header Files\\aws\\kinesis-video-archived-media\\model" FILES ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KINESIS-VIDEO-ARCHIVED-MEDIA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KINESIS-VIDEO-ARCHIVED-MEDIA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KINESISVIDEOARCHIVEDMEDIA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesis-video-archived-media)
install (FILES ${AWS_KINESIS-VIDEO-ARCHIVED-MEDIA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesis-video-archived-media/model)

do_packaging()


