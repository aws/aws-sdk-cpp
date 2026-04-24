/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/Configuration.h>
#include <aws/emr-serverless/model/DiskEncryptionConfiguration.h>
#include <aws/emr-serverless/model/MonitoringConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {

/**
 * <p>A configuration specification to be used to override existing
 * configurations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ConfigurationOverrides">AWS
 * API Reference</a></p>
 */
class ConfigurationOverrides {
 public:
  AWS_EMRSERVERLESS_API ConfigurationOverrides() = default;
  AWS_EMRSERVERLESS_API ConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API ConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The override configurations for the application.</p>
   */
  inline const Aws::Vector<Configuration>& GetApplicationConfiguration() const { return m_applicationConfiguration; }
  inline bool ApplicationConfigurationHasBeenSet() const { return m_applicationConfigurationHasBeenSet; }
  template <typename ApplicationConfigurationT = Aws::Vector<Configuration>>
  void SetApplicationConfiguration(ApplicationConfigurationT&& value) {
    m_applicationConfigurationHasBeenSet = true;
    m_applicationConfiguration = std::forward<ApplicationConfigurationT>(value);
  }
  template <typename ApplicationConfigurationT = Aws::Vector<Configuration>>
  ConfigurationOverrides& WithApplicationConfiguration(ApplicationConfigurationT&& value) {
    SetApplicationConfiguration(std::forward<ApplicationConfigurationT>(value));
    return *this;
  }
  template <typename ApplicationConfigurationT = Configuration>
  ConfigurationOverrides& AddApplicationConfiguration(ApplicationConfigurationT&& value) {
    m_applicationConfigurationHasBeenSet = true;
    m_applicationConfiguration.emplace_back(std::forward<ApplicationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The override configurations for monitoring.</p>
   */
  inline const MonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
  inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
  template <typename MonitoringConfigurationT = MonitoringConfiguration>
  void SetMonitoringConfiguration(MonitoringConfigurationT&& value) {
    m_monitoringConfigurationHasBeenSet = true;
    m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value);
  }
  template <typename MonitoringConfigurationT = MonitoringConfiguration>
  ConfigurationOverrides& WithMonitoringConfiguration(MonitoringConfigurationT&& value) {
    SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The override configuration to encrypt local disks.</p>
   */
  inline const DiskEncryptionConfiguration& GetDiskEncryptionConfiguration() const { return m_diskEncryptionConfiguration; }
  inline bool DiskEncryptionConfigurationHasBeenSet() const { return m_diskEncryptionConfigurationHasBeenSet; }
  template <typename DiskEncryptionConfigurationT = DiskEncryptionConfiguration>
  void SetDiskEncryptionConfiguration(DiskEncryptionConfigurationT&& value) {
    m_diskEncryptionConfigurationHasBeenSet = true;
    m_diskEncryptionConfiguration = std::forward<DiskEncryptionConfigurationT>(value);
  }
  template <typename DiskEncryptionConfigurationT = DiskEncryptionConfiguration>
  ConfigurationOverrides& WithDiskEncryptionConfiguration(DiskEncryptionConfigurationT&& value) {
    SetDiskEncryptionConfiguration(std::forward<DiskEncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Configuration> m_applicationConfiguration;

  MonitoringConfiguration m_monitoringConfiguration;

  DiskEncryptionConfiguration m_diskEncryptionConfiguration;
  bool m_applicationConfigurationHasBeenSet = false;
  bool m_monitoringConfigurationHasBeenSet = false;
  bool m_diskEncryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
