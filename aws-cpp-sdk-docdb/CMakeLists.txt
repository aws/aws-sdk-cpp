add_project(aws-cpp-sdk-docdb "C++ SDK for the AWS docdb service" aws-cpp-sdk-core)

file(GLOB AWS_DOCDB_HEADERS
    "include/aws/docdb/*.h"
)

file(GLOB AWS_DOCDB_MODEL_HEADERS
    "include/aws/docdb/model/*.h"
)

file(GLOB AWS_DOCDB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DOCDB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DOCDB_UNIFIED_HEADERS
    ${AWS_DOCDB_HEADERS}
    ${AWS_DOCDB_MODEL_HEADERS}
)

file(GLOB DOCDB_UNITY_SRC
    ${AWS_DOCDB_SOURCE}
    ${AWS_DOCDB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DOCDB" DOCDB_UNITY_SRC)
endif()

file(GLOB DOCDB_SRC
    ${DOCDB_UNIFIED_HEADERS}
    ${DOCDB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\docdb" FILES ${AWS_DOCDB_HEADERS})
        source_group("Header Files\\aws\\docdb\\model" FILES ${AWS_DOCDB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DOCDB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DOCDB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DOCDB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DOCDB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DOCDB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DOCDB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/docdb)
install (FILES ${AWS_DOCDB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/docdb/model)

do_packaging()


