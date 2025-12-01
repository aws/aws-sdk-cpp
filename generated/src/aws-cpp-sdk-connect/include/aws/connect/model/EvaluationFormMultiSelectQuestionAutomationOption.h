/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MultiSelectQuestionRuleCategoryAutomation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>An automation option for a multi-select question.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormMultiSelectQuestionAutomationOption">AWS
 * API Reference</a></p>
 */
class EvaluationFormMultiSelectQuestionAutomationOption {
 public:
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionAutomationOption() = default;
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionAutomationOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionAutomationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Rule category configuration for this automation option.</p>
   */
  inline const MultiSelectQuestionRuleCategoryAutomation& GetRuleCategory() const { return m_ruleCategory; }
  inline bool RuleCategoryHasBeenSet() const { return m_ruleCategoryHasBeenSet; }
  template <typename RuleCategoryT = MultiSelectQuestionRuleCategoryAutomation>
  void SetRuleCategory(RuleCategoryT&& value) {
    m_ruleCategoryHasBeenSet = true;
    m_ruleCategory = std::forward<RuleCategoryT>(value);
  }
  template <typename RuleCategoryT = MultiSelectQuestionRuleCategoryAutomation>
  EvaluationFormMultiSelectQuestionAutomationOption& WithRuleCategory(RuleCategoryT&& value) {
    SetRuleCategory(std::forward<RuleCategoryT>(value));
    return *this;
  }
  ///@}
 private:
  MultiSelectQuestionRuleCategoryAutomation m_ruleCategory;
  bool m_ruleCategoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
