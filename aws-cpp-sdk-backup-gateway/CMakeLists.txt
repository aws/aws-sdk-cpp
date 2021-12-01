add_project(aws-cpp-sdk-backup-gateway "C++ SDK for the AWS backup-gateway service" aws-cpp-sdk-core)

file(GLOB AWS_BACKUP-GATEWAY_HEADERS
    "include/aws/backup-gateway/*.h"
)

file(GLOB AWS_BACKUP-GATEWAY_MODEL_HEADERS
    "include/aws/backup-gateway/model/*.h"
)

file(GLOB AWS_BACKUP-GATEWAY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BACKUP-GATEWAY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BACKUP-GATEWAY_UNIFIED_HEADERS
    ${AWS_BACKUP-GATEWAY_HEADERS}
    ${AWS_BACKUP-GATEWAY_MODEL_HEADERS}
)

file(GLOB BACKUP-GATEWAY_UNITY_SRC
    ${AWS_BACKUP-GATEWAY_SOURCE}
    ${AWS_BACKUP-GATEWAY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BACKUP-GATEWAY" BACKUP-GATEWAY_UNITY_SRC)
endif()

file(GLOB BACKUP-GATEWAY_SRC
    ${BACKUP-GATEWAY_UNIFIED_HEADERS}
    ${BACKUP-GATEWAY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\backup-gateway" FILES ${AWS_BACKUP-GATEWAY_HEADERS})
        source_group("Header Files\\aws\\backup-gateway\\model" FILES ${AWS_BACKUP-GATEWAY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BACKUP-GATEWAY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BACKUP-GATEWAY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BACKUP-GATEWAY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BACKUP-GATEWAY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BACKUPGATEWAY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BACKUP-GATEWAY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/backup-gateway)
install (FILES ${AWS_BACKUP-GATEWAY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/backup-gateway/model)

do_packaging()


