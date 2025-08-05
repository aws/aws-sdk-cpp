/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/GuardrailStatus.h>
#include <aws/bedrock/model/GuardrailTopicPolicy.h>
#include <aws/bedrock/model/GuardrailContentPolicy.h>
#include <aws/bedrock/model/GuardrailWordPolicy.h>
#include <aws/bedrock/model/GuardrailSensitiveInformationPolicy.h>
#include <aws/bedrock/model/GuardrailContextualGroundingPolicy.h>
#include <aws/bedrock/model/GuardrailAutomatedReasoningPolicy.h>
#include <aws/bedrock/model/GuardrailCrossRegionDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{
  class GetGuardrailResult
  {
  public:
    AWS_BEDROCK_API GetGuardrailResult() = default;
    AWS_BEDROCK_API GetGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the guardrail.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetGuardrailResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetGuardrailResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailId() const { return m_guardrailId; }
    template<typename GuardrailIdT = Aws::String>
    void SetGuardrailId(GuardrailIdT&& value) { m_guardrailIdHasBeenSet = true; m_guardrailId = std::forward<GuardrailIdT>(value); }
    template<typename GuardrailIdT = Aws::String>
    GetGuardrailResult& WithGuardrailId(GuardrailIdT&& value) { SetGuardrailId(std::forward<GuardrailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailArn() const { return m_guardrailArn; }
    template<typename GuardrailArnT = Aws::String>
    void SetGuardrailArn(GuardrailArnT&& value) { m_guardrailArnHasBeenSet = true; m_guardrailArn = std::forward<GuardrailArnT>(value); }
    template<typename GuardrailArnT = Aws::String>
    GetGuardrailResult& WithGuardrailArn(GuardrailArnT&& value) { SetGuardrailArn(std::forward<GuardrailArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    GetGuardrailResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the guardrail.</p>
     */
    inline GuardrailStatus GetStatus() const { return m_status; }
    inline void SetStatus(GuardrailStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetGuardrailResult& WithStatus(GuardrailStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic policy that was configured for the guardrail.</p>
     */
    inline const GuardrailTopicPolicy& GetTopicPolicy() const { return m_topicPolicy; }
    template<typename TopicPolicyT = GuardrailTopicPolicy>
    void SetTopicPolicy(TopicPolicyT&& value) { m_topicPolicyHasBeenSet = true; m_topicPolicy = std::forward<TopicPolicyT>(value); }
    template<typename TopicPolicyT = GuardrailTopicPolicy>
    GetGuardrailResult& WithTopicPolicy(TopicPolicyT&& value) { SetTopicPolicy(std::forward<TopicPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content policy that was configured for the guardrail.</p>
     */
    inline const GuardrailContentPolicy& GetContentPolicy() const { return m_contentPolicy; }
    template<typename ContentPolicyT = GuardrailContentPolicy>
    void SetContentPolicy(ContentPolicyT&& value) { m_contentPolicyHasBeenSet = true; m_contentPolicy = std::forward<ContentPolicyT>(value); }
    template<typename ContentPolicyT = GuardrailContentPolicy>
    GetGuardrailResult& WithContentPolicy(ContentPolicyT&& value) { SetContentPolicy(std::forward<ContentPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word policy that was configured for the guardrail.</p>
     */
    inline const GuardrailWordPolicy& GetWordPolicy() const { return m_wordPolicy; }
    template<typename WordPolicyT = GuardrailWordPolicy>
    void SetWordPolicy(WordPolicyT&& value) { m_wordPolicyHasBeenSet = true; m_wordPolicy = std::forward<WordPolicyT>(value); }
    template<typename WordPolicyT = GuardrailWordPolicy>
    GetGuardrailResult& WithWordPolicy(WordPolicyT&& value) { SetWordPolicy(std::forward<WordPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy that was configured for the guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicy& GetSensitiveInformationPolicy() const { return m_sensitiveInformationPolicy; }
    template<typename SensitiveInformationPolicyT = GuardrailSensitiveInformationPolicy>
    void SetSensitiveInformationPolicy(SensitiveInformationPolicyT&& value) { m_sensitiveInformationPolicyHasBeenSet = true; m_sensitiveInformationPolicy = std::forward<SensitiveInformationPolicyT>(value); }
    template<typename SensitiveInformationPolicyT = GuardrailSensitiveInformationPolicy>
    GetGuardrailResult& WithSensitiveInformationPolicy(SensitiveInformationPolicyT&& value) { SetSensitiveInformationPolicy(std::forward<SensitiveInformationPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual grounding policy used in the guardrail.</p>
     */
    inline const GuardrailContextualGroundingPolicy& GetContextualGroundingPolicy() const { return m_contextualGroundingPolicy; }
    template<typename ContextualGroundingPolicyT = GuardrailContextualGroundingPolicy>
    void SetContextualGroundingPolicy(ContextualGroundingPolicyT&& value) { m_contextualGroundingPolicyHasBeenSet = true; m_contextualGroundingPolicy = std::forward<ContextualGroundingPolicyT>(value); }
    template<typename ContextualGroundingPolicyT = GuardrailContextualGroundingPolicy>
    GetGuardrailResult& WithContextualGroundingPolicy(ContextualGroundingPolicyT&& value) { SetContextualGroundingPolicy(std::forward<ContextualGroundingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current Automated Reasoning policy configuration for the guardrail, if
     * any is configured.</p>
     */
    inline const GuardrailAutomatedReasoningPolicy& GetAutomatedReasoningPolicy() const { return m_automatedReasoningPolicy; }
    template<typename AutomatedReasoningPolicyT = GuardrailAutomatedReasoningPolicy>
    void SetAutomatedReasoningPolicy(AutomatedReasoningPolicyT&& value) { m_automatedReasoningPolicyHasBeenSet = true; m_automatedReasoningPolicy = std::forward<AutomatedReasoningPolicyT>(value); }
    template<typename AutomatedReasoningPolicyT = GuardrailAutomatedReasoningPolicy>
    GetGuardrailResult& WithAutomatedReasoningPolicy(AutomatedReasoningPolicyT&& value) { SetAutomatedReasoningPolicy(std::forward<AutomatedReasoningPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the system-defined guardrail profile that you're using with
     * your guardrail, including the guardrail profile ID and Amazon Resource Name
     * (ARN).</p>
     */
    inline const GuardrailCrossRegionDetails& GetCrossRegionDetails() const { return m_crossRegionDetails; }
    template<typename CrossRegionDetailsT = GuardrailCrossRegionDetails>
    void SetCrossRegionDetails(CrossRegionDetailsT&& value) { m_crossRegionDetailsHasBeenSet = true; m_crossRegionDetails = std::forward<CrossRegionDetailsT>(value); }
    template<typename CrossRegionDetailsT = GuardrailCrossRegionDetails>
    GetGuardrailResult& WithCrossRegionDetails(CrossRegionDetailsT&& value) { SetCrossRegionDetails(std::forward<CrossRegionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the guardrail was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetGuardrailResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetGuardrailResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    void SetStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::forward<StatusReasonsT>(value); }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    GetGuardrailResult& WithStatusReasons(StatusReasonsT&& value) { SetStatusReasons(std::forward<StatusReasonsT>(value)); return *this;}
    template<typename StatusReasonsT = Aws::String>
    GetGuardrailResult& AddStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureRecommendations() const { return m_failureRecommendations; }
    template<typename FailureRecommendationsT = Aws::Vector<Aws::String>>
    void SetFailureRecommendations(FailureRecommendationsT&& value) { m_failureRecommendationsHasBeenSet = true; m_failureRecommendations = std::forward<FailureRecommendationsT>(value); }
    template<typename FailureRecommendationsT = Aws::Vector<Aws::String>>
    GetGuardrailResult& WithFailureRecommendations(FailureRecommendationsT&& value) { SetFailureRecommendations(std::forward<FailureRecommendationsT>(value)); return *this;}
    template<typename FailureRecommendationsT = Aws::String>
    GetGuardrailResult& AddFailureRecommendations(FailureRecommendationsT&& value) { m_failureRecommendationsHasBeenSet = true; m_failureRecommendations.emplace_back(std::forward<FailureRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline const Aws::String& GetBlockedInputMessaging() const { return m_blockedInputMessaging; }
    template<typename BlockedInputMessagingT = Aws::String>
    void SetBlockedInputMessaging(BlockedInputMessagingT&& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = std::forward<BlockedInputMessagingT>(value); }
    template<typename BlockedInputMessagingT = Aws::String>
    GetGuardrailResult& WithBlockedInputMessaging(BlockedInputMessagingT&& value) { SetBlockedInputMessaging(std::forward<BlockedInputMessagingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline const Aws::String& GetBlockedOutputsMessaging() const { return m_blockedOutputsMessaging; }
    template<typename BlockedOutputsMessagingT = Aws::String>
    void SetBlockedOutputsMessaging(BlockedOutputsMessagingT&& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = std::forward<BlockedOutputsMessagingT>(value); }
    template<typename BlockedOutputsMessagingT = Aws::String>
    GetGuardrailResult& WithBlockedOutputsMessaging(BlockedOutputsMessagingT&& value) { SetBlockedOutputsMessaging(std::forward<BlockedOutputsMessagingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetGuardrailResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGuardrailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_guardrailId;
    bool m_guardrailIdHasBeenSet = false;

    Aws::String m_guardrailArn;
    bool m_guardrailArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    GuardrailStatus m_status{GuardrailStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    GuardrailTopicPolicy m_topicPolicy;
    bool m_topicPolicyHasBeenSet = false;

    GuardrailContentPolicy m_contentPolicy;
    bool m_contentPolicyHasBeenSet = false;

    GuardrailWordPolicy m_wordPolicy;
    bool m_wordPolicyHasBeenSet = false;

    GuardrailSensitiveInformationPolicy m_sensitiveInformationPolicy;
    bool m_sensitiveInformationPolicyHasBeenSet = false;

    GuardrailContextualGroundingPolicy m_contextualGroundingPolicy;
    bool m_contextualGroundingPolicyHasBeenSet = false;

    GuardrailAutomatedReasoningPolicy m_automatedReasoningPolicy;
    bool m_automatedReasoningPolicyHasBeenSet = false;

    GuardrailCrossRegionDetails m_crossRegionDetails;
    bool m_crossRegionDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_statusReasons;
    bool m_statusReasonsHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureRecommendations;
    bool m_failureRecommendationsHasBeenSet = false;

    Aws::String m_blockedInputMessaging;
    bool m_blockedInputMessagingHasBeenSet = false;

    Aws::String m_blockedOutputsMessaging;
    bool m_blockedOutputsMessagingHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
