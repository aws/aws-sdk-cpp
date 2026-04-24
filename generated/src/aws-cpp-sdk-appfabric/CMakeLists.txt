add_project(aws-cpp-sdk-appfabric "C++ SDK for the AWS appfabric service" aws-cpp-sdk-core)

file(GLOB AWS_APPFABRIC_HEADERS
    "include/aws/appfabric/*.h"
)

file(GLOB AWS_APPFABRIC_MODEL_HEADERS
    "include/aws/appfabric/model/*.h"
)

file(GLOB AWS_APPFABRIC_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPFABRIC_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPFABRIC_UNIFIED_HEADERS
    ${AWS_APPFABRIC_HEADERS}
    ${AWS_APPFABRIC_MODEL_HEADERS}
)

file(GLOB APPFABRIC_UNITY_SRC
    ${AWS_APPFABRIC_SOURCE}
    ${AWS_APPFABRIC_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPFABRIC" APPFABRIC_UNITY_SRC)
endif()

file(GLOB APPFABRIC_SRC
    ${APPFABRIC_UNIFIED_HEADERS}
    ${APPFABRIC_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\appfabric" FILES ${AWS_APPFABRIC_HEADERS})
        source_group("Header Files\\aws\\appfabric\\model" FILES ${AWS_APPFABRIC_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPFABRIC_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPFABRIC_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPFABRIC_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPFABRIC_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPFABRIC_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPFABRIC_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appfabric)
install (FILES ${AWS_APPFABRIC_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appfabric/model)

do_packaging()


