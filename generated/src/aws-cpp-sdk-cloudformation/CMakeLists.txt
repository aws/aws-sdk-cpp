add_project(aws-cpp-sdk-cloudformation "C++ SDK for the AWS cloudformation service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDFORMATION_HEADERS
    "include/aws/cloudformation/*.h"
)

file(GLOB AWS_CLOUDFORMATION_MODEL_HEADERS
    "include/aws/cloudformation/model/*.h"
)

file(GLOB AWS_CLOUDFORMATION_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDFORMATION_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDFORMATION_UNIFIED_HEADERS
    ${AWS_CLOUDFORMATION_HEADERS}
    ${AWS_CLOUDFORMATION_MODEL_HEADERS}
)

file(GLOB CLOUDFORMATION_UNITY_SRC
    ${AWS_CLOUDFORMATION_SOURCE}
    ${AWS_CLOUDFORMATION_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDFORMATION" CLOUDFORMATION_UNITY_SRC)
endif()

file(GLOB CLOUDFORMATION_SRC
    ${CLOUDFORMATION_UNIFIED_HEADERS}
    ${CLOUDFORMATION_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudformation" FILES ${AWS_CLOUDFORMATION_HEADERS})
        source_group("Header Files\\aws\\cloudformation\\model" FILES ${AWS_CLOUDFORMATION_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDFORMATION_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDFORMATION_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDFORMATION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDFORMATION_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDFORMATION_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDFORMATION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudformation)
install (FILES ${AWS_CLOUDFORMATION_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudformation/model)

do_packaging()


