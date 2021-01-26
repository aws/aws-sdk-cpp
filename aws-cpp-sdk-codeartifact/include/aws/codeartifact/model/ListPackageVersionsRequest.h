/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/codeartifact/model/PackageVersionStatus.h>
#include <aws/codeartifact/model/PackageVersionSortType.h>
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
  class AWS_CODEARTIFACT_API ListPackageVersionsRequest : public CodeArtifactRequest
  {
  public:
    ListPackageVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPackageVersions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the repository that contains the
     * returned package versions. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * returned package versions. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * returned package versions. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * returned package versions. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * returned package versions. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * returned package versions. </p>
     */
    inline ListPackageVersionsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the repository that contains the
     * returned package versions. </p>
     */
    inline ListPackageVersionsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the repository that contains the
     * returned package versions. </p>
     */
    inline ListPackageVersionsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline ListPackageVersionsRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline ListPackageVersionsRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline ListPackageVersionsRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The name of the repository that contains the package. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The name of the repository that contains the package. </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The name of the repository that contains the package. </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The name of the repository that contains the package. </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The name of the repository that contains the package. </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The name of the repository that contains the package. </p>
     */
    inline ListPackageVersionsRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The name of the repository that contains the package. </p>
     */
    inline ListPackageVersionsRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository that contains the package. </p>
     */
    inline ListPackageVersionsRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p> The format of the returned packages. The valid package types are: </p> <ul>
     * <li> <p> <code>npm</code>: A Node Package Manager (npm) package. </p> </li> <li>
     * <p> <code>pypi</code>: A Python Package Index (PyPI) package. </p> </li> <li>
     * <p> <code>maven</code>: A Maven package that contains compiled code in a
     * distributable format, such as a JAR file. </p> </li> <li> <p>
     * <code>nuget</code>: A NuGet package. </p> </li> </ul>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the returned packages. The valid package types are: </p> <ul>
     * <li> <p> <code>npm</code>: A Node Package Manager (npm) package. </p> </li> <li>
     * <p> <code>pypi</code>: A Python Package Index (PyPI) package. </p> </li> <li>
     * <p> <code>maven</code>: A Maven package that contains compiled code in a
     * distributable format, such as a JAR file. </p> </li> <li> <p>
     * <code>nuget</code>: A NuGet package. </p> </li> </ul>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> The format of the returned packages. The valid package types are: </p> <ul>
     * <li> <p> <code>npm</code>: A Node Package Manager (npm) package. </p> </li> <li>
     * <p> <code>pypi</code>: A Python Package Index (PyPI) package. </p> </li> <li>
     * <p> <code>maven</code>: A Maven package that contains compiled code in a
     * distributable format, such as a JAR file. </p> </li> <li> <p>
     * <code>nuget</code>: A NuGet package. </p> </li> </ul>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> The format of the returned packages. The valid package types are: </p> <ul>
     * <li> <p> <code>npm</code>: A Node Package Manager (npm) package. </p> </li> <li>
     * <p> <code>pypi</code>: A Python Package Index (PyPI) package. </p> </li> <li>
     * <p> <code>maven</code>: A Maven package that contains compiled code in a
     * distributable format, such as a JAR file. </p> </li> <li> <p>
     * <code>nuget</code>: A NuGet package. </p> </li> </ul>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> The format of the returned packages. The valid package types are: </p> <ul>
     * <li> <p> <code>npm</code>: A Node Package Manager (npm) package. </p> </li> <li>
     * <p> <code>pypi</code>: A Python Package Index (PyPI) package. </p> </li> <li>
     * <p> <code>maven</code>: A Maven package that contains compiled code in a
     * distributable format, such as a JAR file. </p> </li> <li> <p>
     * <code>nuget</code>: A NuGet package. </p> </li> </ul>
     */
    inline ListPackageVersionsRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the returned packages. The valid package types are: </p> <ul>
     * <li> <p> <code>npm</code>: A Node Package Manager (npm) package. </p> </li> <li>
     * <p> <code>pypi</code>: A Python Package Index (PyPI) package. </p> </li> <li>
     * <p> <code>maven</code>: A Maven package that contains compiled code in a
     * distributable format, such as a JAR file. </p> </li> <li> <p>
     * <code>nuget</code>: A NuGet package. </p> </li> </ul>
     */
    inline ListPackageVersionsRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline ListPackageVersionsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline ListPackageVersionsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p> The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example: </p> <ul> <li> <p> The namespace of
     * a Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm package is its <code>scope</code>. </p> </li> <li> <p> A Python
     * package does not contain a corresponding component, so Python packages do not
     * have a namespace. </p> </li> <li> <p> A NuGet package does not contain a
     * corresponding component, so NuGet packages do not have a namespace. </p> </li>
     * </ul>
     */
    inline ListPackageVersionsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package for which you want to return a list of package
     * versions. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package for which you want to return a list of package
     * versions. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The name of the package for which you want to return a list of package
     * versions. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The name of the package for which you want to return a list of package
     * versions. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The name of the package for which you want to return a list of package
     * versions. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The name of the package for which you want to return a list of package
     * versions. </p>
     */
    inline ListPackageVersionsRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package for which you want to return a list of package
     * versions. </p>
     */
    inline ListPackageVersionsRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package for which you want to return a list of package
     * versions. </p>
     */
    inline ListPackageVersionsRequest& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> A string that specifies the status of the package versions to include in the
     * returned list. It can be one of the following: </p> <ul> <li> <p>
     * <code>Published</code> </p> </li> <li> <p> <code>Unfinished</code> </p> </li>
     * <li> <p> <code>Unlisted</code> </p> </li> <li> <p> <code>Archived</code> </p>
     * </li> <li> <p> <code>Disposed</code> </p> </li> </ul>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> A string that specifies the status of the package versions to include in the
     * returned list. It can be one of the following: </p> <ul> <li> <p>
     * <code>Published</code> </p> </li> <li> <p> <code>Unfinished</code> </p> </li>
     * <li> <p> <code>Unlisted</code> </p> </li> <li> <p> <code>Archived</code> </p>
     * </li> <li> <p> <code>Disposed</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> A string that specifies the status of the package versions to include in the
     * returned list. It can be one of the following: </p> <ul> <li> <p>
     * <code>Published</code> </p> </li> <li> <p> <code>Unfinished</code> </p> </li>
     * <li> <p> <code>Unlisted</code> </p> </li> <li> <p> <code>Archived</code> </p>
     * </li> <li> <p> <code>Disposed</code> </p> </li> </ul>
     */
    inline void SetStatus(const PackageVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> A string that specifies the status of the package versions to include in the
     * returned list. It can be one of the following: </p> <ul> <li> <p>
     * <code>Published</code> </p> </li> <li> <p> <code>Unfinished</code> </p> </li>
     * <li> <p> <code>Unlisted</code> </p> </li> <li> <p> <code>Archived</code> </p>
     * </li> <li> <p> <code>Disposed</code> </p> </li> </ul>
     */
    inline void SetStatus(PackageVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> A string that specifies the status of the package versions to include in the
     * returned list. It can be one of the following: </p> <ul> <li> <p>
     * <code>Published</code> </p> </li> <li> <p> <code>Unfinished</code> </p> </li>
     * <li> <p> <code>Unlisted</code> </p> </li> <li> <p> <code>Archived</code> </p>
     * </li> <li> <p> <code>Disposed</code> </p> </li> </ul>
     */
    inline ListPackageVersionsRequest& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> A string that specifies the status of the package versions to include in the
     * returned list. It can be one of the following: </p> <ul> <li> <p>
     * <code>Published</code> </p> </li> <li> <p> <code>Unfinished</code> </p> </li>
     * <li> <p> <code>Unlisted</code> </p> </li> <li> <p> <code>Archived</code> </p>
     * </li> <li> <p> <code>Disposed</code> </p> </li> </ul>
     */
    inline ListPackageVersionsRequest& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> How to sort the returned list of package versions. </p>
     */
    inline const PackageVersionSortType& GetSortBy() const{ return m_sortBy; }

    /**
     * <p> How to sort the returned list of package versions. </p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p> How to sort the returned list of package versions. </p>
     */
    inline void SetSortBy(const PackageVersionSortType& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p> How to sort the returned list of package versions. </p>
     */
    inline void SetSortBy(PackageVersionSortType&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p> How to sort the returned list of package versions. </p>
     */
    inline ListPackageVersionsRequest& WithSortBy(const PackageVersionSortType& value) { SetSortBy(value); return *this;}

    /**
     * <p> How to sort the returned list of package versions. </p>
     */
    inline ListPackageVersionsRequest& WithSortBy(PackageVersionSortType&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline ListPackageVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListPackageVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListPackageVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListPackageVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

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

    PackageVersionStatus m_status;
    bool m_statusHasBeenSet;

    PackageVersionSortType m_sortBy;
    bool m_sortByHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
