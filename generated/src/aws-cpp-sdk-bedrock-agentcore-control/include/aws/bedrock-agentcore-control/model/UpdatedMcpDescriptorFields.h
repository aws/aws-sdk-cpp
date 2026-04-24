/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/UpdatedServerDefinition.h>
#include <aws/bedrock-agentcore-control/model/UpdatedToolsDefinition.h>

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
 * <p>Individual MCP descriptor fields that can be updated
 * independently.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdatedMcpDescriptorFields">AWS
 * API Reference</a></p>
 */
class UpdatedMcpDescriptorFields {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedMcpDescriptorFields() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedMcpDescriptorFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedMcpDescriptorFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated server definition for the MCP descriptor.</p>
   */
  inline const UpdatedServerDefinition& GetServer() const { return m_server; }
  inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }
  template <typename ServerT = UpdatedServerDefinition>
  void SetServer(ServerT&& value) {
    m_serverHasBeenSet = true;
    m_server = std::forward<ServerT>(value);
  }
  template <typename ServerT = UpdatedServerDefinition>
  UpdatedMcpDescriptorFields& WithServer(ServerT&& value) {
    SetServer(std::forward<ServerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated tools definition for the MCP descriptor.</p>
   */
  inline const UpdatedToolsDefinition& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = UpdatedToolsDefinition>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = UpdatedToolsDefinition>
  UpdatedMcpDescriptorFields& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedServerDefinition m_server;

  UpdatedToolsDefinition m_tools;
  bool m_serverHasBeenSet = false;
  bool m_toolsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
