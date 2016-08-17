cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-acm)

  file(GLOB AWS_ACM_HEADERS
    "include/aws/acm/*.h"
  )

  file(GLOB AWS_ACM_MODEL_HEADERS
    "include/aws/acm/model/*.h"
  )

  file(GLOB AWS_ACM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ACM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ACM_UNIFIED_HEADERS
    ${AWS_ACM_HEADERS}
    ${AWS_ACM_MODEL_HEADERS}
  )

  file(GLOB ACM_UNITY_SRC
    ${AWS_ACM_SOURCE}
    ${AWS_ACM_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ACM" ACM_UNITY_SRC)
  endif()

  file(GLOB ACM_SRC
    ${ACM_UNIFIED_HEADERS}
    ${ACM_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\acm" FILES ${AWS_ACM_HEADERS})
      source_group("Header Files\\aws\\acm\\model" FILES ${AWS_ACM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ACM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ACM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ACM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ACM_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ACM_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-acm ${LIBTYPE} ${ACM_SRC})

  target_include_directories(aws-cpp-sdk-acm PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-acm aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-acm
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-acm)
    else()
      install (TARGETS aws-cpp-sdk-acm
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ACM_HEADERS} DESTINATION include/aws/acm)
  install (FILES ${AWS_ACM_MODEL_HEADERS} DESTINATION include/aws/acm/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-acm.autopkg DESTINATION nuget)
  endif()



