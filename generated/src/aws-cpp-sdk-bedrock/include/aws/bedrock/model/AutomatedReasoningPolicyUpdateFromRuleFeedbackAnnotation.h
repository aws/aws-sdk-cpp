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
   * <p>An annotation for updating the policy based on feedback about how specific
   * rules performed during testing or real-world usage.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of rule identifiers that the feedback applies to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleIds() const { return m_ruleIds; }
    inline bool RuleIdsHasBeenSet() const { return m_ruleIdsHasBeenSet; }
    template<typename RuleIdsT = Aws::Vector<Aws::String>>
    void SetRuleIds(RuleIdsT&& value) { m_ruleIdsHasBeenSet = true; m_ruleIds = std::forward<RuleIdsT>(value); }
    template<typename RuleIdsT = Aws::Vector<Aws::String>>
    AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation& WithRuleIds(RuleIdsT&& value) { SetRuleIds(std::forward<RuleIdsT>(value)); return *this;}
    template<typename RuleIdsT = Aws::String>
    AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation& AddRuleIds(RuleIdsT&& value) { m_ruleIdsHasBeenSet = true; m_ruleIds.emplace_back(std::forward<RuleIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The feedback information about rule performance, including suggestions for
     * improvements or corrections.</p>
     */
    inline const Aws::String& GetFeedback() const { return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    template<typename FeedbackT = Aws::String>
    void SetFeedback(FeedbackT&& value) { m_feedbackHasBeenSet = true; m_feedback = std::forward<FeedbackT>(value); }
    template<typename FeedbackT = Aws::String>
    AutomatedReasoningPolicyUpdateFromRuleFeedbackAnnotation& WithFeedback(FeedbackT&& value) { SetFeedback(std::forward<FeedbackT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ruleIds;
    bool m_ruleIdsHasBeenSet = false;

    Aws::String m_feedback;
    bool m_feedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
