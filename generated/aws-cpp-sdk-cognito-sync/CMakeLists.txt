add_project(aws-cpp-sdk-cognito-sync "C++ SDK for the AWS cognito-sync service" aws-cpp-sdk-core)

file(GLOB AWS_COGNITO-SYNC_HEADERS
    "include/aws/cognito-sync/*.h"
)

file(GLOB AWS_COGNITO-SYNC_MODEL_HEADERS
    "include/aws/cognito-sync/model/*.h"
)

file(GLOB AWS_COGNITO-SYNC_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_COGNITO-SYNC_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB COGNITO-SYNC_UNIFIED_HEADERS
    ${AWS_COGNITO-SYNC_HEADERS}
    ${AWS_COGNITO-SYNC_MODEL_HEADERS}
)

file(GLOB COGNITO-SYNC_UNITY_SRC
    ${AWS_COGNITO-SYNC_SOURCE}
    ${AWS_COGNITO-SYNC_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("COGNITO-SYNC" COGNITO-SYNC_UNITY_SRC)
endif()

file(GLOB COGNITO-SYNC_SRC
    ${COGNITO-SYNC_UNIFIED_HEADERS}
    ${COGNITO-SYNC_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cognito-sync" FILES ${AWS_COGNITO-SYNC_HEADERS})
        source_group("Header Files\\aws\\cognito-sync\\model" FILES ${AWS_COGNITO-SYNC_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_COGNITO-SYNC_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_COGNITO-SYNC_MODEL_SOURCE})
    endif(MSVC)
endif()

set(COGNITO-SYNC_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${COGNITO-SYNC_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_COGNITOSYNC_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_COGNITO-SYNC_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cognito-sync)
install (FILES ${AWS_COGNITO-SYNC_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cognito-sync/model)

do_packaging()


