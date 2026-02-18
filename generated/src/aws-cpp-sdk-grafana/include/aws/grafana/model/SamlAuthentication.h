/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/SamlConfiguration.h>
#include <aws/grafana/model/SamlConfigurationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure containing information about how this workspace works with SAML.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/SamlAuthentication">AWS
 * API Reference</a></p>
 */
class SamlAuthentication {
 public:
  AWS_MANAGEDGRAFANA_API SamlAuthentication() = default;
  AWS_MANAGEDGRAFANA_API SamlAuthentication(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API SamlAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the workspace's SAML configuration is complete.</p>
   */
  inline SamlConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SamlConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SamlAuthentication& WithStatus(SamlConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure containing details about how this workspace works with SAML. </p>
   */
  inline const SamlConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = SamlConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = SamlConfiguration>
  SamlAuthentication& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SamlConfigurationStatus m_status{SamlConfigurationStatus::NOT_SET};

  SamlConfiguration m_configuration;
  bool m_statusHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
