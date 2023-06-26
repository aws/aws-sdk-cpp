add_project(aws-cpp-sdk-docdb-elastic "C++ SDK for the AWS docdb-elastic service" aws-cpp-sdk-core)

file(GLOB AWS_DOCDB-ELASTIC_HEADERS
    "include/aws/docdb-elastic/*.h"
)

file(GLOB AWS_DOCDB-ELASTIC_MODEL_HEADERS
    "include/aws/docdb-elastic/model/*.h"
)

file(GLOB AWS_DOCDB-ELASTIC_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DOCDB-ELASTIC_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DOCDB-ELASTIC_UNIFIED_HEADERS
    ${AWS_DOCDB-ELASTIC_HEADERS}
    ${AWS_DOCDB-ELASTIC_MODEL_HEADERS}
)

file(GLOB DOCDB-ELASTIC_UNITY_SRC
    ${AWS_DOCDB-ELASTIC_SOURCE}
    ${AWS_DOCDB-ELASTIC_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DOCDB-ELASTIC" DOCDB-ELASTIC_UNITY_SRC)
endif()

file(GLOB DOCDB-ELASTIC_SRC
    ${DOCDB-ELASTIC_UNIFIED_HEADERS}
    ${DOCDB-ELASTIC_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\docdb-elastic" FILES ${AWS_DOCDB-ELASTIC_HEADERS})
        source_group("Header Files\\aws\\docdb-elastic\\model" FILES ${AWS_DOCDB-ELASTIC_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DOCDB-ELASTIC_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DOCDB-ELASTIC_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DOCDB-ELASTIC_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DOCDB-ELASTIC_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DOCDBELASTIC_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DOCDB-ELASTIC_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/docdb-elastic)
install (FILES ${AWS_DOCDB-ELASTIC_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/docdb-elastic/model)

do_packaging()


