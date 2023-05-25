add_project(aws-cpp-sdk-glue "C++ SDK for the AWS glue service" aws-cpp-sdk-core)

file(GLOB AWS_GLUE_HEADERS
    "include/aws/glue/*.h"
)

file(GLOB AWS_GLUE_MODEL_HEADERS
    "include/aws/glue/model/*.h"
)

file(GLOB AWS_GLUE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GLUE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GLUE_UNIFIED_HEADERS
    ${AWS_GLUE_HEADERS}
    ${AWS_GLUE_MODEL_HEADERS}
)

file(GLOB GLUE_UNITY_SRC
    ${AWS_GLUE_SOURCE}
    ${AWS_GLUE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GLUE" GLUE_UNITY_SRC)
endif()

file(GLOB GLUE_SRC
    ${GLUE_UNIFIED_HEADERS}
    ${GLUE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\glue" FILES ${AWS_GLUE_HEADERS})
        source_group("Header Files\\aws\\glue\\model" FILES ${AWS_GLUE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GLUE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GLUE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GLUE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GLUE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GLUE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GLUE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/glue)
install (FILES ${AWS_GLUE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/glue/model)

do_packaging()


