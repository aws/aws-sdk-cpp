cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-directconnect)

  file(GLOB AWS_DIRECTCONNECT_HEADERS
    "include/aws/directconnect/*.h"
  )

  file(GLOB AWS_DIRECTCONNECT_MODEL_HEADERS
    "include/aws/directconnect/model/*.h"
  )

  file(GLOB AWS_DIRECTCONNECT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_DIRECTCONNECT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB DIRECTCONNECT_UNIFIED_HEADERS
    ${AWS_DIRECTCONNECT_HEADERS}
    ${AWS_DIRECTCONNECT_MODEL_HEADERS}
  )

  file(GLOB DIRECTCONNECT_UNITY_SRC
    ${AWS_DIRECTCONNECT_SOURCE}
    ${AWS_DIRECTCONNECT_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("DIRECTCONNECT" DIRECTCONNECT_UNITY_SRC)
  endif()

  file(GLOB DIRECTCONNECT_SRC
    ${DIRECTCONNECT_UNIFIED_HEADERS}
    ${DIRECTCONNECT_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\directconnect" FILES ${AWS_DIRECTCONNECT_HEADERS})
      source_group("Header Files\\aws\\directconnect\\model" FILES ${AWS_DIRECTCONNECT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_DIRECTCONNECT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_DIRECTCONNECT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(DIRECTCONNECT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${DIRECTCONNECT_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DIRECTCONNECT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-directconnect ${LIBTYPE} ${DIRECTCONNECT_SRC})

  target_include_directories(aws-cpp-sdk-directconnect PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-directconnect aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-directconnect
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-directconnect)
    else()
      install (TARGETS aws-cpp-sdk-directconnect
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_DIRECTCONNECT_HEADERS} DESTINATION include/aws/directconnect)
  install (FILES ${AWS_DIRECTCONNECT_MODEL_HEADERS} DESTINATION include/aws/directconnect/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-directconnect.autopkg DESTINATION nuget)
  endif()



