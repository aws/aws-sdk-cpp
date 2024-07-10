/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/PromptVariant.h>
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
namespace BedrockAgent
{
namespace Model
{
  class CreatePromptResult
  {
  public:
    AWS_BEDROCKAGENT_API CreatePromptResult();
    AWS_BEDROCKAGENT_API CreatePromptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API CreatePromptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreatePromptResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreatePromptResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreatePromptResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the prompt was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreatePromptResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreatePromptResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that you encrypted the prompt
     * with.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArn = value; }
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArn = std::move(value); }
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArn.assign(value); }
    inline CreatePromptResult& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}
    inline CreatePromptResult& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}
    inline CreatePromptResult& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the default variant for your prompt.</p>
     */
    inline const Aws::String& GetDefaultVariant() const{ return m_defaultVariant; }
    inline void SetDefaultVariant(const Aws::String& value) { m_defaultVariant = value; }
    inline void SetDefaultVariant(Aws::String&& value) { m_defaultVariant = std::move(value); }
    inline void SetDefaultVariant(const char* value) { m_defaultVariant.assign(value); }
    inline CreatePromptResult& WithDefaultVariant(const Aws::String& value) { SetDefaultVariant(value); return *this;}
    inline CreatePromptResult& WithDefaultVariant(Aws::String&& value) { SetDefaultVariant(std::move(value)); return *this;}
    inline CreatePromptResult& WithDefaultVariant(const char* value) { SetDefaultVariant(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the prompt.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreatePromptResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePromptResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePromptResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the prompt.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreatePromptResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreatePromptResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreatePromptResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prompt.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreatePromptResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePromptResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePromptResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the prompt was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline CreatePromptResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline CreatePromptResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each containing details about a variant of the prompt.</p>
     */
    inline const Aws::Vector<PromptVariant>& GetVariants() const{ return m_variants; }
    inline void SetVariants(const Aws::Vector<PromptVariant>& value) { m_variants = value; }
    inline void SetVariants(Aws::Vector<PromptVariant>&& value) { m_variants = std::move(value); }
    inline CreatePromptResult& WithVariants(const Aws::Vector<PromptVariant>& value) { SetVariants(value); return *this;}
    inline CreatePromptResult& WithVariants(Aws::Vector<PromptVariant>&& value) { SetVariants(std::move(value)); return *this;}
    inline CreatePromptResult& AddVariants(const PromptVariant& value) { m_variants.push_back(value); return *this; }
    inline CreatePromptResult& AddVariants(PromptVariant&& value) { m_variants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the prompt. When you create a prompt, the version created is
     * the <code>DRAFT</code> version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline CreatePromptResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreatePromptResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreatePromptResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePromptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePromptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePromptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_customerEncryptionKeyArn;

    Aws::String m_defaultVariant;

    Aws::String m_description;

    Aws::String m_id;

    Aws::String m_name;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Vector<PromptVariant> m_variants;

    Aws::String m_version;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
