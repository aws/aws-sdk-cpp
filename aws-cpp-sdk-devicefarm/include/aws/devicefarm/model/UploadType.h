/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class UploadType
  {
    NOT_SET,
    ANDROID_APP,
    IOS_APP,
    WEB_APP,
    EXTERNAL_DATA,
    APPIUM_JAVA_JUNIT_TEST_PACKAGE,
    APPIUM_JAVA_TESTNG_TEST_PACKAGE,
    APPIUM_PYTHON_TEST_PACKAGE,
    APPIUM_NODE_TEST_PACKAGE,
    APPIUM_RUBY_TEST_PACKAGE,
    APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE,
    APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE,
    APPIUM_WEB_PYTHON_TEST_PACKAGE,
    APPIUM_WEB_NODE_TEST_PACKAGE,
    APPIUM_WEB_RUBY_TEST_PACKAGE,
    CALABASH_TEST_PACKAGE,
    INSTRUMENTATION_TEST_PACKAGE,
    UIAUTOMATION_TEST_PACKAGE,
    UIAUTOMATOR_TEST_PACKAGE,
    XCTEST_TEST_PACKAGE,
    XCTEST_UI_TEST_PACKAGE,
    APPIUM_JAVA_JUNIT_TEST_SPEC,
    APPIUM_JAVA_TESTNG_TEST_SPEC,
    APPIUM_PYTHON_TEST_SPEC,
    APPIUM_NODE_TEST_SPEC,
    APPIUM_RUBY_TEST_SPEC,
    APPIUM_WEB_JAVA_JUNIT_TEST_SPEC,
    APPIUM_WEB_JAVA_TESTNG_TEST_SPEC,
    APPIUM_WEB_PYTHON_TEST_SPEC,
    APPIUM_WEB_NODE_TEST_SPEC,
    APPIUM_WEB_RUBY_TEST_SPEC,
    INSTRUMENTATION_TEST_SPEC,
    XCTEST_UI_TEST_SPEC
  };

namespace UploadTypeMapper
{
AWS_DEVICEFARM_API UploadType GetUploadTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForUploadType(UploadType value);
} // namespace UploadTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
