/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SkillDefinition.h>
#include <aws/bedrock-agentcore-control/model/SkillMdDefinition.h>

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
 * <p>The agent skills descriptor for a registry record. Contains an optional skill
 * markdown definition in human-readable format and an optional structured skill
 * definition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AgentSkillsDescriptor">AWS
 * API Reference</a></p>
 */
class AgentSkillsDescriptor {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AgentSkillsDescriptor() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AgentSkillsDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AgentSkillsDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The optional skill markdown definition describing the agent's skills in a
   * human-readable format.</p>
   */
  inline const SkillMdDefinition& GetSkillMd() const { return m_skillMd; }
  inline bool SkillMdHasBeenSet() const { return m_skillMdHasBeenSet; }
  template <typename SkillMdT = SkillMdDefinition>
  void SetSkillMd(SkillMdT&& value) {
    m_skillMdHasBeenSet = true;
    m_skillMd = std::forward<SkillMdT>(value);
  }
  template <typename SkillMdT = SkillMdDefinition>
  AgentSkillsDescriptor& WithSkillMd(SkillMdT&& value) {
    SetSkillMd(std::forward<SkillMdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The structured skill definition with schema version and content.</p>
   */
  inline const SkillDefinition& GetSkillDefinition() const { return m_skillDefinition; }
  inline bool SkillDefinitionHasBeenSet() const { return m_skillDefinitionHasBeenSet; }
  template <typename SkillDefinitionT = SkillDefinition>
  void SetSkillDefinition(SkillDefinitionT&& value) {
    m_skillDefinitionHasBeenSet = true;
    m_skillDefinition = std::forward<SkillDefinitionT>(value);
  }
  template <typename SkillDefinitionT = SkillDefinition>
  AgentSkillsDescriptor& WithSkillDefinition(SkillDefinitionT&& value) {
    SetSkillDefinition(std::forward<SkillDefinitionT>(value));
    return *this;
  }
  ///@}
 private:
  SkillMdDefinition m_skillMd;

  SkillDefinition m_skillDefinition;
  bool m_skillMdHasBeenSet = false;
  bool m_skillDefinitionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
