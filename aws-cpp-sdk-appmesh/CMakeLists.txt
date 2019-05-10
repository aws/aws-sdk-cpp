add_project(aws-cpp-sdk-appmesh "C++ SDK for the AWS appmesh service" aws-cpp-sdk-core)

file(GLOB AWS_APPMESH_HEADERS
    "include/aws/appmesh/*.h"
)

file(GLOB AWS_APPMESH_MODEL_HEADERS
    "include/aws/appmesh/model/*.h"
)

file(GLOB AWS_APPMESH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPMESH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPMESH_UNIFIED_HEADERS
    ${AWS_APPMESH_HEADERS}
    ${AWS_APPMESH_MODEL_HEADERS}
)

file(GLOB APPMESH_UNITY_SRC
    ${AWS_APPMESH_SOURCE}
    ${AWS_APPMESH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPMESH" APPMESH_UNITY_SRC)
endif()

file(GLOB APPMESH_SRC
    ${APPMESH_UNIFIED_HEADERS}
    ${APPMESH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\appmesh" FILES ${AWS_APPMESH_HEADERS})
        source_group("Header Files\\aws\\appmesh\\model" FILES ${AWS_APPMESH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPMESH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPMESH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPMESH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPMESH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPMESH_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPMESH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appmesh)
install (FILES ${AWS_APPMESH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appmesh/model)

do_packaging()


