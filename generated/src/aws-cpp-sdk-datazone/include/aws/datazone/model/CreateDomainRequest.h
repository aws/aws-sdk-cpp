/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SingleSignOn.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateDomainRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDomainRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDomainRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDomainRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline bool DomainExecutionRoleHasBeenSet() const { return m_domainExecutionRoleHasBeenSet; }

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline void SetDomainExecutionRole(const Aws::String& value) { m_domainExecutionRoleHasBeenSet = true; m_domainExecutionRole = value; }

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline void SetDomainExecutionRole(Aws::String&& value) { m_domainExecutionRoleHasBeenSet = true; m_domainExecutionRole = std::move(value); }

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline void SetDomainExecutionRole(const char* value) { m_domainExecutionRoleHasBeenSet = true; m_domainExecutionRole.assign(value); }

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithDomainExecutionRole(const Aws::String& value) { SetDomainExecutionRole(value); return *this;}

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithDomainExecutionRole(Aws::String&& value) { SetDomainExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The domain execution role that is created when an Amazon DataZone domain is
     * created. The domain execution role is created in the Amazon Web Services account
     * that houses the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithDomainExecutionRole(const char* value) { SetDomainExecutionRole(value); return *this;}


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
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline CreateDomainRequest& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline CreateDomainRequest& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline CreateDomainRequest& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const{ return m_singleSignOn; }

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline bool SingleSignOnHasBeenSet() const { return m_singleSignOnHasBeenSet; }

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline void SetSingleSignOn(const SingleSignOn& value) { m_singleSignOnHasBeenSet = true; m_singleSignOn = value; }

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline void SetSingleSignOn(SingleSignOn&& value) { m_singleSignOnHasBeenSet = true; m_singleSignOn = std::move(value); }

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithSingleSignOn(const SingleSignOn& value) { SetSingleSignOn(value); return *this;}

    /**
     * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithSingleSignOn(SingleSignOn&& value) { SetSingleSignOn(std::move(value)); return *this;}


    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline CreateDomainRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainExecutionRole;
    bool m_domainExecutionRoleHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SingleSignOn m_singleSignOn;
    bool m_singleSignOnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
