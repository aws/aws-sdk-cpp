add_project(aws-cpp-sdk-profile "C++ SDK for the AWS profile service" aws-cpp-sdk-core)

file(GLOB AWS_PROFILE_HEADERS
    "include/aws/profile/*.h"
)

file(GLOB AWS_PROFILE_MODEL_HEADERS
    "include/aws/profile/model/*.h"
)

file(GLOB AWS_PROFILE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PROFILE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PROFILE_UNIFIED_HEADERS
    ${AWS_PROFILE_HEADERS}
    ${AWS_PROFILE_MODEL_HEADERS}
)

file(GLOB PROFILE_UNITY_SRC
    ${AWS_PROFILE_SOURCE}
    ${AWS_PROFILE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PROFILE" PROFILE_UNITY_SRC)
endif()

file(GLOB PROFILE_SRC
    ${PROFILE_UNIFIED_HEADERS}
    ${PROFILE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\profile" FILES ${AWS_PROFILE_HEADERS})
        source_group("Header Files\\aws\\profile\\model" FILES ${AWS_PROFILE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PROFILE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PROFILE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PROFILE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PROFILE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PROFILE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PROFILE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/profile)
install (FILES ${AWS_PROFILE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/profile/model)

do_packaging()


