/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/DomainVersion.h>
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


    ///@{
    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetDomainResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetDomainResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetDomainResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Amazon DataZone domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetDomainResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetDomainResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDomainResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDomainResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDomainResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline const Aws::String& GetDomainExecutionRole() const{ return m_domainExecutionRole; }
    inline void SetDomainExecutionRole(const Aws::String& value) { m_domainExecutionRole = value; }
    inline void SetDomainExecutionRole(Aws::String&& value) { m_domainExecutionRole = std::move(value); }
    inline void SetDomainExecutionRole(const char* value) { m_domainExecutionRole.assign(value); }
    inline GetDomainResult& WithDomainExecutionRole(const Aws::String& value) { SetDomainExecutionRole(value); return *this;}
    inline GetDomainResult& WithDomainExecutionRole(Aws::String&& value) { SetDomainExecutionRole(std::move(value)); return *this;}
    inline GetDomainResult& WithDomainExecutionRole(const char* value) { SetDomainExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the domain.</p>
     */
    inline const DomainVersion& GetDomainVersion() const{ return m_domainVersion; }
    inline void SetDomainVersion(const DomainVersion& value) { m_domainVersion = value; }
    inline void SetDomainVersion(DomainVersion&& value) { m_domainVersion = std::move(value); }
    inline GetDomainResult& WithDomainVersion(const DomainVersion& value) { SetDomainVersion(value); return *this;}
    inline GetDomainResult& WithDomainVersion(DomainVersion&& value) { SetDomainVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetDomainResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetDomainResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetDomainResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }
    inline GetDomainResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline GetDomainResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline GetDomainResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Amazon DataZone domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetDomainResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetDomainResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDomainResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDomainResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDomainResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetPortalUrl() const{ return m_portalUrl; }
    inline void SetPortalUrl(const Aws::String& value) { m_portalUrl = value; }
    inline void SetPortalUrl(Aws::String&& value) { m_portalUrl = std::move(value); }
    inline void SetPortalUrl(const char* value) { m_portalUrl.assign(value); }
    inline GetDomainResult& WithPortalUrl(const Aws::String& value) { SetPortalUrl(value); return *this;}
    inline GetDomainResult& WithPortalUrl(Aws::String&& value) { SetPortalUrl(std::move(value)); return *this;}
    inline GetDomainResult& WithPortalUrl(const char* value) { SetPortalUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root domain in Amazon Datazone.</p>
     */
    inline const Aws::String& GetRootDomainUnitId() const{ return m_rootDomainUnitId; }
    inline void SetRootDomainUnitId(const Aws::String& value) { m_rootDomainUnitId = value; }
    inline void SetRootDomainUnitId(Aws::String&& value) { m_rootDomainUnitId = std::move(value); }
    inline void SetRootDomainUnitId(const char* value) { m_rootDomainUnitId.assign(value); }
    inline GetDomainResult& WithRootDomainUnitId(const Aws::String& value) { SetRootDomainUnitId(value); return *this;}
    inline GetDomainResult& WithRootDomainUnitId(Aws::String&& value) { SetRootDomainUnitId(std::move(value)); return *this;}
    inline GetDomainResult& WithRootDomainUnitId(const char* value) { SetRootDomainUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service role of the domain.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRole.assign(value); }
    inline GetDomainResult& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline GetDomainResult& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline GetDomainResult& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single sing-on option of the specified Amazon DataZone domain.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const{ return m_singleSignOn; }
    inline void SetSingleSignOn(const SingleSignOn& value) { m_singleSignOn = value; }
    inline void SetSingleSignOn(SingleSignOn&& value) { m_singleSignOn = std::move(value); }
    inline GetDomainResult& WithSingleSignOn(const SingleSignOn& value) { SetSingleSignOn(value); return *this;}
    inline GetDomainResult& WithSingleSignOn(SingleSignOn&& value) { SetSingleSignOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified Amazon DataZone domain.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DomainStatus& value) { m_status = value; }
    inline void SetStatus(DomainStatus&& value) { m_status = std::move(value); }
    inline GetDomainResult& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}
    inline GetDomainResult& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetDomainResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetDomainResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetDomainResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetDomainResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDomainResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDomainResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDomainResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDomainResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDomainResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_domainExecutionRole;

    DomainVersion m_domainVersion;

    Aws::String m_id;

    Aws::String m_kmsKeyIdentifier;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    Aws::String m_portalUrl;

    Aws::String m_rootDomainUnitId;

    Aws::String m_serviceRole;

    SingleSignOn m_singleSignOn;

    DomainStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
