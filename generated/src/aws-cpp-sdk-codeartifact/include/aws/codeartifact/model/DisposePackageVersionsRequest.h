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
  class DisposePackageVersionsRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API DisposePackageVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisposePackageVersions"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DisposePackageVersionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DisposePackageVersionsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DisposePackageVersionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
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
    inline DisposePackageVersionsRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline DisposePackageVersionsRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline DisposePackageVersionsRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }
    inline DisposePackageVersionsRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}
    inline DisposePackageVersionsRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}
    inline DisposePackageVersionsRequest& WithRepository(const char* value) { SetRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A format that specifies the type of package versions you want to dispose.
     * </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline DisposePackageVersionsRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}
    inline DisposePackageVersionsRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package versions to be disposed. The package component
     * that specifies its namespace depends on its type. For example:</p>  <p>The
     * namespace is required when disposing package versions of the following
     * formats:</p> <ul> <li> <p>Maven</p> </li> <li> <p>Swift</p> </li> <li>
     * <p>generic</p> </li> </ul>  <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm or Swift package version is its <code>scope</code>. </p> </li> <li>
     * <p>The namespace of a generic package is its <code>namespace</code>.</p> </li>
     * <li> <p> Python, NuGet, Ruby, and Cargo package versions do not contain a
     * corresponding component, package versions of those formats do not have a
     * namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline DisposePackageVersionsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline DisposePackageVersionsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline DisposePackageVersionsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }
    inline DisposePackageVersionsRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}
    inline DisposePackageVersionsRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}
    inline DisposePackageVersionsRequest& WithPackage(const char* value) { SetPackage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }
    inline DisposePackageVersionsRequest& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}
    inline DisposePackageVersionsRequest& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}
    inline DisposePackageVersionsRequest& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }
    inline DisposePackageVersionsRequest& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }
    inline DisposePackageVersionsRequest& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVersionRevisions() const{ return m_versionRevisions; }
    inline bool VersionRevisionsHasBeenSet() const { return m_versionRevisionsHasBeenSet; }
    inline void SetVersionRevisions(const Aws::Map<Aws::String, Aws::String>& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = value; }
    inline void SetVersionRevisions(Aws::Map<Aws::String, Aws::String>&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = std::move(value); }
    inline DisposePackageVersionsRequest& WithVersionRevisions(const Aws::Map<Aws::String, Aws::String>& value) { SetVersionRevisions(value); return *this;}
    inline DisposePackageVersionsRequest& WithVersionRevisions(Aws::Map<Aws::String, Aws::String>&& value) { SetVersionRevisions(std::move(value)); return *this;}
    inline DisposePackageVersionsRequest& AddVersionRevisions(const Aws::String& key, const Aws::String& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, value); return *this; }
    inline DisposePackageVersionsRequest& AddVersionRevisions(Aws::String&& key, const Aws::String& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), value); return *this; }
    inline DisposePackageVersionsRequest& AddVersionRevisions(const Aws::String& key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, std::move(value)); return *this; }
    inline DisposePackageVersionsRequest& AddVersionRevisions(Aws::String&& key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), std::move(value)); return *this; }
    inline DisposePackageVersionsRequest& AddVersionRevisions(const char* key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, std::move(value)); return *this; }
    inline DisposePackageVersionsRequest& AddVersionRevisions(Aws::String&& key, const char* value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), value); return *this; }
    inline DisposePackageVersionsRequest& AddVersionRevisions(const char* key, const char* value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The expected status of the package version to dispose. </p>
     */
    inline const PackageVersionStatus& GetExpectedStatus() const{ return m_expectedStatus; }
    inline bool ExpectedStatusHasBeenSet() const { return m_expectedStatusHasBeenSet; }
    inline void SetExpectedStatus(const PackageVersionStatus& value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = value; }
    inline void SetExpectedStatus(PackageVersionStatus&& value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = std::move(value); }
    inline DisposePackageVersionsRequest& WithExpectedStatus(const PackageVersionStatus& value) { SetExpectedStatus(value); return *this;}
    inline DisposePackageVersionsRequest& WithExpectedStatus(PackageVersionStatus&& value) { SetExpectedStatus(std::move(value)); return *this;}
    ///@}
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
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
