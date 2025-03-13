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
    AWS_DEVICEFARM_API Job() = default;
    AWS_DEVICEFARM_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Job& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Job& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline TestType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TestType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Job& WithType(TestType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    Job& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Job& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline ExecutionResult GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(ExecutionResult value) { m_resultHasBeenSet = true; m_result = value; }
    inline Job& WithResult(ExecutionResult value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const { return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    template<typename StartedT = Aws::Utils::DateTime>
    void SetStarted(StartedT&& value) { m_startedHasBeenSet = true; m_started = std::forward<StartedT>(value); }
    template<typename StartedT = Aws::Utils::DateTime>
    Job& WithStarted(StartedT&& value) { SetStarted(std::forward<StartedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const { return m_stopped; }
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
    template<typename StoppedT = Aws::Utils::DateTime>
    void SetStopped(StoppedT&& value) { m_stoppedHasBeenSet = true; m_stopped = std::forward<StoppedT>(value); }
    template<typename StoppedT = Aws::Utils::DateTime>
    Job& WithStopped(StoppedT&& value) { SetStopped(std::forward<StoppedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's result counters.</p>
     */
    inline const Counters& GetCounters() const { return m_counters; }
    inline bool CountersHasBeenSet() const { return m_countersHasBeenSet; }
    template<typename CountersT = Counters>
    void SetCounters(CountersT&& value) { m_countersHasBeenSet = true; m_counters = std::forward<CountersT>(value); }
    template<typename CountersT = Counters>
    Job& WithCounters(CountersT&& value) { SetCounters(std::forward<CountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the job's result.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Job& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device (phone or tablet).</p>
     */
    inline const Device& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Device>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Device>
    Job& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    Job& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the total (metered or unmetered) minutes used by the job.</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const { return m_deviceMinutes; }
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }
    template<typename DeviceMinutesT = DeviceMinutes>
    void SetDeviceMinutes(DeviceMinutesT&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::forward<DeviceMinutesT>(value); }
    template<typename DeviceMinutesT = DeviceMinutes>
    Job& WithDeviceMinutes(DeviceMinutesT&& value) { SetDeviceMinutes(std::forward<DeviceMinutesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for streaming device video.</p>
     */
    inline const Aws::String& GetVideoEndpoint() const { return m_videoEndpoint; }
    inline bool VideoEndpointHasBeenSet() const { return m_videoEndpointHasBeenSet; }
    template<typename VideoEndpointT = Aws::String>
    void SetVideoEndpoint(VideoEndpointT&& value) { m_videoEndpointHasBeenSet = true; m_videoEndpoint = std::forward<VideoEndpointT>(value); }
    template<typename VideoEndpointT = Aws::String>
    Job& WithVideoEndpoint(VideoEndpointT&& value) { SetVideoEndpoint(std::forward<VideoEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is set to true if video capture is enabled. Otherwise, it is set
     * to false.</p>
     */
    inline bool GetVideoCapture() const { return m_videoCapture; }
    inline bool VideoCaptureHasBeenSet() const { return m_videoCaptureHasBeenSet; }
    inline void SetVideoCapture(bool value) { m_videoCaptureHasBeenSet = true; m_videoCapture = value; }
    inline Job& WithVideoCapture(bool value) { SetVideoCapture(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TestType m_type{TestType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ExecutionResult m_result{ExecutionResult::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::Utils::DateTime m_started{};
    bool m_startedHasBeenSet = false;

    Aws::Utils::DateTime m_stopped{};
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

    bool m_videoCapture{false};
    bool m_videoCaptureHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
