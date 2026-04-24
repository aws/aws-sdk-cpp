/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ServerDefinition.h>
#include <aws/bedrock-agentcore-control/model/ToolsDefinition.h>

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
 * <p>The Model Context Protocol (MCP) descriptor for a registry record. Contains
 * the server definition and tools definition for an MCP-compatible server. The
 * schema is validated against the MCP protocol specification.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/McpDescriptor">AWS
 * API Reference</a></p>
 */
class McpDescriptor {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API McpDescriptor() = default;
  AWS_BEDROCKAGENTCORECONTROL_API McpDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API McpDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MCP server definition, containing the server configuration and schema as
   * defined by the MCP protocol specification.</p>
   */
  inline const ServerDefinition& GetServer() const { return m_server; }
  inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }
  template <typename ServerT = ServerDefinition>
  void SetServer(ServerT&& value) {
    m_serverHasBeenSet = true;
    m_server = std::forward<ServerT>(value);
  }
  template <typename ServerT = ServerDefinition>
  McpDescriptor& WithServer(ServerT&& value) {
    SetServer(std::forward<ServerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MCP tools definition, containing the tools available on the MCP server as
   * defined by the MCP protocol specification.</p>
   */
  inline const ToolsDefinition& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = ToolsDefinition>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = ToolsDefinition>
  McpDescriptor& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}
 private:
  ServerDefinition m_server;

  ToolsDefinition m_tools;
  bool m_serverHasBeenSet = false;
  bool m_toolsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
