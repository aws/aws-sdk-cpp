/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An annotation for updating the policy based on feedback about how it
   * performed on specific test scenarios.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of rule identifiers that were involved in the scenario being
     * evaluated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleIds() const { return m_ruleIds; }
    inline bool RuleIdsHasBeenSet() const { return m_ruleIdsHasBeenSet; }
    template<typename RuleIdsT = Aws::Vector<Aws::String>>
    void SetRuleIds(RuleIdsT&& value) { m_ruleIdsHasBeenSet = true; m_ruleIds = std::forward<RuleIdsT>(value); }
    template<typename RuleIdsT = Aws::Vector<Aws::String>>
    AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation& WithRuleIds(RuleIdsT&& value) { SetRuleIds(std::forward<RuleIdsT>(value)); return *this;}
    template<typename RuleIdsT = Aws::String>
    AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation& AddRuleIds(RuleIdsT&& value) { m_ruleIdsHasBeenSet = true; m_ruleIds.emplace_back(std::forward<RuleIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical expression that defines the test scenario that generated this
     * feedback.</p>
     */
    inline const Aws::String& GetScenarioExpression() const { return m_scenarioExpression; }
    inline bool ScenarioExpressionHasBeenSet() const { return m_scenarioExpressionHasBeenSet; }
    template<typename ScenarioExpressionT = Aws::String>
    void SetScenarioExpression(ScenarioExpressionT&& value) { m_scenarioExpressionHasBeenSet = true; m_scenarioExpression = std::forward<ScenarioExpressionT>(value); }
    template<typename ScenarioExpressionT = Aws::String>
    AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation& WithScenarioExpression(ScenarioExpressionT&& value) { SetScenarioExpression(std::forward<ScenarioExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feedback information about scenario performance, including any issues or
     * improvements identified.</p>
     */
    inline const Aws::String& GetFeedback() const { return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    template<typename FeedbackT = Aws::String>
    void SetFeedback(FeedbackT&& value) { m_feedbackHasBeenSet = true; m_feedback = std::forward<FeedbackT>(value); }
    template<typename FeedbackT = Aws::String>
    AutomatedReasoningPolicyUpdateFromScenarioFeedbackAnnotation& WithFeedback(FeedbackT&& value) { SetFeedback(std::forward<FeedbackT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ruleIds;
    bool m_ruleIdsHasBeenSet = false;

    Aws::String m_scenarioExpression;
    bool m_scenarioExpressionHasBeenSet = false;

    Aws::String m_feedback;
    bool m_feedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
