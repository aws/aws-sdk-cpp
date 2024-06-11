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
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class DeleteDomainPermissionsPolicyRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API DeleteDomainPermissionsPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDomainPermissionsPolicy"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain associated with the resource policy to be deleted.
     * </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DeleteDomainPermissionsPolicyRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DeleteDomainPermissionsPolicyRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DeleteDomainPermissionsPolicyRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }
    inline DeleteDomainPermissionsPolicyRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline DeleteDomainPermissionsPolicyRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline DeleteDomainPermissionsPolicyRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current revision of the resource policy to be deleted. This revision is
     * used for optimistic locking, which prevents others from overwriting your changes
     * to the domain's resource policy. </p>
     */
    inline const Aws::String& GetPolicyRevision() const{ return m_policyRevision; }
    inline bool PolicyRevisionHasBeenSet() const { return m_policyRevisionHasBeenSet; }
    inline void SetPolicyRevision(const Aws::String& value) { m_policyRevisionHasBeenSet = true; m_policyRevision = value; }
    inline void SetPolicyRevision(Aws::String&& value) { m_policyRevisionHasBeenSet = true; m_policyRevision = std::move(value); }
    inline void SetPolicyRevision(const char* value) { m_policyRevisionHasBeenSet = true; m_policyRevision.assign(value); }
    inline DeleteDomainPermissionsPolicyRequest& WithPolicyRevision(const Aws::String& value) { SetPolicyRevision(value); return *this;}
    inline DeleteDomainPermissionsPolicyRequest& WithPolicyRevision(Aws::String&& value) { SetPolicyRevision(std::move(value)); return *this;}
    inline DeleteDomainPermissionsPolicyRequest& WithPolicyRevision(const char* value) { SetPolicyRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_policyRevision;
    bool m_policyRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
