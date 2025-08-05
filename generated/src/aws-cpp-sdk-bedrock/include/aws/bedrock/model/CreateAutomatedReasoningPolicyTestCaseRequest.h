/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningCheckResult.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class CreateAutomatedReasoningPolicyTestCaseRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateAutomatedReasoningPolicyTestCaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutomatedReasoningPolicyTestCase"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy for which to
     * create the test.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    CreateAutomatedReasoningPolicyTestCaseRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output content that's validated by the Automated Reasoning policy. This
     * represents the foundation model response that will be checked for accuracy.</p>
     */
    inline const Aws::String& GetGuardContent() const { return m_guardContent; }
    inline bool GuardContentHasBeenSet() const { return m_guardContentHasBeenSet; }
    template<typename GuardContentT = Aws::String>
    void SetGuardContent(GuardContentT&& value) { m_guardContentHasBeenSet = true; m_guardContent = std::forward<GuardContentT>(value); }
    template<typename GuardContentT = Aws::String>
    CreateAutomatedReasoningPolicyTestCaseRequest& WithGuardContent(GuardContentT&& value) { SetGuardContent(std::forward<GuardContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input query or prompt that generated the content. This provides context
     * for the validation.</p>
     */
    inline const Aws::String& GetQueryContent() const { return m_queryContent; }
    inline bool QueryContentHasBeenSet() const { return m_queryContentHasBeenSet; }
    template<typename QueryContentT = Aws::String>
    void SetQueryContent(QueryContentT&& value) { m_queryContentHasBeenSet = true; m_queryContent = std::forward<QueryContentT>(value); }
    template<typename QueryContentT = Aws::String>
    CreateAutomatedReasoningPolicyTestCaseRequest& WithQueryContent(QueryContentT&& value) { SetQueryContent(std::forward<QueryContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected result of the Automated Reasoning check. Valid values include: ,
     * TOO_COMPLEX, and NO_TRANSLATIONS.</p> <ul> <li> <p> <code>VALID</code> - The
     * claims are true. The claims are implied by the premises and the Automated
     * Reasoning policy. Given the Automated Reasoning policy and premises, it is not
     * possible for these claims to be false. In other words, there are no alternative
     * answers that are true that contradict the claims.</p> </li> <li> <p>
     * <code>INVALID</code> - The claims are false. The claims are not implied by the
     * premises and Automated Reasoning policy. Furthermore, there exists different
     * claims that are consistent with the premises and Automated Reasoning policy.</p>
     * </li> <li> <p> <code>SATISFIABLE</code> - The claims can be true or false. It
     * depends on what assumptions are made for the claim to be implied from the
     * premises and Automated Reasoning policy rules. In this situation, different
     * assumptions can make input claims false and alternative claims true.</p> </li>
     * <li> <p> <code>IMPOSSIBLE</code> - Automated Reasoning can’t make a statement
     * about the claims. This can happen if the premises are logically incorrect, or if
     * there is a conflict within the Automated Reasoning policy itself.</p> </li> <li>
     * <p> <code>TRANSLATION_AMBIGUOUS</code> - Detected an ambiguity in the
     * translation meant it would be unsound to continue with validity checking.
     * Additional context or follow-up questions might be needed to get translation to
     * succeed.</p> </li> <li> <p> <code>TOO_COMPLEX</code> - The input contains too
     * much information for Automated Reasoning to process within its latency
     * limits.</p> </li> <li> <p> <code>NO_TRANSLATIONS</code> - Identifies that some
     * or all of the input prompt wasn't translated into logic. This can happen if the
     * input isn't relevant to the Automated Reasoning policy, or if the policy doesn't
     * have variables to model relevant input. If Automated Reasoning can't translate
     * anything, you get a single <code>NO_TRANSLATIONS</code> finding. You might also
     * see a <code>NO_TRANSLATIONS</code> (along with other findings) if some part of
     * the validation isn't translated.</p> </li> </ul>
     */
    inline AutomatedReasoningCheckResult GetExpectedAggregatedFindingsResult() const { return m_expectedAggregatedFindingsResult; }
    inline bool ExpectedAggregatedFindingsResultHasBeenSet() const { return m_expectedAggregatedFindingsResultHasBeenSet; }
    inline void SetExpectedAggregatedFindingsResult(AutomatedReasoningCheckResult value) { m_expectedAggregatedFindingsResultHasBeenSet = true; m_expectedAggregatedFindingsResult = value; }
    inline CreateAutomatedReasoningPolicyTestCaseRequest& WithExpectedAggregatedFindingsResult(AutomatedReasoningCheckResult value) { SetExpectedAggregatedFindingsResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the operation completes no
     * more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateAutomatedReasoningPolicyTestCaseRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum confidence level for logic validation. Content that meets the
     * threshold is considered a high-confidence finding that can be validated.</p>
     */
    inline double GetConfidenceThreshold() const { return m_confidenceThreshold; }
    inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
    inline void SetConfidenceThreshold(double value) { m_confidenceThresholdHasBeenSet = true; m_confidenceThreshold = value; }
    inline CreateAutomatedReasoningPolicyTestCaseRequest& WithConfidenceThreshold(double value) { SetConfidenceThreshold(value); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_guardContent;
    bool m_guardContentHasBeenSet = false;

    Aws::String m_queryContent;
    bool m_queryContentHasBeenSet = false;

    AutomatedReasoningCheckResult m_expectedAggregatedFindingsResult{AutomatedReasoningCheckResult::NOT_SET};
    bool m_expectedAggregatedFindingsResultHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    double m_confidenceThreshold{0.0};
    bool m_confidenceThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
