/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Authorization discovery configuration for MCP server.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerAuthorizationDiscoveryConfig">AWS
 * API Reference</a></p>
 */
class MCPServerAuthorizationDiscoveryConfig {
 public:
  AWS_DEVOPSAGENT_API MCPServerAuthorizationDiscoveryConfig() = default;
  AWS_DEVOPSAGENT_API MCPServerAuthorizationDiscoveryConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerAuthorizationDiscoveryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The endpoint to return to after OAuth flow completes (must be AWS console
   * domain)</p>
   */
  inline const Aws::String& GetReturnToEndpoint() const { return m_returnToEndpoint; }
  inline bool ReturnToEndpointHasBeenSet() const { return m_returnToEndpointHasBeenSet; }
  template <typename ReturnToEndpointT = Aws::String>
  void SetReturnToEndpoint(ReturnToEndpointT&& value) {
    m_returnToEndpointHasBeenSet = true;
    m_returnToEndpoint = std::forward<ReturnToEndpointT>(value);
  }
  template <typename ReturnToEndpointT = Aws::String>
  MCPServerAuthorizationDiscoveryConfig& WithReturnToEndpoint(ReturnToEndpointT&& value) {
    SetReturnToEndpoint(std::forward<ReturnToEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_returnToEndpoint;
  bool m_returnToEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
