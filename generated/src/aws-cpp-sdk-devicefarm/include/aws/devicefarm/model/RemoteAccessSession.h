/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/ExecutionStatus.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/devicefarm/model/Device.h>
#include <aws/devicefarm/model/BillingMethod.h>
#include <aws/devicefarm/model/DeviceMinutes.h>
#include <aws/devicefarm/model/InteractionMode.h>
#include <aws/devicefarm/model/VpcConfig.h>
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
   * <p>Represents information about the remote access session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RemoteAccessSession">AWS
   * API Reference</a></p>
   */
  class RemoteAccessSession
  {
  public:
    AWS_DEVICEFARM_API RemoteAccessSession();
    AWS_DEVICEFARM_API RemoteAccessSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API RemoteAccessSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RemoteAccessSession& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RemoteAccessSession& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RemoteAccessSession& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the remote access session.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RemoteAccessSession& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RemoteAccessSession& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RemoteAccessSession& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline RemoteAccessSession& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline RemoteAccessSession& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING.</p> </li> <li> <p>PENDING_CONCURRENCY.</p> </li> <li>
     * <p>PENDING_DEVICE.</p> </li> <li> <p>PROCESSING.</p> </li> <li>
     * <p>SCHEDULING.</p> </li> <li> <p>PREPARING.</p> </li> <li> <p>RUNNING.</p> </li>
     * <li> <p>COMPLETED.</p> </li> <li> <p>STOPPING.</p> </li> </ul>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RemoteAccessSession& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}
    inline RemoteAccessSession& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING.</p> </li> <li> <p>PASSED.</p> </li> <li> <p>WARNED.</p>
     * </li> <li> <p>FAILED.</p> </li> <li> <p>SKIPPED.</p> </li> <li> <p>ERRORED.</p>
     * </li> <li> <p>STOPPED.</p> </li> </ul>
     */
    inline const ExecutionResult& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const ExecutionResult& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline RemoteAccessSession& WithResult(const ExecutionResult& value) { SetResult(value); return *this;}
    inline RemoteAccessSession& WithResult(ExecutionResult&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the remote access session.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline RemoteAccessSession& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline RemoteAccessSession& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline RemoteAccessSession& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = std::move(value); }
    inline RemoteAccessSession& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}
    inline RemoteAccessSession& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const{ return m_stopped; }
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
    inline void SetStopped(const Aws::Utils::DateTime& value) { m_stoppedHasBeenSet = true; m_stopped = value; }
    inline void SetStopped(Aws::Utils::DateTime&& value) { m_stoppedHasBeenSet = true; m_stopped = std::move(value); }
    inline RemoteAccessSession& WithStopped(const Aws::Utils::DateTime& value) { SetStopped(value); return *this;}
    inline RemoteAccessSession& WithStopped(Aws::Utils::DateTime&& value) { SetStopped(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device (phone or tablet) used in the remote access session.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    inline void SetDevice(const Device& value) { m_deviceHasBeenSet = true; m_device = value; }
    inline void SetDevice(Device&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }
    inline RemoteAccessSession& WithDevice(const Device& value) { SetDevice(value); return *this;}
    inline RemoteAccessSession& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}
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
    inline RemoteAccessSession& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline RemoteAccessSession& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline RemoteAccessSession& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag is set to <code>true</code> if remote debugging is enabled for the
     * remote access session.</p> <p>Remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline bool GetRemoteDebugEnabled() const{ return m_remoteDebugEnabled; }
    inline bool RemoteDebugEnabledHasBeenSet() const { return m_remoteDebugEnabledHasBeenSet; }
    inline void SetRemoteDebugEnabled(bool value) { m_remoteDebugEnabledHasBeenSet = true; m_remoteDebugEnabled = value; }
    inline RemoteAccessSession& WithRemoteDebugEnabled(bool value) { SetRemoteDebugEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag is set to <code>true</code> if remote recording is enabled for the
     * remote access session.</p>
     */
    inline bool GetRemoteRecordEnabled() const{ return m_remoteRecordEnabled; }
    inline bool RemoteRecordEnabledHasBeenSet() const { return m_remoteRecordEnabledHasBeenSet; }
    inline void SetRemoteRecordEnabled(bool value) { m_remoteRecordEnabledHasBeenSet = true; m_remoteRecordEnabled = value; }
    inline RemoteAccessSession& WithRemoteRecordEnabled(bool value) { SetRemoteRecordEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the app to be recorded in the remote access session.</p>
     */
    inline const Aws::String& GetRemoteRecordAppArn() const{ return m_remoteRecordAppArn; }
    inline bool RemoteRecordAppArnHasBeenSet() const { return m_remoteRecordAppArnHasBeenSet; }
    inline void SetRemoteRecordAppArn(const Aws::String& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = value; }
    inline void SetRemoteRecordAppArn(Aws::String&& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = std::move(value); }
    inline void SetRemoteRecordAppArn(const char* value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn.assign(value); }
    inline RemoteAccessSession& WithRemoteRecordAppArn(const Aws::String& value) { SetRemoteRecordAppArn(value); return *this;}
    inline RemoteAccessSession& WithRemoteRecordAppArn(Aws::String&& value) { SetRemoteRecordAppArn(std::move(value)); return *this;}
    inline RemoteAccessSession& WithRemoteRecordAppArn(const char* value) { SetRemoteRecordAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p> <p>Remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline const Aws::String& GetHostAddress() const{ return m_hostAddress; }
    inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }
    inline void SetHostAddress(const Aws::String& value) { m_hostAddressHasBeenSet = true; m_hostAddress = value; }
    inline void SetHostAddress(Aws::String&& value) { m_hostAddressHasBeenSet = true; m_hostAddress = std::move(value); }
    inline void SetHostAddress(const char* value) { m_hostAddressHasBeenSet = true; m_hostAddress.assign(value); }
    inline RemoteAccessSession& WithHostAddress(const Aws::String& value) { SetHostAddress(value); return *this;}
    inline RemoteAccessSession& WithHostAddress(Aws::String&& value) { SetHostAddress(std::move(value)); return *this;}
    inline RemoteAccessSession& WithHostAddress(const char* value) { SetHostAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p> <p>Remote
     * debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline RemoteAccessSession& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline RemoteAccessSession& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline RemoteAccessSession& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>.</p>
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = std::move(value); }
    inline RemoteAccessSession& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}
    inline RemoteAccessSession& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a device is used in a remote access session (including
     * setup and teardown minutes).</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const{ return m_deviceMinutes; }
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }
    inline void SetDeviceMinutes(const DeviceMinutes& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }
    inline void SetDeviceMinutes(DeviceMinutes&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::move(value); }
    inline RemoteAccessSession& WithDeviceMinutes(const DeviceMinutes& value) { SetDeviceMinutes(value); return *this;}
    inline RemoteAccessSession& WithDeviceMinutes(DeviceMinutes&& value) { SetDeviceMinutes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline RemoteAccessSession& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline RemoteAccessSession& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline RemoteAccessSession& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p> <p>Remote debugging is
     * <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline const Aws::String& GetDeviceUdid() const{ return m_deviceUdid; }
    inline bool DeviceUdidHasBeenSet() const { return m_deviceUdidHasBeenSet; }
    inline void SetDeviceUdid(const Aws::String& value) { m_deviceUdidHasBeenSet = true; m_deviceUdid = value; }
    inline void SetDeviceUdid(Aws::String&& value) { m_deviceUdidHasBeenSet = true; m_deviceUdid = std::move(value); }
    inline void SetDeviceUdid(const char* value) { m_deviceUdidHasBeenSet = true; m_deviceUdid.assign(value); }
    inline RemoteAccessSession& WithDeviceUdid(const Aws::String& value) { SetDeviceUdid(value); return *this;}
    inline RemoteAccessSession& WithDeviceUdid(Aws::String&& value) { SetDeviceUdid(std::move(value)); return *this;}
    inline RemoteAccessSession& WithDeviceUdid(const char* value) { SetDeviceUdid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You cannot run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device, but cannot
     * interact with it or view the screen. This mode has the fastest test execution
     * speed. You can run XCUITest framework-based tests in this mode.</p> </li> <li>
     * <p>VIDEO_ONLY: You can view the screen, but cannot touch or rotate it. You can
     * run XCUITest framework-based tests and watch the screen in this mode.</p> </li>
     * </ul>
     */
    inline const InteractionMode& GetInteractionMode() const{ return m_interactionMode; }
    inline bool InteractionModeHasBeenSet() const { return m_interactionModeHasBeenSet; }
    inline void SetInteractionMode(const InteractionMode& value) { m_interactionModeHasBeenSet = true; m_interactionMode = value; }
    inline void SetInteractionMode(InteractionMode&& value) { m_interactionModeHasBeenSet = true; m_interactionMode = std::move(value); }
    inline RemoteAccessSession& WithInteractionMode(const InteractionMode& value) { SetInteractionMode(value); return *this;}
    inline RemoteAccessSession& WithInteractionMode(InteractionMode&& value) { SetInteractionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const{ return m_skipAppResign; }
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }
    inline RemoteAccessSession& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline RemoteAccessSession& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline RemoteAccessSession& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    ExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    ExecutionResult m_result;
    bool m_resultHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_started;
    bool m_startedHasBeenSet = false;

    Aws::Utils::DateTime m_stopped;
    bool m_stoppedHasBeenSet = false;

    Device m_device;
    bool m_deviceHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    bool m_remoteDebugEnabled;
    bool m_remoteDebugEnabledHasBeenSet = false;

    bool m_remoteRecordEnabled;
    bool m_remoteRecordEnabledHasBeenSet = false;

    Aws::String m_remoteRecordAppArn;
    bool m_remoteRecordAppArnHasBeenSet = false;

    Aws::String m_hostAddress;
    bool m_hostAddressHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    BillingMethod m_billingMethod;
    bool m_billingMethodHasBeenSet = false;

    DeviceMinutes m_deviceMinutes;
    bool m_deviceMinutesHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_deviceUdid;
    bool m_deviceUdidHasBeenSet = false;

    InteractionMode m_interactionMode;
    bool m_interactionModeHasBeenSet = false;

    bool m_skipAppResign;
    bool m_skipAppResignHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
