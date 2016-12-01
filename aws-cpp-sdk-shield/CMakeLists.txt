add_project(aws-cpp-sdk-shield "C++ SDK for the AWS shield service" aws-cpp-sdk-core)

file(GLOB AWS_SHIELD_HEADERS
    "include/aws/shield/*.h"
)

file(GLOB AWS_SHIELD_MODEL_HEADERS
    "include/aws/shield/model/*.h"
)

file(GLOB AWS_SHIELD_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SHIELD_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SHIELD_UNIFIED_HEADERS
    ${AWS_SHIELD_HEADERS}
    ${AWS_SHIELD_MODEL_HEADERS}
)

file(GLOB SHIELD_UNITY_SRC
    ${AWS_SHIELD_SOURCE}
    ${AWS_SHIELD_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SHIELD" SHIELD_UNITY_SRC)
endif()

file(GLOB SHIELD_SRC
    ${SHIELD_UNIFIED_HEADERS}
    ${SHIELD_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\shield" FILES ${AWS_SHIELD_HEADERS})
        source_group("Header Files\\aws\\shield\\model" FILES ${AWS_SHIELD_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SHIELD_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SHIELD_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SHIELD_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${SHIELD_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SHIELD_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${SHIELD_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_SHIELD_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/shield)
install (FILES ${AWS_SHIELD_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/shield/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


