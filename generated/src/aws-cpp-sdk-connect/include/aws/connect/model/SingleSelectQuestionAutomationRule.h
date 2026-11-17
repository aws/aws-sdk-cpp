/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Information about a condition-based automation rule for a single select
 * question. When the condition is satisfied, the specified answer option is
 * selected.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SingleSelectQuestionAutomationRule">AWS
 * API Reference</a></p>
 */
class SingleSelectQuestionAutomationRule {
 public:
  AWS_CONNECT_API SingleSelectQuestionAutomationRule() = default;
  AWS_CONNECT_API SingleSelectQuestionAutomationRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API SingleSelectQuestionAutomationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The condition that must be satisfied for the answer option to be selected.
   * The condition uses the same sources, comparators, and operators as item
   * enablement conditions.</p>
   */
  inline const EvaluationFormItemEnablementCondition& GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  template <typename ConditionT = EvaluationFormItemEnablementCondition>
  void SetCondition(ConditionT&& value) {
    m_conditionHasBeenSet = true;
    m_condition = std::forward<ConditionT>(value);
  }
  template <typename ConditionT = EvaluationFormItemEnablementCondition>
  SingleSelectQuestionAutomationRule& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the answer option to select when the condition is
   * satisfied.</p>
   */
  inline const Aws::String& GetOptionRefId() const { return m_optionRefId; }
  inline bool OptionRefIdHasBeenSet() const { return m_optionRefIdHasBeenSet; }
  template <typename OptionRefIdT = Aws::String>
  void SetOptionRefId(OptionRefIdT&& value) {
    m_optionRefIdHasBeenSet = true;
    m_optionRefId = std::forward<OptionRefIdT>(value);
  }
  template <typename OptionRefIdT = Aws::String>
  SingleSelectQuestionAutomationRule& WithOptionRefId(OptionRefIdT&& value) {
    SetOptionRefId(std::forward<OptionRefIdT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormItemEnablementCondition m_condition;

  Aws::String m_optionRefId;
  bool m_conditionHasBeenSet = false;
  bool m_optionRefIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
