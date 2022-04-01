add_project(aws-cpp-sdk-importexport "C++ SDK for the AWS importexport service" aws-cpp-sdk-core)

file(GLOB AWS_IMPORTEXPORT_HEADERS
    "include/aws/importexport/*.h"
)

file(GLOB AWS_IMPORTEXPORT_MODEL_HEADERS
    "include/aws/importexport/model/*.h"
)

file(GLOB AWS_IMPORTEXPORT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IMPORTEXPORT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IMPORTEXPORT_UNIFIED_HEADERS
    ${AWS_IMPORTEXPORT_HEADERS}
    ${AWS_IMPORTEXPORT_MODEL_HEADERS}
)

file(GLOB IMPORTEXPORT_UNITY_SRC
    ${AWS_IMPORTEXPORT_SOURCE}
    ${AWS_IMPORTEXPORT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IMPORTEXPORT" IMPORTEXPORT_UNITY_SRC)
endif()

file(GLOB IMPORTEXPORT_SRC
    ${IMPORTEXPORT_UNIFIED_HEADERS}
    ${IMPORTEXPORT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\importexport" FILES ${AWS_IMPORTEXPORT_HEADERS})
        source_group("Header Files\\aws\\importexport\\model" FILES ${AWS_IMPORTEXPORT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IMPORTEXPORT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IMPORTEXPORT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IMPORTEXPORT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IMPORTEXPORT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IMPORTEXPORT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IMPORTEXPORT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/importexport)
install (FILES ${AWS_IMPORTEXPORT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/importexport/model)

do_packaging()


