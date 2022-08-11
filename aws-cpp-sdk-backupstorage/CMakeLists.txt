add_project(aws-cpp-sdk-backupstorage "C++ SDK for the AWS backupstorage service" aws-cpp-sdk-core)

file(GLOB AWS_BACKUPSTORAGE_HEADERS
    "include/aws/backupstorage/*.h"
)

file(GLOB AWS_BACKUPSTORAGE_MODEL_HEADERS
    "include/aws/backupstorage/model/*.h"
)

file(GLOB AWS_BACKUPSTORAGE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BACKUPSTORAGE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BACKUPSTORAGE_UNIFIED_HEADERS
    ${AWS_BACKUPSTORAGE_HEADERS}
    ${AWS_BACKUPSTORAGE_MODEL_HEADERS}
)

file(GLOB BACKUPSTORAGE_UNITY_SRC
    ${AWS_BACKUPSTORAGE_SOURCE}
    ${AWS_BACKUPSTORAGE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BACKUPSTORAGE" BACKUPSTORAGE_UNITY_SRC)
endif()

file(GLOB BACKUPSTORAGE_SRC
    ${BACKUPSTORAGE_UNIFIED_HEADERS}
    ${BACKUPSTORAGE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\backupstorage" FILES ${AWS_BACKUPSTORAGE_HEADERS})
        source_group("Header Files\\aws\\backupstorage\\model" FILES ${AWS_BACKUPSTORAGE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BACKUPSTORAGE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BACKUPSTORAGE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BACKUPSTORAGE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BACKUPSTORAGE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BACKUPSTORAGE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BACKUPSTORAGE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/backupstorage)
install (FILES ${AWS_BACKUPSTORAGE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/backupstorage/model)

do_packaging()


