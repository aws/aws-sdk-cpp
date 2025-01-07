/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateDomainResult
  {
  public:
    AWS_DATAZONE_API CreateDomainResult();
    AWS_DATAZONE_API CreateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateDomainResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateDomainResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateDomainResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateDomainResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDomainResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDomainResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainExecutionRole() const{ return m_domainExecutionRole; }
    inline void SetDomainExecutionRole(const Aws::String& value) { m_domainExecutionRole = value; }
    inline void SetDomainExecutionRole(Aws::String&& value) { m_domainExecutionRole = std::move(value); }
    inline void SetDomainExecutionRole(const char* value) { m_domainExecutionRole.assign(value); }
    inline CreateDomainResult& WithDomainExecutionRole(const Aws::String& value) { SetDomainExecutionRole(value); return *this;}
    inline CreateDomainResult& WithDomainExecutionRole(Aws::String&& value) { SetDomainExecutionRole(std::move(value)); return *this;}
    inline CreateDomainResult& WithDomainExecutionRole(const char* value) { SetDomainExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the domain that is created.</p>
     */
    inline const DomainVersion& GetDomainVersion() const{ return m_domainVersion; }
    inline void SetDomainVersion(const DomainVersion& value) { m_domainVersion = value; }
    inline void SetDomainVersion(DomainVersion&& value) { m_domainVersion = std::move(value); }
    inline CreateDomainResult& WithDomainVersion(const DomainVersion& value) { SetDomainVersion(value); return *this;}
    inline CreateDomainResult& WithDomainVersion(DomainVersion&& value) { SetDomainVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateDomainResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateDomainResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateDomainResult& WithId(const char* value) { SetId(value); return *this;}
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
    inline CreateDomainResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline CreateDomainResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline CreateDomainResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateDomainResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDomainResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDomainResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetPortalUrl() const{ return m_portalUrl; }
    inline void SetPortalUrl(const Aws::String& value) { m_portalUrl = value; }
    inline void SetPortalUrl(Aws::String&& value) { m_portalUrl = std::move(value); }
    inline void SetPortalUrl(const char* value) { m_portalUrl.assign(value); }
    inline CreateDomainResult& WithPortalUrl(const Aws::String& value) { SetPortalUrl(value); return *this;}
    inline CreateDomainResult& WithPortalUrl(Aws::String&& value) { SetPortalUrl(std::move(value)); return *this;}
    inline CreateDomainResult& WithPortalUrl(const char* value) { SetPortalUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root domain unit.</p>
     */
    inline const Aws::String& GetRootDomainUnitId() const{ return m_rootDomainUnitId; }
    inline void SetRootDomainUnitId(const Aws::String& value) { m_rootDomainUnitId = value; }
    inline void SetRootDomainUnitId(Aws::String&& value) { m_rootDomainUnitId = std::move(value); }
    inline void SetRootDomainUnitId(const char* value) { m_rootDomainUnitId.assign(value); }
    inline CreateDomainResult& WithRootDomainUnitId(const Aws::String& value) { SetRootDomainUnitId(value); return *this;}
    inline CreateDomainResult& WithRootDomainUnitId(Aws::String&& value) { SetRootDomainUnitId(std::move(value)); return *this;}
    inline CreateDomainResult& WithRootDomainUnitId(const char* value) { SetRootDomainUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Te service role of the domain that is created.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRole.assign(value); }
    inline CreateDomainResult& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline CreateDomainResult& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline CreateDomainResult& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const{ return m_singleSignOn; }
    inline void SetSingleSignOn(const SingleSignOn& value) { m_singleSignOn = value; }
    inline void SetSingleSignOn(SingleSignOn&& value) { m_singleSignOn = std::move(value); }
    inline CreateDomainResult& WithSingleSignOn(const SingleSignOn& value) { SetSingleSignOn(value); return *this;}
    inline CreateDomainResult& WithSingleSignOn(SingleSignOn&& value) { SetSingleSignOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DomainStatus& value) { m_status = value; }
    inline void SetStatus(DomainStatus&& value) { m_status = std::move(value); }
    inline CreateDomainResult& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}
    inline CreateDomainResult& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateDomainResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDomainResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDomainResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateDomainResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDomainResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_domainExecutionRole;

    DomainVersion m_domainVersion;

    Aws::String m_id;

    Aws::String m_kmsKeyIdentifier;

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
