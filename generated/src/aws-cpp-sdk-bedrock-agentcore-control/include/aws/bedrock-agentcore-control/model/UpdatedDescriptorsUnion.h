/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/UpdatedA2aDescriptor.h>
#include <aws/bedrock-agentcore-control/model/UpdatedAgentSkillsDescriptor.h>
#include <aws/bedrock-agentcore-control/model/UpdatedCustomDescriptor.h>
#include <aws/bedrock-agentcore-control/model/UpdatedMcpDescriptor.h>

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
 * <p>Contains per-descriptor-type wrappers for updating descriptors. Each
 * descriptor type can be updated independently.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdatedDescriptorsUnion">AWS
 * API Reference</a></p>
 */
class UpdatedDescriptorsUnion {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedDescriptorsUnion() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedDescriptorsUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedDescriptorsUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated MCP descriptor.</p>
   */
  inline const UpdatedMcpDescriptor& GetMcp() const { return m_mcp; }
  inline bool McpHasBeenSet() const { return m_mcpHasBeenSet; }
  template <typename McpT = UpdatedMcpDescriptor>
  void SetMcp(McpT&& value) {
    m_mcpHasBeenSet = true;
    m_mcp = std::forward<McpT>(value);
  }
  template <typename McpT = UpdatedMcpDescriptor>
  UpdatedDescriptorsUnion& WithMcp(McpT&& value) {
    SetMcp(std::forward<McpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated A2A descriptor.</p>
   */
  inline const UpdatedA2aDescriptor& GetA2a() const { return m_a2a; }
  inline bool A2aHasBeenSet() const { return m_a2aHasBeenSet; }
  template <typename A2aT = UpdatedA2aDescriptor>
  void SetA2a(A2aT&& value) {
    m_a2aHasBeenSet = true;
    m_a2a = std::forward<A2aT>(value);
  }
  template <typename A2aT = UpdatedA2aDescriptor>
  UpdatedDescriptorsUnion& WithA2a(A2aT&& value) {
    SetA2a(std::forward<A2aT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated custom descriptor.</p>
   */
  inline const UpdatedCustomDescriptor& GetCustom() const { return m_custom; }
  inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
  template <typename CustomT = UpdatedCustomDescriptor>
  void SetCustom(CustomT&& value) {
    m_customHasBeenSet = true;
    m_custom = std::forward<CustomT>(value);
  }
  template <typename CustomT = UpdatedCustomDescriptor>
  UpdatedDescriptorsUnion& WithCustom(CustomT&& value) {
    SetCustom(std::forward<CustomT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated agent skills descriptor.</p>
   */
  inline const UpdatedAgentSkillsDescriptor& GetAgentSkills() const { return m_agentSkills; }
  inline bool AgentSkillsHasBeenSet() const { return m_agentSkillsHasBeenSet; }
  template <typename AgentSkillsT = UpdatedAgentSkillsDescriptor>
  void SetAgentSkills(AgentSkillsT&& value) {
    m_agentSkillsHasBeenSet = true;
    m_agentSkills = std::forward<AgentSkillsT>(value);
  }
  template <typename AgentSkillsT = UpdatedAgentSkillsDescriptor>
  UpdatedDescriptorsUnion& WithAgentSkills(AgentSkillsT&& value) {
    SetAgentSkills(std::forward<AgentSkillsT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedMcpDescriptor m_mcp;

  UpdatedA2aDescriptor m_a2a;

  UpdatedCustomDescriptor m_custom;

  UpdatedAgentSkillsDescriptor m_agentSkills;
  bool m_mcpHasBeenSet = false;
  bool m_a2aHasBeenSet = false;
  bool m_customHasBeenSet = false;
  bool m_agentSkillsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
