/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/IntegrationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/Tag.h>
#include <aws/glue/model/IntegrationError.h>
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
namespace Glue
{
namespace Model
{
  class CreateIntegrationResult
  {
  public:
    AWS_GLUE_API CreateIntegrationResult();
    AWS_GLUE_API CreateIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the source resource for the integration.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }
    inline CreateIntegrationResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline CreateIntegrationResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target resource for the integration.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }
    inline CreateIntegrationResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline CreateIntegrationResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for an integration in Glue.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }
    inline void SetIntegrationName(const Aws::String& value) { m_integrationName = value; }
    inline void SetIntegrationName(Aws::String&& value) { m_integrationName = std::move(value); }
    inline void SetIntegrationName(const char* value) { m_integrationName.assign(value); }
    inline CreateIntegrationResult& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}
    inline CreateIntegrationResult& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the created integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArn = value; }
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArn = std::move(value); }
    inline void SetIntegrationArn(const char* value) { m_integrationArn.assign(value); }
    inline CreateIntegrationResult& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}
    inline CreateIntegrationResult& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a KMS key used for encrypting the channel.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline CreateIntegrationResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateIntegrationResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information for encryption.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContext = value; }
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContext = std::move(value); }
    inline CreateIntegrationResult& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}
    inline CreateIntegrationResult& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContext.emplace(key, value); return *this; }
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContext.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata assigned to the resource consisting of a list of key-value
     * pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateIntegrationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateIntegrationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateIntegrationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateIntegrationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the integration being created.</p> <p>The possible statuses
     * are:</p> <ul> <li> <p>CREATING: The integration is being created.</p> </li> <li>
     * <p>ACTIVE: The integration creation succeeds.</p> </li> <li> <p>MODIFYING: The
     * integration is being modified.</p> </li> <li> <p>FAILED: The integration
     * creation fails. </p> </li> <li> <p>DELETING: The integration is deleted.</p>
     * </li> <li> <p>SYNCING: The integration is synchronizing.</p> </li> <li>
     * <p>NEEDS_ATTENTION: The integration needs attention, such as
     * synchronization.</p> </li> </ul>
     */
    inline const IntegrationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const IntegrationStatus& value) { m_status = value; }
    inline void SetStatus(IntegrationStatus&& value) { m_status = std::move(value); }
    inline CreateIntegrationResult& WithStatus(const IntegrationStatus& value) { SetStatus(value); return *this;}
    inline CreateIntegrationResult& WithStatus(IntegrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the integration was created, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline CreateIntegrationResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CreateIntegrationResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors associated with the integration creation.</p>
     */
    inline const Aws::Vector<IntegrationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<IntegrationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<IntegrationError>&& value) { m_errors = std::move(value); }
    inline CreateIntegrationResult& WithErrors(const Aws::Vector<IntegrationError>& value) { SetErrors(value); return *this;}
    inline CreateIntegrationResult& WithErrors(Aws::Vector<IntegrationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline CreateIntegrationResult& AddErrors(const IntegrationError& value) { m_errors.push_back(value); return *this; }
    inline CreateIntegrationResult& AddErrors(IntegrationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Selects source tables for the integration using Maxwell filter syntax.</p>
     */
    inline const Aws::String& GetDataFilter() const{ return m_dataFilter; }
    inline void SetDataFilter(const Aws::String& value) { m_dataFilter = value; }
    inline void SetDataFilter(Aws::String&& value) { m_dataFilter = std::move(value); }
    inline void SetDataFilter(const char* value) { m_dataFilter.assign(value); }
    inline CreateIntegrationResult& WithDataFilter(const Aws::String& value) { SetDataFilter(value); return *this;}
    inline CreateIntegrationResult& WithDataFilter(Aws::String&& value) { SetDataFilter(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithDataFilter(const char* value) { SetDataFilter(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceArn;

    Aws::String m_targetArn;

    Aws::String m_integrationName;

    Aws::String m_description;

    Aws::String m_integrationArn;

    Aws::String m_kmsKeyId;

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;

    Aws::Vector<Tag> m_tags;

    IntegrationStatus m_status;

    Aws::Utils::DateTime m_createTime;

    Aws::Vector<IntegrationError> m_errors;

    Aws::String m_dataFilter;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
