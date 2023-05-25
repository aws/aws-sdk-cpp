add_project(aws-cpp-sdk-lakeformation "C++ SDK for the AWS lakeformation service" aws-cpp-sdk-core)

file(GLOB AWS_LAKEFORMATION_HEADERS
    "include/aws/lakeformation/*.h"
)

file(GLOB AWS_LAKEFORMATION_MODEL_HEADERS
    "include/aws/lakeformation/model/*.h"
)

file(GLOB AWS_LAKEFORMATION_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LAKEFORMATION_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LAKEFORMATION_UNIFIED_HEADERS
    ${AWS_LAKEFORMATION_HEADERS}
    ${AWS_LAKEFORMATION_MODEL_HEADERS}
)

file(GLOB LAKEFORMATION_UNITY_SRC
    ${AWS_LAKEFORMATION_SOURCE}
    ${AWS_LAKEFORMATION_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LAKEFORMATION" LAKEFORMATION_UNITY_SRC)
endif()

file(GLOB LAKEFORMATION_SRC
    ${LAKEFORMATION_UNIFIED_HEADERS}
    ${LAKEFORMATION_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\lakeformation" FILES ${AWS_LAKEFORMATION_HEADERS})
        source_group("Header Files\\aws\\lakeformation\\model" FILES ${AWS_LAKEFORMATION_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LAKEFORMATION_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LAKEFORMATION_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LAKEFORMATION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LAKEFORMATION_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LAKEFORMATION_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LAKEFORMATION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lakeformation)
install (FILES ${AWS_LAKEFORMATION_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lakeformation/model)

do_packaging()


