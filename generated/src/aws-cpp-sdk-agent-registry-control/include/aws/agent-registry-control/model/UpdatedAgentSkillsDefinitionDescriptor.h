/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsDefinitionDescriptorFields.h>

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
 * <p>The agent skills definition descriptor patch wrapper. Omit to leave the
 * descriptor unchanged; supply an empty object to remove it; supply optionalValue
 * to patch its fields.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedAgentSkillsDefinitionDescriptor">AWS
 * API Reference</a></p>
 */
class UpdatedAgentSkillsDefinitionDescriptor {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsDefinitionDescriptor() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsDefinitionDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsDefinitionDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value to set for this field. Omit the wrapper to leave the field
   * unchanged.</p>
   */
  inline const UpdatedAgentSkillsDefinitionDescriptorFields& GetOptionalValue() const { return m_optionalValue; }
  inline bool OptionalValueHasBeenSet() const { return m_optionalValueHasBeenSet; }
  template <typename OptionalValueT = UpdatedAgentSkillsDefinitionDescriptorFields>
  void SetOptionalValue(OptionalValueT&& value) {
    m_optionalValueHasBeenSet = true;
    m_optionalValue = std::forward<OptionalValueT>(value);
  }
  template <typename OptionalValueT = UpdatedAgentSkillsDefinitionDescriptorFields>
  UpdatedAgentSkillsDefinitionDescriptor& WithOptionalValue(OptionalValueT&& value) {
    SetOptionalValue(std::forward<OptionalValueT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedAgentSkillsDefinitionDescriptorFields m_optionalValue;
  bool m_optionalValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
