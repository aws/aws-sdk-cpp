add_project(aws-cpp-sdk-elastictranscoder "C++ SDK for the AWS elastictranscoder service" aws-cpp-sdk-core)

file(GLOB AWS_ELASTICTRANSCODER_HEADERS
    "include/aws/elastictranscoder/*.h"
)

file(GLOB AWS_ELASTICTRANSCODER_MODEL_HEADERS
    "include/aws/elastictranscoder/model/*.h"
)

file(GLOB AWS_ELASTICTRANSCODER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELASTICTRANSCODER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELASTICTRANSCODER_UNIFIED_HEADERS
    ${AWS_ELASTICTRANSCODER_HEADERS}
    ${AWS_ELASTICTRANSCODER_MODEL_HEADERS}
)

file(GLOB ELASTICTRANSCODER_UNITY_SRC
    ${AWS_ELASTICTRANSCODER_SOURCE}
    ${AWS_ELASTICTRANSCODER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICTRANSCODER" ELASTICTRANSCODER_UNITY_SRC)
endif()

file(GLOB ELASTICTRANSCODER_SRC
    ${ELASTICTRANSCODER_UNIFIED_HEADERS}
    ${ELASTICTRANSCODER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elastictranscoder" FILES ${AWS_ELASTICTRANSCODER_HEADERS})
        source_group("Header Files\\aws\\elastictranscoder\\model" FILES ${AWS_ELASTICTRANSCODER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELASTICTRANSCODER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELASTICTRANSCODER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELASTICTRANSCODER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${ELASTICTRANSCODER_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICTRANSCODER_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ELASTICTRANSCODER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_ELASTICTRANSCODER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elastictranscoder)
install (FILES ${AWS_ELASTICTRANSCODER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elastictranscoder/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


