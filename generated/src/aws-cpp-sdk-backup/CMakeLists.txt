add_project(aws-cpp-sdk-backup "C++ SDK for the AWS backup service" aws-cpp-sdk-core)

file(GLOB AWS_BACKUP_HEADERS
    "include/aws/backup/*.h"
)

file(GLOB AWS_BACKUP_MODEL_HEADERS
    "include/aws/backup/model/*.h"
)

file(GLOB AWS_BACKUP_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BACKUP_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BACKUP_UNIFIED_HEADERS
    ${AWS_BACKUP_HEADERS}
    ${AWS_BACKUP_MODEL_HEADERS}
)

file(GLOB BACKUP_UNITY_SRC
    ${AWS_BACKUP_SOURCE}
    ${AWS_BACKUP_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BACKUP" BACKUP_UNITY_SRC)
endif()

file(GLOB BACKUP_SRC
    ${BACKUP_UNIFIED_HEADERS}
    ${BACKUP_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\backup" FILES ${AWS_BACKUP_HEADERS})
        source_group("Header Files\\aws\\backup\\model" FILES ${AWS_BACKUP_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BACKUP_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BACKUP_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BACKUP_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BACKUP_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BACKUP_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BACKUP_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/backup)
install (FILES ${AWS_BACKUP_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/backup/model)

do_packaging()


