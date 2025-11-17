/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/BillingMethod.h>
#include <aws/devicefarm/model/Device.h>
#include <aws/devicefarm/model/DeviceMinutes.h>
#include <aws/devicefarm/model/DeviceProxy.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/devicefarm/model/ExecutionStatus.h>
#include <aws/devicefarm/model/RemoteAccessEndpoints.h>
#include <aws/devicefarm/model/VpcConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DeviceFarm {
namespace Model {

/**
 * <p>Represents information about the remote access session.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RemoteAccessSession">AWS
 * API Reference</a></p>
 */
class RemoteAccessSession {
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
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RemoteAccessSession& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the remote access session.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RemoteAccessSession& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the remote access session was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::Utils::DateTime>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::Utils::DateTime>
  RemoteAccessSession& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
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
  inline void SetStatus(ExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RemoteAccessSession& WithStatus(ExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
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
  inline void SetResult(ExecutionResult value) {
    m_resultHasBeenSet = true;
    m_result = value;
  }
  inline RemoteAccessSession& WithResult(ExecutionResult value) {
    SetResult(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message about the remote access session.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  RemoteAccessSession& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the remote access session was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStarted() const { return m_started; }
  inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
  template <typename StartedT = Aws::Utils::DateTime>
  void SetStarted(StartedT&& value) {
    m_startedHasBeenSet = true;
    m_started = std::forward<StartedT>(value);
  }
  template <typename StartedT = Aws::Utils::DateTime>
  RemoteAccessSession& WithStarted(StartedT&& value) {
    SetStarted(std::forward<StartedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the remote access session was stopped.</p>
   */
  inline const Aws::Utils::DateTime& GetStopped() const { return m_stopped; }
  inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
  template <typename StoppedT = Aws::Utils::DateTime>
  void SetStopped(StoppedT&& value) {
    m_stoppedHasBeenSet = true;
    m_stopped = std::forward<StoppedT>(value);
  }
  template <typename StoppedT = Aws::Utils::DateTime>
  RemoteAccessSession& WithStopped(StoppedT&& value) {
    SetStopped(std::forward<StoppedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The device (phone or tablet) used in the remote access session.</p>
   */
  inline const Device& GetDevice() const { return m_device; }
  inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
  template <typename DeviceT = Device>
  void SetDevice(DeviceT&& value) {
    m_deviceHasBeenSet = true;
    m_device = std::forward<DeviceT>(value);
  }
  template <typename DeviceT = Device>
  RemoteAccessSession& WithDevice(DeviceT&& value) {
    SetDevice(std::forward<DeviceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the instance.</p>
   */
  inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
  inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
  template <typename InstanceArnT = Aws::String>
  void SetInstanceArn(InstanceArnT&& value) {
    m_instanceArnHasBeenSet = true;
    m_instanceArn = std::forward<InstanceArnT>(value);
  }
  template <typename InstanceArnT = Aws::String>
  RemoteAccessSession& WithInstanceArn(InstanceArnT&& value) {
    SetInstanceArn(std::forward<InstanceArnT>(value));
    return *this;
  }
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
  inline void SetBillingMethod(BillingMethod value) {
    m_billingMethodHasBeenSet = true;
    m_billingMethod = value;
  }
  inline RemoteAccessSession& WithBillingMethod(BillingMethod value) {
    SetBillingMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of minutes a device is used in a remote access session (including
   * setup and teardown minutes).</p>
   */
  inline const DeviceMinutes& GetDeviceMinutes() const { return m_deviceMinutes; }
  inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }
  template <typename DeviceMinutesT = DeviceMinutes>
  void SetDeviceMinutes(DeviceMinutesT&& value) {
    m_deviceMinutesHasBeenSet = true;
    m_deviceMinutes = std::forward<DeviceMinutesT>(value);
  }
  template <typename DeviceMinutesT = DeviceMinutes>
  RemoteAccessSession& WithDeviceMinutes(DeviceMinutesT&& value) {
    SetDeviceMinutes(std::forward<DeviceMinutesT>(value));
    return *this;
  }
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
  template <typename DeviceUdidT = Aws::String>
  void SetDeviceUdid(DeviceUdidT&& value) {
    m_deviceUdidHasBeenSet = true;
    m_deviceUdid = std::forward<DeviceUdidT>(value);
  }
  template <typename DeviceUdidT = Aws::String>
  RemoteAccessSession& WithDeviceUdid(DeviceUdidT&& value) {
    SetDeviceUdid(std::forward<DeviceUdidT>(value));
    return *this;
  }
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
  inline void SetSkipAppResign(bool value) {
    m_skipAppResignHasBeenSet = true;
    m_skipAppResign = value;
  }
  inline RemoteAccessSession& WithSkipAppResign(bool value) {
    SetSkipAppResign(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC security groups and subnets that are attached to a project.</p>
   */
  inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = VpcConfig>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = VpcConfig>
  RemoteAccessSession& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The device proxy configured for the remote access session.</p>
   */
  inline const DeviceProxy& GetDeviceProxy() const { return m_deviceProxy; }
  inline bool DeviceProxyHasBeenSet() const { return m_deviceProxyHasBeenSet; }
  template <typename DeviceProxyT = DeviceProxy>
  void SetDeviceProxy(DeviceProxyT&& value) {
    m_deviceProxyHasBeenSet = true;
    m_deviceProxy = std::forward<DeviceProxyT>(value);
  }
  template <typename DeviceProxyT = DeviceProxy>
  RemoteAccessSession& WithDeviceProxy(DeviceProxyT&& value) {
    SetDeviceProxy(std::forward<DeviceProxyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN for the app to be installed onto your device.</p>
   */
  inline const Aws::String& GetAppUpload() const { return m_appUpload; }
  inline bool AppUploadHasBeenSet() const { return m_appUploadHasBeenSet; }
  template <typename AppUploadT = Aws::String>
  void SetAppUpload(AppUploadT&& value) {
    m_appUploadHasBeenSet = true;
    m_appUpload = std::forward<AppUploadT>(value);
  }
  template <typename AppUploadT = Aws::String>
  RemoteAccessSession& WithAppUpload(AppUploadT&& value) {
    SetAppUpload(std::forward<AppUploadT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RemoteAccessEndpoints& GetEndpoints() const { return m_endpoints; }
  inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
  template <typename EndpointsT = RemoteAccessEndpoints>
  void SetEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints = std::forward<EndpointsT>(value);
  }
  template <typename EndpointsT = RemoteAccessEndpoints>
  RemoteAccessSession& WithEndpoints(EndpointsT&& value) {
    SetEndpoints(std::forward<EndpointsT>(value));
    return *this;
  }
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

  BillingMethod m_billingMethod{BillingMethod::NOT_SET};
  bool m_billingMethodHasBeenSet = false;

  DeviceMinutes m_deviceMinutes;
  bool m_deviceMinutesHasBeenSet = false;

  Aws::String m_deviceUdid;
  bool m_deviceUdidHasBeenSet = false;

  bool m_skipAppResign{false};
  bool m_skipAppResignHasBeenSet = false;

  VpcConfig m_vpcConfig;
  bool m_vpcConfigHasBeenSet = false;

  DeviceProxy m_deviceProxy;
  bool m_deviceProxyHasBeenSet = false;

  Aws::String m_appUpload;
  bool m_appUploadHasBeenSet = false;

  RemoteAccessEndpoints m_endpoints;
  bool m_endpointsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
