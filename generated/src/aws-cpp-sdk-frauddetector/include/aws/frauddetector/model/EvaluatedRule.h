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
    AWS_FRAUDDETECTOR_API EvaluatedRule();
    AWS_FRAUDDETECTOR_API EvaluatedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EvaluatedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The rule ID. </p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p> The rule ID. </p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p> The rule ID. </p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p> The rule ID. </p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p> The rule ID. </p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p> The rule ID. </p>
     */
    inline EvaluatedRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p> The rule ID. </p>
     */
    inline EvaluatedRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p> The rule ID. </p>
     */
    inline EvaluatedRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p> The rule version. </p>
     */
    inline const Aws::String& GetRuleVersion() const{ return m_ruleVersion; }

    /**
     * <p> The rule version. </p>
     */
    inline bool RuleVersionHasBeenSet() const { return m_ruleVersionHasBeenSet; }

    /**
     * <p> The rule version. </p>
     */
    inline void SetRuleVersion(const Aws::String& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = value; }

    /**
     * <p> The rule version. </p>
     */
    inline void SetRuleVersion(Aws::String&& value) { m_ruleVersionHasBeenSet = true; m_ruleVersion = std::move(value); }

    /**
     * <p> The rule version. </p>
     */
    inline void SetRuleVersion(const char* value) { m_ruleVersionHasBeenSet = true; m_ruleVersion.assign(value); }

    /**
     * <p> The rule version. </p>
     */
    inline EvaluatedRule& WithRuleVersion(const Aws::String& value) { SetRuleVersion(value); return *this;}

    /**
     * <p> The rule version. </p>
     */
    inline EvaluatedRule& WithRuleVersion(Aws::String&& value) { SetRuleVersion(std::move(value)); return *this;}

    /**
     * <p> The rule version. </p>
     */
    inline EvaluatedRule& WithRuleVersion(const char* value) { SetRuleVersion(value); return *this;}


    /**
     * <p> The rule expression. </p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p> The rule expression. </p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p> The rule expression. </p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p> The rule expression. </p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p> The rule expression. </p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p> The rule expression. </p>
     */
    inline EvaluatedRule& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p> The rule expression. </p>
     */
    inline EvaluatedRule& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p> The rule expression. </p>
     */
    inline EvaluatedRule& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p> The rule expression value. </p>
     */
    inline const Aws::String& GetExpressionWithValues() const{ return m_expressionWithValues; }

    /**
     * <p> The rule expression value. </p>
     */
    inline bool ExpressionWithValuesHasBeenSet() const { return m_expressionWithValuesHasBeenSet; }

    /**
     * <p> The rule expression value. </p>
     */
    inline void SetExpressionWithValues(const Aws::String& value) { m_expressionWithValuesHasBeenSet = true; m_expressionWithValues = value; }

    /**
     * <p> The rule expression value. </p>
     */
    inline void SetExpressionWithValues(Aws::String&& value) { m_expressionWithValuesHasBeenSet = true; m_expressionWithValues = std::move(value); }

    /**
     * <p> The rule expression value. </p>
     */
    inline void SetExpressionWithValues(const char* value) { m_expressionWithValuesHasBeenSet = true; m_expressionWithValues.assign(value); }

    /**
     * <p> The rule expression value. </p>
     */
    inline EvaluatedRule& WithExpressionWithValues(const Aws::String& value) { SetExpressionWithValues(value); return *this;}

    /**
     * <p> The rule expression value. </p>
     */
    inline EvaluatedRule& WithExpressionWithValues(Aws::String&& value) { SetExpressionWithValues(std::move(value)); return *this;}

    /**
     * <p> The rule expression value. </p>
     */
    inline EvaluatedRule& WithExpressionWithValues(const char* value) { SetExpressionWithValues(value); return *this;}


    /**
     * <p> The rule outcome. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const{ return m_outcomes; }

    /**
     * <p> The rule outcome. </p>
     */
    inline bool OutcomesHasBeenSet() const { return m_outcomesHasBeenSet; }

    /**
     * <p> The rule outcome. </p>
     */
    inline void SetOutcomes(const Aws::Vector<Aws::String>& value) { m_outcomesHasBeenSet = true; m_outcomes = value; }

    /**
     * <p> The rule outcome. </p>
     */
    inline void SetOutcomes(Aws::Vector<Aws::String>&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::move(value); }

    /**
     * <p> The rule outcome. </p>
     */
    inline EvaluatedRule& WithOutcomes(const Aws::Vector<Aws::String>& value) { SetOutcomes(value); return *this;}

    /**
     * <p> The rule outcome. </p>
     */
    inline EvaluatedRule& WithOutcomes(Aws::Vector<Aws::String>&& value) { SetOutcomes(std::move(value)); return *this;}

    /**
     * <p> The rule outcome. </p>
     */
    inline EvaluatedRule& AddOutcomes(const Aws::String& value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(value); return *this; }

    /**
     * <p> The rule outcome. </p>
     */
    inline EvaluatedRule& AddOutcomes(Aws::String&& value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(std::move(value)); return *this; }

    /**
     * <p> The rule outcome. </p>
     */
    inline EvaluatedRule& AddOutcomes(const char* value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(value); return *this; }


    /**
     * <p> Indicates whether the rule was evaluated. </p>
     */
    inline bool GetEvaluated() const{ return m_evaluated; }

    /**
     * <p> Indicates whether the rule was evaluated. </p>
     */
    inline bool EvaluatedHasBeenSet() const { return m_evaluatedHasBeenSet; }

    /**
     * <p> Indicates whether the rule was evaluated. </p>
     */
    inline void SetEvaluated(bool value) { m_evaluatedHasBeenSet = true; m_evaluated = value; }

    /**
     * <p> Indicates whether the rule was evaluated. </p>
     */
    inline EvaluatedRule& WithEvaluated(bool value) { SetEvaluated(value); return *this;}


    /**
     * <p> Indicates whether the rule matched. </p>
     */
    inline bool GetMatched() const{ return m_matched; }

    /**
     * <p> Indicates whether the rule matched. </p>
     */
    inline bool MatchedHasBeenSet() const { return m_matchedHasBeenSet; }

    /**
     * <p> Indicates whether the rule matched. </p>
     */
    inline void SetMatched(bool value) { m_matchedHasBeenSet = true; m_matched = value; }

    /**
     * <p> Indicates whether the rule matched. </p>
     */
    inline EvaluatedRule& WithMatched(bool value) { SetMatched(value); return *this;}

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

    bool m_evaluated;
    bool m_evaluatedHasBeenSet = false;

    bool m_matched;
    bool m_matchedHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
