add_project(aws-cpp-sdk-controlcatalog "C++ SDK for the AWS controlcatalog service" aws-cpp-sdk-core)

file(GLOB AWS_CONTROLCATALOG_HEADERS
    "include/aws/controlcatalog/*.h"
)

file(GLOB AWS_CONTROLCATALOG_MODEL_HEADERS
    "include/aws/controlcatalog/model/*.h"
)

file(GLOB AWS_CONTROLCATALOG_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CONTROLCATALOG_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CONTROLCATALOG_UNIFIED_HEADERS
    ${AWS_CONTROLCATALOG_HEADERS}
    ${AWS_CONTROLCATALOG_MODEL_HEADERS}
)

file(GLOB CONTROLCATALOG_UNITY_SRC
    ${AWS_CONTROLCATALOG_SOURCE}
    ${AWS_CONTROLCATALOG_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CONTROLCATALOG" CONTROLCATALOG_UNITY_SRC)
endif()

file(GLOB CONTROLCATALOG_SRC
    ${CONTROLCATALOG_UNIFIED_HEADERS}
    ${CONTROLCATALOG_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\controlcatalog" FILES ${AWS_CONTROLCATALOG_HEADERS})
        source_group("Header Files\\aws\\controlcatalog\\model" FILES ${AWS_CONTROLCATALOG_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CONTROLCATALOG_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CONTROLCATALOG_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CONTROLCATALOG_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CONTROLCATALOG_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CONTROLCATALOG_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CONTROLCATALOG_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/controlcatalog)
install (FILES ${AWS_CONTROLCATALOG_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/controlcatalog/model)

do_packaging()


