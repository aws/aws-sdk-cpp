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


    /**
     * <p>The name of the guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the guardrail.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the guardrail.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the guardrail.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the guardrail.</p>
     */
    inline GetGuardrailResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the guardrail.</p>
     */
    inline GetGuardrailResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the guardrail.</p>
     */
    inline GetGuardrailResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the guardrail.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the guardrail.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the guardrail.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the guardrail.</p>
     */
    inline GetGuardrailResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the guardrail.</p>
     */
    inline GetGuardrailResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the guardrail.</p>
     */
    inline GetGuardrailResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailId() const{ return m_guardrailId; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailId(const Aws::String& value) { m_guardrailId = value; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailId(Aws::String&& value) { m_guardrailId = std::move(value); }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailId(const char* value) { m_guardrailId.assign(value); }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline GetGuardrailResult& WithGuardrailId(const Aws::String& value) { SetGuardrailId(value); return *this;}

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline GetGuardrailResult& WithGuardrailId(Aws::String&& value) { SetGuardrailId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline GetGuardrailResult& WithGuardrailId(const char* value) { SetGuardrailId(value); return *this;}


    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline const Aws::String& GetGuardrailArn() const{ return m_guardrailArn; }

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline void SetGuardrailArn(const Aws::String& value) { m_guardrailArn = value; }

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline void SetGuardrailArn(Aws::String&& value) { m_guardrailArn = std::move(value); }

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline void SetGuardrailArn(const char* value) { m_guardrailArn.assign(value); }

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline GetGuardrailResult& WithGuardrailArn(const Aws::String& value) { SetGuardrailArn(value); return *this;}

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline GetGuardrailResult& WithGuardrailArn(Aws::String&& value) { SetGuardrailArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline GetGuardrailResult& WithGuardrailArn(const char* value) { SetGuardrailArn(value); return *this;}


    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline GetGuardrailResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the guardrail.</p>
     */
    inline GetGuardrailResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the guardrail.</p>
     */
    inline GetGuardrailResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The status of the guardrail.</p>
     */
    inline const GuardrailStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the guardrail.</p>
     */
    inline void SetStatus(const GuardrailStatus& value) { m_status = value; }

    /**
     * <p>The status of the guardrail.</p>
     */
    inline void SetStatus(GuardrailStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the guardrail.</p>
     */
    inline GetGuardrailResult& WithStatus(const GuardrailStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the guardrail.</p>
     */
    inline GetGuardrailResult& WithStatus(GuardrailStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The topic policy that was configured for the guardrail.</p>
     */
    inline const GuardrailTopicPolicy& GetTopicPolicy() const{ return m_topicPolicy; }

    /**
     * <p>The topic policy that was configured for the guardrail.</p>
     */
    inline void SetTopicPolicy(const GuardrailTopicPolicy& value) { m_topicPolicy = value; }

    /**
     * <p>The topic policy that was configured for the guardrail.</p>
     */
    inline void SetTopicPolicy(GuardrailTopicPolicy&& value) { m_topicPolicy = std::move(value); }

    /**
     * <p>The topic policy that was configured for the guardrail.</p>
     */
    inline GetGuardrailResult& WithTopicPolicy(const GuardrailTopicPolicy& value) { SetTopicPolicy(value); return *this;}

    /**
     * <p>The topic policy that was configured for the guardrail.</p>
     */
    inline GetGuardrailResult& WithTopicPolicy(GuardrailTopicPolicy&& value) { SetTopicPolicy(std::move(value)); return *this;}


    /**
     * <p>The content policy that was configured for the guardrail.</p>
     */
    inline const GuardrailContentPolicy& GetContentPolicy() const{ return m_contentPolicy; }

    /**
     * <p>The content policy that was configured for the guardrail.</p>
     */
    inline void SetContentPolicy(const GuardrailContentPolicy& value) { m_contentPolicy = value; }

    /**
     * <p>The content policy that was configured for the guardrail.</p>
     */
    inline void SetContentPolicy(GuardrailContentPolicy&& value) { m_contentPolicy = std::move(value); }

    /**
     * <p>The content policy that was configured for the guardrail.</p>
     */
    inline GetGuardrailResult& WithContentPolicy(const GuardrailContentPolicy& value) { SetContentPolicy(value); return *this;}

    /**
     * <p>The content policy that was configured for the guardrail.</p>
     */
    inline GetGuardrailResult& WithContentPolicy(GuardrailContentPolicy&& value) { SetContentPolicy(std::move(value)); return *this;}


    /**
     * <p>The word policy that was configured for the guardrail.</p>
     */
    inline const GuardrailWordPolicy& GetWordPolicy() const{ return m_wordPolicy; }

    /**
     * <p>The word policy that was configured for the guardrail.</p>
     */
    inline void SetWordPolicy(const GuardrailWordPolicy& value) { m_wordPolicy = value; }

    /**
     * <p>The word policy that was configured for the guardrail.</p>
     */
    inline void SetWordPolicy(GuardrailWordPolicy&& value) { m_wordPolicy = std::move(value); }

    /**
     * <p>The word policy that was configured for the guardrail.</p>
     */
    inline GetGuardrailResult& WithWordPolicy(const GuardrailWordPolicy& value) { SetWordPolicy(value); return *this;}

    /**
     * <p>The word policy that was configured for the guardrail.</p>
     */
    inline GetGuardrailResult& WithWordPolicy(GuardrailWordPolicy&& value) { SetWordPolicy(std::move(value)); return *this;}


    /**
     * <p>The sensitive information policy that was configured for the guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicy& GetSensitiveInformationPolicy() const{ return m_sensitiveInformationPolicy; }

    /**
     * <p>The sensitive information policy that was configured for the guardrail.</p>
     */
    inline void SetSensitiveInformationPolicy(const GuardrailSensitiveInformationPolicy& value) { m_sensitiveInformationPolicy = value; }

    /**
     * <p>The sensitive information policy that was configured for the guardrail.</p>
     */
    inline void SetSensitiveInformationPolicy(GuardrailSensitiveInformationPolicy&& value) { m_sensitiveInformationPolicy = std::move(value); }

    /**
     * <p>The sensitive information policy that was configured for the guardrail.</p>
     */
    inline GetGuardrailResult& WithSensitiveInformationPolicy(const GuardrailSensitiveInformationPolicy& value) { SetSensitiveInformationPolicy(value); return *this;}

    /**
     * <p>The sensitive information policy that was configured for the guardrail.</p>
     */
    inline GetGuardrailResult& WithSensitiveInformationPolicy(GuardrailSensitiveInformationPolicy&& value) { SetSensitiveInformationPolicy(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the guardrail was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time at which the guardrail was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time at which the guardrail was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time at which the guardrail was created.</p>
     */
    inline GetGuardrailResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time at which the guardrail was created.</p>
     */
    inline GetGuardrailResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline GetGuardrailResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline GetGuardrailResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusReasons() const{ return m_statusReasons; }

    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline void SetStatusReasons(const Aws::Vector<Aws::String>& value) { m_statusReasons = value; }

    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline void SetStatusReasons(Aws::Vector<Aws::String>&& value) { m_statusReasons = std::move(value); }

    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline GetGuardrailResult& WithStatusReasons(const Aws::Vector<Aws::String>& value) { SetStatusReasons(value); return *this;}

    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline GetGuardrailResult& WithStatusReasons(Aws::Vector<Aws::String>&& value) { SetStatusReasons(std::move(value)); return *this;}

    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline GetGuardrailResult& AddStatusReasons(const Aws::String& value) { m_statusReasons.push_back(value); return *this; }

    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline GetGuardrailResult& AddStatusReasons(Aws::String&& value) { m_statusReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>Appears if the <code>status</code> is <code>FAILED</code>. A list of reasons
     * for why the guardrail failed to be created, updated, versioned, or deleted.</p>
     */
    inline GetGuardrailResult& AddStatusReasons(const char* value) { m_statusReasons.push_back(value); return *this; }


    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureRecommendations() const{ return m_failureRecommendations; }

    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline void SetFailureRecommendations(const Aws::Vector<Aws::String>& value) { m_failureRecommendations = value; }

    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline void SetFailureRecommendations(Aws::Vector<Aws::String>&& value) { m_failureRecommendations = std::move(value); }

    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline GetGuardrailResult& WithFailureRecommendations(const Aws::Vector<Aws::String>& value) { SetFailureRecommendations(value); return *this;}

    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline GetGuardrailResult& WithFailureRecommendations(Aws::Vector<Aws::String>&& value) { SetFailureRecommendations(std::move(value)); return *this;}

    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline GetGuardrailResult& AddFailureRecommendations(const Aws::String& value) { m_failureRecommendations.push_back(value); return *this; }

    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline GetGuardrailResult& AddFailureRecommendations(Aws::String&& value) { m_failureRecommendations.push_back(std::move(value)); return *this; }

    /**
     * <p>Appears if the <code>status</code> of the guardrail is <code>FAILED</code>. A
     * list of recommendations to carry out before retrying the request.</p>
     */
    inline GetGuardrailResult& AddFailureRecommendations(const char* value) { m_failureRecommendations.push_back(value); return *this; }


    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline const Aws::String& GetBlockedInputMessaging() const{ return m_blockedInputMessaging; }

    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline void SetBlockedInputMessaging(const Aws::String& value) { m_blockedInputMessaging = value; }

    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline void SetBlockedInputMessaging(Aws::String&& value) { m_blockedInputMessaging = std::move(value); }

    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline void SetBlockedInputMessaging(const char* value) { m_blockedInputMessaging.assign(value); }

    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline GetGuardrailResult& WithBlockedInputMessaging(const Aws::String& value) { SetBlockedInputMessaging(value); return *this;}

    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline GetGuardrailResult& WithBlockedInputMessaging(Aws::String&& value) { SetBlockedInputMessaging(std::move(value)); return *this;}

    /**
     * <p>The message that the guardrail returns when it blocks a prompt.</p>
     */
    inline GetGuardrailResult& WithBlockedInputMessaging(const char* value) { SetBlockedInputMessaging(value); return *this;}


    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline const Aws::String& GetBlockedOutputsMessaging() const{ return m_blockedOutputsMessaging; }

    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline void SetBlockedOutputsMessaging(const Aws::String& value) { m_blockedOutputsMessaging = value; }

    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline void SetBlockedOutputsMessaging(Aws::String&& value) { m_blockedOutputsMessaging = std::move(value); }

    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline void SetBlockedOutputsMessaging(const char* value) { m_blockedOutputsMessaging.assign(value); }

    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline GetGuardrailResult& WithBlockedOutputsMessaging(const Aws::String& value) { SetBlockedOutputsMessaging(value); return *this;}

    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline GetGuardrailResult& WithBlockedOutputsMessaging(Aws::String&& value) { SetBlockedOutputsMessaging(std::move(value)); return *this;}

    /**
     * <p>The message that the guardrail returns when it blocks a model response.</p>
     */
    inline GetGuardrailResult& WithBlockedOutputsMessaging(const char* value) { SetBlockedOutputsMessaging(value); return *this;}


    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline GetGuardrailResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline GetGuardrailResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key that encrypts the guardrail.</p>
     */
    inline GetGuardrailResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGuardrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGuardrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGuardrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
