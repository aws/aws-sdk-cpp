cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-importexport)

  file(GLOB AWS_IMPORTEXPORT_HEADERS
    "include/aws/importexport/*.h"
  )

  file(GLOB AWS_IMPORTEXPORT_MODEL_HEADERS
    "include/aws/importexport/model/*.h"
  )

  file(GLOB AWS_IMPORTEXPORT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_IMPORTEXPORT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB IMPORTEXPORT_UNIFIED_HEADERS
    ${AWS_IMPORTEXPORT_HEADERS}
    ${AWS_IMPORTEXPORT_MODEL_HEADERS}
  )

  file(GLOB IMPORTEXPORT_UNITY_SRC
    ${AWS_IMPORTEXPORT_SOURCE}
    ${AWS_IMPORTEXPORT_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("IMPORTEXPORT" IMPORTEXPORT_UNITY_SRC)
  endif()

  file(GLOB IMPORTEXPORT_SRC
    ${IMPORTEXPORT_UNIFIED_HEADERS}
    ${IMPORTEXPORT_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\importexport" FILES ${AWS_IMPORTEXPORT_HEADERS})
      source_group("Header Files\\aws\\importexport\\model" FILES ${AWS_IMPORTEXPORT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_IMPORTEXPORT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_IMPORTEXPORT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(IMPORTEXPORT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${IMPORTEXPORT_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IMPORTEXPORT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-importexport ${LIBTYPE} ${IMPORTEXPORT_SRC})

  target_include_directories(aws-cpp-sdk-importexport PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-importexport aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-importexport
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-importexport)
    else()
      install (TARGETS aws-cpp-sdk-importexport
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_IMPORTEXPORT_HEADERS} DESTINATION include/aws/importexport)
  install (FILES ${AWS_IMPORTEXPORT_MODEL_HEADERS} DESTINATION include/aws/importexport/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-importexport.autopkg DESTINATION nuget)
  endif()



