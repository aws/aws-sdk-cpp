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
  class AWS_DEVICEFARM_API ScheduleRunRequest : public DeviceFarmRequest
  {
  public:
    ScheduleRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ScheduleRun"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the project for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>The ARN of the app to schedule a run.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The ARN of the app to schedule a run.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The ARN of the app to schedule a run.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The ARN of the app to schedule a run.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The ARN of the app to schedule a run.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The ARN of the app to schedule a run.</p>
     */
    inline ScheduleRunRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The ARN of the app to schedule a run.</p>
     */
    inline ScheduleRunRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app to schedule a run.</p>
     */
    inline ScheduleRunRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline const Aws::String& GetDevicePoolArn() const{ return m_devicePoolArn; }

    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline bool DevicePoolArnHasBeenSet() const { return m_devicePoolArnHasBeenSet; }

    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline void SetDevicePoolArn(const Aws::String& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = value; }

    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline void SetDevicePoolArn(Aws::String&& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = std::move(value); }

    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline void SetDevicePoolArn(const char* value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn.assign(value); }

    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithDevicePoolArn(const Aws::String& value) { SetDevicePoolArn(value); return *this;}

    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithDevicePoolArn(Aws::String&& value) { SetDevicePoolArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device pool for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithDevicePoolArn(const char* value) { SetDevicePoolArn(value); return *this;}


    /**
     * <p>The filter criteria used to dynamically select a set of devices for a test
     * run, as well as the maximum number of devices to be included in the run.</p>
     * <p>Either <b> <code>devicePoolArn</code> </b> or <b>
     * <code>deviceSelectionConfiguration</code> </b> is required in a request.</p>
     */
    inline const DeviceSelectionConfiguration& GetDeviceSelectionConfiguration() const{ return m_deviceSelectionConfiguration; }

    /**
     * <p>The filter criteria used to dynamically select a set of devices for a test
     * run, as well as the maximum number of devices to be included in the run.</p>
     * <p>Either <b> <code>devicePoolArn</code> </b> or <b>
     * <code>deviceSelectionConfiguration</code> </b> is required in a request.</p>
     */
    inline bool DeviceSelectionConfigurationHasBeenSet() const { return m_deviceSelectionConfigurationHasBeenSet; }

    /**
     * <p>The filter criteria used to dynamically select a set of devices for a test
     * run, as well as the maximum number of devices to be included in the run.</p>
     * <p>Either <b> <code>devicePoolArn</code> </b> or <b>
     * <code>deviceSelectionConfiguration</code> </b> is required in a request.</p>
     */
    inline void SetDeviceSelectionConfiguration(const DeviceSelectionConfiguration& value) { m_deviceSelectionConfigurationHasBeenSet = true; m_deviceSelectionConfiguration = value; }

    /**
     * <p>The filter criteria used to dynamically select a set of devices for a test
     * run, as well as the maximum number of devices to be included in the run.</p>
     * <p>Either <b> <code>devicePoolArn</code> </b> or <b>
     * <code>deviceSelectionConfiguration</code> </b> is required in a request.</p>
     */
    inline void SetDeviceSelectionConfiguration(DeviceSelectionConfiguration&& value) { m_deviceSelectionConfigurationHasBeenSet = true; m_deviceSelectionConfiguration = std::move(value); }

    /**
     * <p>The filter criteria used to dynamically select a set of devices for a test
     * run, as well as the maximum number of devices to be included in the run.</p>
     * <p>Either <b> <code>devicePoolArn</code> </b> or <b>
     * <code>deviceSelectionConfiguration</code> </b> is required in a request.</p>
     */
    inline ScheduleRunRequest& WithDeviceSelectionConfiguration(const DeviceSelectionConfiguration& value) { SetDeviceSelectionConfiguration(value); return *this;}

    /**
     * <p>The filter criteria used to dynamically select a set of devices for a test
     * run, as well as the maximum number of devices to be included in the run.</p>
     * <p>Either <b> <code>devicePoolArn</code> </b> or <b>
     * <code>deviceSelectionConfiguration</code> </b> is required in a request.</p>
     */
    inline ScheduleRunRequest& WithDeviceSelectionConfiguration(DeviceSelectionConfiguration&& value) { SetDeviceSelectionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the test for the run to be scheduled.</p>
     */
    inline const ScheduleRunTest& GetTest() const{ return m_test; }

    /**
     * <p>Information about the test for the run to be scheduled.</p>
     */
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }

    /**
     * <p>Information about the test for the run to be scheduled.</p>
     */
    inline void SetTest(const ScheduleRunTest& value) { m_testHasBeenSet = true; m_test = value; }

    /**
     * <p>Information about the test for the run to be scheduled.</p>
     */
    inline void SetTest(ScheduleRunTest&& value) { m_testHasBeenSet = true; m_test = std::move(value); }

    /**
     * <p>Information about the test for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithTest(const ScheduleRunTest& value) { SetTest(value); return *this;}

    /**
     * <p>Information about the test for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithTest(ScheduleRunTest&& value) { SetTest(std::move(value)); return *this;}


    /**
     * <p>Information about the settings for the run to be scheduled.</p>
     */
    inline const ScheduleRunConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Information about the settings for the run to be scheduled.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Information about the settings for the run to be scheduled.</p>
     */
    inline void SetConfiguration(const ScheduleRunConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Information about the settings for the run to be scheduled.</p>
     */
    inline void SetConfiguration(ScheduleRunConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Information about the settings for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithConfiguration(const ScheduleRunConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Information about the settings for the run to be scheduled.</p>
     */
    inline ScheduleRunRequest& WithConfiguration(ScheduleRunConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies configuration information about a test run, such as the execution
     * timeout (in minutes).</p>
     */
    inline const ExecutionConfiguration& GetExecutionConfiguration() const{ return m_executionConfiguration; }

    /**
     * <p>Specifies configuration information about a test run, such as the execution
     * timeout (in minutes).</p>
     */
    inline bool ExecutionConfigurationHasBeenSet() const { return m_executionConfigurationHasBeenSet; }

    /**
     * <p>Specifies configuration information about a test run, such as the execution
     * timeout (in minutes).</p>
     */
    inline void SetExecutionConfiguration(const ExecutionConfiguration& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = value; }

    /**
     * <p>Specifies configuration information about a test run, such as the execution
     * timeout (in minutes).</p>
     */
    inline void SetExecutionConfiguration(ExecutionConfiguration&& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = std::move(value); }

    /**
     * <p>Specifies configuration information about a test run, such as the execution
     * timeout (in minutes).</p>
     */
    inline ScheduleRunRequest& WithExecutionConfiguration(const ExecutionConfiguration& value) { SetExecutionConfiguration(value); return *this;}

    /**
     * <p>Specifies configuration information about a test run, such as the execution
     * timeout (in minutes).</p>
     */
    inline ScheduleRunRequest& WithExecutionConfiguration(ExecutionConfiguration&& value) { SetExecutionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet;

    Aws::String m_devicePoolArn;
    bool m_devicePoolArnHasBeenSet;

    DeviceSelectionConfiguration m_deviceSelectionConfiguration;
    bool m_deviceSelectionConfigurationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ScheduleRunTest m_test;
    bool m_testHasBeenSet;

    ScheduleRunConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    ExecutionConfiguration m_executionConfiguration;
    bool m_executionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
