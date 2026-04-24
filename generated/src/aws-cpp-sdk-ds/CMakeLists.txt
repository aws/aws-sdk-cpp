add_project(aws-cpp-sdk-ds "C++ SDK for the AWS ds service" aws-cpp-sdk-core)

file(GLOB AWS_DS_HEADERS
    "include/aws/ds/*.h"
)

file(GLOB AWS_DS_MODEL_HEADERS
    "include/aws/ds/model/*.h"
)

file(GLOB AWS_DS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DS_UNIFIED_HEADERS
    ${AWS_DS_HEADERS}
    ${AWS_DS_MODEL_HEADERS}
)

file(GLOB DS_UNITY_SRC
    ${AWS_DS_SOURCE}
    ${AWS_DS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DS" DS_UNITY_SRC)
endif()

file(GLOB DS_SRC
    ${DS_UNIFIED_HEADERS}
    ${DS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ds" FILES ${AWS_DS_HEADERS})
        source_group("Header Files\\aws\\ds\\model" FILES ${AWS_DS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DIRECTORYSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ds)
install (FILES ${AWS_DS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ds/model)

do_packaging()


