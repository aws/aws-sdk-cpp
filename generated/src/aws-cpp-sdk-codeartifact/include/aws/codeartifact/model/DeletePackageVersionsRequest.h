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
  class DeletePackageVersionsRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API DeletePackageVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePackageVersions"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the package to delete. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the package to delete. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the package to delete. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the package to delete. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the package to delete. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the package to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the package to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the package to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline DeletePackageVersionsRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline DeletePackageVersionsRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline DeletePackageVersionsRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The name of the repository that contains the package versions to delete.
     * </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The name of the repository that contains the package versions to delete.
     * </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The name of the repository that contains the package versions to delete.
     * </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The name of the repository that contains the package versions to delete.
     * </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The name of the repository that contains the package versions to delete.
     * </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The name of the repository that contains the package versions to delete.
     * </p>
     */
    inline DeletePackageVersionsRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The name of the repository that contains the package versions to delete.
     * </p>
     */
    inline DeletePackageVersionsRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository that contains the package versions to delete.
     * </p>
     */
    inline DeletePackageVersionsRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p> The format of the package versions to delete. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the package versions to delete. </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> The format of the package versions to delete. </p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> The format of the package versions to delete. </p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> The format of the package versions to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the package versions to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package versions to be deleted. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when deleting Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package versions to be deleted. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when deleting Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the package versions to be deleted. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when deleting Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the package versions to be deleted. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when deleting Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package versions to be deleted. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when deleting Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the package versions to be deleted. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when deleting Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline DeletePackageVersionsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package versions to be deleted. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when deleting Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline DeletePackageVersionsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package versions to be deleted. The package version
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. The namespace is required when deleting Maven package
     * versions. </p> </li> <li> <p> The namespace of an npm package version is its
     * <code>scope</code>. </p> </li> <li> <p> Python and NuGet package versions do not
     * contain a corresponding component, package versions of those formats do not have
     * a namespace. </p> </li> </ul>
     */
    inline DeletePackageVersionsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package with the versions to delete. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package with the versions to delete. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The name of the package with the versions to delete. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The name of the package with the versions to delete. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The name of the package with the versions to delete. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The name of the package with the versions to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package with the versions to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package with the versions to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }

    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }

    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }

    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline DeletePackageVersionsRequest& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline DeletePackageVersionsRequest& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of strings that specify the versions of the package to delete. </p>
     */
    inline DeletePackageVersionsRequest& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }


    /**
     * <p> The expected status of the package version to delete. </p>
     */
    inline const PackageVersionStatus& GetExpectedStatus() const{ return m_expectedStatus; }

    /**
     * <p> The expected status of the package version to delete. </p>
     */
    inline bool ExpectedStatusHasBeenSet() const { return m_expectedStatusHasBeenSet; }

    /**
     * <p> The expected status of the package version to delete. </p>
     */
    inline void SetExpectedStatus(const PackageVersionStatus& value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = value; }

    /**
     * <p> The expected status of the package version to delete. </p>
     */
    inline void SetExpectedStatus(PackageVersionStatus&& value) { m_expectedStatusHasBeenSet = true; m_expectedStatus = std::move(value); }

    /**
     * <p> The expected status of the package version to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithExpectedStatus(const PackageVersionStatus& value) { SetExpectedStatus(value); return *this;}

    /**
     * <p> The expected status of the package version to delete. </p>
     */
    inline DeletePackageVersionsRequest& WithExpectedStatus(PackageVersionStatus&& value) { SetExpectedStatus(std::move(value)); return *this;}

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

    PackageVersionStatus m_expectedStatus;
    bool m_expectedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
