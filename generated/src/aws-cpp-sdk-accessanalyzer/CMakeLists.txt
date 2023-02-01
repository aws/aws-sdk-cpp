add_project(aws-cpp-sdk-accessanalyzer "C++ SDK for the AWS accessanalyzer service" aws-cpp-sdk-core)

file(GLOB AWS_ACCESSANALYZER_HEADERS
    "include/aws/accessanalyzer/*.h"
)

file(GLOB AWS_ACCESSANALYZER_MODEL_HEADERS
    "include/aws/accessanalyzer/model/*.h"
)

file(GLOB AWS_ACCESSANALYZER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ACCESSANALYZER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ACCESSANALYZER_UNIFIED_HEADERS
    ${AWS_ACCESSANALYZER_HEADERS}
    ${AWS_ACCESSANALYZER_MODEL_HEADERS}
)

file(GLOB ACCESSANALYZER_UNITY_SRC
    ${AWS_ACCESSANALYZER_SOURCE}
    ${AWS_ACCESSANALYZER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ACCESSANALYZER" ACCESSANALYZER_UNITY_SRC)
endif()

file(GLOB ACCESSANALYZER_SRC
    ${ACCESSANALYZER_UNIFIED_HEADERS}
    ${ACCESSANALYZER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\accessanalyzer" FILES ${AWS_ACCESSANALYZER_HEADERS})
        source_group("Header Files\\aws\\accessanalyzer\\model" FILES ${AWS_ACCESSANALYZER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ACCESSANALYZER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ACCESSANALYZER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ACCESSANALYZER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ACCESSANALYZER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ACCESSANALYZER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ACCESSANALYZER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/accessanalyzer)
install (FILES ${AWS_ACCESSANALYZER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/accessanalyzer/model)

do_packaging()


