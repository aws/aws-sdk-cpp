﻿/**
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
  class AWS_CODEARTIFACT_API DisposePackageVersionsRequest : public CodeArtifactRequest
  {
  public:
    DisposePackageVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisposePackageVersions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline DisposePackageVersionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline DisposePackageVersionsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the repository you want to dispose.
     * </p>
     */
    inline DisposePackageVersionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline DisposePackageVersionsRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline DisposePackageVersionsRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline DisposePackageVersionsRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository that contains the package versions you want to
     * dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p> A format that specifies the type of package versions you want to dispose.
     * The valid values are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p>
     * <code>pypi</code> </p> </li> <li> <p> <code>maven</code> </p> </li> </ul>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> A format that specifies the type of package versions you want to dispose.
     * The valid values are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p>
     * <code>pypi</code> </p> </li> <li> <p> <code>maven</code> </p> </li> </ul>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> A format that specifies the type of package versions you want to dispose.
     * The valid values are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p>
     * <code>pypi</code> </p> </li> <li> <p> <code>maven</code> </p> </li> </ul>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> A format that specifies the type of package versions you want to dispose.
     * The valid values are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p>
     * <code>pypi</code> </p> </li> <li> <p> <code>maven</code> </p> </li> </ul>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> A format that specifies the type of package versions you want to dispose.
     * The valid values are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p>
     * <code>pypi</code> </p> </li> <li> <p> <code>maven</code> </p> </li> </ul>
     */
    inline DisposePackageVersionsRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> A format that specifies the type of package versions you want to dispose.
     * The valid values are: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p>
     * <code>pypi</code> </p> </li> <li> <p> <code>maven</code> </p> </li> </ul>
     */
    inline DisposePackageVersionsRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline DisposePackageVersionsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline DisposePackageVersionsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> </ul>
     */
    inline DisposePackageVersionsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package with the versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }

    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }

    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }

    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p> The versions of the package you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }


    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVersionRevisions() const{ return m_versionRevisions; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline bool VersionRevisionsHasBeenSet() const { return m_versionRevisionsHasBeenSet; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline void SetVersionRevisions(const Aws::Map<Aws::String, Aws::String>& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = value; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline void SetVersionRevisions(Aws::Map<Aws::String, Aws::String>&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions = std::move(value); }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithVersionRevisions(const Aws::Map<Aws::String, Aws::String>& value) { SetVersionRevisions(value); return *this;}

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& WithVersionRevisions(Aws::Map<Aws::String, Aws::String>&& value) { SetVersionRevisions(std::move(value)); return *this;}

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersionRevisions(const Aws::String& key, const Aws::String& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, value); return *this; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersionRevisions(Aws::String&& key, const Aws::String& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), value); return *this; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersionRevisions(const Aws::String& key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersionRevisions(Aws::String&& key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersionRevisions(const char* key, Aws::String&& value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersionRevisions(Aws::String&& key, const char* value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(std::move(key), value); return *this; }

    /**
     * <p> The revisions of the package versions you want to dispose. </p>
     */
    inline DisposePackageVersionsRequest& AddVersionRevisions(const char* key, const char* value) { m_versionRevisionsHasBeenSet = true; m_versionRevisions.emplace(key, value); return *this; }


    /**
     * <p> The expected status of the package version to dispose. Valid values are:
     * </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline const PackageVersionStatus& GetExpectedStatus() const{ return m_expectedStatus; }

    /**
     * <p> The expected status of the package version to dispose. Valid values are:
     * </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline bool ExpectedStatusHasBeenSet() const { return m_expectedStatusHasBeenSet; }

    /**
     * <p> The expected status of the package version to dispose. Valid values are:
     * </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline void SetExpectedStatus(const PackageVersionStatus& value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = value; }

    /**
     * <p> The expected status of the package version to dispose. Valid values are:
     * </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline void SetExpectedStatus(PackageVersionStatus&& value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = std::move(value); }

    /**
     * <p> The expected status of the package version to dispose. Valid values are:
     * </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline DisposePackageVersionsRequest& WithExpectedStatus(const PackageVersionStatus& value) { SetExpectedStatus(value); return *this;}

    /**
     * <p> The expected status of the package version to dispose. Valid values are:
     * </p> <ul> <li> <p> <code>Published</code> </p> </li> <li> <p>
     * <code>Unfinished</code> </p> </li> <li> <p> <code>Unlisted</code> </p> </li>
     * <li> <p> <code>Archived</code> </p> </li> <li> <p> <code>Disposed</code> </p>
     * </li> </ul>
     */
    inline DisposePackageVersionsRequest& WithExpectedStatus(PackageVersionStatus&& value) { SetExpectedStatus(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet;

    PackageFormat m_format;
    bool m_formatHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_package;
    bool m_packageHasBeenSet;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_versionRevisions;
    bool m_versionRevisionsHasBeenSet;

    PackageVersionStatus m_expectedStatus;
    bool m_expectedStatusHasBeenSet;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
