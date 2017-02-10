add_project(aws-cpp-sdk-cur "C++ SDK for the AWS cur service" aws-cpp-sdk-core)

file(GLOB AWS_CUR_HEADERS
    "include/aws/cur/*.h"
)

file(GLOB AWS_CUR_MODEL_HEADERS
    "include/aws/cur/model/*.h"
)

file(GLOB AWS_CUR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CUR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CUR_UNIFIED_HEADERS
    ${AWS_CUR_HEADERS}
    ${AWS_CUR_MODEL_HEADERS}
)

file(GLOB CUR_UNITY_SRC
    ${AWS_CUR_SOURCE}
    ${AWS_CUR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CUR" CUR_UNITY_SRC)
endif()

file(GLOB CUR_SRC
    ${CUR_UNIFIED_HEADERS}
    ${CUR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cur" FILES ${AWS_CUR_HEADERS})
        source_group("Header Files\\aws\\cur\\model" FILES ${AWS_CUR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CUR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CUR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CUR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${CUR_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_COSTANDUSAGEREPORTSERVICE_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${CUR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_CUR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cur)
install (FILES ${AWS_CUR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cur/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


