add_project(aws-cpp-sdk-backupsearch "C++ SDK for the AWS backupsearch service" aws-cpp-sdk-core)

file(GLOB AWS_BACKUPSEARCH_HEADERS
    "include/aws/backupsearch/*.h"
)

file(GLOB AWS_BACKUPSEARCH_MODEL_HEADERS
    "include/aws/backupsearch/model/*.h"
)

file(GLOB AWS_BACKUPSEARCH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BACKUPSEARCH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BACKUPSEARCH_UNIFIED_HEADERS
    ${AWS_BACKUPSEARCH_HEADERS}
    ${AWS_BACKUPSEARCH_MODEL_HEADERS}
)

file(GLOB BACKUPSEARCH_UNITY_SRC
    ${AWS_BACKUPSEARCH_SOURCE}
    ${AWS_BACKUPSEARCH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BACKUPSEARCH" BACKUPSEARCH_UNITY_SRC)
endif()

file(GLOB BACKUPSEARCH_SRC
    ${BACKUPSEARCH_UNIFIED_HEADERS}
    ${BACKUPSEARCH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\backupsearch" FILES ${AWS_BACKUPSEARCH_HEADERS})
        source_group("Header Files\\aws\\backupsearch\\model" FILES ${AWS_BACKUPSEARCH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BACKUPSEARCH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BACKUPSEARCH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BACKUPSEARCH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BACKUPSEARCH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BACKUPSEARCH_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BACKUPSEARCH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/backupsearch)
install (FILES ${AWS_BACKUPSEARCH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/backupsearch/model)

do_packaging()


