cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-devicefarm)

  file(GLOB AWS_DEVICEFARM_HEADERS
    "include/aws/devicefarm/*.h"
  )

  file(GLOB AWS_DEVICEFARM_MODEL_HEADERS
    "include/aws/devicefarm/model/*.h"
  )

  file(GLOB AWS_DEVICEFARM_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_DEVICEFARM_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB DEVICEFARM_UNIFIED_HEADERS
    ${AWS_DEVICEFARM_HEADERS}
    ${AWS_DEVICEFARM_MODEL_HEADERS}
  )

  file(GLOB DEVICEFARM_UNITY_SRC
    ${AWS_DEVICEFARM_SOURCE}
    ${AWS_DEVICEFARM_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("DEVICEFARM" DEVICEFARM_UNITY_SRC)
  endif()

  file(GLOB DEVICEFARM_SRC
    ${DEVICEFARM_UNIFIED_HEADERS}
    ${DEVICEFARM_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\devicefarm" FILES ${AWS_DEVICEFARM_HEADERS})
      source_group("Header Files\\aws\\devicefarm\\model" FILES ${AWS_DEVICEFARM_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_DEVICEFARM_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_DEVICEFARM_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(DEVICEFARM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${DEVICEFARM_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DEVICEFARM_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-devicefarm ${LIBTYPE} ${DEVICEFARM_SRC})

  target_include_directories(aws-cpp-sdk-devicefarm PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-devicefarm aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-devicefarm
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-devicefarm)
    else()
      install (TARGETS aws-cpp-sdk-devicefarm
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_DEVICEFARM_HEADERS} DESTINATION include/aws/devicefarm)
  install (FILES ${AWS_DEVICEFARM_MODEL_HEADERS} DESTINATION include/aws/devicefarm/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-devicefarm.autopkg DESTINATION nuget)
  endif()



