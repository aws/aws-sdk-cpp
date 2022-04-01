add_project(aws-cpp-sdk-frauddetector "C++ SDK for the AWS frauddetector service" aws-cpp-sdk-core)

file(GLOB AWS_FRAUDDETECTOR_HEADERS
    "include/aws/frauddetector/*.h"
)

file(GLOB AWS_FRAUDDETECTOR_MODEL_HEADERS
    "include/aws/frauddetector/model/*.h"
)

file(GLOB AWS_FRAUDDETECTOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_FRAUDDETECTOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB FRAUDDETECTOR_UNIFIED_HEADERS
    ${AWS_FRAUDDETECTOR_HEADERS}
    ${AWS_FRAUDDETECTOR_MODEL_HEADERS}
)

file(GLOB FRAUDDETECTOR_UNITY_SRC
    ${AWS_FRAUDDETECTOR_SOURCE}
    ${AWS_FRAUDDETECTOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("FRAUDDETECTOR" FRAUDDETECTOR_UNITY_SRC)
endif()

file(GLOB FRAUDDETECTOR_SRC
    ${FRAUDDETECTOR_UNIFIED_HEADERS}
    ${FRAUDDETECTOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\frauddetector" FILES ${AWS_FRAUDDETECTOR_HEADERS})
        source_group("Header Files\\aws\\frauddetector\\model" FILES ${AWS_FRAUDDETECTOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_FRAUDDETECTOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_FRAUDDETECTOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(FRAUDDETECTOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${FRAUDDETECTOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_FRAUDDETECTOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_FRAUDDETECTOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/frauddetector)
install (FILES ${AWS_FRAUDDETECTOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/frauddetector/model)

do_packaging()


