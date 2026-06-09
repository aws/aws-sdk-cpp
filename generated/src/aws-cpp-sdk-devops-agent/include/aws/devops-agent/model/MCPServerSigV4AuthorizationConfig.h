/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Authorization configuration for SigV4-authenticated MCP server.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MCPServerSigV4AuthorizationConfig">AWS
 * API Reference</a></p>
 */
class MCPServerSigV4AuthorizationConfig {
 public:
  AWS_DEVOPSAGENT_API MCPServerSigV4AuthorizationConfig() = default;
  AWS_DEVOPSAGENT_API MCPServerSigV4AuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MCPServerSigV4AuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>AWS region for SigV4 signing. Use '*' for SigV4a multi-region signing.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  MCPServerSigV4AuthorizationConfig& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS service name for SigV4 signing.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  MCPServerSigV4AuthorizationConfig& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role ARN to assume for SigV4 signing. Optional — when omitted,
   * credentials are resolved at runtime via a monitor account association.</p>
   */
  inline const Aws::String& GetMcpRoleArn() const { return m_mcpRoleArn; }
  inline bool McpRoleArnHasBeenSet() const { return m_mcpRoleArnHasBeenSet; }
  template <typename McpRoleArnT = Aws::String>
  void SetMcpRoleArn(McpRoleArnT&& value) {
    m_mcpRoleArnHasBeenSet = true;
    m_mcpRoleArn = std::forward<McpRoleArnT>(value);
  }
  template <typename McpRoleArnT = Aws::String>
  MCPServerSigV4AuthorizationConfig& WithMcpRoleArn(McpRoleArnT&& value) {
    SetMcpRoleArn(std::forward<McpRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom headers for the SigV4 MCP server.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetCustomHeaders() const { return m_customHeaders; }
  inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }
  template <typename CustomHeadersT = Aws::Map<Aws::String, Aws::String>>
  void SetCustomHeaders(CustomHeadersT&& value) {
    m_customHeadersHasBeenSet = true;
    m_customHeaders = std::forward<CustomHeadersT>(value);
  }
  template <typename CustomHeadersT = Aws::Map<Aws::String, Aws::String>>
  MCPServerSigV4AuthorizationConfig& WithCustomHeaders(CustomHeadersT&& value) {
    SetCustomHeaders(std::forward<CustomHeadersT>(value));
    return *this;
  }
  template <typename CustomHeadersKeyT = Aws::String, typename CustomHeadersValueT = Aws::String>
  MCPServerSigV4AuthorizationConfig& AddCustomHeaders(CustomHeadersKeyT&& key, CustomHeadersValueT&& value) {
    m_customHeadersHasBeenSet = true;
    m_customHeaders.emplace(std::forward<CustomHeadersKeyT>(key), std::forward<CustomHeadersValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  Aws::String m_service;

  Aws::String m_mcpRoleArn;

  Aws::Map<Aws::String, Aws::String> m_customHeaders;
  bool m_regionHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_mcpRoleArnHasBeenSet = false;
  bool m_customHeadersHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
