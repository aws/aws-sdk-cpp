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
    AWS_CODEARTIFACT_API DeleteDomainPermissionsPolicyRequest() = default;

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
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DeleteDomainPermissionsPolicyRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const { return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    template<typename DomainOwnerT = Aws::String>
    void SetDomainOwner(DomainOwnerT&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::forward<DomainOwnerT>(value); }
    template<typename DomainOwnerT = Aws::String>
    DeleteDomainPermissionsPolicyRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current revision of the resource policy to be deleted. This revision is
     * used for optimistic locking, which prevents others from overwriting your changes
     * to the domain's resource policy. </p>
     */
    inline const Aws::String& GetPolicyRevision() const { return m_policyRevision; }
    inline bool PolicyRevisionHasBeenSet() const { return m_policyRevisionHasBeenSet; }
    template<typename PolicyRevisionT = Aws::String>
    void SetPolicyRevision(PolicyRevisionT&& value) { m_policyRevisionHasBeenSet = true; m_policyRevision = std::forward<PolicyRevisionT>(value); }
    template<typename PolicyRevisionT = Aws::String>
    DeleteDomainPermissionsPolicyRequest& WithPolicyRevision(PolicyRevisionT&& value) { SetPolicyRevision(std::forward<PolicyRevisionT>(value)); return *this;}
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
