/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/codeartifact/model/AllowPublish.h>
#include <aws/codeartifact/model/AllowUpstream.h>
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
  class ListPackagesRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API ListPackagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPackages"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested packages. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested packages. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested packages. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested packages. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested packages. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested packages. </p>
     */
    inline ListPackagesRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested packages. </p>
     */
    inline ListPackagesRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the repository that contains the
     * requested packages. </p>
     */
    inline ListPackagesRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline ListPackagesRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline ListPackagesRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline ListPackagesRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The name of the repository that contains the requested packages. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The name of the repository that contains the requested packages. </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The name of the repository that contains the requested packages. </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The name of the repository that contains the requested packages. </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The name of the repository that contains the requested packages. </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The name of the repository that contains the requested packages. </p>
     */
    inline ListPackagesRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The name of the repository that contains the requested packages. </p>
     */
    inline ListPackagesRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository that contains the requested packages. </p>
     */
    inline ListPackagesRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>The format used to filter requested packages. Only packages from the provided
     * format will be returned.</p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format used to filter requested packages. Only packages from the provided
     * format will be returned.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format used to filter requested packages. Only packages from the provided
     * format will be returned.</p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format used to filter requested packages. Only packages from the provided
     * format will be returned.</p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format used to filter requested packages. Only packages from the provided
     * format will be returned.</p>
     */
    inline ListPackagesRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format used to filter requested packages. Only packages from the provided
     * format will be returned.</p>
     */
    inline ListPackagesRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace used to filter requested packages. Only packages with the
     * provided namespace will be returned. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace used to filter requested packages. Only packages with the
     * provided namespace will be returned. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace used to filter requested packages. Only packages with the
     * provided namespace will be returned. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace used to filter requested packages. Only packages with the
     * provided namespace will be returned. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace used to filter requested packages. Only packages with the
     * provided namespace will be returned. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace used to filter requested packages. Only packages with the
     * provided namespace will be returned. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline ListPackagesRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace used to filter requested packages. Only packages with the
     * provided namespace will be returned. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline ListPackagesRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace used to filter requested packages. Only packages with the
     * provided namespace will be returned. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline ListPackagesRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> A prefix used to filter requested packages. Only packages with names that
     * start with <code>packagePrefix</code> are returned. </p>
     */
    inline const Aws::String& GetPackagePrefix() const{ return m_packagePrefix; }

    /**
     * <p> A prefix used to filter requested packages. Only packages with names that
     * start with <code>packagePrefix</code> are returned. </p>
     */
    inline bool PackagePrefixHasBeenSet() const { return m_packagePrefixHasBeenSet; }

    /**
     * <p> A prefix used to filter requested packages. Only packages with names that
     * start with <code>packagePrefix</code> are returned. </p>
     */
    inline void SetPackagePrefix(const Aws::String& value) { m_packagePrefixHasBeenSet = true; m_packagePrefix = value; }

    /**
     * <p> A prefix used to filter requested packages. Only packages with names that
     * start with <code>packagePrefix</code> are returned. </p>
     */
    inline void SetPackagePrefix(Aws::String&& value) { m_packagePrefixHasBeenSet = true; m_packagePrefix = std::move(value); }

    /**
     * <p> A prefix used to filter requested packages. Only packages with names that
     * start with <code>packagePrefix</code> are returned. </p>
     */
    inline void SetPackagePrefix(const char* value) { m_packagePrefixHasBeenSet = true; m_packagePrefix.assign(value); }

    /**
     * <p> A prefix used to filter requested packages. Only packages with names that
     * start with <code>packagePrefix</code> are returned. </p>
     */
    inline ListPackagesRequest& WithPackagePrefix(const Aws::String& value) { SetPackagePrefix(value); return *this;}

    /**
     * <p> A prefix used to filter requested packages. Only packages with names that
     * start with <code>packagePrefix</code> are returned. </p>
     */
    inline ListPackagesRequest& WithPackagePrefix(Aws::String&& value) { SetPackagePrefix(std::move(value)); return *this;}

    /**
     * <p> A prefix used to filter requested packages. Only packages with names that
     * start with <code>packagePrefix</code> are returned. </p>
     */
    inline ListPackagesRequest& WithPackagePrefix(const char* value) { SetPackagePrefix(value); return *this;}


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
    inline ListPackagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListPackagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListPackagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListPackagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The value of the <code>Publish</code> package origin control restriction used
     * to filter requested packages. Only packages with the provided restriction are
     * returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline const AllowPublish& GetPublish() const{ return m_publish; }

    /**
     * <p>The value of the <code>Publish</code> package origin control restriction used
     * to filter requested packages. Only packages with the provided restriction are
     * returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline bool PublishHasBeenSet() const { return m_publishHasBeenSet; }

    /**
     * <p>The value of the <code>Publish</code> package origin control restriction used
     * to filter requested packages. Only packages with the provided restriction are
     * returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline void SetPublish(const AllowPublish& value) { m_publishHasBeenSet = true; m_publish = value; }

    /**
     * <p>The value of the <code>Publish</code> package origin control restriction used
     * to filter requested packages. Only packages with the provided restriction are
     * returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline void SetPublish(AllowPublish&& value) { m_publishHasBeenSet = true; m_publish = std::move(value); }

    /**
     * <p>The value of the <code>Publish</code> package origin control restriction used
     * to filter requested packages. Only packages with the provided restriction are
     * returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline ListPackagesRequest& WithPublish(const AllowPublish& value) { SetPublish(value); return *this;}

    /**
     * <p>The value of the <code>Publish</code> package origin control restriction used
     * to filter requested packages. Only packages with the provided restriction are
     * returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline ListPackagesRequest& WithPublish(AllowPublish&& value) { SetPublish(std::move(value)); return *this;}


    /**
     * <p>The value of the <code>Upstream</code> package origin control restriction
     * used to filter requested packages. Only packages with the provided restriction
     * are returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline const AllowUpstream& GetUpstream() const{ return m_upstream; }

    /**
     * <p>The value of the <code>Upstream</code> package origin control restriction
     * used to filter requested packages. Only packages with the provided restriction
     * are returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline bool UpstreamHasBeenSet() const { return m_upstreamHasBeenSet; }

    /**
     * <p>The value of the <code>Upstream</code> package origin control restriction
     * used to filter requested packages. Only packages with the provided restriction
     * are returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline void SetUpstream(const AllowUpstream& value) { m_upstreamHasBeenSet = true; m_upstream = value; }

    /**
     * <p>The value of the <code>Upstream</code> package origin control restriction
     * used to filter requested packages. Only packages with the provided restriction
     * are returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline void SetUpstream(AllowUpstream&& value) { m_upstreamHasBeenSet = true; m_upstream = std::move(value); }

    /**
     * <p>The value of the <code>Upstream</code> package origin control restriction
     * used to filter requested packages. Only packages with the provided restriction
     * are returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline ListPackagesRequest& WithUpstream(const AllowUpstream& value) { SetUpstream(value); return *this;}

    /**
     * <p>The value of the <code>Upstream</code> package origin control restriction
     * used to filter requested packages. Only packages with the provided restriction
     * are returned. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>.</p>
     */
    inline ListPackagesRequest& WithUpstream(AllowUpstream&& value) { SetUpstream(std::move(value)); return *this;}

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

    Aws::String m_packagePrefix;
    bool m_packagePrefixHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    AllowPublish m_publish;
    bool m_publishHasBeenSet = false;

    AllowUpstream m_upstream;
    bool m_upstreamHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
