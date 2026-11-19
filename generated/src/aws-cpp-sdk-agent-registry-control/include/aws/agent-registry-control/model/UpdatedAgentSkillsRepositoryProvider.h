/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AgentSkillsRepositoryProvider.h>

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
 * <p>The repository provider patch wrapper. Omit to leave the repository provider
 * unchanged; supply an empty object to remove it; supply optionalValue to set it.
 * When you remove it, also remove or replace the GitHub source in the same
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedAgentSkillsRepositoryProvider">AWS
 * API Reference</a></p>
 */
class UpdatedAgentSkillsRepositoryProvider {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsRepositoryProvider() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsRepositoryProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsRepositoryProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value to set for this field. Omit the wrapper to leave the field
   * unchanged.</p>
   */
  inline AgentSkillsRepositoryProvider GetOptionalValue() const { return m_optionalValue; }
  inline bool OptionalValueHasBeenSet() const { return m_optionalValueHasBeenSet; }
  inline void SetOptionalValue(AgentSkillsRepositoryProvider value) {
    m_optionalValueHasBeenSet = true;
    m_optionalValue = value;
  }
  inline UpdatedAgentSkillsRepositoryProvider& WithOptionalValue(AgentSkillsRepositoryProvider value) {
    SetOptionalValue(value);
    return *this;
  }
  ///@}
 private:
  AgentSkillsRepositoryProvider m_optionalValue{AgentSkillsRepositoryProvider::NOT_SET};
  bool m_optionalValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
