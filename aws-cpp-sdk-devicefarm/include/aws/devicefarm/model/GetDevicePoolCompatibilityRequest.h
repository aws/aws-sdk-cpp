/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestType.h>
#include <aws/devicefarm/model/ScheduleRunTest.h>
#include <aws/devicefarm/model/ScheduleRunConfiguration.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the get device pool compatibility
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibilityRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API GetDevicePoolCompatibilityRequest : public DeviceFarmRequest
  {
  public:
    GetDevicePoolCompatibilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevicePoolCompatibility"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The device pool's ARN.</p>
     */
    inline const Aws::String& GetDevicePoolArn() const{ return m_devicePoolArn; }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline bool DevicePoolArnHasBeenSet() const { return m_devicePoolArnHasBeenSet; }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline void SetDevicePoolArn(const Aws::String& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = value; }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline void SetDevicePoolArn(Aws::String&& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = std::move(value); }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline void SetDevicePoolArn(const char* value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn.assign(value); }

    /**
     * <p>The device pool's ARN.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithDevicePoolArn(const Aws::String& value) { SetDevicePoolArn(value); return *this;}

    /**
     * <p>The device pool's ARN.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithDevicePoolArn(Aws::String&& value) { SetDevicePoolArn(std::move(value)); return *this;}

    /**
     * <p>The device pool's ARN.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithDevicePoolArn(const char* value) { SetDevicePoolArn(value); return *this;}


    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li>
     * <li> <p>BUILTIN_EXPLORER: For Android, an app explorer that will traverse an
     * Android app, interacting with it and capturing screenshots at the same time.</p>
     * </li> <li> <p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p> </li> <li>
     * <p>APPIUM_PYTHON: The Appium Python type.</p> </li> <li> <p>APPIUM_NODE: The
     * Appium Node.js type.</p> </li> <li> <p>APPIUM_RUBY: The Appium Ruby type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_NODE: The Appium Node.js type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p>
     * </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION:
     * The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation
     * type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li>
     * <p>XCTEST: The Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test
     * type.</p> </li> </ul>
     */
    inline const TestType& GetTestType() const{ return m_testType; }

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li>
     * <li> <p>BUILTIN_EXPLORER: For Android, an app explorer that will traverse an
     * Android app, interacting with it and capturing screenshots at the same time.</p>
     * </li> <li> <p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p> </li> <li>
     * <p>APPIUM_PYTHON: The Appium Python type.</p> </li> <li> <p>APPIUM_NODE: The
     * Appium Node.js type.</p> </li> <li> <p>APPIUM_RUBY: The Appium Ruby type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_NODE: The Appium Node.js type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p>
     * </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION:
     * The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation
     * type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li>
     * <p>XCTEST: The Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test
     * type.</p> </li> </ul>
     */
    inline bool TestTypeHasBeenSet() const { return m_testTypeHasBeenSet; }

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li>
     * <li> <p>BUILTIN_EXPLORER: For Android, an app explorer that will traverse an
     * Android app, interacting with it and capturing screenshots at the same time.</p>
     * </li> <li> <p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p> </li> <li>
     * <p>APPIUM_PYTHON: The Appium Python type.</p> </li> <li> <p>APPIUM_NODE: The
     * Appium Node.js type.</p> </li> <li> <p>APPIUM_RUBY: The Appium Ruby type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_NODE: The Appium Node.js type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p>
     * </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION:
     * The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation
     * type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li>
     * <p>XCTEST: The Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test
     * type.</p> </li> </ul>
     */
    inline void SetTestType(const TestType& value) { m_testTypeHasBeenSet = true; m_testType = value; }

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li>
     * <li> <p>BUILTIN_EXPLORER: For Android, an app explorer that will traverse an
     * Android app, interacting with it and capturing screenshots at the same time.</p>
     * </li> <li> <p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p> </li> <li>
     * <p>APPIUM_PYTHON: The Appium Python type.</p> </li> <li> <p>APPIUM_NODE: The
     * Appium Node.js type.</p> </li> <li> <p>APPIUM_RUBY: The Appium Ruby type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_NODE: The Appium Node.js type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p>
     * </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION:
     * The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation
     * type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li>
     * <p>XCTEST: The Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test
     * type.</p> </li> </ul>
     */
    inline void SetTestType(TestType&& value) { m_testTypeHasBeenSet = true; m_testType = std::move(value); }

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li>
     * <li> <p>BUILTIN_EXPLORER: For Android, an app explorer that will traverse an
     * Android app, interacting with it and capturing screenshots at the same time.</p>
     * </li> <li> <p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p> </li> <li>
     * <p>APPIUM_PYTHON: The Appium Python type.</p> </li> <li> <p>APPIUM_NODE: The
     * Appium Node.js type.</p> </li> <li> <p>APPIUM_RUBY: The Appium Ruby type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_NODE: The Appium Node.js type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p>
     * </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION:
     * The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation
     * type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li>
     * <p>XCTEST: The Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test
     * type.</p> </li> </ul>
     */
    inline GetDevicePoolCompatibilityRequest& WithTestType(const TestType& value) { SetTestType(value); return *this;}

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li>
     * <li> <p>BUILTIN_EXPLORER: For Android, an app explorer that will traverse an
     * Android app, interacting with it and capturing screenshots at the same time.</p>
     * </li> <li> <p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p> </li> <li>
     * <p>APPIUM_PYTHON: The Appium Python type.</p> </li> <li> <p>APPIUM_NODE: The
     * Appium Node.js type.</p> </li> <li> <p>APPIUM_RUBY: The Appium Ruby type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_NODE: The Appium Node.js type for web
     * apps.</p> </li> <li> <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p>
     * </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION:
     * The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation
     * type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li>
     * <p>XCTEST: The Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test
     * type.</p> </li> </ul>
     */
    inline GetDevicePoolCompatibilityRequest& WithTestType(TestType&& value) { SetTestType(std::move(value)); return *this;}


    /**
     * <p>Information about the uploaded test to be run against the device pool.</p>
     */
    inline const ScheduleRunTest& GetTest() const{ return m_test; }

    /**
     * <p>Information about the uploaded test to be run against the device pool.</p>
     */
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }

    /**
     * <p>Information about the uploaded test to be run against the device pool.</p>
     */
    inline void SetTest(const ScheduleRunTest& value) { m_testHasBeenSet = true; m_test = value; }

    /**
     * <p>Information about the uploaded test to be run against the device pool.</p>
     */
    inline void SetTest(ScheduleRunTest&& value) { m_testHasBeenSet = true; m_test = std::move(value); }

    /**
     * <p>Information about the uploaded test to be run against the device pool.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithTest(const ScheduleRunTest& value) { SetTest(value); return *this;}

    /**
     * <p>Information about the uploaded test to be run against the device pool.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithTest(ScheduleRunTest&& value) { SetTest(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the settings for a run.</p>
     */
    inline const ScheduleRunConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>An object containing information about the settings for a run.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>An object containing information about the settings for a run.</p>
     */
    inline void SetConfiguration(const ScheduleRunConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>An object containing information about the settings for a run.</p>
     */
    inline void SetConfiguration(ScheduleRunConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>An object containing information about the settings for a run.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithConfiguration(const ScheduleRunConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>An object containing information about the settings for a run.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithConfiguration(ScheduleRunConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_devicePoolArn;
    bool m_devicePoolArnHasBeenSet;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet;

    TestType m_testType;
    bool m_testTypeHasBeenSet;

    ScheduleRunTest m_test;
    bool m_testHasBeenSet;

    ScheduleRunConfiguration m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
