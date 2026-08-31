/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/A2aAgentCardDescriptor.h>
#include <aws/agent-registry-control/model/AgUiDescriptor.h>
#include <aws/agent-registry-control/model/AgentSkillsDefinitionDescriptor.h>
#include <aws/agent-registry-control/model/CustomDescriptor.h>
#include <aws/agent-registry-control/model/HttpDescriptor.h>
#include <aws/agent-registry-control/model/McpServerDescriptor.h>

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
 * <p>The typed set of descriptors for a registry record. Exactly one descriptor
 * field is populated based on the record type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/Descriptors">AWS
 * API Reference</a></p>
 */
class Descriptors {
 public:
  AWS_AGENTREGISTRYCONTROL_API Descriptors() = default;
  AWS_AGENTREGISTRYCONTROL_API Descriptors(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Descriptors& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MCP server descriptor, populated when the record type is MCP.</p>
   */
  inline const McpServerDescriptor& GetMcpServer() const { return m_mcpServer; }
  inline bool McpServerHasBeenSet() const { return m_mcpServerHasBeenSet; }
  template <typename McpServerT = McpServerDescriptor>
  void SetMcpServer(McpServerT&& value) {
    m_mcpServerHasBeenSet = true;
    m_mcpServer = std::forward<McpServerT>(value);
  }
  template <typename McpServerT = McpServerDescriptor>
  Descriptors& WithMcpServer(McpServerT&& value) {
    SetMcpServer(std::forward<McpServerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The A2A agent card descriptor, populated when the record type is AGENT.</p>
   */
  inline const A2aAgentCardDescriptor& GetA2aAgentCard() const { return m_a2aAgentCard; }
  inline bool A2aAgentCardHasBeenSet() const { return m_a2aAgentCardHasBeenSet; }
  template <typename A2aAgentCardT = A2aAgentCardDescriptor>
  void SetA2aAgentCard(A2aAgentCardT&& value) {
    m_a2aAgentCardHasBeenSet = true;
    m_a2aAgentCard = std::forward<A2aAgentCardT>(value);
  }
  template <typename A2aAgentCardT = A2aAgentCardDescriptor>
  Descriptors& WithA2aAgentCard(A2aAgentCardT&& value) {
    SetA2aAgentCard(std::forward<A2aAgentCardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent skills definition descriptor, populated when the record type is
   * SKILL.</p>
   */
  inline const AgentSkillsDefinitionDescriptor& GetAgentSkillsDefinition() const { return m_agentSkillsDefinition; }
  inline bool AgentSkillsDefinitionHasBeenSet() const { return m_agentSkillsDefinitionHasBeenSet; }
  template <typename AgentSkillsDefinitionT = AgentSkillsDefinitionDescriptor>
  void SetAgentSkillsDefinition(AgentSkillsDefinitionT&& value) {
    m_agentSkillsDefinitionHasBeenSet = true;
    m_agentSkillsDefinition = std::forward<AgentSkillsDefinitionT>(value);
  }
  template <typename AgentSkillsDefinitionT = AgentSkillsDefinitionDescriptor>
  Descriptors& WithAgentSkillsDefinition(AgentSkillsDefinitionT&& value) {
    SetAgentSkillsDefinition(std::forward<AgentSkillsDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom descriptor, populated when the record type is CUSTOM.</p>
   */
  inline const CustomDescriptor& GetCustom() const { return m_custom; }
  inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
  template <typename CustomT = CustomDescriptor>
  void SetCustom(CustomT&& value) {
    m_customHasBeenSet = true;
    m_custom = std::forward<CustomT>(value);
  }
  template <typename CustomT = CustomDescriptor>
  Descriptors& WithCustom(CustomT&& value) {
    SetCustom(std::forward<CustomT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP descriptor, populated for records detected from an HTTP protocol
   * source.</p>
   */
  inline const HttpDescriptor& GetHttp() const { return m_http; }
  inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }
  template <typename HttpT = HttpDescriptor>
  void SetHttp(HttpT&& value) {
    m_httpHasBeenSet = true;
    m_http = std::forward<HttpT>(value);
  }
  template <typename HttpT = HttpDescriptor>
  Descriptors& WithHttp(HttpT&& value) {
    SetHttp(std::forward<HttpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AG-UI descriptor, populated for records detected from an AG-UI protocol
   * source.</p>
   */
  inline const AgUiDescriptor& GetAgui() const { return m_agui; }
  inline bool AguiHasBeenSet() const { return m_aguiHasBeenSet; }
  template <typename AguiT = AgUiDescriptor>
  void SetAgui(AguiT&& value) {
    m_aguiHasBeenSet = true;
    m_agui = std::forward<AguiT>(value);
  }
  template <typename AguiT = AgUiDescriptor>
  Descriptors& WithAgui(AguiT&& value) {
    SetAgui(std::forward<AguiT>(value));
    return *this;
  }
  ///@}
 private:
  McpServerDescriptor m_mcpServer;

  A2aAgentCardDescriptor m_a2aAgentCard;

  AgentSkillsDefinitionDescriptor m_agentSkillsDefinition;

  CustomDescriptor m_custom;

  HttpDescriptor m_http;

  AgUiDescriptor m_agui;
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
