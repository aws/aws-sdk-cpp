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
  class PutRepositoryPermissionsPolicyRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API PutRepositoryPermissionsPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRepositoryPermissionsPolicy"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain containing the repository to set the resource policy
     * on. </p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    PutRepositoryPermissionsPolicyRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
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
    PutRepositoryPermissionsPolicyRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the repository to set the resource policy on. </p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    PutRepositoryPermissionsPolicyRequest& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Sets the revision of the resource policy that specifies permissions to
     * access the repository. This revision is used for optimistic locking, which
     * prevents others from overwriting your changes to the repository's resource
     * policy. </p>
     */
    inline const Aws::String& GetPolicyRevision() const { return m_policyRevision; }
    inline bool PolicyRevisionHasBeenSet() const { return m_policyRevisionHasBeenSet; }
    template<typename PolicyRevisionT = Aws::String>
    void SetPolicyRevision(PolicyRevisionT&& value) { m_policyRevisionHasBeenSet = true; m_policyRevision = std::forward<PolicyRevisionT>(value); }
    template<typename PolicyRevisionT = Aws::String>
    PutRepositoryPermissionsPolicyRequest& WithPolicyRevision(PolicyRevisionT&& value) { SetPolicyRevision(std::forward<PolicyRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A valid displayable JSON Aspen policy string to be set as the access control
     * resource policy on the provided repository. </p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    PutRepositoryPermissionsPolicyRequest& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_policyRevision;
    bool m_policyRevisionHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
