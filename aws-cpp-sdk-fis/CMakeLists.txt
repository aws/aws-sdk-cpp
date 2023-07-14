add_project(aws-cpp-sdk-fis "C++ SDK for the AWS fis service" aws-cpp-sdk-core)

file(GLOB AWS_FIS_HEADERS
    "include/aws/fis/*.h"
)

file(GLOB AWS_FIS_MODEL_HEADERS
    "include/aws/fis/model/*.h"
)

file(GLOB AWS_FIS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_FIS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB FIS_UNIFIED_HEADERS
    ${AWS_FIS_HEADERS}
    ${AWS_FIS_MODEL_HEADERS}
)

file(GLOB FIS_UNITY_SRC
    ${AWS_FIS_SOURCE}
    ${AWS_FIS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("FIS" FIS_UNITY_SRC)
endif()

file(GLOB FIS_SRC
    ${FIS_UNIFIED_HEADERS}
    ${FIS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\fis" FILES ${AWS_FIS_HEADERS})
        source_group("Header Files\\aws\\fis\\model" FILES ${AWS_FIS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_FIS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_FIS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(FIS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${FIS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_FIS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_FIS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/fis)
install (FILES ${AWS_FIS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/fis/model)

do_packaging()


