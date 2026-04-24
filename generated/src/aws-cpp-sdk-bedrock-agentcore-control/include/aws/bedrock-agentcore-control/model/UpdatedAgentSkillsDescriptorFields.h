/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/UpdatedSkillDefinition.h>
#include <aws/bedrock-agentcore-control/model/UpdatedSkillMdDefinition.h>

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
 * <p>Individual agent skills descriptor fields that can be updated
 * independently.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdatedAgentSkillsDescriptorFields">AWS
 * API Reference</a></p>
 */
class UpdatedAgentSkillsDescriptorFields {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedAgentSkillsDescriptorFields() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedAgentSkillsDescriptorFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedAgentSkillsDescriptorFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated skill markdown definition.</p>
   */
  inline const UpdatedSkillMdDefinition& GetSkillMd() const { return m_skillMd; }
  inline bool SkillMdHasBeenSet() const { return m_skillMdHasBeenSet; }
  template <typename SkillMdT = UpdatedSkillMdDefinition>
  void SetSkillMd(SkillMdT&& value) {
    m_skillMdHasBeenSet = true;
    m_skillMd = std::forward<SkillMdT>(value);
  }
  template <typename SkillMdT = UpdatedSkillMdDefinition>
  UpdatedAgentSkillsDescriptorFields& WithSkillMd(SkillMdT&& value) {
    SetSkillMd(std::forward<SkillMdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated skill definition.</p>
   */
  inline const UpdatedSkillDefinition& GetSkillDefinition() const { return m_skillDefinition; }
  inline bool SkillDefinitionHasBeenSet() const { return m_skillDefinitionHasBeenSet; }
  template <typename SkillDefinitionT = UpdatedSkillDefinition>
  void SetSkillDefinition(SkillDefinitionT&& value) {
    m_skillDefinitionHasBeenSet = true;
    m_skillDefinition = std::forward<SkillDefinitionT>(value);
  }
  template <typename SkillDefinitionT = UpdatedSkillDefinition>
  UpdatedAgentSkillsDescriptorFields& WithSkillDefinition(SkillDefinitionT&& value) {
    SetSkillDefinition(std::forward<SkillDefinitionT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedSkillMdDefinition m_skillMd;

  UpdatedSkillDefinition m_skillDefinition;
  bool m_skillMdHasBeenSet = false;
  bool m_skillDefinitionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
