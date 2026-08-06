/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedAuthorizerConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The discovery configuration fields to update on a registry. Omit this
 * structure to leave the discovery configuration unchanged.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedDiscoveryConfiguration">AWS
 * API Reference</a></p>
 */
class UpdatedDiscoveryConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedDiscoveryConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedDiscoveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedDiscoveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Authorization configuration for the registry, with PATCH semantics</p>
   */
  inline const UpdatedAuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
  inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
  template <typename AuthorizerConfigurationT = UpdatedAuthorizerConfiguration>
  void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    m_authorizerConfigurationHasBeenSet = true;
    m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value);
  }
  template <typename AuthorizerConfigurationT = UpdatedAuthorizerConfiguration>
  UpdatedDiscoveryConfiguration& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedAuthorizerConfiguration m_authorizerConfiguration;
  bool m_authorizerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
