cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-servicecatalog)

  file(GLOB AWS_SERVICECATALOG_HEADERS
    "include/aws/servicecatalog/*.h"
  )

  file(GLOB AWS_SERVICECATALOG_MODEL_HEADERS
    "include/aws/servicecatalog/model/*.h"
  )

  file(GLOB AWS_SERVICECATALOG_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_SERVICECATALOG_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB SERVICECATALOG_UNIFIED_HEADERS
    ${AWS_SERVICECATALOG_HEADERS}
    ${AWS_SERVICECATALOG_MODEL_HEADERS}
  )

  file(GLOB SERVICECATALOG_UNITY_SRC
    ${AWS_SERVICECATALOG_SOURCE}
    ${AWS_SERVICECATALOG_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("SERVICECATALOG" SERVICECATALOG_UNITY_SRC)
  endif()

  file(GLOB SERVICECATALOG_SRC
    ${SERVICECATALOG_UNIFIED_HEADERS}
    ${SERVICECATALOG_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\servicecatalog" FILES ${AWS_SERVICECATALOG_HEADERS})
      source_group("Header Files\\aws\\servicecatalog\\model" FILES ${AWS_SERVICECATALOG_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_SERVICECATALOG_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_SERVICECATALOG_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(SERVICECATALOG_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${SERVICECATALOG_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SERVICECATALOG_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-servicecatalog ${LIBTYPE} ${SERVICECATALOG_SRC})

  target_include_directories(aws-cpp-sdk-servicecatalog PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-servicecatalog aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-servicecatalog
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-servicecatalog)
    else()
      install (TARGETS aws-cpp-sdk-servicecatalog
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_SERVICECATALOG_HEADERS} DESTINATION include/aws/servicecatalog)
  install (FILES ${AWS_SERVICECATALOG_MODEL_HEADERS} DESTINATION include/aws/servicecatalog/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-servicecatalog.autopkg DESTINATION nuget)
  endif()



