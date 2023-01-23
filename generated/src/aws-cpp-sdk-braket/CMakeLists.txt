add_project(aws-cpp-sdk-braket "C++ SDK for the AWS braket service" aws-cpp-sdk-core)

file(GLOB AWS_BRAKET_HEADERS
    "include/aws/braket/*.h"
)

file(GLOB AWS_BRAKET_MODEL_HEADERS
    "include/aws/braket/model/*.h"
)

file(GLOB AWS_BRAKET_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BRAKET_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BRAKET_UNIFIED_HEADERS
    ${AWS_BRAKET_HEADERS}
    ${AWS_BRAKET_MODEL_HEADERS}
)

file(GLOB BRAKET_UNITY_SRC
    ${AWS_BRAKET_SOURCE}
    ${AWS_BRAKET_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BRAKET" BRAKET_UNITY_SRC)
endif()

file(GLOB BRAKET_SRC
    ${BRAKET_UNIFIED_HEADERS}
    ${BRAKET_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\braket" FILES ${AWS_BRAKET_HEADERS})
        source_group("Header Files\\aws\\braket\\model" FILES ${AWS_BRAKET_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BRAKET_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BRAKET_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BRAKET_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BRAKET_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BRAKET_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BRAKET_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/braket)
install (FILES ${AWS_BRAKET_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/braket/model)

do_packaging()


