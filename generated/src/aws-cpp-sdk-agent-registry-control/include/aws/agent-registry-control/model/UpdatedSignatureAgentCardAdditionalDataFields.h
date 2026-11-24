/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedBotCategory.h>

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
 * <p>The set of signature agent card additional-data fields that can be
 * individually updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedSignatureAgentCardAdditionalDataFields">AWS
 * API Reference</a></p>
 */
class UpdatedSignatureAgentCardAdditionalDataFields {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedSignatureAgentCardAdditionalDataFields() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedSignatureAgentCardAdditionalDataFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedSignatureAgentCardAdditionalDataFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch for the bot category field.</p>
   */
  inline const UpdatedBotCategory& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = UpdatedBotCategory>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = UpdatedBotCategory>
  UpdatedSignatureAgentCardAdditionalDataFields& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedBotCategory m_category;
  bool m_categoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
