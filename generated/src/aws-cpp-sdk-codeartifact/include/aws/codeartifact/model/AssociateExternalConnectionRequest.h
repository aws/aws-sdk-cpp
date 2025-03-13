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
  class AssociateExternalConnectionRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API AssociateExternalConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateExternalConnection"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the domain that contains the repository.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    AssociateExternalConnectionRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
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
    AssociateExternalConnectionRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the repository to which the external connection is added. </p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    AssociateExternalConnectionRequest& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the external connection to add to the repository. The following
     * values are supported: </p> <ul> <li> <p> <code>public:npmjs</code> - for the npm
     * public repository. </p> </li> <li> <p> <code>public:nuget-org</code> - for the
     * NuGet Gallery. </p> </li> <li> <p> <code>public:pypi</code> - for the Python
     * Package Index. </p> </li> <li> <p> <code>public:maven-central</code> - for Maven
     * Central. </p> </li> <li> <p> <code>public:maven-googleandroid</code> - for the
     * Google Android repository. </p> </li> <li> <p>
     * <code>public:maven-gradleplugins</code> - for the Gradle plugins repository.
     * </p> </li> <li> <p> <code>public:maven-commonsware</code> - for the CommonsWare
     * Android repository. </p> </li> <li> <p> <code>public:maven-clojars</code> - for
     * the Clojars repository. </p> </li> <li> <p> <code>public:ruby-gems-org</code> -
     * for RubyGems.org. </p> </li> <li> <p> <code>public:crates-io</code> - for
     * Crates.io. </p> </li> </ul>
     */
    inline const Aws::String& GetExternalConnection() const { return m_externalConnection; }
    inline bool ExternalConnectionHasBeenSet() const { return m_externalConnectionHasBeenSet; }
    template<typename ExternalConnectionT = Aws::String>
    void SetExternalConnection(ExternalConnectionT&& value) { m_externalConnectionHasBeenSet = true; m_externalConnection = std::forward<ExternalConnectionT>(value); }
    template<typename ExternalConnectionT = Aws::String>
    AssociateExternalConnectionRequest& WithExternalConnection(ExternalConnectionT&& value) { SetExternalConnection(std::forward<ExternalConnectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_externalConnection;
    bool m_externalConnectionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
