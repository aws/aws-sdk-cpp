add_project(aws-cpp-sdk-drs "C++ SDK for the AWS drs service" aws-cpp-sdk-core)

file(GLOB AWS_DRS_HEADERS
    "include/aws/drs/*.h"
)

file(GLOB AWS_DRS_MODEL_HEADERS
    "include/aws/drs/model/*.h"
)

file(GLOB AWS_DRS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DRS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DRS_UNIFIED_HEADERS
    ${AWS_DRS_HEADERS}
    ${AWS_DRS_MODEL_HEADERS}
)

file(GLOB DRS_UNITY_SRC
    ${AWS_DRS_SOURCE}
    ${AWS_DRS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DRS" DRS_UNITY_SRC)
endif()

file(GLOB DRS_SRC
    ${DRS_UNIFIED_HEADERS}
    ${DRS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\drs" FILES ${AWS_DRS_HEADERS})
        source_group("Header Files\\aws\\drs\\model" FILES ${AWS_DRS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DRS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DRS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DRS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DRS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DRS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DRS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/drs)
install (FILES ${AWS_DRS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/drs/model)

do_packaging()


