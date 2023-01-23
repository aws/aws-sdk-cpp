add_project(aws-cpp-sdk-lookoutvision "C++ SDK for the AWS lookoutvision service" aws-cpp-sdk-core)

file(GLOB AWS_LOOKOUTVISION_HEADERS
    "include/aws/lookoutvision/*.h"
)

file(GLOB AWS_LOOKOUTVISION_MODEL_HEADERS
    "include/aws/lookoutvision/model/*.h"
)

file(GLOB AWS_LOOKOUTVISION_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LOOKOUTVISION_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LOOKOUTVISION_UNIFIED_HEADERS
    ${AWS_LOOKOUTVISION_HEADERS}
    ${AWS_LOOKOUTVISION_MODEL_HEADERS}
)

file(GLOB LOOKOUTVISION_UNITY_SRC
    ${AWS_LOOKOUTVISION_SOURCE}
    ${AWS_LOOKOUTVISION_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LOOKOUTVISION" LOOKOUTVISION_UNITY_SRC)
endif()

file(GLOB LOOKOUTVISION_SRC
    ${LOOKOUTVISION_UNIFIED_HEADERS}
    ${LOOKOUTVISION_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\lookoutvision" FILES ${AWS_LOOKOUTVISION_HEADERS})
        source_group("Header Files\\aws\\lookoutvision\\model" FILES ${AWS_LOOKOUTVISION_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LOOKOUTVISION_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LOOKOUTVISION_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LOOKOUTVISION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LOOKOUTVISION_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LOOKOUTFORVISION_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LOOKOUTVISION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lookoutvision)
install (FILES ${AWS_LOOKOUTVISION_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lookoutvision/model)

do_packaging()


