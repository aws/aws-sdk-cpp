add_project(aws-cpp-sdk-codeguru-reviewer "C++ SDK for the AWS codeguru-reviewer service" aws-cpp-sdk-core)

file(GLOB AWS_CODEGURU-REVIEWER_HEADERS
    "include/aws/codeguru-reviewer/*.h"
)

file(GLOB AWS_CODEGURU-REVIEWER_MODEL_HEADERS
    "include/aws/codeguru-reviewer/model/*.h"
)

file(GLOB AWS_CODEGURU-REVIEWER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODEGURU-REVIEWER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODEGURU-REVIEWER_UNIFIED_HEADERS
    ${AWS_CODEGURU-REVIEWER_HEADERS}
    ${AWS_CODEGURU-REVIEWER_MODEL_HEADERS}
)

file(GLOB CODEGURU-REVIEWER_UNITY_SRC
    ${AWS_CODEGURU-REVIEWER_SOURCE}
    ${AWS_CODEGURU-REVIEWER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODEGURU-REVIEWER" CODEGURU-REVIEWER_UNITY_SRC)
endif()

file(GLOB CODEGURU-REVIEWER_SRC
    ${CODEGURU-REVIEWER_UNIFIED_HEADERS}
    ${CODEGURU-REVIEWER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codeguru-reviewer" FILES ${AWS_CODEGURU-REVIEWER_HEADERS})
        source_group("Header Files\\aws\\codeguru-reviewer\\model" FILES ${AWS_CODEGURU-REVIEWER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODEGURU-REVIEWER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODEGURU-REVIEWER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODEGURU-REVIEWER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODEGURU-REVIEWER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODEGURUREVIEWER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODEGURU-REVIEWER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codeguru-reviewer)
install (FILES ${AWS_CODEGURU-REVIEWER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codeguru-reviewer/model)

do_packaging()


