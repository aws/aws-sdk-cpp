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
#include <aws/devicefarm/model/DeviceProxy.h>
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
    AWS_DEVICEFARM_API RemoteAccessSession() = default;
    AWS_DEVICEFARM_API RemoteAccessSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API RemoteAccessSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RemoteAccessSession& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the remote access session.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RemoteAccessSession& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    RemoteAccessSession& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING.</p> </li> <li> <p>PENDING_CONCURRENCY.</p> </li> <li>
     * <p>PENDING_DEVICE.</p> </li> <li> <p>PROCESSING.</p> </li> <li>
     * <p>SCHEDULING.</p> </li> <li> <p>PREPARING.</p> </li> <li> <p>RUNNING.</p> </li>
     * <li> <p>COMPLETED.</p> </li> <li> <p>STOPPING.</p> </li> </ul>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RemoteAccessSession& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING.</p> </li> <li> <p>PASSED.</p> </li> <li> <p>WARNED.</p>
     * </li> <li> <p>FAILED.</p> </li> <li> <p>SKIPPED.</p> </li> <li> <p>ERRORED.</p>
     * </li> <li> <p>STOPPED.</p> </li> </ul>
     */
    inline ExecutionResult GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(ExecutionResult value) { m_resultHasBeenSet = true; m_result = value; }
    inline RemoteAccessSession& WithResult(ExecutionResult value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the remote access session.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    RemoteAccessSession& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const { return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    template<typename StartedT = Aws::Utils::DateTime>
    void SetStarted(StartedT&& value) { m_startedHasBeenSet = true; m_started = std::forward<StartedT>(value); }
    template<typename StartedT = Aws::Utils::DateTime>
    RemoteAccessSession& WithStarted(StartedT&& value) { SetStarted(std::forward<StartedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const { return m_stopped; }
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
    template<typename StoppedT = Aws::Utils::DateTime>
    void SetStopped(StoppedT&& value) { m_stoppedHasBeenSet = true; m_stopped = std::forward<StoppedT>(value); }
    template<typename StoppedT = Aws::Utils::DateTime>
    RemoteAccessSession& WithStopped(StoppedT&& value) { SetStopped(std::forward<StoppedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device (phone or tablet) used in the remote access session.</p>
     */
    inline const Device& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Device>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Device>
    RemoteAccessSession& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
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
    RemoteAccessSession& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag is set to <code>true</code> if remote debugging is enabled for the
     * remote access session.</p> <p>Remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline bool GetRemoteDebugEnabled() const { return m_remoteDebugEnabled; }
    inline bool RemoteDebugEnabledHasBeenSet() const { return m_remoteDebugEnabledHasBeenSet; }
    inline void SetRemoteDebugEnabled(bool value) { m_remoteDebugEnabledHasBeenSet = true; m_remoteDebugEnabled = value; }
    inline RemoteAccessSession& WithRemoteDebugEnabled(bool value) { SetRemoteDebugEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag is set to <code>true</code> if remote recording is enabled for the
     * remote access session.</p>
     */
    inline bool GetRemoteRecordEnabled() const { return m_remoteRecordEnabled; }
    inline bool RemoteRecordEnabledHasBeenSet() const { return m_remoteRecordEnabledHasBeenSet; }
    inline void SetRemoteRecordEnabled(bool value) { m_remoteRecordEnabledHasBeenSet = true; m_remoteRecordEnabled = value; }
    inline RemoteAccessSession& WithRemoteRecordEnabled(bool value) { SetRemoteRecordEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the app to be recorded in the remote access session.</p>
     */
    inline const Aws::String& GetRemoteRecordAppArn() const { return m_remoteRecordAppArn; }
    inline bool RemoteRecordAppArnHasBeenSet() const { return m_remoteRecordAppArnHasBeenSet; }
    template<typename RemoteRecordAppArnT = Aws::String>
    void SetRemoteRecordAppArn(RemoteRecordAppArnT&& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = std::forward<RemoteRecordAppArnT>(value); }
    template<typename RemoteRecordAppArnT = Aws::String>
    RemoteAccessSession& WithRemoteRecordAppArn(RemoteRecordAppArnT&& value) { SetRemoteRecordAppArn(std::forward<RemoteRecordAppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p> <p>Remote debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline const Aws::String& GetHostAddress() const { return m_hostAddress; }
    inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }
    template<typename HostAddressT = Aws::String>
    void SetHostAddress(HostAddressT&& value) { m_hostAddressHasBeenSet = true; m_hostAddress = std::forward<HostAddressT>(value); }
    template<typename HostAddressT = Aws::String>
    RemoteAccessSession& WithHostAddress(HostAddressT&& value) { SetHostAddress(std::forward<HostAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p> <p>Remote
     * debugging is <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    RemoteAccessSession& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>.</p>
     */
    inline BillingMethod GetBillingMethod() const { return m_billingMethod; }
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }
    inline void SetBillingMethod(BillingMethod value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }
    inline RemoteAccessSession& WithBillingMethod(BillingMethod value) { SetBillingMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a device is used in a remote access session (including
     * setup and teardown minutes).</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const { return m_deviceMinutes; }
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }
    template<typename DeviceMinutesT = DeviceMinutes>
    void SetDeviceMinutes(DeviceMinutesT&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::forward<DeviceMinutesT>(value); }
    template<typename DeviceMinutesT = DeviceMinutes>
    RemoteAccessSession& WithDeviceMinutes(DeviceMinutesT&& value) { SetDeviceMinutes(std::forward<DeviceMinutesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    RemoteAccessSession& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p> <p>Remote debugging is
     * <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/history.html">no
     * longer supported</a>.</p>
     */
    inline const Aws::String& GetDeviceUdid() const { return m_deviceUdid; }
    inline bool DeviceUdidHasBeenSet() const { return m_deviceUdidHasBeenSet; }
    template<typename DeviceUdidT = Aws::String>
    void SetDeviceUdid(DeviceUdidT&& value) { m_deviceUdidHasBeenSet = true; m_deviceUdid = std::forward<DeviceUdidT>(value); }
    template<typename DeviceUdidT = Aws::String>
    RemoteAccessSession& WithDeviceUdid(DeviceUdidT&& value) { SetDeviceUdid(std::forward<DeviceUdidT>(value)); return *this;}
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
    inline InteractionMode GetInteractionMode() const { return m_interactionMode; }
    inline bool InteractionModeHasBeenSet() const { return m_interactionModeHasBeenSet; }
    inline void SetInteractionMode(InteractionMode value) { m_interactionModeHasBeenSet = true; m_interactionMode = value; }
    inline RemoteAccessSession& WithInteractionMode(InteractionMode value) { SetInteractionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const { return m_skipAppResign; }
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }
    inline RemoteAccessSession& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    RemoteAccessSession& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device proxy configured for the remote access session.</p>
     */
    inline const DeviceProxy& GetDeviceProxy() const { return m_deviceProxy; }
    inline bool DeviceProxyHasBeenSet() const { return m_deviceProxyHasBeenSet; }
    template<typename DeviceProxyT = DeviceProxy>
    void SetDeviceProxy(DeviceProxyT&& value) { m_deviceProxyHasBeenSet = true; m_deviceProxy = std::forward<DeviceProxyT>(value); }
    template<typename DeviceProxyT = DeviceProxy>
    RemoteAccessSession& WithDeviceProxy(DeviceProxyT&& value) { SetDeviceProxy(std::forward<DeviceProxyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ExecutionResult m_result{ExecutionResult::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_started{};
    bool m_startedHasBeenSet = false;

    Aws::Utils::DateTime m_stopped{};
    bool m_stoppedHasBeenSet = false;

    Device m_device;
    bool m_deviceHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    bool m_remoteDebugEnabled{false};
    bool m_remoteDebugEnabledHasBeenSet = false;

    bool m_remoteRecordEnabled{false};
    bool m_remoteRecordEnabledHasBeenSet = false;

    Aws::String m_remoteRecordAppArn;
    bool m_remoteRecordAppArnHasBeenSet = false;

    Aws::String m_hostAddress;
    bool m_hostAddressHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    BillingMethod m_billingMethod{BillingMethod::NOT_SET};
    bool m_billingMethodHasBeenSet = false;

    DeviceMinutes m_deviceMinutes;
    bool m_deviceMinutesHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_deviceUdid;
    bool m_deviceUdidHasBeenSet = false;

    InteractionMode m_interactionMode{InteractionMode::NOT_SET};
    bool m_interactionModeHasBeenSet = false;

    bool m_skipAppResign{false};
    bool m_skipAppResignHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    DeviceProxy m_deviceProxy;
    bool m_deviceProxyHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
