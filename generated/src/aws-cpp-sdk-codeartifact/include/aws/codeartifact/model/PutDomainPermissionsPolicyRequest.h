/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class PutDomainPermissionsPolicyRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API PutDomainPermissionsPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDomainPermissionsPolicy"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the domain on which to set the resource policy. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain on which to set the resource policy. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain on which to set the resource policy. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain on which to set the resource policy. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain on which to set the resource policy. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain on which to set the resource policy. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain on which to set the resource policy. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain on which to set the resource policy. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The current revision of the resource policy to be set. This revision is used
     * for optimistic locking, which prevents others from overwriting your changes to
     * the domain's resource policy. </p>
     */
    inline const Aws::String& GetPolicyRevision() const{ return m_policyRevision; }

    /**
     * <p> The current revision of the resource policy to be set. This revision is used
     * for optimistic locking, which prevents others from overwriting your changes to
     * the domain's resource policy. </p>
     */
    inline bool PolicyRevisionHasBeenSet() const { return m_policyRevisionHasBeenSet; }

    /**
     * <p> The current revision of the resource policy to be set. This revision is used
     * for optimistic locking, which prevents others from overwriting your changes to
     * the domain's resource policy. </p>
     */
    inline void SetPolicyRevision(const Aws::String& value) { m_policyRevisionHasBeenSet = true; m_policyRevision = value; }

    /**
     * <p> The current revision of the resource policy to be set. This revision is used
     * for optimistic locking, which prevents others from overwriting your changes to
     * the domain's resource policy. </p>
     */
    inline void SetPolicyRevision(Aws::String&& value) { m_policyRevisionHasBeenSet = true; m_policyRevision = std::move(value); }

    /**
     * <p> The current revision of the resource policy to be set. This revision is used
     * for optimistic locking, which prevents others from overwriting your changes to
     * the domain's resource policy. </p>
     */
    inline void SetPolicyRevision(const char* value) { m_policyRevisionHasBeenSet = true; m_policyRevision.assign(value); }

    /**
     * <p> The current revision of the resource policy to be set. This revision is used
     * for optimistic locking, which prevents others from overwriting your changes to
     * the domain's resource policy. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithPolicyRevision(const Aws::String& value) { SetPolicyRevision(value); return *this;}

    /**
     * <p> The current revision of the resource policy to be set. This revision is used
     * for optimistic locking, which prevents others from overwriting your changes to
     * the domain's resource policy. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithPolicyRevision(Aws::String&& value) { SetPolicyRevision(std::move(value)); return *this;}

    /**
     * <p> The current revision of the resource policy to be set. This revision is used
     * for optimistic locking, which prevents others from overwriting your changes to
     * the domain's resource policy. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithPolicyRevision(const char* value) { SetPolicyRevision(value); return *this;}


    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided domain. </p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided domain. </p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided domain. </p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided domain. </p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided domain. </p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided domain. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided domain. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided domain. </p>
     */
    inline PutDomainPermissionsPolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_policyRevision;
    bool m_policyRevisionHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
