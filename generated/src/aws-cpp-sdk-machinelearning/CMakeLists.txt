add_project(aws-cpp-sdk-machinelearning "C++ SDK for the AWS machinelearning service" aws-cpp-sdk-core)

file(GLOB AWS_MACHINELEARNING_HEADERS
    "include/aws/machinelearning/*.h"
)

file(GLOB AWS_MACHINELEARNING_MODEL_HEADERS
    "include/aws/machinelearning/model/*.h"
)

file(GLOB AWS_MACHINELEARNING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MACHINELEARNING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MACHINELEARNING_UNIFIED_HEADERS
    ${AWS_MACHINELEARNING_HEADERS}
    ${AWS_MACHINELEARNING_MODEL_HEADERS}
)

file(GLOB MACHINELEARNING_UNITY_SRC
    ${AWS_MACHINELEARNING_SOURCE}
    ${AWS_MACHINELEARNING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MACHINELEARNING" MACHINELEARNING_UNITY_SRC)
endif()

file(GLOB MACHINELEARNING_SRC
    ${MACHINELEARNING_UNIFIED_HEADERS}
    ${MACHINELEARNING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\machinelearning" FILES ${AWS_MACHINELEARNING_HEADERS})
        source_group("Header Files\\aws\\machinelearning\\model" FILES ${AWS_MACHINELEARNING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MACHINELEARNING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MACHINELEARNING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MACHINELEARNING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MACHINELEARNING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MACHINELEARNING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MACHINELEARNING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/machinelearning)
install (FILES ${AWS_MACHINELEARNING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/machinelearning/model)

do_packaging()


