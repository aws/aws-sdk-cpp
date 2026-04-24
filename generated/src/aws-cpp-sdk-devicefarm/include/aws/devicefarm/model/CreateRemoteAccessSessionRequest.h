/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/CreateRemoteAccessSessionConfiguration.h>

#include <utility>

namespace Aws {
namespace DeviceFarm {
namespace Model {

/**
 * <p>Creates and submits a request to start a remote access session.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSessionRequest">AWS
 * API Reference</a></p>
 */
class CreateRemoteAccessSessionRequest : public DeviceFarmRequest {
 public:
  AWS_DEVICEFARM_API CreateRemoteAccessSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRemoteAccessSession"; }

  AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

  AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
   * remote access session.</p>
   */
  inline const Aws::String& GetProjectArn() const { return m_projectArn; }
  inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
  template <typename ProjectArnT = Aws::String>
  void SetProjectArn(ProjectArnT&& value) {
    m_projectArnHasBeenSet = true;
    m_projectArn = std::forward<ProjectArnT>(value);
  }
  template <typename ProjectArnT = Aws::String>
  CreateRemoteAccessSessionRequest& WithProjectArn(ProjectArnT&& value) {
    SetProjectArn(std::forward<ProjectArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the device for which you want to create a remote access
   * session.</p>
   */
  inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
  inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
  template <typename DeviceArnT = Aws::String>
  void SetDeviceArn(DeviceArnT&& value) {
    m_deviceArnHasBeenSet = true;
    m_deviceArn = std::forward<DeviceArnT>(value);
  }
  template <typename DeviceArnT = Aws::String>
  CreateRemoteAccessSessionRequest& WithDeviceArn(DeviceArnT&& value) {
    SetDeviceArn(std::forward<DeviceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the app to create the remote access
   * session.</p>
   */
  inline const Aws::String& GetAppArn() const { return m_appArn; }
  inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
  template <typename AppArnT = Aws::String>
  void SetAppArn(AppArnT&& value) {
    m_appArnHasBeenSet = true;
    m_appArn = std::forward<AppArnT>(value);
  }
  template <typename AppArnT = Aws::String>
  CreateRemoteAccessSessionRequest& WithAppArn(AppArnT&& value) {
    SetAppArn(std::forward<AppArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the device instance for which you want to
   * create a remote access session.</p>
   */
  inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
  inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
  template <typename InstanceArnT = Aws::String>
  void SetInstanceArn(InstanceArnT&& value) {
    m_instanceArnHasBeenSet = true;
    m_instanceArn = std::forward<InstanceArnT>(value);
  }
  template <typename InstanceArnT = Aws::String>
  CreateRemoteAccessSessionRequest& WithInstanceArn(InstanceArnT&& value) {
    SetInstanceArn(std::forward<InstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the remote access session to create.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRemoteAccessSessionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration information for the remote access session request.</p>
   */
  inline const CreateRemoteAccessSessionConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = CreateRemoteAccessSessionConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = CreateRemoteAccessSessionConfiguration>
  CreateRemoteAccessSessionRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
   * your app again. For public devices, Device Farm always signs your apps
   * again.</p> <p>For more information on how Device Farm modifies your uploads
   * during tests, see <a href="http://aws.amazon.com/device-farm/faqs/">Do you
   * modify my app?</a> </p>
   */
  inline bool GetSkipAppResign() const { return m_skipAppResign; }
  inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }
  inline void SetSkipAppResign(bool value) {
    m_skipAppResignHasBeenSet = true;
    m_skipAppResign = value;
  }
  inline CreateRemoteAccessSessionRequest& WithSkipAppResign(bool value) {
    SetSkipAppResign(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectArn;

  Aws::String m_deviceArn;

  Aws::String m_appArn;

  Aws::String m_instanceArn;

  Aws::String m_name;

  CreateRemoteAccessSessionConfiguration m_configuration;

  bool m_skipAppResign{false};
  bool m_projectArnHasBeenSet = false;
  bool m_deviceArnHasBeenSet = false;
  bool m_appArnHasBeenSet = false;
  bool m_instanceArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_skipAppResignHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
