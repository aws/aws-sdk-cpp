add_project(aws-cpp-sdk-kendra-ranking "C++ SDK for the AWS kendra-ranking service" aws-cpp-sdk-core)

file(GLOB AWS_KENDRA-RANKING_HEADERS
    "include/aws/kendra-ranking/*.h"
)

file(GLOB AWS_KENDRA-RANKING_MODEL_HEADERS
    "include/aws/kendra-ranking/model/*.h"
)

file(GLOB AWS_KENDRA-RANKING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KENDRA-RANKING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KENDRA-RANKING_UNIFIED_HEADERS
    ${AWS_KENDRA-RANKING_HEADERS}
    ${AWS_KENDRA-RANKING_MODEL_HEADERS}
)

file(GLOB KENDRA-RANKING_UNITY_SRC
    ${AWS_KENDRA-RANKING_SOURCE}
    ${AWS_KENDRA-RANKING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KENDRA-RANKING" KENDRA-RANKING_UNITY_SRC)
endif()

file(GLOB KENDRA-RANKING_SRC
    ${KENDRA-RANKING_UNIFIED_HEADERS}
    ${KENDRA-RANKING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kendra-ranking" FILES ${AWS_KENDRA-RANKING_HEADERS})
        source_group("Header Files\\aws\\kendra-ranking\\model" FILES ${AWS_KENDRA-RANKING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KENDRA-RANKING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KENDRA-RANKING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KENDRA-RANKING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KENDRA-RANKING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KENDRARANKING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KENDRA-RANKING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kendra-ranking)
install (FILES ${AWS_KENDRA-RANKING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kendra-ranking/model)

do_packaging()


