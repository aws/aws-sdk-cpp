project(aws-cpp-sdk-budgets)

  file(GLOB AWS_BUDGETS_HEADERS
    "include/aws/budgets/*.h"
  )

  file(GLOB AWS_BUDGETS_MODEL_HEADERS
    "include/aws/budgets/model/*.h"
  )

  file(GLOB AWS_BUDGETS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_BUDGETS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB BUDGETS_UNIFIED_HEADERS
    ${AWS_BUDGETS_HEADERS}
    ${AWS_BUDGETS_MODEL_HEADERS}
  )

  file(GLOB BUDGETS_UNITY_SRC
    ${AWS_BUDGETS_SOURCE}
    ${AWS_BUDGETS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("BUDGETS" BUDGETS_UNITY_SRC)
  endif()

  file(GLOB BUDGETS_SRC
    ${BUDGETS_UNIFIED_HEADERS}
    ${BUDGETS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\budgets" FILES ${AWS_BUDGETS_HEADERS})
      source_group("Header Files\\aws\\budgets\\model" FILES ${AWS_BUDGETS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_BUDGETS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_BUDGETS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(BUDGETS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${BUDGETS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_BUDGETS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-budgets ${LIBTYPE} ${BUDGETS_SRC})

  target_include_directories(aws-cpp-sdk-budgets PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-budgets aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-budgets
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-budgets)
    else()
      install (TARGETS aws-cpp-sdk-budgets
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_BUDGETS_HEADERS} DESTINATION include/aws/budgets)
  install (FILES ${AWS_BUDGETS_MODEL_HEADERS} DESTINATION include/aws/budgets/model)

  if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/aws-cpp-sdk-budgets.autopkg DESTINATION nuget)
  endif()



