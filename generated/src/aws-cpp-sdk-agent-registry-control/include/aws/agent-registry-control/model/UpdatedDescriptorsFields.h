/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedA2aAgentCardDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedAgUiDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsDefinitionDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedCustomDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedHttpDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedMcpServerDescriptor.h>

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
 * <p>The patchable descriptor fields applied during an UpdateRegistryRecord call.
 * Each field is independently patchable.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedDescriptorsFields">AWS
 * API Reference</a></p>
 */
class UpdatedDescriptorsFields {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedDescriptorsFields() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedDescriptorsFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedDescriptorsFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch for the MCP server descriptor.</p>
   */
  inline const UpdatedMcpServerDescriptor& GetMcpServer() const { return m_mcpServer; }
  inline bool McpServerHasBeenSet() const { return m_mcpServerHasBeenSet; }
  template <typename McpServerT = UpdatedMcpServerDescriptor>
  void SetMcpServer(McpServerT&& value) {
    m_mcpServerHasBeenSet = true;
    m_mcpServer = std::forward<McpServerT>(value);
  }
  template <typename McpServerT = UpdatedMcpServerDescriptor>
  UpdatedDescriptorsFields& WithMcpServer(McpServerT&& value) {
    SetMcpServer(std::forward<McpServerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the A2A agent card descriptor.</p>
   */
  inline const UpdatedA2aAgentCardDescriptor& GetA2aAgentCard() const { return m_a2aAgentCard; }
  inline bool A2aAgentCardHasBeenSet() const { return m_a2aAgentCardHasBeenSet; }
  template <typename A2aAgentCardT = UpdatedA2aAgentCardDescriptor>
  void SetA2aAgentCard(A2aAgentCardT&& value) {
    m_a2aAgentCardHasBeenSet = true;
    m_a2aAgentCard = std::forward<A2aAgentCardT>(value);
  }
  template <typename A2aAgentCardT = UpdatedA2aAgentCardDescriptor>
  UpdatedDescriptorsFields& WithA2aAgentCard(A2aAgentCardT&& value) {
    SetA2aAgentCard(std::forward<A2aAgentCardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the agent skills definition descriptor.</p>
   */
  inline const UpdatedAgentSkillsDefinitionDescriptor& GetAgentSkillsDefinition() const { return m_agentSkillsDefinition; }
  inline bool AgentSkillsDefinitionHasBeenSet() const { return m_agentSkillsDefinitionHasBeenSet; }
  template <typename AgentSkillsDefinitionT = UpdatedAgentSkillsDefinitionDescriptor>
  void SetAgentSkillsDefinition(AgentSkillsDefinitionT&& value) {
    m_agentSkillsDefinitionHasBeenSet = true;
    m_agentSkillsDefinition = std::forward<AgentSkillsDefinitionT>(value);
  }
  template <typename AgentSkillsDefinitionT = UpdatedAgentSkillsDefinitionDescriptor>
  UpdatedDescriptorsFields& WithAgentSkillsDefinition(AgentSkillsDefinitionT&& value) {
    SetAgentSkillsDefinition(std::forward<AgentSkillsDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the custom descriptor.</p>
   */
  inline const UpdatedCustomDescriptor& GetCustom() const { return m_custom; }
  inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
  template <typename CustomT = UpdatedCustomDescriptor>
  void SetCustom(CustomT&& value) {
    m_customHasBeenSet = true;
    m_custom = std::forward<CustomT>(value);
  }
  template <typename CustomT = UpdatedCustomDescriptor>
  UpdatedDescriptorsFields& WithCustom(CustomT&& value) {
    SetCustom(std::forward<CustomT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the HTTP descriptor.</p>
   */
  inline const UpdatedHttpDescriptor& GetHttp() const { return m_http; }
  inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }
  template <typename HttpT = UpdatedHttpDescriptor>
  void SetHttp(HttpT&& value) {
    m_httpHasBeenSet = true;
    m_http = std::forward<HttpT>(value);
  }
  template <typename HttpT = UpdatedHttpDescriptor>
  UpdatedDescriptorsFields& WithHttp(HttpT&& value) {
    SetHttp(std::forward<HttpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the AG-UI descriptor.</p>
   */
  inline const UpdatedAgUiDescriptor& GetAgui() const { return m_agui; }
  inline bool AguiHasBeenSet() const { return m_aguiHasBeenSet; }
  template <typename AguiT = UpdatedAgUiDescriptor>
  void SetAgui(AguiT&& value) {
    m_aguiHasBeenSet = true;
    m_agui = std::forward<AguiT>(value);
  }
  template <typename AguiT = UpdatedAgUiDescriptor>
  UpdatedDescriptorsFields& WithAgui(AguiT&& value) {
    SetAgui(std::forward<AguiT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedMcpServerDescriptor m_mcpServer;

  UpdatedA2aAgentCardDescriptor m_a2aAgentCard;

  UpdatedAgentSkillsDefinitionDescriptor m_agentSkillsDefinition;

  UpdatedCustomDescriptor m_custom;

  UpdatedHttpDescriptor m_http;

  UpdatedAgUiDescriptor m_agui;
  bool m_mcpServerHasBeenSet = false;
  bool m_a2aAgentCardHasBeenSet = false;
  bool m_agentSkillsDefinitionHasBeenSet = false;
  bool m_customHasBeenSet = false;
  bool m_httpHasBeenSet = false;
  bool m_aguiHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
