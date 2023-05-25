add_project(aws-cpp-sdk-gamesparks "C++ SDK for the AWS gamesparks service" aws-cpp-sdk-core)

file(GLOB AWS_GAMESPARKS_HEADERS
    "include/aws/gamesparks/*.h"
)

file(GLOB AWS_GAMESPARKS_MODEL_HEADERS
    "include/aws/gamesparks/model/*.h"
)

file(GLOB AWS_GAMESPARKS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GAMESPARKS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GAMESPARKS_UNIFIED_HEADERS
    ${AWS_GAMESPARKS_HEADERS}
    ${AWS_GAMESPARKS_MODEL_HEADERS}
)

file(GLOB GAMESPARKS_UNITY_SRC
    ${AWS_GAMESPARKS_SOURCE}
    ${AWS_GAMESPARKS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GAMESPARKS" GAMESPARKS_UNITY_SRC)
endif()

file(GLOB GAMESPARKS_SRC
    ${GAMESPARKS_UNIFIED_HEADERS}
    ${GAMESPARKS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\gamesparks" FILES ${AWS_GAMESPARKS_HEADERS})
        source_group("Header Files\\aws\\gamesparks\\model" FILES ${AWS_GAMESPARKS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GAMESPARKS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GAMESPARKS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GAMESPARKS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GAMESPARKS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GAMESPARKS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GAMESPARKS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/gamesparks)
install (FILES ${AWS_GAMESPARKS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/gamesparks/model)

do_packaging()


