/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AgentSkillsMdDescriptor.h>

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
 * <p>Additional data associated with an agent skills definition
 * descriptor.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AgentSkillsAdditionalData">AWS
 * API Reference</a></p>
 */
class AgentSkillsAdditionalData {
 public:
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsAdditionalData() = default;
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsAdditionalData(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsAdditionalData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The markdown skill content associated with an agent skills definition.</p>
   */
  inline const AgentSkillsMdDescriptor& GetSkillMd() const { return m_skillMd; }
  inline bool SkillMdHasBeenSet() const { return m_skillMdHasBeenSet; }
  template <typename SkillMdT = AgentSkillsMdDescriptor>
  void SetSkillMd(SkillMdT&& value) {
    m_skillMdHasBeenSet = true;
    m_skillMd = std::forward<SkillMdT>(value);
  }
  template <typename SkillMdT = AgentSkillsMdDescriptor>
  AgentSkillsAdditionalData& WithSkillMd(SkillMdT&& value) {
    SetSkillMd(std::forward<SkillMdT>(value));
    return *this;
  }
  ///@}
 private:
  AgentSkillsMdDescriptor m_skillMd;
  bool m_skillMdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
