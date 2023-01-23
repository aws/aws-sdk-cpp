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
    AWS_CODEARTIFACT_API UpdatePackageVersionsStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackageVersionsStatus"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the repository that contains the
     * package versions with a status to be updated. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline UpdatePackageVersionsStatusRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The repository that contains the package versions with the status you want
     * to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p> A format that specifies the type of the package with the statuses to update.
     * </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> A format that specifies the type of the package with the statuses to update.
     * </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> A format that specifies the type of the package with the statuses to update.
     * </p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> A format that specifies the type of the package with the statuses to update.
     * </p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> A format that specifies the type of the package with the statuses to update.
     * </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> A format that specifies the type of the package with the statuses to update.
     * </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package version to be updated. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package version to be updated. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the package version to be updated. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the package version to be updated. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package version to be updated. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the package version to be updated. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline UpdatePackageVersionsStatusRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package version to be updated. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline UpdatePackageVersionsStatusRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package version to be updated. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm package
     * version is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline UpdatePackageVersionsStatusRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package with the version statuses to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }

    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }

    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }

    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of strings that specify the versions of the package with the
     * statuses to update. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }


    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVersionRevisions() const{ return m_versionRevisions; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline bool VersionRevisionsHasBeenSet() const { return m_versionRevisionsHasBeenSet; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline void SetVersionRevisions(const Aws::Map<Aws::String, Aws::String>& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = value; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline void SetVersionRevisions(Aws::Map<Aws::String, Aws::String>&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = std::move(value); }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithVersionRevisions(const Aws::Map<Aws::String, Aws::String>& value) { SetVersionRevisions(value); return *this;}

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithVersionRevisions(Aws::Map<Aws::String, Aws::String>&& value) { SetVersionRevisions(std::move(value)); return *this;}

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersionRevisions(const Aws::String& key, const Aws::String& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, value); return *this; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersionRevisions(Aws::String&& key, const Aws::String& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersionRevisions(const Aws::String& key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersionRevisions(Aws::String&& key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersionRevisions(const char* key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersionRevisions(Aws::String&& key, const char* value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map of package versions and package version revisions. The map
     * <code>key</code> is the package version (for example, <code>3.5.2</code>), and
     * the map <code>value</code> is the package version revision. </p>
     */
    inline UpdatePackageVersionsStatusRequest& AddVersionRevisions(const char* key, const char* value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, value); return *this; }


    /**
     * <p> The package version’s expected status before it is updated. If
     * <code>expectedStatus</code> is provided, the package version's status is updated
     * only if its status at the time <code>UpdatePackageVersionsStatus</code> is
     * called matches <code>expectedStatus</code>. </p>
     */
    inline const PackageVersionStatus& GetExpectedStatus() const{ return m_expectedStatus; }

    /**
     * <p> The package version’s expected status before it is updated. If
     * <code>expectedStatus</code> is provided, the package version's status is updated
     * only if its status at the time <code>UpdatePackageVersionsStatus</code> is
     * called matches <code>expectedStatus</code>. </p>
     */
    inline bool ExpectedStatusHasBeenSet() const { return m_expectedStatusHasBeenSet; }

    /**
     * <p> The package version’s expected status before it is updated. If
     * <code>expectedStatus</code> is provided, the package version's status is updated
     * only if its status at the time <code>UpdatePackageVersionsStatus</code> is
     * called matches <code>expectedStatus</code>. </p>
     */
    inline void SetExpectedStatus(const PackageVersionStatus& value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = value; }

    /**
     * <p> The package version’s expected status before it is updated. If
     * <code>expectedStatus</code> is provided, the package version's status is updated
     * only if its status at the time <code>UpdatePackageVersionsStatus</code> is
     * called matches <code>expectedStatus</code>. </p>
     */
    inline void SetExpectedStatus(PackageVersionStatus&& value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = std::move(value); }

    /**
     * <p> The package version’s expected status before it is updated. If
     * <code>expectedStatus</code> is provided, the package version's status is updated
     * only if its status at the time <code>UpdatePackageVersionsStatus</code> is
     * called matches <code>expectedStatus</code>. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithExpectedStatus(const PackageVersionStatus& value) { SetExpectedStatus(value); return *this;}

    /**
     * <p> The package version’s expected status before it is updated. If
     * <code>expectedStatus</code> is provided, the package version's status is updated
     * only if its status at the time <code>UpdatePackageVersionsStatus</code> is
     * called matches <code>expectedStatus</code>. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithExpectedStatus(PackageVersionStatus&& value) { SetExpectedStatus(std::move(value)); return *this;}


    /**
     * <p> The status you want to change the package version status to. </p>
     */
    inline const PackageVersionStatus& GetTargetStatus() const{ return m_targetStatus; }

    /**
     * <p> The status you want to change the package version status to. </p>
     */
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }

    /**
     * <p> The status you want to change the package version status to. </p>
     */
    inline void SetTargetStatus(const PackageVersionStatus& value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }

    /**
     * <p> The status you want to change the package version status to. </p>
     */
    inline void SetTargetStatus(PackageVersionStatus&& value) { m_targetStatusHasBeenSet = true; m_targetStatus = std::move(value); }

    /**
     * <p> The status you want to change the package version status to. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithTargetStatus(const PackageVersionStatus& value) { SetTargetStatus(value); return *this;}

    /**
     * <p> The status you want to change the package version status to. </p>
     */
    inline UpdatePackageVersionsStatusRequest& WithTargetStatus(PackageVersionStatus&& value) { SetTargetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    PackageFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_versionRevisions;
    bool m_versionRevisionsHasBeenSet = false;

    PackageVersionStatus m_expectedStatus;
    bool m_expectedStatusHasBeenSet = false;

    PackageVersionStatus m_targetStatus;
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
