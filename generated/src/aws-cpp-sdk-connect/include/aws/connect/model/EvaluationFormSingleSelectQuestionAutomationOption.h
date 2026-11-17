/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SingleSelectQuestionAutomationRule.h>
#include <aws/connect/model/SingleSelectQuestionRuleCategoryAutomation.h>

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
 * <p>Information about the automation option of a single select
 * question.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormSingleSelectQuestionAutomationOption">AWS
 * API Reference</a></p>
 */
class EvaluationFormSingleSelectQuestionAutomationOption {
 public:
  AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomationOption() = default;
  AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomationOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The automation option based on a rule category for the single select
   * question.</p>
   */
  inline const SingleSelectQuestionRuleCategoryAutomation& GetRuleCategory() const { return m_ruleCategory; }
  inline bool RuleCategoryHasBeenSet() const { return m_ruleCategoryHasBeenSet; }
  template <typename RuleCategoryT = SingleSelectQuestionRuleCategoryAutomation>
  void SetRuleCategory(RuleCategoryT&& value) {
    m_ruleCategoryHasBeenSet = true;
    m_ruleCategory = std::forward<RuleCategoryT>(value);
  }
  template <typename RuleCategoryT = SingleSelectQuestionRuleCategoryAutomation>
  EvaluationFormSingleSelectQuestionAutomationOption& WithRuleCategory(RuleCategoryT&& value) {
    SetRuleCategory(std::forward<RuleCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The automation option based on a condition for the single select question.
   * Use with the <code>CONDITION</code> answer source type.</p>
   */
  inline const SingleSelectQuestionAutomationRule& GetAutomationRule() const { return m_automationRule; }
  inline bool AutomationRuleHasBeenSet() const { return m_automationRuleHasBeenSet; }
  template <typename AutomationRuleT = SingleSelectQuestionAutomationRule>
  void SetAutomationRule(AutomationRuleT&& value) {
    m_automationRuleHasBeenSet = true;
    m_automationRule = std::forward<AutomationRuleT>(value);
  }
  template <typename AutomationRuleT = SingleSelectQuestionAutomationRule>
  EvaluationFormSingleSelectQuestionAutomationOption& WithAutomationRule(AutomationRuleT&& value) {
    SetAutomationRule(std::forward<AutomationRuleT>(value));
    return *this;
  }
  ///@}
 private:
  SingleSelectQuestionRuleCategoryAutomation m_ruleCategory;

  SingleSelectQuestionAutomationRule m_automationRule;
  bool m_ruleCategoryHasBeenSet = false;
  bool m_automationRuleHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
