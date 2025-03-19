/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The details of the rule used for evaluating variable values. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/EvaluatedRule">AWS
   * API Reference</a></p>
   */
  class EvaluatedRule
  {
  public:
    AWS_FRAUDDETECTOR_API EvaluatedRule() = default;
    AWS_FRAUDDETECTOR_API EvaluatedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EvaluatedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The rule ID. </p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    EvaluatedRule& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule version. </p>
     */
    inline const Aws::String& GetRuleVersion() const { return m_ruleVersion; }
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }
    template<typename RuleVersionT = Aws::String>
    void SetRuleVersion(RuleVersionT&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::forward<RuleVersionT>(value); }
    template<typename RuleVersionT = Aws::String>
    EvaluatedRule& WithRuleVersion(RuleVersionT&& value) { SetRuleVersion(std::forward<RuleVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule expression. </p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    EvaluatedRule& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule expression value. </p>
     */
    inline const Aws::String& GetExpressionWithValues() const { return m_expressionWithValues; }
    inline bool ExpressionWithValuesHasBeenSet() const { return m_expressionWithValuesHasBeenSet; }
    template<typename ExpressionWithValuesT = Aws::String>
    void SetExpressionWithValues(ExpressionWithValuesT&& value) { m_expressionWithValuesHasBeenSet = true; m_expressionWithValues = std::forward<ExpressionWithValuesT>(value); }
    template<typename ExpressionWithValuesT = Aws::String>
    EvaluatedRule& WithExpressionWithValues(ExpressionWithValuesT&& value) { SetExpressionWithValues(std::forward<ExpressionWithValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rule outcome. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const { return m_outcomes; }
    inline bool OutcomesHasBeenSet() const { return m_outcomesHasBeenSet; }
    template<typename OutcomesT = Aws::Vector<Aws::String>>
    void SetOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::forward<OutcomesT>(value); }
    template<typename OutcomesT = Aws::Vector<Aws::String>>
    EvaluatedRule& WithOutcomes(OutcomesT&& value) { SetOutcomes(std::forward<OutcomesT>(value)); return *this;}
    template<typename OutcomesT = Aws::String>
    EvaluatedRule& AddOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes.emplace_back(std::forward<OutcomesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether the rule was evaluated. </p>
     */
    inline bool GetEvaluated() const { return m_evaluated; }
    inline bool EvaluatedHasBeenSet() const { return m_evaluatedHasBeenSet; }
    inline void SetEvaluated(bool value) { m_evaluatedHasBeenSet = true; m_evaluated = value; }
    inline EvaluatedRule& WithEvaluated(bool value) { SetEvaluated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the rule matched. </p>
     */
    inline bool GetMatched() const { return m_matched; }
    inline bool MatchedHasBeenSet() const { return m_matchedHasBeenSet; }
    inline void SetMatched(bool value) { m_matchedHasBeenSet = true; m_matched = value; }
    inline EvaluatedRule& WithMatched(bool value) { SetMatched(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_ruleVersion;
    bool m_ruleVersionHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_expressionWithValues;
    bool m_expressionWithValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_outcomes;
    bool m_outcomesHasBeenSet = false;

    bool m_evaluated{false};
    bool m_evaluatedHasBeenSet = false;

    bool m_matched{false};
    bool m_matchedHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
