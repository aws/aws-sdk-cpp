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
    AWS_DEVICEFARM_API GetDevicePoolCompatibilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevicePoolCompatibility"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The device pool's ARN.</p>
     */
    inline const Aws::String& GetDevicePoolArn() const { return m_devicePoolArn; }
    inline bool DevicePoolArnHasBeenSet() const { return m_devicePoolArnHasBeenSet; }
    template<typename DevicePoolArnT = Aws::String>
    void SetDevicePoolArn(DevicePoolArnT&& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = std::forward<DevicePoolArnT>(value); }
    template<typename DevicePoolArnT = Aws::String>
    GetDevicePoolCompatibilityRequest& WithDevicePoolArn(DevicePoolArnT&& value) { SetDevicePoolArn(std::forward<DevicePoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the app that is associated with the specified device pool.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    GetDevicePoolCompatibilityRequest& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test type for the specified device pool.</p> <p>Allowed values include
     * the following:</p> <ul> <li> <p>BUILTIN_FUZZ.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT.</p> </li> <li> <p>APPIUM_JAVA_TESTNG.</p> </li> <li>
     * <p>APPIUM_PYTHON.</p> </li> <li> <p>APPIUM_NODE.</p> </li> <li>
     * <p>APPIUM_RUBY.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG.</p> </li> <li> <p>APPIUM_WEB_PYTHON.</p> </li> <li>
     * <p>APPIUM_WEB_NODE.</p> </li> <li> <p>APPIUM_WEB_RUBY.</p> </li> <li>
     * <p>INSTRUMENTATION.</p> </li> <li> <p>XCTEST.</p> </li> <li> <p>XCTEST_UI.</p>
     * </li> </ul>
     */
    inline TestType GetTestType() const { return m_testType; }
    inline bool TestTypeHasBeenSet() const { return m_testTypeHasBeenSet; }
    inline void SetTestType(TestType value) { m_testTypeHasBeenSet = true; m_testType = value; }
    inline GetDevicePoolCompatibilityRequest& WithTestType(TestType value) { SetTestType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the uploaded test to be run against the device pool.</p>
     */
    inline const ScheduleRunTest& GetTest() const { return m_test; }
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }
    template<typename TestT = ScheduleRunTest>
    void SetTest(TestT&& value) { m_testHasBeenSet = true; m_test = std::forward<TestT>(value); }
    template<typename TestT = ScheduleRunTest>
    GetDevicePoolCompatibilityRequest& WithTest(TestT&& value) { SetTest(std::forward<TestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the settings for a run.</p>
     */
    inline const ScheduleRunConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ScheduleRunConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ScheduleRunConfiguration>
    GetDevicePoolCompatibilityRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the project for which you want to check device pool
     * compatibility.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    GetDevicePoolCompatibilityRequest& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_devicePoolArn;
    bool m_devicePoolArnHasBeenSet = false;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    TestType m_testType{TestType::NOT_SET};
    bool m_testTypeHasBeenSet = false;

    ScheduleRunTest m_test;
    bool m_testHasBeenSet = false;

    ScheduleRunConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
