cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-opsworks)

  file(GLOB AWS_OPSWORKS_HEADERS
    "include/aws/opsworks/*.h"
  )

  file(GLOB AWS_OPSWORKS_MODEL_HEADERS
    "include/aws/opsworks/model/*.h"
  )

  file(GLOB AWS_OPSWORKS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_OPSWORKS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB OPSWORKS_UNIFIED_HEADERS
    ${AWS_OPSWORKS_HEADERS}
    ${AWS_OPSWORKS_MODEL_HEADERS}
  )

  file(GLOB OPSWORKS_UNITY_SRC
    ${AWS_OPSWORKS_SOURCE}
    ${AWS_OPSWORKS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("OPSWORKS" OPSWORKS_UNITY_SRC)
  endif()

  file(GLOB OPSWORKS_SRC
    ${OPSWORKS_UNIFIED_HEADERS}
    ${OPSWORKS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\opsworks" FILES ${AWS_OPSWORKS_HEADERS})
      source_group("Header Files\\aws\\opsworks\\model" FILES ${AWS_OPSWORKS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_OPSWORKS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_OPSWORKS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(OPSWORKS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${OPSWORKS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_OPSWORKS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-opsworks ${LIBTYPE} ${OPSWORKS_SRC})

  target_include_directories(aws-cpp-sdk-opsworks PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-opsworks aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-opsworks
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-opsworks)
    else()
      install (TARGETS aws-cpp-sdk-opsworks
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_OPSWORKS_HEADERS} DESTINATION include/aws/opsworks)
  install (FILES ${AWS_OPSWORKS_MODEL_HEADERS} DESTINATION include/aws/opsworks/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-opsworks.autopkg DESTINATION nuget)
  endif()



