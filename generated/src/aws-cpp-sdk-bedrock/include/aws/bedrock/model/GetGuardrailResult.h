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
    AWS_BEDROCK_API GetGuardrailResult();
    AWS_BEDROCK_API GetGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetGuardrailResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetGuardrailResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetGuardrailResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetGuardrailResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetGuardrailResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetGuardrailResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailId() const{ return m_guardrailId; }
    inline void SetGuardrailId(const Aws::String& value) { m_guardrailId = value; }
    inline void SetGuardrailId(Aws::String&& value) { m_guardrailId = std::move(value); }
    inline void SetGuardrailId(const char* value) { m_guardrailId.assign(value); }
    inline GetGuardrailResult& WithGuardrailId(const Aws::String& value) { SetGuardrailId(value); return *this;}
    inline GetGuardrailResult& WithGuardrailId(Aws::String&& value) { SetGuardrailId(std::move(value)); return *this;}
    inline GetGuardrailResult& WithGuardrailId(const char* value) { SetGuardrailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailArn() const{ return m_guardrailArn; }
    inline void SetGuardrailArn(const Aws::String& value) { m_guardrailArn = value; }
    inline void SetGuardrailArn(Aws::String&& value) { m_guardrailArn = std::move(value); }
    inline void SetGuardrailArn(const char* value) { m_guardrailArn.assign(value); }
    inline GetGuardrailResult& WithGuardrailArn(const Aws::String& value) { SetGuardrailArn(value); return *this;}
    inline GetGuardrailResult& WithGuardrailArn(Aws::String&& value) { SetGuardrailArn(std::move(value)); return *this;}
    inline GetGuardrailResult& WithGuardrailArn(const char* value) { SetGuardrailArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline GetGuardrailResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline GetGuardrailResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline GetGuardrailResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the guardrail.</p>
     */
    inline const GuardrailStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const GuardrailStatus& value) { m_status = value; }
    inline void SetStatus(GuardrailStatus&& value) { m_status = std::move(value); }
    inline GetGuardrailResult& WithStatus(const GuardrailStatus& value) { SetStatus(value); return *this;}
    inline GetGuardrailResult& WithStatus(GuardrailStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic policy that was configured for the guardrail.</p>
     */
    inline const GuardrailTopicPolicy& GetTopicPolicy() const{ return m_topicPolicy; }
    inline void SetTopicPolicy(const GuardrailTopicPolicy& value) { m_topicPolicy = value; }
    inline void SetTopicPolicy(GuardrailTopicPolicy&& value) { m_topicPolicy = std::move(value); }
    inline GetGuardrailResult& WithTopicPolicy(const GuardrailTopicPolicy& value) { SetTopicPolicy(value); return *this;}
    inline GetGuardrailResult& WithTopicPolicy(GuardrailTopicPolicy&& value) { SetTopicPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content policy that was configured for the guardrail.</p>
     */
    inline const GuardrailContentPolicy& GetContentPolicy() const{ return m_contentPolicy; }
    inline void SetContentPolicy(const GuardrailContentPolicy& value) { m_contentPolicy = value; }
    inline void SetContentPolicy(GuardrailContentPolicy&& value) { m_contentPolicy = std::move(value); }
    inline GetGuardrailResult& WithContentPolicy(const GuardrailContentPolicy& value) { SetContentPolicy(value); return *this;}
    inline GetGuardrailResult& WithContentPolicy(GuardrailContentPolicy&& value) { SetContentPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word policy that was configured for the guardrail.</p>
     */
    inline const GuardrailWordPolicy& GetWordPolicy() const{ return m_wordPolicy; }
    inline void SetWordPolicy(const GuardrailWordPolicy& value) { m_wordPolicy = value; }
    inline void SetWordPolicy(GuardrailWordPolicy&& value) { m_wordPolicy = std::move(value); }
    inline GetGuardrailResult& WithWordPolicy(const GuardrailWordPolicy& value) { SetWordPolicy(value); return *this;}
    inline GetGuardrailResult& WithWordPolicy(GuardrailWordPolicy&& value) { SetWordPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy that was configured for the guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicy& GetSensitiveInformationPolicy() const{ return m_sensitiveInformationPolicy; }
    inline void SetSensitiveInformationPolicy(const GuardrailSensitiveInformationPolicy& value) { m_sensitiveInformationPolicy = value; }
    inline void SetSensitiveInformationPolicy(GuardrailSensitiveInformationPolicy&& value) { m_sensitiveInformationPolicy = std::move(value); }
    inline GetGuardrailResult& WithSensitiveInformationPolicy(const GuardrailSensitiveInformationPolicy& value) { SetSensitiveInformationPolicy(value); return *this;}
    inline GetGuardrailResult& WithSensitiveInformationPolicy(GuardrailSensitiveInformationPolicy&& value) { SetSensitiveInformationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual grounding policy used in the guardrail.</p>
     */
    inline const GuardrailContextualGroundingPolicy& GetContextualGroundingPolicy() const{ return m_contextualGroundingPolicy; }
    inline void SetContextualGroundingPolicy(const GuardrailContextualGroundingPolicy& value) { m_contextualGroundingPolicy = value; }
    inline void SetContextualGroundingPolicy(GuardrailContextualGroundingPolicy&& value) { m_contextualGroundingPolicy = std::move(value); }
    inline GetGuardrailResult& WithContextualGroundingPolicy(const GuardrailContextualGroundingPolicy& value) { SetContextualGroundingPolicy(value); return *this;}
    inline GetGuardrailResult& WithContextualGroundingPolicy(GuardrailContextualGroundingPolicy&& value) { SetContextualGroundingPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the guardrail was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetGuardrailResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetGuardrailResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetGuardrailResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetGuardrailResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusReasons() const{ return m_statusReasons; }
    inline void SetStatusReasons(const Aws::Vector<Aws::String>& value) { m_statusReasons = value; }
    inline void SetStatusReasons(Aws::Vector<Aws::String>&& value) { m_statusReasons = std::move(value); }
    inline GetGuardrailResult& WithStatusReasons(const Aws::Vector<Aws::String>& value) { SetStatusReasons(value); return *this;}
    inline GetGuardrailResult& WithStatusReasons(Aws::Vector<Aws::String>&& value) { SetStatusReasons(std::move(value)); return *this;}
    inline GetGuardrailResult& AddStatusReasons(const Aws::String& value) { m_statusReasons.push_back(value); return *this; }
    inline GetGuardrailResult& AddStatusReasons(Aws::String&& value) { m_statusReasons.push_back(std::move(value)); return *this; }
    inline GetGuardrailResult& AddStatusReasons(const char* value) { m_statusReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureRecommendations() const{ return m_failureRecommendations; }
    inline void SetFailureRecommendations(const Aws::Vector<Aws::String>& value) { m_failureRecommendations = value; }
    inline void SetFailureRecommendations(Aws::Vector<Aws::String>&& value) { m_failureRecommendations = std::move(value); }
    inline GetGuardrailResult& WithFailureRecommendations(const Aws::Vector<Aws::String>& value) { SetFailureRecommendations(value); return *this;}
    inline GetGuardrailResult& WithFailureRecommendations(Aws::Vector<Aws::String>&& value) { SetFailureRecommendations(std::move(value)); return *this;}
    inline GetGuardrailResult& AddFailureRecommendations(const Aws::String& value) { m_failureRecommendations.push_back(value); return *this; }
    inline GetGuardrailResult& AddFailureRecommendations(Aws::String&& value) { m_failureRecommendations.push_back(std::move(value)); return *this; }
    inline GetGuardrailResult& AddFailureRecommendations(const char* value) { m_failureRecommendations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline const Aws::String& GetBlockedInputMessaging() const{ return m_blockedInputMessaging; }
    inline void SetBlockedInputMessaging(const Aws::String& value) { m_blockedInputMessaging = value; }
    inline void SetBlockedInputMessaging(Aws::String&& value) { m_blockedInputMessaging = std::move(value); }
    inline void SetBlockedInputMessaging(const char* value) { m_blockedInputMessaging.assign(value); }
    inline GetGuardrailResult& WithBlockedInputMessaging(const Aws::String& value) { SetBlockedInputMessaging(value); return *this;}
    inline GetGuardrailResult& WithBlockedInputMessaging(Aws::String&& value) { SetBlockedInputMessaging(std::move(value)); return *this;}
    inline GetGuardrailResult& WithBlockedInputMessaging(const char* value) { SetBlockedInputMessaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline const Aws::String& GetBlockedOutputsMessaging() const{ return m_blockedOutputsMessaging; }
    inline void SetBlockedOutputsMessaging(const Aws::String& value) { m_blockedOutputsMessaging = value; }
    inline void SetBlockedOutputsMessaging(Aws::String&& value) { m_blockedOutputsMessaging = std::move(value); }
    inline void SetBlockedOutputsMessaging(const char* value) { m_blockedOutputsMessaging.assign(value); }
    inline GetGuardrailResult& WithBlockedOutputsMessaging(const Aws::String& value) { SetBlockedOutputsMessaging(value); return *this;}
    inline GetGuardrailResult& WithBlockedOutputsMessaging(Aws::String&& value) { SetBlockedOutputsMessaging(std::move(value)); return *this;}
    inline GetGuardrailResult& WithBlockedOutputsMessaging(const char* value) { SetBlockedOutputsMessaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetGuardrailResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetGuardrailResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetGuardrailResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGuardrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGuardrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGuardrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_guardrailId;

    Aws::String m_guardrailArn;

    Aws::String m_version;

    GuardrailStatus m_status;

    GuardrailTopicPolicy m_topicPolicy;

    GuardrailContentPolicy m_contentPolicy;

    GuardrailWordPolicy m_wordPolicy;

    GuardrailSensitiveInformationPolicy m_sensitiveInformationPolicy;

    GuardrailContextualGroundingPolicy m_contextualGroundingPolicy;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Vector<Aws::String> m_statusReasons;

    Aws::Vector<Aws::String> m_failureRecommendations;

    Aws::String m_blockedInputMessaging;

    Aws::String m_blockedOutputsMessaging;

    Aws::String m_kmsKeyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
