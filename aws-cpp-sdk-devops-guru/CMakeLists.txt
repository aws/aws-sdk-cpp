add_project(aws-cpp-sdk-devops-guru "C++ SDK for the AWS devops-guru service" aws-cpp-sdk-core)

file(GLOB AWS_DEVOPS-GURU_HEADERS
    "include/aws/devops-guru/*.h"
)

file(GLOB AWS_DEVOPS-GURU_MODEL_HEADERS
    "include/aws/devops-guru/model/*.h"
)

file(GLOB AWS_DEVOPS-GURU_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DEVOPS-GURU_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DEVOPS-GURU_UNIFIED_HEADERS
    ${AWS_DEVOPS-GURU_HEADERS}
    ${AWS_DEVOPS-GURU_MODEL_HEADERS}
)

file(GLOB DEVOPS-GURU_UNITY_SRC
    ${AWS_DEVOPS-GURU_SOURCE}
    ${AWS_DEVOPS-GURU_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DEVOPS-GURU" DEVOPS-GURU_UNITY_SRC)
endif()

file(GLOB DEVOPS-GURU_SRC
    ${DEVOPS-GURU_UNIFIED_HEADERS}
    ${DEVOPS-GURU_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\devops-guru" FILES ${AWS_DEVOPS-GURU_HEADERS})
        source_group("Header Files\\aws\\devops-guru\\model" FILES ${AWS_DEVOPS-GURU_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DEVOPS-GURU_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DEVOPS-GURU_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DEVOPS-GURU_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DEVOPS-GURU_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DEVOPSGURU_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DEVOPS-GURU_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/devops-guru)
install (FILES ${AWS_DEVOPS-GURU_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/devops-guru/model)

do_packaging()


