/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateAutomatedReasoningPolicyTestCaseRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API UpdateAutomatedReasoningPolicyTestCaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutomatedReasoningPolicyTestCase"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy that
     * contains the test.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    UpdateAutomatedReasoningPolicyTestCaseRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the test to update.</p>
     */
    inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    template<typename TestCaseIdT = Aws::String>
    void SetTestCaseId(TestCaseIdT&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::forward<TestCaseIdT>(value); }
    template<typename TestCaseIdT = Aws::String>
    UpdateAutomatedReasoningPolicyTestCaseRequest& WithTestCaseId(TestCaseIdT&& value) { SetTestCaseId(std::forward<TestCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated content to be validated by the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetGuardContent() const { return m_guardContent; }
    inline bool GuardContentHasBeenSet() const { return m_guardContentHasBeenSet; }
    template<typename GuardContentT = Aws::String>
    void SetGuardContent(GuardContentT&& value) { m_guardContentHasBeenSet = true; m_guardContent = std::forward<GuardContentT>(value); }
    template<typename GuardContentT = Aws::String>
    UpdateAutomatedReasoningPolicyTestCaseRequest& WithGuardContent(GuardContentT&& value) { SetGuardContent(std::forward<GuardContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated input query or prompt that generated the content.</p>
     */
    inline const Aws::String& GetQueryContent() const { return m_queryContent; }
    inline bool QueryContentHasBeenSet() const { return m_queryContentHasBeenSet; }
    template<typename QueryContentT = Aws::String>
    void SetQueryContent(QueryContentT&& value) { m_queryContentHasBeenSet = true; m_queryContent = std::forward<QueryContentT>(value); }
    template<typename QueryContentT = Aws::String>
    UpdateAutomatedReasoningPolicyTestCaseRequest& WithQueryContent(QueryContentT&& value) { SetQueryContent(std::forward<QueryContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the test was last updated. This is used as a concurrency
     * token to prevent conflicting modifications.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    UpdateAutomatedReasoningPolicyTestCaseRequest& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated expected result of the Automated Reasoning check.</p>
     */
    inline AutomatedReasoningCheckResult GetExpectedAggregatedFindingsResult() const { return m_expectedAggregatedFindingsResult; }
    inline bool ExpectedAggregatedFindingsResultHasBeenSet() const { return m_expectedAggregatedFindingsResultHasBeenSet; }
    inline void SetExpectedAggregatedFindingsResult(AutomatedReasoningCheckResult value) { m_expectedAggregatedFindingsResultHasBeenSet = true; m_expectedAggregatedFindingsResult = value; }
    inline UpdateAutomatedReasoningPolicyTestCaseRequest& WithExpectedAggregatedFindingsResult(AutomatedReasoningCheckResult value) { SetExpectedAggregatedFindingsResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated minimum confidence level for logic validation. If null is
     * provided, the threshold will be removed.</p>
     */
    inline double GetConfidenceThreshold() const { return m_confidenceThreshold; }
    inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
    inline void SetConfidenceThreshold(double value) { m_confidenceThresholdHasBeenSet = true; m_confidenceThreshold = value; }
    inline UpdateAutomatedReasoningPolicyTestCaseRequest& WithConfidenceThreshold(double value) { SetConfidenceThreshold(value); return *this;}
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
    UpdateAutomatedReasoningPolicyTestCaseRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    Aws::String m_guardContent;
    bool m_guardContentHasBeenSet = false;

    Aws::String m_queryContent;
    bool m_queryContentHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    AutomatedReasoningCheckResult m_expectedAggregatedFindingsResult{AutomatedReasoningCheckResult::NOT_SET};
    bool m_expectedAggregatedFindingsResultHasBeenSet = false;

    double m_confidenceThreshold{0.0};
    bool m_confidenceThresholdHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
