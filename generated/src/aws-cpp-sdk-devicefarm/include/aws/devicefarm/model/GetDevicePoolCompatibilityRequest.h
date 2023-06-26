/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDevicePoolCompatibilityRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API GetDevicePoolCompatibilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevicePoolCompatibility"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ.</p> </li> <li>
     * <p>BUILTIN_EXPLORER. For Android, an app explorer that traverses an Android app,
     * interacting with it and capturing screenshots at the same time.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT.</p> </li> <li> <p>APPIUM_JAVA_TESTNG.</p> </li> <li>
     * <p>APPIUM_PYTHON.</p> </li> <li> <p>APPIUM_NODE.</p> </li> <li>
     * <p>APPIUM_RUBY.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG.</p> </li> <li> <p>APPIUM_WEB_PYTHON.</p> </li> <li>
     * <p>APPIUM_WEB_NODE.</p> </li> <li> <p>APPIUM_WEB_RUBY.</p> </li> <li>
     * <p>CALABASH.</p> </li> <li> <p>INSTRUMENTATION.</p> </li> <li>
     * <p>UIAUTOMATION.</p> </li> <li> <p>UIAUTOMATOR.</p> </li> <li> <p>XCTEST.</p>
     * </li> <li> <p>XCTEST_UI.</p> </li> </ul>
     */
    inline const TestType& GetTestType() const{ return m_testType; }

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ.</p> </li> <li>
     * <p>BUILTIN_EXPLORER. For Android, an app explorer that traverses an Android app,
     * interacting with it and capturing screenshots at the same time.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT.</p> </li> <li> <p>APPIUM_JAVA_TESTNG.</p> </li> <li>
     * <p>APPIUM_PYTHON.</p> </li> <li> <p>APPIUM_NODE.</p> </li> <li>
     * <p>APPIUM_RUBY.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG.</p> </li> <li> <p>APPIUM_WEB_PYTHON.</p> </li> <li>
     * <p>APPIUM_WEB_NODE.</p> </li> <li> <p>APPIUM_WEB_RUBY.</p> </li> <li>
     * <p>CALABASH.</p> </li> <li> <p>INSTRUMENTATION.</p> </li> <li>
     * <p>UIAUTOMATION.</p> </li> <li> <p>UIAUTOMATOR.</p> </li> <li> <p>XCTEST.</p>
     * </li> <li> <p>XCTEST_UI.</p> </li> </ul>
     */
    inline bool TestTypeHasBeenSet() const { return m_testTypeHasBeenSet; }

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ.</p> </li> <li>
     * <p>BUILTIN_EXPLORER. For Android, an app explorer that traverses an Android app,
     * interacting with it and capturing screenshots at the same time.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT.</p> </li> <li> <p>APPIUM_JAVA_TESTNG.</p> </li> <li>
     * <p>APPIUM_PYTHON.</p> </li> <li> <p>APPIUM_NODE.</p> </li> <li>
     * <p>APPIUM_RUBY.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG.</p> </li> <li> <p>APPIUM_WEB_PYTHON.</p> </li> <li>
     * <p>APPIUM_WEB_NODE.</p> </li> <li> <p>APPIUM_WEB_RUBY.</p> </li> <li>
     * <p>CALABASH.</p> </li> <li> <p>INSTRUMENTATION.</p> </li> <li>
     * <p>UIAUTOMATION.</p> </li> <li> <p>UIAUTOMATOR.</p> </li> <li> <p>XCTEST.</p>
     * </li> <li> <p>XCTEST_UI.</p> </li> </ul>
     */
    inline void SetTestType(const TestType& value) { m_testTypeHasBeenSet = true; m_testType = value; }

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ.</p> </li> <li>
     * <p>BUILTIN_EXPLORER. For Android, an app explorer that traverses an Android app,
     * interacting with it and capturing screenshots at the same time.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT.</p> </li> <li> <p>APPIUM_JAVA_TESTNG.</p> </li> <li>
     * <p>APPIUM_PYTHON.</p> </li> <li> <p>APPIUM_NODE.</p> </li> <li>
     * <p>APPIUM_RUBY.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG.</p> </li> <li> <p>APPIUM_WEB_PYTHON.</p> </li> <li>
     * <p>APPIUM_WEB_NODE.</p> </li> <li> <p>APPIUM_WEB_RUBY.</p> </li> <li>
     * <p>CALABASH.</p> </li> <li> <p>INSTRUMENTATION.</p> </li> <li>
     * <p>UIAUTOMATION.</p> </li> <li> <p>UIAUTOMATOR.</p> </li> <li> <p>XCTEST.</p>
     * </li> <li> <p>XCTEST_UI.</p> </li> </ul>
     */
    inline void SetTestType(TestType&& value) { m_testTypeHasBeenSet = true; m_testType = std::move(value); }

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ.</p> </li> <li>
     * <p>BUILTIN_EXPLORER. For Android, an app explorer that traverses an Android app,
     * interacting with it and capturing screenshots at the same time.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT.</p> </li> <li> <p>APPIUM_JAVA_TESTNG.</p> </li> <li>
     * <p>APPIUM_PYTHON.</p> </li> <li> <p>APPIUM_NODE.</p> </li> <li>
     * <p>APPIUM_RUBY.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG.</p> </li> <li> <p>APPIUM_WEB_PYTHON.</p> </li> <li>
     * <p>APPIUM_WEB_NODE.</p> </li> <li> <p>APPIUM_WEB_RUBY.</p> </li> <li>
     * <p>CALABASH.</p> </li> <li> <p>INSTRUMENTATION.</p> </li> <li>
     * <p>UIAUTOMATION.</p> </li> <li> <p>UIAUTOMATOR.</p> </li> <li> <p>XCTEST.</p>
     * </li> <li> <p>XCTEST_UI.</p> </li> </ul>
     */
    inline GetDevicePoolCompatibilityRequest& WithTestType(const TestType& value) { SetTestType(value); return *this;}

    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ.</p> </li> <li>
     * <p>BUILTIN_EXPLORER. For Android, an app explorer that traverses an Android app,
     * interacting with it and capturing screenshots at the same time.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT.</p> </li> <li> <p>APPIUM_JAVA_TESTNG.</p> </li> <li>
     * <p>APPIUM_PYTHON.</p> </li> <li> <p>APPIUM_NODE.</p> </li> <li>
     * <p>APPIUM_RUBY.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG.</p> </li> <li> <p>APPIUM_WEB_PYTHON.</p> </li> <li>
     * <p>APPIUM_WEB_NODE.</p> </li> <li> <p>APPIUM_WEB_RUBY.</p> </li> <li>
     * <p>CALABASH.</p> </li> <li> <p>INSTRUMENTATION.</p> </li> <li>
     * <p>UIAUTOMATION.</p> </li> <li> <p>UIAUTOMATOR.</p> </li> <li> <p>XCTEST.</p>
     * </li> <li> <p>XCTEST_UI.</p> </li> </ul>
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
     * <p>An object that contains information about the settings for a run.</p>
     */
    inline const ScheduleRunConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>An object that contains information about the settings for a run.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>An object that contains information about the settings for a run.</p>
     */
    inline void SetConfiguration(const ScheduleRunConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>An object that contains information about the settings for a run.</p>
     */
    inline void SetConfiguration(ScheduleRunConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>An object that contains information about the settings for a run.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithConfiguration(const ScheduleRunConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>An object that contains information about the settings for a run.</p>
     */
    inline GetDevicePoolCompatibilityRequest& WithConfiguration(ScheduleRunConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_devicePoolArn;
    bool m_devicePoolArnHasBeenSet = false;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    TestType m_testType;
    bool m_testTypeHasBeenSet = false;

    ScheduleRunTest m_test;
    bool m_testHasBeenSet = false;

    ScheduleRunConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
