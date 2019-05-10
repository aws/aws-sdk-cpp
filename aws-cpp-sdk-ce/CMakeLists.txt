add_project(aws-cpp-sdk-ce "C++ SDK for the AWS ce service" aws-cpp-sdk-core)

file(GLOB AWS_CE_HEADERS
    "include/aws/ce/*.h"
)

file(GLOB AWS_CE_MODEL_HEADERS
    "include/aws/ce/model/*.h"
)

file(GLOB AWS_CE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CE_UNIFIED_HEADERS
    ${AWS_CE_HEADERS}
    ${AWS_CE_MODEL_HEADERS}
)

file(GLOB CE_UNITY_SRC
    ${AWS_CE_SOURCE}
    ${AWS_CE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CE" CE_UNITY_SRC)
endif()

file(GLOB CE_SRC
    ${CE_UNIFIED_HEADERS}
    ${CE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ce" FILES ${AWS_CE_HEADERS})
        source_group("Header Files\\aws\\ce\\model" FILES ${AWS_CE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_COSTEXPLORER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ce)
install (FILES ${AWS_CE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ce/model)

do_packaging()


