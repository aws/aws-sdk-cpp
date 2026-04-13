/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/A2aDescriptor.h>
#include <aws/bedrock-agentcore/model/AgentSkillsDescriptor.h>
#include <aws/bedrock-agentcore/model/CustomDescriptor.h>
#include <aws/bedrock-agentcore/model/McpDescriptor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p> Contains the descriptor configuration for a registry record. Only the field
 * that matches the record's <code>descriptorType</code> is
 * populated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/Descriptors">AWS
 * API Reference</a></p>
 */
class Descriptors {
 public:
  AWS_BEDROCKAGENTCORE_API Descriptors() = default;
  AWS_BEDROCKAGENTCORE_API Descriptors(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Descriptors& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The MCP (Model Context Protocol) descriptor configuration. Populated when
   * the record's <code>descriptorType</code> is <code>MCP</code>.</p>
   */
  inline const McpDescriptor& GetMcp() const { return m_mcp; }
  inline bool McpHasBeenSet() const { return m_mcpHasBeenSet; }
  template <typename McpT = McpDescriptor>
  void SetMcp(McpT&& value) {
    m_mcpHasBeenSet = true;
    m_mcp = std::forward<McpT>(value);
  }
  template <typename McpT = McpDescriptor>
  Descriptors& WithMcp(McpT&& value) {
    SetMcp(std::forward<McpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The A2A (Agent-to-Agent) descriptor configuration. Populated when the
   * record's <code>descriptorType</code> is <code>A2A</code>.</p>
   */
  inline const A2aDescriptor& GetA2a() const { return m_a2a; }
  inline bool A2aHasBeenSet() const { return m_a2aHasBeenSet; }
  template <typename A2aT = A2aDescriptor>
  void SetA2a(A2aT&& value) {
    m_a2aHasBeenSet = true;
    m_a2a = std::forward<A2aT>(value);
  }
  template <typename A2aT = A2aDescriptor>
  Descriptors& WithA2a(A2aT&& value) {
    SetA2a(std::forward<A2aT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The custom descriptor configuration. Populated when the record's
   * <code>descriptorType</code> is <code>CUSTOM</code>.</p>
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
   * <p> The agent skills descriptor configuration. Populated when the record's
   * <code>descriptorType</code> is <code>AGENT_SKILLS</code>.</p>
   */
  inline const AgentSkillsDescriptor& GetAgentSkills() const { return m_agentSkills; }
  inline bool AgentSkillsHasBeenSet() const { return m_agentSkillsHasBeenSet; }
  template <typename AgentSkillsT = AgentSkillsDescriptor>
  void SetAgentSkills(AgentSkillsT&& value) {
    m_agentSkillsHasBeenSet = true;
    m_agentSkills = std::forward<AgentSkillsT>(value);
  }
  template <typename AgentSkillsT = AgentSkillsDescriptor>
  Descriptors& WithAgentSkills(AgentSkillsT&& value) {
    SetAgentSkills(std::forward<AgentSkillsT>(value));
    return *this;
  }
  ///@}
 private:
  McpDescriptor m_mcp;

  A2aDescriptor m_a2a;

  CustomDescriptor m_custom;

  AgentSkillsDescriptor m_agentSkills;
  bool m_mcpHasBeenSet = false;
  bool m_a2aHasBeenSet = false;
  bool m_customHasBeenSet = false;
  bool m_agentSkillsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
