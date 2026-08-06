/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AuthorizerConfiguration.h>
#include <aws/agent-registry-control/model/RegistryAuthorizerType.h>

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
 * <p>Discovery configuration for the registry. Controls how consumers are
 * authorized to search the registry and invoke its MCP endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/DiscoveryConfiguration">AWS
 * API Reference</a></p>
 */
class DiscoveryConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API DiscoveryConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API DiscoveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API DiscoveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authorizer configuration for the registry. Required when authorizerType
   * is CUSTOM_JWT.</p>
   */
  inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
  inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    m_authorizerConfigurationHasBeenSet = true;
    m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value);
  }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  DiscoveryConfiguration& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of authorizer that controls how consumers access the registry's
   * search and MCP invoke operations.</p>
   */
  inline RegistryAuthorizerType GetAuthorizerType() const { return m_authorizerType; }
  inline bool AuthorizerTypeHasBeenSet() const { return m_authorizerTypeHasBeenSet; }
  inline void SetAuthorizerType(RegistryAuthorizerType value) {
    m_authorizerTypeHasBeenSet = true;
    m_authorizerType = value;
  }
  inline DiscoveryConfiguration& WithAuthorizerType(RegistryAuthorizerType value) {
    SetAuthorizerType(value);
    return *this;
  }
  ///@}
 private:
  AuthorizerConfiguration m_authorizerConfiguration;

  RegistryAuthorizerType m_authorizerType{RegistryAuthorizerType::NOT_SET};
  bool m_authorizerConfigurationHasBeenSet = false;
  bool m_authorizerTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
