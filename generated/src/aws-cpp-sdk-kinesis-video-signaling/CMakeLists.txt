add_project(aws-cpp-sdk-kinesis-video-signaling "C++ SDK for the AWS kinesis-video-signaling service" aws-cpp-sdk-core)

file(GLOB AWS_KINESIS-VIDEO-SIGNALING_HEADERS
    "include/aws/kinesis-video-signaling/*.h"
)

file(GLOB AWS_KINESIS-VIDEO-SIGNALING_MODEL_HEADERS
    "include/aws/kinesis-video-signaling/model/*.h"
)

file(GLOB AWS_KINESIS-VIDEO-SIGNALING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KINESIS-VIDEO-SIGNALING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KINESIS-VIDEO-SIGNALING_UNIFIED_HEADERS
    ${AWS_KINESIS-VIDEO-SIGNALING_HEADERS}
    ${AWS_KINESIS-VIDEO-SIGNALING_MODEL_HEADERS}
)

file(GLOB KINESIS-VIDEO-SIGNALING_UNITY_SRC
    ${AWS_KINESIS-VIDEO-SIGNALING_SOURCE}
    ${AWS_KINESIS-VIDEO-SIGNALING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KINESIS-VIDEO-SIGNALING" KINESIS-VIDEO-SIGNALING_UNITY_SRC)
endif()

file(GLOB KINESIS-VIDEO-SIGNALING_SRC
    ${KINESIS-VIDEO-SIGNALING_UNIFIED_HEADERS}
    ${KINESIS-VIDEO-SIGNALING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kinesis-video-signaling" FILES ${AWS_KINESIS-VIDEO-SIGNALING_HEADERS})
        source_group("Header Files\\aws\\kinesis-video-signaling\\model" FILES ${AWS_KINESIS-VIDEO-SIGNALING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KINESIS-VIDEO-SIGNALING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KINESIS-VIDEO-SIGNALING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KINESIS-VIDEO-SIGNALING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KINESIS-VIDEO-SIGNALING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KINESISVIDEOSIGNALINGCHANNELS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KINESIS-VIDEO-SIGNALING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesis-video-signaling)
install (FILES ${AWS_KINESIS-VIDEO-SIGNALING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesis-video-signaling/model)

do_packaging()


