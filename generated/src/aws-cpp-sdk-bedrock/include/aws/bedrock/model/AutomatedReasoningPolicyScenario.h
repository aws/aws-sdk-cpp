/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningCheckResult.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents a test scenario used to validate an Automated Reasoning policy,
   * including the test conditions and expected outcomes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyScenario">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyScenario
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyScenario() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical expression or condition that defines this test scenario.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    AutomatedReasoningPolicyScenario& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alternative way to express the same test scenario, used for validation and
     * comparison purposes.</p>
     */
    inline const Aws::String& GetAlternateExpression() const { return m_alternateExpression; }
    inline bool AlternateExpressionHasBeenSet() const { return m_alternateExpressionHasBeenSet; }
    template<typename AlternateExpressionT = Aws::String>
    void SetAlternateExpression(AlternateExpressionT&& value) { m_alternateExpressionHasBeenSet = true; m_alternateExpression = std::forward<AlternateExpressionT>(value); }
    template<typename AlternateExpressionT = Aws::String>
    AutomatedReasoningPolicyScenario& WithAlternateExpression(AlternateExpressionT&& value) { SetAlternateExpression(std::forward<AlternateExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of rule identifiers that are expected to be triggered or evaluated
     * by this test scenario.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleIds() const { return m_ruleIds; }
    inline bool RuleIdsHasBeenSet() const { return m_ruleIdsHasBeenSet; }
    template<typename RuleIdsT = Aws::Vector<Aws::String>>
    void SetRuleIds(RuleIdsT&& value) { m_ruleIdsHasBeenSet = true; m_ruleIds = std::forward<RuleIdsT>(value); }
    template<typename RuleIdsT = Aws::Vector<Aws::String>>
    AutomatedReasoningPolicyScenario& WithRuleIds(RuleIdsT&& value) { SetRuleIds(std::forward<RuleIdsT>(value)); return *this;}
    template<typename RuleIdsT = Aws::String>
    AutomatedReasoningPolicyScenario& AddRuleIds(RuleIdsT&& value) { m_ruleIdsHasBeenSet = true; m_ruleIds.emplace_back(std::forward<RuleIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The expected outcome when this scenario is evaluated against the policy
     * (e.g., PASS, FAIL, VIOLATION).</p>
     */
    inline AutomatedReasoningCheckResult GetExpectedResult() const { return m_expectedResult; }
    inline bool ExpectedResultHasBeenSet() const { return m_expectedResultHasBeenSet; }
    inline void SetExpectedResult(AutomatedReasoningCheckResult value) { m_expectedResultHasBeenSet = true; m_expectedResult = value; }
    inline AutomatedReasoningPolicyScenario& WithExpectedResult(AutomatedReasoningCheckResult value) { SetExpectedResult(value); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_alternateExpression;
    bool m_alternateExpressionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ruleIds;
    bool m_ruleIdsHasBeenSet = false;

    AutomatedReasoningCheckResult m_expectedResult{AutomatedReasoningCheckResult::NOT_SET};
    bool m_expectedResultHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
