add_project(aws-cpp-sdk-chime-sdk-messaging "C++ SDK for the AWS chime-sdk-messaging service" aws-cpp-sdk-core)

file(GLOB AWS_CHIME-SDK-MESSAGING_HEADERS
    "include/aws/chime-sdk-messaging/*.h"
)

file(GLOB AWS_CHIME-SDK-MESSAGING_MODEL_HEADERS
    "include/aws/chime-sdk-messaging/model/*.h"
)

file(GLOB AWS_CHIME-SDK-MESSAGING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CHIME-SDK-MESSAGING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CHIME-SDK-MESSAGING_UNIFIED_HEADERS
    ${AWS_CHIME-SDK-MESSAGING_HEADERS}
    ${AWS_CHIME-SDK-MESSAGING_MODEL_HEADERS}
)

file(GLOB CHIME-SDK-MESSAGING_UNITY_SRC
    ${AWS_CHIME-SDK-MESSAGING_SOURCE}
    ${AWS_CHIME-SDK-MESSAGING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CHIME-SDK-MESSAGING" CHIME-SDK-MESSAGING_UNITY_SRC)
endif()

file(GLOB CHIME-SDK-MESSAGING_SRC
    ${CHIME-SDK-MESSAGING_UNIFIED_HEADERS}
    ${CHIME-SDK-MESSAGING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\chime-sdk-messaging" FILES ${AWS_CHIME-SDK-MESSAGING_HEADERS})
        source_group("Header Files\\aws\\chime-sdk-messaging\\model" FILES ${AWS_CHIME-SDK-MESSAGING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CHIME-SDK-MESSAGING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CHIME-SDK-MESSAGING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CHIME-SDK-MESSAGING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CHIME-SDK-MESSAGING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CHIMESDKMESSAGING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CHIME-SDK-MESSAGING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/chime-sdk-messaging)
install (FILES ${AWS_CHIME-SDK-MESSAGING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/chime-sdk-messaging/model)

do_packaging()


