add_project(aws-cpp-sdk-migration-hub-refactor-spaces "C++ SDK for the AWS migration-hub-refactor-spaces service" aws-cpp-sdk-core)

file(GLOB AWS_MIGRATION-HUB-REFACTOR-SPACES_HEADERS
    "include/aws/migration-hub-refactor-spaces/*.h"
)

file(GLOB AWS_MIGRATION-HUB-REFACTOR-SPACES_MODEL_HEADERS
    "include/aws/migration-hub-refactor-spaces/model/*.h"
)

file(GLOB AWS_MIGRATION-HUB-REFACTOR-SPACES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MIGRATION-HUB-REFACTOR-SPACES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MIGRATION-HUB-REFACTOR-SPACES_UNIFIED_HEADERS
    ${AWS_MIGRATION-HUB-REFACTOR-SPACES_HEADERS}
    ${AWS_MIGRATION-HUB-REFACTOR-SPACES_MODEL_HEADERS}
)

file(GLOB MIGRATION-HUB-REFACTOR-SPACES_UNITY_SRC
    ${AWS_MIGRATION-HUB-REFACTOR-SPACES_SOURCE}
    ${AWS_MIGRATION-HUB-REFACTOR-SPACES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MIGRATION-HUB-REFACTOR-SPACES" MIGRATION-HUB-REFACTOR-SPACES_UNITY_SRC)
endif()

file(GLOB MIGRATION-HUB-REFACTOR-SPACES_SRC
    ${MIGRATION-HUB-REFACTOR-SPACES_UNIFIED_HEADERS}
    ${MIGRATION-HUB-REFACTOR-SPACES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\migration-hub-refactor-spaces" FILES ${AWS_MIGRATION-HUB-REFACTOR-SPACES_HEADERS})
        source_group("Header Files\\aws\\migration-hub-refactor-spaces\\model" FILES ${AWS_MIGRATION-HUB-REFACTOR-SPACES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MIGRATION-HUB-REFACTOR-SPACES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MIGRATION-HUB-REFACTOR-SPACES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MIGRATION-HUB-REFACTOR-SPACES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MIGRATION-HUB-REFACTOR-SPACES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MIGRATIONHUBREFACTORSPACES_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MIGRATION-HUB-REFACTOR-SPACES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/migration-hub-refactor-spaces)
install (FILES ${AWS_MIGRATION-HUB-REFACTOR-SPACES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/migration-hub-refactor-spaces/model)

do_packaging()


