/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/BotCategory.h>

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
 * <p>Leaf patch wrapper for a bot category. Omit to leave unchanged; supply an
 * empty object to unset; supply optionalValue to set.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedBotCategory">AWS
 * API Reference</a></p>
 */
class UpdatedBotCategory {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedBotCategory() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedBotCategory(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedBotCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value to set for this field. Omit the wrapper to leave the field
   * unchanged.</p>
   */
  inline BotCategory GetOptionalValue() const { return m_optionalValue; }
  inline bool OptionalValueHasBeenSet() const { return m_optionalValueHasBeenSet; }
  inline void SetOptionalValue(BotCategory value) {
    m_optionalValueHasBeenSet = true;
    m_optionalValue = value;
  }
  inline UpdatedBotCategory& WithOptionalValue(BotCategory value) {
    SetOptionalValue(value);
    return *this;
  }
  ///@}
 private:
  BotCategory m_optionalValue{BotCategory::NOT_SET};
  bool m_optionalValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
