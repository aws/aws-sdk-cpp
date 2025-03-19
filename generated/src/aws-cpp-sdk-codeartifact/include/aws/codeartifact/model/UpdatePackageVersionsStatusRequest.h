/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codeartifact/model/PackageVersionStatus.h>
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
  class UpdatePackageVersionsStatusRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API UpdatePackageVersionsStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackageVersionsStatus"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    UpdatePackageVersionsStatusRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
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
    UpdatePackageVersionsStatusRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    UpdatePackageVersionsStatusRequest& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A format that specifies the type of the package with the statuses to update.
     * </p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline UpdatePackageVersionsStatusRequest& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package version to be updated. The package component
     * that specifies its namespace depends on its type. For example:</p> <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, Ruby, and Cargo
     * package versions do not contain a corresponding component, package versions of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    UpdatePackageVersionsStatusRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    UpdatePackageVersionsStatusRequest& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const { return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    UpdatePackageVersionsStatusRequest& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    template<typename VersionsT = Aws::String>
    UpdatePackageVersionsStatusRequest& AddVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions.emplace_back(std::forward<VersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVersionRevisions() const { return m_versionRevisions; }
    inline bool VersionRevisionsHasBeenSet() const { return m_versionRevisionsHasBeenSet; }
    template<typename VersionRevisionsT = Aws::Map<Aws::String, Aws::String>>
    void SetVersionRevisions(VersionRevisionsT&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = std::forward<VersionRevisionsT>(value); }
    template<typename VersionRevisionsT = Aws::Map<Aws::String, Aws::String>>
    UpdatePackageVersionsStatusRequest& WithVersionRevisions(VersionRevisionsT&& value) { SetVersionRevisions(std::forward<VersionRevisionsT>(value)); return *this;}
    template<typename VersionRevisionsKeyT = Aws::String, typename VersionRevisionsValueT = Aws::String>
    UpdatePackageVersionsStatusRequest& AddVersionRevisions(VersionRevisionsKeyT&& key, VersionRevisionsValueT&& value) {
      m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::forward<VersionRevisionsKeyT>(key), std::forward<VersionRevisionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The package version’s expected status before it is updated. If
     * <code>expectedStatus</code> is provided, the package version's status is updated
     * only if its status at the time <code>UpdatePackageVersionsStatus</code> is
     * called matches <code>expectedStatus</code>. </p>
     */
    inline PackageVersionStatus GetExpectedStatus() const { return m_expectedStatus; }
    inline bool ExpectedStatusHasBeenSet() const { return m_expectedStatusHasBeenSet; }
    inline void SetExpectedStatus(PackageVersionStatus value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = value; }
    inline UpdatePackageVersionsStatusRequest& WithExpectedStatus(PackageVersionStatus value) { SetExpectedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status you want to change the package version status to. </p>
     */
    inline PackageVersionStatus GetTargetStatus() const { return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(PackageVersionStatus value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline UpdatePackageVersionsStatusRequest& WithTargetStatus(PackageVersionStatus value) { SetTargetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    PackageFormat m_format{PackageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_versionRevisions;
    bool m_versionRevisionsHasBeenSet = false;

    PackageVersionStatus m_expectedStatus{PackageVersionStatus::NOT_SET};
    bool m_expectedStatusHasBeenSet = false;

    PackageVersionStatus m_targetStatus{PackageVersionStatus::NOT_SET};
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
