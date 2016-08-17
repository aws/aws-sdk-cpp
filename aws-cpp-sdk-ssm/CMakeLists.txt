cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-ssm)

  file(GLOB AWS_SSM_HEADERS
    "include/aws/ssm/*.h"
  )

  file(GLOB AWS_SSM_MODEL_HEADERS
    "include/aws/ssm/model/*.h"
  )

  file(GLOB AWS_SSM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_SSM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB SSM_UNIFIED_HEADERS
    ${AWS_SSM_HEADERS}
    ${AWS_SSM_MODEL_HEADERS}
  )

  file(GLOB SSM_UNITY_SRC
    ${AWS_SSM_SOURCE}
    ${AWS_SSM_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSM" SSM_UNITY_SRC)
  endif()

  file(GLOB SSM_SRC
    ${SSM_UNIFIED_HEADERS}
    ${SSM_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\ssm" FILES ${AWS_SSM_HEADERS})
      source_group("Header Files\\aws\\ssm\\model" FILES ${AWS_SSM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_SSM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_SSM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(SSM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${SSM_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SSM_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-ssm ${LIBTYPE} ${SSM_SRC})

  target_include_directories(aws-cpp-sdk-ssm PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-ssm aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-ssm
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-ssm)
    else()
      install (TARGETS aws-cpp-sdk-ssm
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_SSM_HEADERS} DESTINATION include/aws/ssm)
  install (FILES ${AWS_SSM_MODEL_HEADERS} DESTINATION include/aws/ssm/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-ssm.autopkg DESTINATION nuget)
  endif()



