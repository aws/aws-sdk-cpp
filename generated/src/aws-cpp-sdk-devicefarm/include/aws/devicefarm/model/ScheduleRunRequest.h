/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DeviceSelectionConfiguration.h>
#include <aws/devicefarm/model/ScheduleRunTest.h>
#include <aws/devicefarm/model/ScheduleRunConfiguration.h>
#include <aws/devicefarm/model/ExecutionConfiguration.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the schedule run operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRunRequest">AWS
   * API Reference</a></p>
   */
  class ScheduleRunRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API ScheduleRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ScheduleRun"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    ScheduleRunRequest& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an application package to run tests against, created with
     * <a>CreateUpload</a>. See <a>ListUploads</a>.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    ScheduleRunRequest& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline const Aws::String& GetDevicePoolArn() const { return m_devicePoolArn; }
    inline bool DevicePoolArnHasBeenSet() const { return m_devicePoolArnHasBeenSet; }
    template<typename DevicePoolArnT = Aws::String>
    void SetDevicePoolArn(DevicePoolArnT&& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = std::forward<DevicePoolArnT>(value); }
    template<typename DevicePoolArnT = Aws::String>
    ScheduleRunRequest& WithDevicePoolArn(DevicePoolArnT&& value) { SetDevicePoolArn(std::forward<DevicePoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter criteria used to dynamically select a set of devices for a test
     * run and the maximum number of devices to be included in the run.</p> <p>Either
     * <b> <code>devicePoolArn</code> </b> or <b>
     * <code>deviceSelectionConfiguration</code> </b> is required in a request.</p>
     */
    inline const DeviceSelectionConfiguration& GetDeviceSelectionConfiguration() const { return m_deviceSelectionConfiguration; }
    inline bool DeviceSelectionConfigurationHasBeenSet() const { return m_deviceSelectionConfigurationHasBeenSet; }
    template<typename DeviceSelectionConfigurationT = DeviceSelectionConfiguration>
    void SetDeviceSelectionConfiguration(DeviceSelectionConfigurationT&& value) { m_deviceSelectionConfigurationHasBeenSet = true; m_deviceSelectionConfiguration = std::forward<DeviceSelectionConfigurationT>(value); }
    template<typename DeviceSelectionConfigurationT = DeviceSelectionConfiguration>
    ScheduleRunRequest& WithDeviceSelectionConfiguration(DeviceSelectionConfigurationT&& value) { SetDeviceSelectionConfiguration(std::forward<DeviceSelectionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScheduleRunRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the test for the run to be scheduled.</p>
     */
    inline const ScheduleRunTest& GetTest() const { return m_test; }
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }
    template<typename TestT = ScheduleRunTest>
    void SetTest(TestT&& value) { m_testHasBeenSet = true; m_test = std::forward<TestT>(value); }
    template<typename TestT = ScheduleRunTest>
    ScheduleRunRequest& WithTest(TestT&& value) { SetTest(std::forward<TestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the settings for the run to be scheduled.</p>
     */
    inline const ScheduleRunConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ScheduleRunConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ScheduleRunConfiguration>
    ScheduleRunRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration information about a test run, such as the execution
     * timeout (in minutes).</p>
     */
    inline const ExecutionConfiguration& GetExecutionConfiguration() const { return m_executionConfiguration; }
    inline bool ExecutionConfigurationHasBeenSet() const { return m_executionConfigurationHasBeenSet; }
    template<typename ExecutionConfigurationT = ExecutionConfiguration>
    void SetExecutionConfiguration(ExecutionConfigurationT&& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = std::forward<ExecutionConfigurationT>(value); }
    template<typename ExecutionConfigurationT = ExecutionConfiguration>
    ScheduleRunRequest& WithExecutionConfiguration(ExecutionConfigurationT&& value) { SetExecutionConfiguration(std::forward<ExecutionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_devicePoolArn;
    bool m_devicePoolArnHasBeenSet = false;

    DeviceSelectionConfiguration m_deviceSelectionConfiguration;
    bool m_deviceSelectionConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleRunTest m_test;
    bool m_testHasBeenSet = false;

    ScheduleRunConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ExecutionConfiguration m_executionConfiguration;
    bool m_executionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
