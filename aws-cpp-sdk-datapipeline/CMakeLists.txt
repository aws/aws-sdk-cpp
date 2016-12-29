add_project(aws-cpp-sdk-datapipeline "C++ SDK for the AWS datapipeline service" aws-cpp-sdk-core)

file(GLOB AWS_DATAPIPELINE_HEADERS
    "include/aws/datapipeline/*.h"
)

file(GLOB AWS_DATAPIPELINE_MODEL_HEADERS
    "include/aws/datapipeline/model/*.h"
)

file(GLOB AWS_DATAPIPELINE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DATAPIPELINE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DATAPIPELINE_UNIFIED_HEADERS
    ${AWS_DATAPIPELINE_HEADERS}
    ${AWS_DATAPIPELINE_MODEL_HEADERS}
)

file(GLOB DATAPIPELINE_UNITY_SRC
    ${AWS_DATAPIPELINE_SOURCE}
    ${AWS_DATAPIPELINE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DATAPIPELINE" DATAPIPELINE_UNITY_SRC)
endif()

file(GLOB DATAPIPELINE_SRC
    ${DATAPIPELINE_UNIFIED_HEADERS}
    ${DATAPIPELINE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\datapipeline" FILES ${AWS_DATAPIPELINE_HEADERS})
        source_group("Header Files\\aws\\datapipeline\\model" FILES ${AWS_DATAPIPELINE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DATAPIPELINE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DATAPIPELINE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DATAPIPELINE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${DATAPIPELINE_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DATAPIPELINE_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${DATAPIPELINE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_DATAPIPELINE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/datapipeline)
install (FILES ${AWS_DATAPIPELINE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/datapipeline/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


