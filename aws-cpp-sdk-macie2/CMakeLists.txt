add_project(aws-cpp-sdk-macie2 "C++ SDK for the AWS macie2 service" aws-cpp-sdk-core)

file(GLOB AWS_MACIE2_HEADERS
    "include/aws/macie2/*.h"
)

file(GLOB AWS_MACIE2_MODEL_HEADERS
    "include/aws/macie2/model/*.h"
)

file(GLOB AWS_MACIE2_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MACIE2_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MACIE2_UNIFIED_HEADERS
    ${AWS_MACIE2_HEADERS}
    ${AWS_MACIE2_MODEL_HEADERS}
)

file(GLOB MACIE2_UNITY_SRC
    ${AWS_MACIE2_SOURCE}
    ${AWS_MACIE2_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MACIE2" MACIE2_UNITY_SRC)
endif()

file(GLOB MACIE2_SRC
    ${MACIE2_UNIFIED_HEADERS}
    ${MACIE2_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\macie2" FILES ${AWS_MACIE2_HEADERS})
        source_group("Header Files\\aws\\macie2\\model" FILES ${AWS_MACIE2_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MACIE2_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MACIE2_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MACIE2_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MACIE2_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MACIE2_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MACIE2_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/macie2)
install (FILES ${AWS_MACIE2_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/macie2/model)

do_packaging()


