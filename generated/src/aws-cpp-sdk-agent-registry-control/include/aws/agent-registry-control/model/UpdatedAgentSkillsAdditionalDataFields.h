/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsMdDescriptor.h>

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
 * <p>The set of agent skills additional-data fields that can be individually
 * updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedAgentSkillsAdditionalDataFields">AWS
 * API Reference</a></p>
 */
class UpdatedAgentSkillsAdditionalDataFields {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsAdditionalDataFields() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsAdditionalDataFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsAdditionalDataFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch for the agent skills markdown descriptor field.</p>
   */
  inline const UpdatedAgentSkillsMdDescriptor& GetSkillMd() const { return m_skillMd; }
  inline bool SkillMdHasBeenSet() const { return m_skillMdHasBeenSet; }
  template <typename SkillMdT = UpdatedAgentSkillsMdDescriptor>
  void SetSkillMd(SkillMdT&& value) {
    m_skillMdHasBeenSet = true;
    m_skillMd = std::forward<SkillMdT>(value);
  }
  template <typename SkillMdT = UpdatedAgentSkillsMdDescriptor>
  UpdatedAgentSkillsAdditionalDataFields& WithSkillMd(SkillMdT&& value) {
    SetSkillMd(std::forward<SkillMdT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedAgentSkillsMdDescriptor m_skillMd;
  bool m_skillMdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
