/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline CreateDomainResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainExecutionRole() const{ return m_domainExecutionRole; }

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline void SetDomainExecutionRole(const Aws::String& value) { m_domainExecutionRole = value; }

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline void SetDomainExecutionRole(Aws::String&& value) { m_domainExecutionRole = std::move(value); }

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline void SetDomainExecutionRole(const char* value) { m_domainExecutionRole.assign(value); }

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithDomainExecutionRole(const Aws::String& value) { SetDomainExecutionRole(value); return *this;}

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithDomainExecutionRole(Aws::String&& value) { SetDomainExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithDomainExecutionRole(const char* value) { SetDomainExecutionRole(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline CreateDomainResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline CreateDomainResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline CreateDomainResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


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
    inline CreateDomainResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateDomainResult& WithPortalUrl(const Aws::String& value) { SetPortalUrl(value); return *this;}

    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithPortalUrl(Aws::String&& value) { SetPortalUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithPortalUrl(const char* value) { SetPortalUrl(value); return *this;}


    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const{ return m_singleSignOn; }

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline void SetSingleSignOn(const SingleSignOn& value) { m_singleSignOn = value; }

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline void SetSingleSignOn(SingleSignOn&& value) { m_singleSignOn = std::move(value); }

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithSingleSignOn(const SingleSignOn& value) { SetSingleSignOn(value); return *this;}

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithSingleSignOn(SingleSignOn&& value) { SetSingleSignOn(std::move(value)); return *this;}


    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline void SetStatus(const DomainStatus& value) { m_status = value; }

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline void SetStatus(DomainStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline CreateDomainResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_domainExecutionRole;

    Aws::String m_id;

    Aws::String m_kmsKeyIdentifier;

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
