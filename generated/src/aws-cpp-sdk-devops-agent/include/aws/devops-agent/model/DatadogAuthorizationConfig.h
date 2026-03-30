/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/MCPServerAuthorizationDiscoveryConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Authorization configuration for Datadog MCP server (uses authorization
 * discovery only).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DatadogAuthorizationConfig">AWS
 * API Reference</a></p>
 */
class DatadogAuthorizationConfig {
 public:
  AWS_DEVOPSAGENT_API DatadogAuthorizationConfig() = default;
  AWS_DEVOPSAGENT_API DatadogAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API DatadogAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Datadog MCP server authorization discovery configuration.</p>
   */
  inline const MCPServerAuthorizationDiscoveryConfig& GetAuthorizationDiscovery() const { return m_authorizationDiscovery; }
  inline bool AuthorizationDiscoveryHasBeenSet() const { return m_authorizationDiscoveryHasBeenSet; }
  template <typename AuthorizationDiscoveryT = MCPServerAuthorizationDiscoveryConfig>
  void SetAuthorizationDiscovery(AuthorizationDiscoveryT&& value) {
    m_authorizationDiscoveryHasBeenSet = true;
    m_authorizationDiscovery = std::forward<AuthorizationDiscoveryT>(value);
  }
  template <typename AuthorizationDiscoveryT = MCPServerAuthorizationDiscoveryConfig>
  DatadogAuthorizationConfig& WithAuthorizationDiscovery(AuthorizationDiscoveryT&& value) {
    SetAuthorizationDiscovery(std::forward<AuthorizationDiscoveryT>(value));
    return *this;
  }
  ///@}
 private:
  MCPServerAuthorizationDiscoveryConfig m_authorizationDiscovery;
  bool m_authorizationDiscoveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
