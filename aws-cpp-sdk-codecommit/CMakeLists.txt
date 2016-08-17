cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-codecommit)

  file(GLOB AWS_CODECOMMIT_HEADERS
    "include/aws/codecommit/*.h"
  )

  file(GLOB AWS_CODECOMMIT_MODEL_HEADERS
    "include/aws/codecommit/model/*.h"
  )

  file(GLOB AWS_CODECOMMIT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CODECOMMIT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CODECOMMIT_UNIFIED_HEADERS
    ${AWS_CODECOMMIT_HEADERS}
    ${AWS_CODECOMMIT_MODEL_HEADERS}
  )

  file(GLOB CODECOMMIT_UNITY_SRC
    ${AWS_CODECOMMIT_SOURCE}
    ${AWS_CODECOMMIT_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODECOMMIT" CODECOMMIT_UNITY_SRC)
  endif()

  file(GLOB CODECOMMIT_SRC
    ${CODECOMMIT_UNIFIED_HEADERS}
    ${CODECOMMIT_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\codecommit" FILES ${AWS_CODECOMMIT_HEADERS})
      source_group("Header Files\\aws\\codecommit\\model" FILES ${AWS_CODECOMMIT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CODECOMMIT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CODECOMMIT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CODECOMMIT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CODECOMMIT_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CODECOMMIT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-codecommit ${LIBTYPE} ${CODECOMMIT_SRC})

  target_include_directories(aws-cpp-sdk-codecommit PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-codecommit aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-codecommit
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-codecommit)
    else()
      install (TARGETS aws-cpp-sdk-codecommit
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_CODECOMMIT_HEADERS} DESTINATION include/aws/codecommit)
  install (FILES ${AWS_CODECOMMIT_MODEL_HEADERS} DESTINATION include/aws/codecommit/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-codecommit.autopkg DESTINATION nuget)
  endif()



