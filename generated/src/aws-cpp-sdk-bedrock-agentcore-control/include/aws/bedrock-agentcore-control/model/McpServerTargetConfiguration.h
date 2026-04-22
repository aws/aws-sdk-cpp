/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ListingMode.h>
#include <aws/bedrock-agentcore-control/model/McpToolSchemaConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The target configuration for the MCP server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/McpServerTargetConfiguration">AWS
 * API Reference</a></p>
 */
class McpServerTargetConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API McpServerTargetConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API McpServerTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API McpServerTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The endpoint for the MCP server target configuration.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  McpServerTargetConfiguration& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tool schema configuration for the MCP server target. Supported only when
   * the credential provider is configured with an authorization code grant type.
   * Dynamic tool discovery/synchronization will be disabled when target is
   * configured with mcpToolSchema.</p>
   */
  inline const McpToolSchemaConfiguration& GetMcpToolSchema() const { return m_mcpToolSchema; }
  inline bool McpToolSchemaHasBeenSet() const { return m_mcpToolSchemaHasBeenSet; }
  template <typename McpToolSchemaT = McpToolSchemaConfiguration>
  void SetMcpToolSchema(McpToolSchemaT&& value) {
    m_mcpToolSchemaHasBeenSet = true;
    m_mcpToolSchema = std::forward<McpToolSchemaT>(value);
  }
  template <typename McpToolSchemaT = McpToolSchemaConfiguration>
  McpServerTargetConfiguration& WithMcpToolSchema(McpToolSchemaT&& value) {
    SetMcpToolSchema(std::forward<McpToolSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Priority for resolving MCP server targets with shared resource URIs. Lower
   * values take precedence. Defaults to 1000 when not set.</p>
   */
  inline int GetResourcePriority() const { return m_resourcePriority; }
  inline bool ResourcePriorityHasBeenSet() const { return m_resourcePriorityHasBeenSet; }
  inline void SetResourcePriority(int value) {
    m_resourcePriorityHasBeenSet = true;
    m_resourcePriority = value;
  }
  inline McpServerTargetConfiguration& WithResourcePriority(int value) {
    SetResourcePriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The listing mode for the MCP server target configuration. MCP resources for
   * default targets are cached at the control plane for faster access. MCP resources
   * for dynamic targets will be dynamically retrieved when listing tools.</p>
   */
  inline ListingMode GetListingMode() const { return m_listingMode; }
  inline bool ListingModeHasBeenSet() const { return m_listingModeHasBeenSet; }
  inline void SetListingMode(ListingMode value) {
    m_listingModeHasBeenSet = true;
    m_listingMode = value;
  }
  inline McpServerTargetConfiguration& WithListingMode(ListingMode value) {
    SetListingMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpoint;

  McpToolSchemaConfiguration m_mcpToolSchema;

  int m_resourcePriority{0};

  ListingMode m_listingMode{ListingMode::NOT_SET};
  bool m_endpointHasBeenSet = false;
  bool m_mcpToolSchemaHasBeenSet = false;
  bool m_resourcePriorityHasBeenSet = false;
  bool m_listingModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
