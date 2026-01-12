/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTManagedIntegrations {
namespace Model {

/**
 * <p>The Wi-Fi Simple Setup configuration for the managed thing, which defines
 * provisioning capabilities and timeout settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/WiFiSimpleSetupConfiguration">AWS
 * API Reference</a></p>
 */
class WiFiSimpleSetupConfiguration {
 public:
  AWS_IOTMANAGEDINTEGRATIONS_API WiFiSimpleSetupConfiguration() = default;
  AWS_IOTMANAGEDINTEGRATIONS_API WiFiSimpleSetupConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API WiFiSimpleSetupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether the device can act as a provisioner in Wi-Fi Simple Setup,
   * allowing it to configure other devices.</p>
   */
  inline bool GetEnableAsProvisioner() const { return m_enableAsProvisioner; }
  inline bool EnableAsProvisionerHasBeenSet() const { return m_enableAsProvisionerHasBeenSet; }
  inline void SetEnableAsProvisioner(bool value) {
    m_enableAsProvisionerHasBeenSet = true;
    m_enableAsProvisioner = value;
  }
  inline WiFiSimpleSetupConfiguration& WithEnableAsProvisioner(bool value) {
    SetEnableAsProvisioner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the device can act as a provisionee in Wi-Fi Simple Setup,
   * allowing it to be configured by other devices.</p>
   */
  inline bool GetEnableAsProvisionee() const { return m_enableAsProvisionee; }
  inline bool EnableAsProvisioneeHasBeenSet() const { return m_enableAsProvisioneeHasBeenSet; }
  inline void SetEnableAsProvisionee(bool value) {
    m_enableAsProvisioneeHasBeenSet = true;
    m_enableAsProvisionee = value;
  }
  inline WiFiSimpleSetupConfiguration& WithEnableAsProvisionee(bool value) {
    SetEnableAsProvisionee(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timeout duration in minutes for Wi-Fi Simple Setup. Valid range is 5 to
   * 15 minutes.</p>
   */
  inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
  inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
  inline void SetTimeoutInMinutes(int value) {
    m_timeoutInMinutesHasBeenSet = true;
    m_timeoutInMinutes = value;
  }
  inline WiFiSimpleSetupConfiguration& WithTimeoutInMinutes(int value) {
    SetTimeoutInMinutes(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableAsProvisioner{false};

  bool m_enableAsProvisionee{false};

  int m_timeoutInMinutes{0};
  bool m_enableAsProvisionerHasBeenSet = false;
  bool m_enableAsProvisioneeHasBeenSet = false;
  bool m_timeoutInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
