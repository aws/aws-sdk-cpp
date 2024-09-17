/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/ExecutionStatus.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/devicefarm/model/Counters.h>
#include <aws/devicefarm/model/Device.h>
#include <aws/devicefarm/model/DeviceMinutes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Job">AWS API
   * Reference</a></p>
   */
  class Job
  {
  public:
    AWS_DEVICEFARM_API Job();
    AWS_DEVICEFARM_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Job& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Job& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Job& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Job& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Job& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Job& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's type.</p> <p>Allowed values include the following:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>APPIUM_JAVA_JUNIT</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>INSTRUMENTATION</p> </li> <li>
     * <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li> </ul>
     */
    inline const TestType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TestType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TestType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Job& WithType(const TestType& value) { SetType(value); return *this;}
    inline Job& WithType(TestType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline Job& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline Job& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Job& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}
    inline Job& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline const ExecutionResult& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const ExecutionResult& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline Job& WithResult(const ExecutionResult& value) { SetResult(value); return *this;}
    inline Job& WithResult(ExecutionResult&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = std::move(value); }
    inline Job& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}
    inline Job& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const{ return m_stopped; }
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
    inline void SetStopped(const Aws::Utils::DateTime& value) { m_stoppedHasBeenSet = true; m_stopped = value; }
    inline void SetStopped(Aws::Utils::DateTime&& value) { m_stoppedHasBeenSet = true; m_stopped = std::move(value); }
    inline Job& WithStopped(const Aws::Utils::DateTime& value) { SetStopped(value); return *this;}
    inline Job& WithStopped(Aws::Utils::DateTime&& value) { SetStopped(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's result counters.</p>
     */
    inline const Counters& GetCounters() const{ return m_counters; }
    inline bool CountersHasBeenSet() const { return m_countersHasBeenSet; }
    inline void SetCounters(const Counters& value) { m_countersHasBeenSet = true; m_counters = value; }
    inline void SetCounters(Counters&& value) { m_countersHasBeenSet = true; m_counters = std::move(value); }
    inline Job& WithCounters(const Counters& value) { SetCounters(value); return *this;}
    inline Job& WithCounters(Counters&& value) { SetCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the job's result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline Job& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline Job& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline Job& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device (phone or tablet).</p>
     */
    inline const Device& GetDevice() const{ return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    inline void SetDevice(const Device& value) { m_deviceHasBeenSet = true; m_device = value; }
    inline void SetDevice(Device&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }
    inline Job& WithDevice(const Device& value) { SetDevice(value); return *this;}
    inline Job& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline Job& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline Job& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline Job& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the total (metered or unmetered) minutes used by the job.</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const{ return m_deviceMinutes; }
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }
    inline void SetDeviceMinutes(const DeviceMinutes& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }
    inline void SetDeviceMinutes(DeviceMinutes&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::move(value); }
    inline Job& WithDeviceMinutes(const DeviceMinutes& value) { SetDeviceMinutes(value); return *this;}
    inline Job& WithDeviceMinutes(DeviceMinutes&& value) { SetDeviceMinutes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for streaming device video.</p>
     */
    inline const Aws::String& GetVideoEndpoint() const{ return m_videoEndpoint; }
    inline bool VideoEndpointHasBeenSet() const { return m_videoEndpointHasBeenSet; }
    inline void SetVideoEndpoint(const Aws::String& value) { m_videoEndpointHasBeenSet = true; m_videoEndpoint = value; }
    inline void SetVideoEndpoint(Aws::String&& value) { m_videoEndpointHasBeenSet = true; m_videoEndpoint = std::move(value); }
    inline void SetVideoEndpoint(const char* value) { m_videoEndpointHasBeenSet = true; m_videoEndpoint.assign(value); }
    inline Job& WithVideoEndpoint(const Aws::String& value) { SetVideoEndpoint(value); return *this;}
    inline Job& WithVideoEndpoint(Aws::String&& value) { SetVideoEndpoint(std::move(value)); return *this;}
    inline Job& WithVideoEndpoint(const char* value) { SetVideoEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is set to true if video capture is enabled. Otherwise, it is set
     * to false.</p>
     */
    inline bool GetVideoCapture() const{ return m_videoCapture; }
    inline bool VideoCaptureHasBeenSet() const { return m_videoCaptureHasBeenSet; }
    inline void SetVideoCapture(bool value) { m_videoCaptureHasBeenSet = true; m_videoCapture = value; }
    inline Job& WithVideoCapture(bool value) { SetVideoCapture(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TestType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    ExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    ExecutionResult m_result;
    bool m_resultHasBeenSet = false;

    Aws::Utils::DateTime m_started;
    bool m_startedHasBeenSet = false;

    Aws::Utils::DateTime m_stopped;
    bool m_stoppedHasBeenSet = false;

    Counters m_counters;
    bool m_countersHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Device m_device;
    bool m_deviceHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    DeviceMinutes m_deviceMinutes;
    bool m_deviceMinutesHasBeenSet = false;

    Aws::String m_videoEndpoint;
    bool m_videoEndpointHasBeenSet = false;

    bool m_videoCapture;
    bool m_videoCaptureHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
