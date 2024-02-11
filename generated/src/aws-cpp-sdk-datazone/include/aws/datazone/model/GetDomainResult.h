/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/SingleSignOn.h>
#include <aws/datazone/model/DomainStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace DataZone
{
namespace Model
{
  class GetDomainResult
  {
  public:
    AWS_DATAZONE_API GetDomainResult();
    AWS_DATAZONE_API GetDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp of when the Amazon DataZone domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the Amazon DataZone domain was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the Amazon DataZone domain was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the Amazon DataZone domain was created.</p>
     */
    inline GetDomainResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the Amazon DataZone domain was created.</p>
     */
    inline GetDomainResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline const Aws::String& GetDomainExecutionRole() const{ return m_domainExecutionRole; }

    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline void SetDomainExecutionRole(const Aws::String& value) { m_domainExecutionRole = value; }

    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline void SetDomainExecutionRole(Aws::String&& value) { m_domainExecutionRole = std::move(value); }

    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline void SetDomainExecutionRole(const char* value) { m_domainExecutionRole.assign(value); }

    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline GetDomainResult& WithDomainExecutionRole(const Aws::String& value) { SetDomainExecutionRole(value); return *this;}

    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline GetDomainResult& WithDomainExecutionRole(Aws::String&& value) { SetDomainExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline GetDomainResult& WithDomainExecutionRole(const char* value) { SetDomainExecutionRole(value); return *this;}


    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline GetDomainResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline GetDomainResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline GetDomainResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


    /**
     * <p>The timestamp of when the Amazon DataZone domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp of when the Amazon DataZone domain was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp of when the Amazon DataZone domain was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the Amazon DataZone domain was last updated.</p>
     */
    inline GetDomainResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the Amazon DataZone domain was last updated.</p>
     */
    inline GetDomainResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetPortalUrl() const{ return m_portalUrl; }

    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline void SetPortalUrl(const Aws::String& value) { m_portalUrl = value; }

    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline void SetPortalUrl(Aws::String&& value) { m_portalUrl = std::move(value); }

    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline void SetPortalUrl(const char* value) { m_portalUrl.assign(value); }

    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithPortalUrl(const Aws::String& value) { SetPortalUrl(value); return *this;}

    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithPortalUrl(Aws::String&& value) { SetPortalUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithPortalUrl(const char* value) { SetPortalUrl(value); return *this;}


    /**
     * <p>The single sing-on option of the specified Amazon DataZone domain.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const{ return m_singleSignOn; }

    /**
     * <p>The single sing-on option of the specified Amazon DataZone domain.</p>
     */
    inline void SetSingleSignOn(const SingleSignOn& value) { m_singleSignOn = value; }

    /**
     * <p>The single sing-on option of the specified Amazon DataZone domain.</p>
     */
    inline void SetSingleSignOn(SingleSignOn&& value) { m_singleSignOn = std::move(value); }

    /**
     * <p>The single sing-on option of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithSingleSignOn(const SingleSignOn& value) { SetSingleSignOn(value); return *this;}

    /**
     * <p>The single sing-on option of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithSingleSignOn(SingleSignOn&& value) { SetSingleSignOn(std::move(value)); return *this;}


    /**
     * <p>The status of the specified Amazon DataZone domain.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the specified Amazon DataZone domain.</p>
     */
    inline void SetStatus(const DomainStatus& value) { m_status = value; }

    /**
     * <p>The status of the specified Amazon DataZone domain.</p>
     */
    inline void SetStatus(DomainStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the specified Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline GetDomainResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_domainExecutionRole;

    Aws::String m_id;

    Aws::String m_kmsKeyIdentifier;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    Aws::String m_portalUrl;

    SingleSignOn m_singleSignOn;

    DomainStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
