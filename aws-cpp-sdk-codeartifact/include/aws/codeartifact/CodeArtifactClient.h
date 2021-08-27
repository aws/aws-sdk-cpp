/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeartifact/model/AssociateExternalConnectionResult.h>
#include <aws/codeartifact/model/CopyPackageVersionsResult.h>
#include <aws/codeartifact/model/CreateDomainResult.h>
#include <aws/codeartifact/model/CreateRepositoryResult.h>
#include <aws/codeartifact/model/DeleteDomainResult.h>
#include <aws/codeartifact/model/DeleteDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/DeletePackageVersionsResult.h>
#include <aws/codeartifact/model/DeleteRepositoryResult.h>
#include <aws/codeartifact/model/DeleteRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/DescribeDomainResult.h>
#include <aws/codeartifact/model/DescribePackageVersionResult.h>
#include <aws/codeartifact/model/DescribeRepositoryResult.h>
#include <aws/codeartifact/model/DisassociateExternalConnectionResult.h>
#include <aws/codeartifact/model/DisposePackageVersionsResult.h>
#include <aws/codeartifact/model/GetAuthorizationTokenResult.h>
#include <aws/codeartifact/model/GetDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/GetPackageVersionAssetResult.h>
#include <aws/codeartifact/model/GetPackageVersionReadmeResult.h>
#include <aws/codeartifact/model/GetRepositoryEndpointResult.h>
#include <aws/codeartifact/model/GetRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/ListDomainsResult.h>
#include <aws/codeartifact/model/ListPackageVersionAssetsResult.h>
#include <aws/codeartifact/model/ListPackageVersionDependenciesResult.h>
#include <aws/codeartifact/model/ListPackageVersionsResult.h>
#include <aws/codeartifact/model/ListPackagesResult.h>
#include <aws/codeartifact/model/ListRepositoriesResult.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainResult.h>
#include <aws/codeartifact/model/ListTagsForResourceResult.h>
#include <aws/codeartifact/model/PutDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/PutRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/TagResourceResult.h>
#include <aws/codeartifact/model/UntagResourceResult.h>
#include <aws/codeartifact/model/UpdatePackageVersionsStatusResult.h>
#include <aws/codeartifact/model/UpdateRepositoryResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CodeArtifact
{

namespace Model
{
        class AssociateExternalConnectionRequest;
        class CopyPackageVersionsRequest;
        class CreateDomainRequest;
        class CreateRepositoryRequest;
        class DeleteDomainRequest;
        class DeleteDomainPermissionsPolicyRequest;
        class DeletePackageVersionsRequest;
        class DeleteRepositoryRequest;
        class DeleteRepositoryPermissionsPolicyRequest;
        class DescribeDomainRequest;
        class DescribePackageVersionRequest;
        class DescribeRepositoryRequest;
        class DisassociateExternalConnectionRequest;
        class DisposePackageVersionsRequest;
        class GetAuthorizationTokenRequest;
        class GetDomainPermissionsPolicyRequest;
        class GetPackageVersionAssetRequest;
        class GetPackageVersionReadmeRequest;
        class GetRepositoryEndpointRequest;
        class GetRepositoryPermissionsPolicyRequest;
        class ListDomainsRequest;
        class ListPackageVersionAssetsRequest;
        class ListPackageVersionDependenciesRequest;
        class ListPackageVersionsRequest;
        class ListPackagesRequest;
        class ListRepositoriesRequest;
        class ListRepositoriesInDomainRequest;
        class ListTagsForResourceRequest;
        class PutDomainPermissionsPolicyRequest;
        class PutRepositoryPermissionsPolicyRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdatePackageVersionsStatusRequest;
        class UpdateRepositoryRequest;

        typedef Aws::Utils::Outcome<AssociateExternalConnectionResult, CodeArtifactError> AssociateExternalConnectionOutcome;
        typedef Aws::Utils::Outcome<CopyPackageVersionsResult, CodeArtifactError> CopyPackageVersionsOutcome;
        typedef Aws::Utils::Outcome<CreateDomainResult, CodeArtifactError> CreateDomainOutcome;
        typedef Aws::Utils::Outcome<CreateRepositoryResult, CodeArtifactError> CreateRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainResult, CodeArtifactError> DeleteDomainOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainPermissionsPolicyResult, CodeArtifactError> DeleteDomainPermissionsPolicyOutcome;
        typedef Aws::Utils::Outcome<DeletePackageVersionsResult, CodeArtifactError> DeletePackageVersionsOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryResult, CodeArtifactError> DeleteRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryPermissionsPolicyResult, CodeArtifactError> DeleteRepositoryPermissionsPolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainResult, CodeArtifactError> DescribeDomainOutcome;
        typedef Aws::Utils::Outcome<DescribePackageVersionResult, CodeArtifactError> DescribePackageVersionOutcome;
        typedef Aws::Utils::Outcome<DescribeRepositoryResult, CodeArtifactError> DescribeRepositoryOutcome;
        typedef Aws::Utils::Outcome<DisassociateExternalConnectionResult, CodeArtifactError> DisassociateExternalConnectionOutcome;
        typedef Aws::Utils::Outcome<DisposePackageVersionsResult, CodeArtifactError> DisposePackageVersionsOutcome;
        typedef Aws::Utils::Outcome<GetAuthorizationTokenResult, CodeArtifactError> GetAuthorizationTokenOutcome;
        typedef Aws::Utils::Outcome<GetDomainPermissionsPolicyResult, CodeArtifactError> GetDomainPermissionsPolicyOutcome;
        typedef Aws::Utils::Outcome<GetPackageVersionAssetResult, CodeArtifactError> GetPackageVersionAssetOutcome;
        typedef Aws::Utils::Outcome<GetPackageVersionReadmeResult, CodeArtifactError> GetPackageVersionReadmeOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryEndpointResult, CodeArtifactError> GetRepositoryEndpointOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryPermissionsPolicyResult, CodeArtifactError> GetRepositoryPermissionsPolicyOutcome;
        typedef Aws::Utils::Outcome<ListDomainsResult, CodeArtifactError> ListDomainsOutcome;
        typedef Aws::Utils::Outcome<ListPackageVersionAssetsResult, CodeArtifactError> ListPackageVersionAssetsOutcome;
        typedef Aws::Utils::Outcome<ListPackageVersionDependenciesResult, CodeArtifactError> ListPackageVersionDependenciesOutcome;
        typedef Aws::Utils::Outcome<ListPackageVersionsResult, CodeArtifactError> ListPackageVersionsOutcome;
        typedef Aws::Utils::Outcome<ListPackagesResult, CodeArtifactError> ListPackagesOutcome;
        typedef Aws::Utils::Outcome<ListRepositoriesResult, CodeArtifactError> ListRepositoriesOutcome;
        typedef Aws::Utils::Outcome<ListRepositoriesInDomainResult, CodeArtifactError> ListRepositoriesInDomainOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeArtifactError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutDomainPermissionsPolicyResult, CodeArtifactError> PutDomainPermissionsPolicyOutcome;
        typedef Aws::Utils::Outcome<PutRepositoryPermissionsPolicyResult, CodeArtifactError> PutRepositoryPermissionsPolicyOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, CodeArtifactError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, CodeArtifactError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdatePackageVersionsStatusResult, CodeArtifactError> UpdatePackageVersionsStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateRepositoryResult, CodeArtifactError> UpdateRepositoryOutcome;

        typedef std::future<AssociateExternalConnectionOutcome> AssociateExternalConnectionOutcomeCallable;
        typedef std::future<CopyPackageVersionsOutcome> CopyPackageVersionsOutcomeCallable;
        typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
        typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
        typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
        typedef std::future<DeleteDomainPermissionsPolicyOutcome> DeleteDomainPermissionsPolicyOutcomeCallable;
        typedef std::future<DeletePackageVersionsOutcome> DeletePackageVersionsOutcomeCallable;
        typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
        typedef std::future<DeleteRepositoryPermissionsPolicyOutcome> DeleteRepositoryPermissionsPolicyOutcomeCallable;
        typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
        typedef std::future<DescribePackageVersionOutcome> DescribePackageVersionOutcomeCallable;
        typedef std::future<DescribeRepositoryOutcome> DescribeRepositoryOutcomeCallable;
        typedef std::future<DisassociateExternalConnectionOutcome> DisassociateExternalConnectionOutcomeCallable;
        typedef std::future<DisposePackageVersionsOutcome> DisposePackageVersionsOutcomeCallable;
        typedef std::future<GetAuthorizationTokenOutcome> GetAuthorizationTokenOutcomeCallable;
        typedef std::future<GetDomainPermissionsPolicyOutcome> GetDomainPermissionsPolicyOutcomeCallable;
        typedef std::future<GetPackageVersionAssetOutcome> GetPackageVersionAssetOutcomeCallable;
        typedef std::future<GetPackageVersionReadmeOutcome> GetPackageVersionReadmeOutcomeCallable;
        typedef std::future<GetRepositoryEndpointOutcome> GetRepositoryEndpointOutcomeCallable;
        typedef std::future<GetRepositoryPermissionsPolicyOutcome> GetRepositoryPermissionsPolicyOutcomeCallable;
        typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
        typedef std::future<ListPackageVersionAssetsOutcome> ListPackageVersionAssetsOutcomeCallable;
        typedef std::future<ListPackageVersionDependenciesOutcome> ListPackageVersionDependenciesOutcomeCallable;
        typedef std::future<ListPackageVersionsOutcome> ListPackageVersionsOutcomeCallable;
        typedef std::future<ListPackagesOutcome> ListPackagesOutcomeCallable;
        typedef std::future<ListRepositoriesOutcome> ListRepositoriesOutcomeCallable;
        typedef std::future<ListRepositoriesInDomainOutcome> ListRepositoriesInDomainOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutDomainPermissionsPolicyOutcome> PutDomainPermissionsPolicyOutcomeCallable;
        typedef std::future<PutRepositoryPermissionsPolicyOutcome> PutRepositoryPermissionsPolicyOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdatePackageVersionsStatusOutcome> UpdatePackageVersionsStatusOutcomeCallable;
        typedef std::future<UpdateRepositoryOutcome> UpdateRepositoryOutcomeCallable;
} // namespace Model

  class CodeArtifactClient;

    typedef std::function<void(const CodeArtifactClient*, const Model::AssociateExternalConnectionRequest&, const Model::AssociateExternalConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateExternalConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::CopyPackageVersionsRequest&, const Model::CopyPackageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyPackageVersionsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeleteDomainPermissionsPolicyRequest&, const Model::DeleteDomainPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeletePackageVersionsRequest&, const Model::DeletePackageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackageVersionsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeleteRepositoryPermissionsPolicyRequest&, const Model::DeleteRepositoryPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DescribePackageVersionRequest&, const Model::DescribePackageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageVersionResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DescribeRepositoryRequest&, const Model::DescribeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DisassociateExternalConnectionRequest&, const Model::DisassociateExternalConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateExternalConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DisposePackageVersionsRequest&, const Model::DisposePackageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisposePackageVersionsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetAuthorizationTokenRequest&, const Model::GetAuthorizationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizationTokenResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetDomainPermissionsPolicyRequest&, const Model::GetDomainPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetPackageVersionAssetRequest&, Model::GetPackageVersionAssetOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPackageVersionAssetResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetPackageVersionReadmeRequest&, const Model::GetPackageVersionReadmeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPackageVersionReadmeResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetRepositoryEndpointRequest&, const Model::GetRepositoryEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryEndpointResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetRepositoryPermissionsPolicyRequest&, const Model::GetRepositoryPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListPackageVersionAssetsRequest&, const Model::ListPackageVersionAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackageVersionAssetsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListPackageVersionDependenciesRequest&, const Model::ListPackageVersionDependenciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackageVersionDependenciesResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListPackageVersionsRequest&, const Model::ListPackageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackageVersionsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListPackagesRequest&, const Model::ListPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagesResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListRepositoriesRequest&, const Model::ListRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListRepositoriesInDomainRequest&, const Model::ListRepositoriesInDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoriesInDomainResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::PutDomainPermissionsPolicyRequest&, const Model::PutDomainPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDomainPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::PutRepositoryPermissionsPolicyRequest&, const Model::PutRepositoryPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRepositoryPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::UpdatePackageVersionsStatusRequest&, const Model::UpdatePackageVersionsStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePackageVersionsStatusResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::UpdateRepositoryRequest&, const Model::UpdateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryResponseReceivedHandler;

  /**
   * <p> AWS CodeArtifact is a fully managed artifact repository compatible with
   * language-native package managers and build tools such as npm, Apache Maven,
   * NuGet, and pip. You can use CodeArtifact to share packages with development
   * teams and pull packages. Packages can be pulled from both public and
   * CodeArtifact repositories. You can also create an upstream relationship between
   * a CodeArtifact repository and another repository, which effectively merges their
   * contents from the point of view of a package manager client. </p> <p> <b>AWS
   * CodeArtifact Components</b> </p> <p>Use the information in this guide to help
   * you work with the following CodeArtifact components:</p> <ul> <li> <p>
   * <b>Repository</b>: A CodeArtifact repository contains a set of <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/ug/welcome.html#welcome-concepts-package-version">package
   * versions</a>, each of which maps to a set of assets, or files. Repositories are
   * polyglot, so a single repository can contain packages of any supported type.
   * Each repository exposes endpoints for fetching and publishing packages using
   * tools like the <b> <code>npm</code> </b> CLI, the <b> <code>NuGet</code> </b>
   * CLI, the Maven CLI (<b> <code>mvn</code> </b>), and <b> <code>pip</code>
   * </b>.</p> </li> <li> <p> <b>Domain</b>: Repositories are aggregated into a
   * higher-level entity known as a <i>domain</i>. All package assets and metadata
   * are stored in the domain, but are consumed through repositories. A given package
   * asset, such as a Maven JAR file, is stored once per domain, no matter how many
   * repositories it's present in. All of the assets and metadata in a domain are
   * encrypted with the same customer master key (CMK) stored in AWS Key Management
   * Service (AWS KMS).</p> <p>Each repository is a member of a single domain and
   * can't be moved to a different domain.</p> <p>The domain allows organizational
   * policy to be applied across multiple repositories, such as which accounts can
   * access repositories in the domain, and which public repositories can be used as
   * sources of packages.</p> <p>Although an organization can have multiple domains,
   * we recommend a single production domain that contains all published artifacts so
   * that teams can find and share packages across their organization.</p> </li> <li>
   * <p> <b>Package</b>: A <i>package</i> is a bundle of software and the metadata
   * required to resolve dependencies and install the software. CodeArtifact supports
   * <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-npm.html">npm</a>,
   * <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-python.html">PyPI</a>,
   * <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-maven">Maven</a>,
   * and <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-nuget">NuGet</a>
   * package formats.</p> <p>In CodeArtifact, a package consists of:</p> <ul> <li>
   * <p>A <i>name</i> (for example, <code>webpack</code> is the name of a popular npm
   * package)</p> </li> <li> <p>An optional namespace (for example,
   * <code>@types</code> in <code>@types/node</code>)</p> </li> <li> <p>A set of
   * versions (for example, <code>1.0.0</code>, <code>1.0.1</code>,
   * <code>1.0.2</code>, etc.)</p> </li> <li> <p> Package-level metadata (for
   * example, npm tags)</p> </li> </ul> </li> <li> <p> <b>Package version</b>: A
   * version of a package, such as <code>@types/node 12.6.9</code>. The version
   * number format and semantics vary for different package formats. For example, npm
   * package versions must conform to the <a href="https://semver.org/">Semantic
   * Versioning specification</a>. In CodeArtifact, a package version consists of the
   * version identifier, metadata at the package version level, and a set of
   * assets.</p> </li> <li> <p> <b>Upstream repository</b>: One repository is
   * <i>upstream</i> of another when the package versions in it can be accessed from
   * the repository endpoint of the downstream repository, effectively merging the
   * contents of the two repositories from the point of view of a client.
   * CodeArtifact allows creating an upstream relationship between two
   * repositories.</p> </li> <li> <p> <b>Asset</b>: An individual file stored in
   * CodeArtifact associated with a package version, such as an npm <code>.tgz</code>
   * file or Maven POM and JAR files.</p> </li> </ul> <p>CodeArtifact supports these
   * operations:</p> <ul> <li> <p> <code>AssociateExternalConnection</code>: Adds an
   * existing external connection to a repository. </p> </li> <li> <p>
   * <code>CopyPackageVersions</code>: Copies package versions from one repository to
   * another repository in the same domain.</p> </li> <li> <p>
   * <code>CreateDomain</code>: Creates a domain</p> </li> <li> <p>
   * <code>CreateRepository</code>: Creates a CodeArtifact repository in a domain.
   * </p> </li> <li> <p> <code>DeleteDomain</code>: Deletes a domain. You cannot
   * delete a domain that contains repositories. </p> </li> <li> <p>
   * <code>DeleteDomainPermissionsPolicy</code>: Deletes the resource policy that is
   * set on a domain.</p> </li> <li> <p> <code>DeletePackageVersions</code>: Deletes
   * versions of a package. After a package has been deleted, it can be republished,
   * but its assets and metadata cannot be restored because they have been
   * permanently removed from storage.</p> </li> <li> <p>
   * <code>DeleteRepository</code>: Deletes a repository. </p> </li> <li> <p>
   * <code>DeleteRepositoryPermissionsPolicy</code>: Deletes the resource policy that
   * is set on a repository.</p> </li> <li> <p> <code>DescribeDomain</code>: Returns
   * a <code>DomainDescription</code> object that contains information about the
   * requested domain.</p> </li> <li> <p> <code>DescribePackageVersion</code>:
   * Returns a <code> <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
   * </code> object that contains details about a package version. </p> </li> <li>
   * <p> <code>DescribeRepository</code>: Returns a
   * <code>RepositoryDescription</code> object that contains detailed information
   * about the requested repository. </p> </li> <li> <p>
   * <code>DisposePackageVersions</code>: Disposes versions of a package. A package
   * version with the status <code>Disposed</code> cannot be restored because they
   * have been permanently removed from storage.</p> </li> <li> <p>
   * <code>DisassociateExternalConnection</code>: Removes an existing external
   * connection from a repository. </p> </li> <li> <p>
   * <code>GetAuthorizationToken</code>: Generates a temporary authorization token
   * for accessing repositories in the domain. The token expires the authorization
   * period has passed. The default authorization period is 12 hours and can be
   * customized to any length with a maximum of 12 hours.</p> </li> <li> <p>
   * <code>GetDomainPermissionsPolicy</code>: Returns the policy of a resource that
   * is attached to the specified domain. </p> </li> <li> <p>
   * <code>GetPackageVersionAsset</code>: Returns the contents of an asset that is in
   * a package version. </p> </li> <li> <p> <code>GetPackageVersionReadme</code>:
   * Gets the readme file or descriptive text for a package version.</p> </li> <li>
   * <p> <code>GetRepositoryEndpoint</code>: Returns the endpoint of a repository for
   * a specific package format. A repository has one endpoint for each package
   * format: </p> <ul> <li> <p> <code>npm</code> </p> </li> <li> <p>
   * <code>pypi</code> </p> </li> <li> <p> <code>maven</code> </p> </li> <li> <p>
   * <code>nuget</code> </p> </li> </ul> </li> <li> <p>
   * <code>GetRepositoryPermissionsPolicy</code>: Returns the resource policy that is
   * set on a repository. </p> </li> <li> <p> <code>ListDomains</code>: Returns a
   * list of <code>DomainSummary</code> objects. Each returned
   * <code>DomainSummary</code> object contains information about a domain.</p> </li>
   * <li> <p> <code>ListPackages</code>: Lists the packages in a repository.</p>
   * </li> <li> <p> <code>ListPackageVersionAssets</code>: Lists the assets for a
   * given package version.</p> </li> <li> <p>
   * <code>ListPackageVersionDependencies</code>: Returns a list of the direct
   * dependencies for a package version. </p> </li> <li> <p>
   * <code>ListPackageVersions</code>: Returns a list of package versions for a
   * specified package in a repository.</p> </li> <li> <p>
   * <code>ListRepositories</code>: Returns a list of repositories owned by the AWS
   * account that called this method.</p> </li> <li> <p>
   * <code>ListRepositoriesInDomain</code>: Returns a list of the repositories in a
   * domain.</p> </li> <li> <p> <code>ListTagsForResource</code>: Returns a list of
   * the tags associated with a resource.</p> </li> <li> <p>
   * <code>PutDomainPermissionsPolicy</code>: Attaches a resource policy to a
   * domain.</p> </li> <li> <p> <code>PutRepositoryPermissionsPolicy</code>: Sets the
   * resource policy on a repository that specifies permissions to access it. </p>
   * </li> <li> <p> <code>TagResource</code>: Adds or updates tags for a
   * resource.</p> </li> <li> <p> <code>UntagResource</code>: Removes a tag from a
   * resource. </p> </li> <li> <p> <code>UpdatePackageVersionsStatus</code>: Updates
   * the status of one or more versions of a package.</p> </li> <li> <p>
   * <code>UpdateRepository</code>: Updates the properties of a repository.</p> </li>
   * </ul>
   */
  class AWS_CODEARTIFACT_API CodeArtifactClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeArtifactClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeArtifactClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeArtifactClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeArtifactClient();


        /**
         * <p>Adds an existing external connection to a repository. One external connection
         * is allowed per repository.</p>  <p>A repository can have one or more
         * upstream repositories, or an external connection.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/AssociateExternalConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateExternalConnectionOutcome AssociateExternalConnection(const Model::AssociateExternalConnectionRequest& request) const;

        /**
         * <p>Adds an existing external connection to a repository. One external connection
         * is allowed per repository.</p>  <p>A repository can have one or more
         * upstream repositories, or an external connection.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/AssociateExternalConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateExternalConnectionOutcomeCallable AssociateExternalConnectionCallable(const Model::AssociateExternalConnectionRequest& request) const;

        /**
         * <p>Adds an existing external connection to a repository. One external connection
         * is allowed per repository.</p>  <p>A repository can have one or more
         * upstream repositories, or an external connection.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/AssociateExternalConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateExternalConnectionAsync(const Model::AssociateExternalConnectionRequest& request, const AssociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Copies package versions from one repository to another repository in the
         * same domain. </p>  <p> You must specify <code>versions</code> or
         * <code>versionRevisions</code>. You cannot specify both. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CopyPackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyPackageVersionsOutcome CopyPackageVersions(const Model::CopyPackageVersionsRequest& request) const;

        /**
         * <p> Copies package versions from one repository to another repository in the
         * same domain. </p>  <p> You must specify <code>versions</code> or
         * <code>versionRevisions</code>. You cannot specify both. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CopyPackageVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyPackageVersionsOutcomeCallable CopyPackageVersionsCallable(const Model::CopyPackageVersionsRequest& request) const;

        /**
         * <p> Copies package versions from one repository to another repository in the
         * same domain. </p>  <p> You must specify <code>versions</code> or
         * <code>versionRevisions</code>. You cannot specify both. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CopyPackageVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyPackageVersionsAsync(const Model::CopyPackageVersionsRequest& request, const CopyPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a domain. CodeArtifact <i>domains</i> make it easier to manage
         * multiple repositories across an organization. You can use a domain to apply
         * permissions across many repositories owned by different AWS accounts. An asset
         * is stored only once in a domain, even if it's in multiple repositories. </p>
         * <p>Although you can have multiple domains, we recommend a single production
         * domain that contains all published artifacts so that your development teams can
         * find and share packages. You can use a second pre-production domain to test
         * changes to the production domain configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * <p> Creates a domain. CodeArtifact <i>domains</i> make it easier to manage
         * multiple repositories across an organization. You can use a domain to apply
         * permissions across many repositories owned by different AWS accounts. An asset
         * is stored only once in a domain, even if it's in multiple repositories. </p>
         * <p>Although you can have multiple domains, we recommend a single production
         * domain that contains all published artifacts so that your development teams can
         * find and share packages. You can use a second pre-production domain to test
         * changes to the production domain configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * <p> Creates a domain. CodeArtifact <i>domains</i> make it easier to manage
         * multiple repositories across an organization. You can use a domain to apply
         * permissions across many repositories owned by different AWS accounts. An asset
         * is stored only once in a domain, even if it's in multiple repositories. </p>
         * <p>Although you can have multiple domains, we recommend a single production
         * domain that contains all published artifacts so that your development teams can
         * find and share packages. You can use a second pre-production domain to test
         * changes to the production domain configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p> Creates a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p> Creates a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a domain. You cannot delete a domain that contains repositories. If
         * you want to delete a domain with repositories, first delete its repositories.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * <p> Deletes a domain. You cannot delete a domain that contains repositories. If
         * you want to delete a domain with repositories, first delete its repositories.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * <p> Deletes a domain. You cannot delete a domain that contains repositories. If
         * you want to delete a domain with repositories, first delete its repositories.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the resource policy set on a domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainPermissionsPolicyOutcome DeleteDomainPermissionsPolicy(const Model::DeleteDomainPermissionsPolicyRequest& request) const;

        /**
         * <p> Deletes the resource policy set on a domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainPermissionsPolicyOutcomeCallable DeleteDomainPermissionsPolicyCallable(const Model::DeleteDomainPermissionsPolicyRequest& request) const;

        /**
         * <p> Deletes the resource policy set on a domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainPermissionsPolicyAsync(const Model::DeleteDomainPermissionsPolicyRequest& request, const DeleteDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes one or more versions of a package. A deleted package version cannot
         * be restored in your repository. If you want to remove a package version from
         * your repository and be able to restore it later, set its status to
         * <code>Archived</code>. Archived packages cannot be downloaded from a repository
         * and don't show up with list package APIs (for example, <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListackageVersions</a>
         * </code>), but you can restore them using <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_UpdatePackageVersionsStatus.html">UpdatePackageVersionsStatus</a>
         * </code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeletePackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageVersionsOutcome DeletePackageVersions(const Model::DeletePackageVersionsRequest& request) const;

        /**
         * <p> Deletes one or more versions of a package. A deleted package version cannot
         * be restored in your repository. If you want to remove a package version from
         * your repository and be able to restore it later, set its status to
         * <code>Archived</code>. Archived packages cannot be downloaded from a repository
         * and don't show up with list package APIs (for example, <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListackageVersions</a>
         * </code>), but you can restore them using <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_UpdatePackageVersionsStatus.html">UpdatePackageVersionsStatus</a>
         * </code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeletePackageVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackageVersionsOutcomeCallable DeletePackageVersionsCallable(const Model::DeletePackageVersionsRequest& request) const;

        /**
         * <p> Deletes one or more versions of a package. A deleted package version cannot
         * be restored in your repository. If you want to remove a package version from
         * your repository and be able to restore it later, set its status to
         * <code>Archived</code>. Archived packages cannot be downloaded from a repository
         * and don't show up with list package APIs (for example, <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListackageVersions</a>
         * </code>), but you can restore them using <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_UpdatePackageVersionsStatus.html">UpdatePackageVersionsStatus</a>
         * </code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeletePackageVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePackageVersionsAsync(const Model::DeletePackageVersionsRequest& request, const DeletePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p> Deletes a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p> Deletes a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the resource policy that is set on a repository. After a resource
         * policy is deleted, the permissions allowed and denied by the deleted policy are
         * removed. The effect of deleting a resource policy might not be immediate. </p>
         *  <p> Use <code>DeleteRepositoryPermissionsPolicy</code> with caution.
         * After a policy is deleted, AWS users, roles, and accounts lose permissions to
         * perform the repository actions granted by the deleted policy. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryPermissionsPolicyOutcome DeleteRepositoryPermissionsPolicy(const Model::DeleteRepositoryPermissionsPolicyRequest& request) const;

        /**
         * <p> Deletes the resource policy that is set on a repository. After a resource
         * policy is deleted, the permissions allowed and denied by the deleted policy are
         * removed. The effect of deleting a resource policy might not be immediate. </p>
         *  <p> Use <code>DeleteRepositoryPermissionsPolicy</code> with caution.
         * After a policy is deleted, AWS users, roles, and accounts lose permissions to
         * perform the repository actions granted by the deleted policy. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryPermissionsPolicyOutcomeCallable DeleteRepositoryPermissionsPolicyCallable(const Model::DeleteRepositoryPermissionsPolicyRequest& request) const;

        /**
         * <p> Deletes the resource policy that is set on a repository. After a resource
         * policy is deleted, the permissions allowed and denied by the deleted policy are
         * removed. The effect of deleting a resource policy might not be immediate. </p>
         *  <p> Use <code>DeleteRepositoryPermissionsPolicy</code> with caution.
         * After a policy is deleted, AWS users, roles, and accounts lose permissions to
         * perform the repository actions granted by the deleted policy. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryPermissionsPolicyAsync(const Model::DeleteRepositoryPermissionsPolicyRequest& request, const DeleteRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainDescription.html">
         * <code>DomainDescription</code> </a> object that contains information about the
         * requested domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainDescription.html">
         * <code>DomainDescription</code> </a> object that contains information about the
         * requested domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribeDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainDescription.html">
         * <code>DomainDescription</code> </a> object that contains information about the
         * requested domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribeDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">
         * <code>PackageVersionDescription</code> </a> object that contains information
         * about the requested package version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribePackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageVersionOutcome DescribePackageVersion(const Model::DescribePackageVersionRequest& request) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">
         * <code>PackageVersionDescription</code> </a> object that contains information
         * about the requested package version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribePackageVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackageVersionOutcomeCallable DescribePackageVersionCallable(const Model::DescribePackageVersionRequest& request) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">
         * <code>PackageVersionDescription</code> </a> object that contains information
         * about the requested package version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribePackageVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePackageVersionAsync(const Model::DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a <code>RepositoryDescription</code> object that contains detailed
         * information about the requested repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoryOutcome DescribeRepository(const Model::DescribeRepositoryRequest& request) const;

        /**
         * <p> Returns a <code>RepositoryDescription</code> object that contains detailed
         * information about the requested repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribeRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRepositoryOutcomeCallable DescribeRepositoryCallable(const Model::DescribeRepositoryRequest& request) const;

        /**
         * <p> Returns a <code>RepositoryDescription</code> object that contains detailed
         * information about the requested repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribeRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRepositoryAsync(const Model::DescribeRepositoryRequest& request, const DescribeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes an existing external connection from a repository. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DisassociateExternalConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateExternalConnectionOutcome DisassociateExternalConnection(const Model::DisassociateExternalConnectionRequest& request) const;

        /**
         * <p> Removes an existing external connection from a repository. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DisassociateExternalConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateExternalConnectionOutcomeCallable DisassociateExternalConnectionCallable(const Model::DisassociateExternalConnectionRequest& request) const;

        /**
         * <p> Removes an existing external connection from a repository. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DisassociateExternalConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateExternalConnectionAsync(const Model::DisassociateExternalConnectionRequest& request, const DisassociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the assets in package versions and sets the package versions' status
         * to <code>Disposed</code>. A disposed package version cannot be restored in your
         * repository because its assets are deleted. </p> <p> To view all disposed package
         * versions in a repository, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">
         * <code>ListPackageVersions</code> </a> and set the <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html#API_ListPackageVersions_RequestSyntax">
         * <code>status</code> </a> parameter to <code>Disposed</code>. </p> <p> To view
         * information about a disposed package version, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DescribePackageVersion.html">
         * <code>DescribePackageVersion</code> </a>.. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DisposePackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DisposePackageVersionsOutcome DisposePackageVersions(const Model::DisposePackageVersionsRequest& request) const;

        /**
         * <p> Deletes the assets in package versions and sets the package versions' status
         * to <code>Disposed</code>. A disposed package version cannot be restored in your
         * repository because its assets are deleted. </p> <p> To view all disposed package
         * versions in a repository, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">
         * <code>ListPackageVersions</code> </a> and set the <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html#API_ListPackageVersions_RequestSyntax">
         * <code>status</code> </a> parameter to <code>Disposed</code>. </p> <p> To view
         * information about a disposed package version, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DescribePackageVersion.html">
         * <code>DescribePackageVersion</code> </a>.. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DisposePackageVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisposePackageVersionsOutcomeCallable DisposePackageVersionsCallable(const Model::DisposePackageVersionsRequest& request) const;

        /**
         * <p> Deletes the assets in package versions and sets the package versions' status
         * to <code>Disposed</code>. A disposed package version cannot be restored in your
         * repository because its assets are deleted. </p> <p> To view all disposed package
         * versions in a repository, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">
         * <code>ListPackageVersions</code> </a> and set the <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html#API_ListPackageVersions_RequestSyntax">
         * <code>status</code> </a> parameter to <code>Disposed</code>. </p> <p> To view
         * information about a disposed package version, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DescribePackageVersion.html">
         * <code>DescribePackageVersion</code> </a>.. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DisposePackageVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisposePackageVersionsAsync(const Model::DisposePackageVersionsRequest& request, const DisposePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Generates a temporary authorization token for accessing repositories in the
         * domain. This API requires the <code>codeartifact:GetAuthorizationToken</code>
         * and <code>sts:GetServiceBearerToken</code> permissions. For more information
         * about authorization tokens, see <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/ug/tokens-authentication.html">AWS
         * CodeArtifact authentication and tokens</a>. </p>  <p>CodeArtifact
         * authorization tokens are valid for a period of 12 hours when created with the
         * <code>login</code> command. You can call <code>login</code> periodically to
         * refresh the token. When you create an authorization token with the
         * <code>GetAuthorizationToken</code> API, you can set a custom authorization
         * period, up to a maximum of 12 hours, with the <code>durationSeconds</code>
         * parameter.</p> <p>The authorization period begins after <code>login</code> or
         * <code>GetAuthorizationToken</code> is called. If <code>login</code> or
         * <code>GetAuthorizationToken</code> is called while assuming a role, the token
         * lifetime is independent of the maximum session duration of the role. For
         * example, if you call <code>sts assume-role</code> and specify a session duration
         * of 15 minutes, then generate a CodeArtifact authorization token, the token will
         * be valid for the full authorization period even though this is longer than the
         * 15-minute session duration.</p> <p>See <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using
         * IAM Roles</a> for more information on controlling session duration. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetAuthorizationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizationTokenOutcome GetAuthorizationToken(const Model::GetAuthorizationTokenRequest& request) const;

        /**
         * <p> Generates a temporary authorization token for accessing repositories in the
         * domain. This API requires the <code>codeartifact:GetAuthorizationToken</code>
         * and <code>sts:GetServiceBearerToken</code> permissions. For more information
         * about authorization tokens, see <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/ug/tokens-authentication.html">AWS
         * CodeArtifact authentication and tokens</a>. </p>  <p>CodeArtifact
         * authorization tokens are valid for a period of 12 hours when created with the
         * <code>login</code> command. You can call <code>login</code> periodically to
         * refresh the token. When you create an authorization token with the
         * <code>GetAuthorizationToken</code> API, you can set a custom authorization
         * period, up to a maximum of 12 hours, with the <code>durationSeconds</code>
         * parameter.</p> <p>The authorization period begins after <code>login</code> or
         * <code>GetAuthorizationToken</code> is called. If <code>login</code> or
         * <code>GetAuthorizationToken</code> is called while assuming a role, the token
         * lifetime is independent of the maximum session duration of the role. For
         * example, if you call <code>sts assume-role</code> and specify a session duration
         * of 15 minutes, then generate a CodeArtifact authorization token, the token will
         * be valid for the full authorization period even though this is longer than the
         * 15-minute session duration.</p> <p>See <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using
         * IAM Roles</a> for more information on controlling session duration. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetAuthorizationToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizationTokenOutcomeCallable GetAuthorizationTokenCallable(const Model::GetAuthorizationTokenRequest& request) const;

        /**
         * <p> Generates a temporary authorization token for accessing repositories in the
         * domain. This API requires the <code>codeartifact:GetAuthorizationToken</code>
         * and <code>sts:GetServiceBearerToken</code> permissions. For more information
         * about authorization tokens, see <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/ug/tokens-authentication.html">AWS
         * CodeArtifact authentication and tokens</a>. </p>  <p>CodeArtifact
         * authorization tokens are valid for a period of 12 hours when created with the
         * <code>login</code> command. You can call <code>login</code> periodically to
         * refresh the token. When you create an authorization token with the
         * <code>GetAuthorizationToken</code> API, you can set a custom authorization
         * period, up to a maximum of 12 hours, with the <code>durationSeconds</code>
         * parameter.</p> <p>The authorization period begins after <code>login</code> or
         * <code>GetAuthorizationToken</code> is called. If <code>login</code> or
         * <code>GetAuthorizationToken</code> is called while assuming a role, the token
         * lifetime is independent of the maximum session duration of the role. For
         * example, if you call <code>sts assume-role</code> and specify a session duration
         * of 15 minutes, then generate a CodeArtifact authorization token, the token will
         * be valid for the full authorization period even though this is longer than the
         * 15-minute session duration.</p> <p>See <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using
         * IAM Roles</a> for more information on controlling session duration. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetAuthorizationToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizationTokenAsync(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the resource policy attached to the specified domain. </p> 
         * <p> The policy is a resource-based policy, not an identity-based policy. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
         * policies and resource-based policies </a> in the <i>AWS Identity and Access
         * Management User Guide</i>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainPermissionsPolicyOutcome GetDomainPermissionsPolicy(const Model::GetDomainPermissionsPolicyRequest& request) const;

        /**
         * <p> Returns the resource policy attached to the specified domain. </p> 
         * <p> The policy is a resource-based policy, not an identity-based policy. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
         * policies and resource-based policies </a> in the <i>AWS Identity and Access
         * Management User Guide</i>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainPermissionsPolicyOutcomeCallable GetDomainPermissionsPolicyCallable(const Model::GetDomainPermissionsPolicyRequest& request) const;

        /**
         * <p> Returns the resource policy attached to the specified domain. </p> 
         * <p> The policy is a resource-based policy, not an identity-based policy. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
         * policies and resource-based policies </a> in the <i>AWS Identity and Access
         * Management User Guide</i>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainPermissionsPolicyAsync(const Model::GetDomainPermissionsPolicyRequest& request, const GetDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an asset (or file) that is in a package. For example, for a Maven
         * package version, use <code>GetPackageVersionAsset</code> to download a
         * <code>JAR</code> file, a <code>POM</code> file, or any other assets in the
         * package version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetPackageVersionAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPackageVersionAssetOutcome GetPackageVersionAsset(const Model::GetPackageVersionAssetRequest& request) const;

        /**
         * <p> Returns an asset (or file) that is in a package. For example, for a Maven
         * package version, use <code>GetPackageVersionAsset</code> to download a
         * <code>JAR</code> file, a <code>POM</code> file, or any other assets in the
         * package version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetPackageVersionAsset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPackageVersionAssetOutcomeCallable GetPackageVersionAssetCallable(const Model::GetPackageVersionAssetRequest& request) const;

        /**
         * <p> Returns an asset (or file) that is in a package. For example, for a Maven
         * package version, use <code>GetPackageVersionAsset</code> to download a
         * <code>JAR</code> file, a <code>POM</code> file, or any other assets in the
         * package version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetPackageVersionAsset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPackageVersionAssetAsync(const Model::GetPackageVersionAssetRequest& request, const GetPackageVersionAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets the readme file or descriptive text for a package version. For packages
         * that do not contain a readme file, CodeArtifact extracts a description from a
         * metadata file. For example, from the <code>&lt;description&gt;</code> element in
         * the <code>pom.xml</code> file of a Maven package. </p> <p> The returned text
         * might contain formatting. For example, it might contain formatting for Markdown
         * or reStructuredText. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetPackageVersionReadme">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPackageVersionReadmeOutcome GetPackageVersionReadme(const Model::GetPackageVersionReadmeRequest& request) const;

        /**
         * <p> Gets the readme file or descriptive text for a package version. For packages
         * that do not contain a readme file, CodeArtifact extracts a description from a
         * metadata file. For example, from the <code>&lt;description&gt;</code> element in
         * the <code>pom.xml</code> file of a Maven package. </p> <p> The returned text
         * might contain formatting. For example, it might contain formatting for Markdown
         * or reStructuredText. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetPackageVersionReadme">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPackageVersionReadmeOutcomeCallable GetPackageVersionReadmeCallable(const Model::GetPackageVersionReadmeRequest& request) const;

        /**
         * <p> Gets the readme file or descriptive text for a package version. For packages
         * that do not contain a readme file, CodeArtifact extracts a description from a
         * metadata file. For example, from the <code>&lt;description&gt;</code> element in
         * the <code>pom.xml</code> file of a Maven package. </p> <p> The returned text
         * might contain formatting. For example, it might contain formatting for Markdown
         * or reStructuredText. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetPackageVersionReadme">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPackageVersionReadmeAsync(const Model::GetPackageVersionReadmeRequest& request, const GetPackageVersionReadmeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the endpoint of a repository for a specific package format. A
         * repository has one endpoint for each package format: </p> <ul> <li> <p>
         * <code>npm</code> </p> </li> <li> <p> <code>pypi</code> </p> </li> <li> <p>
         * <code>maven</code> </p> </li> <li> <p> <code>nuget</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetRepositoryEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryEndpointOutcome GetRepositoryEndpoint(const Model::GetRepositoryEndpointRequest& request) const;

        /**
         * <p> Returns the endpoint of a repository for a specific package format. A
         * repository has one endpoint for each package format: </p> <ul> <li> <p>
         * <code>npm</code> </p> </li> <li> <p> <code>pypi</code> </p> </li> <li> <p>
         * <code>maven</code> </p> </li> <li> <p> <code>nuget</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetRepositoryEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryEndpointOutcomeCallable GetRepositoryEndpointCallable(const Model::GetRepositoryEndpointRequest& request) const;

        /**
         * <p> Returns the endpoint of a repository for a specific package format. A
         * repository has one endpoint for each package format: </p> <ul> <li> <p>
         * <code>npm</code> </p> </li> <li> <p> <code>pypi</code> </p> </li> <li> <p>
         * <code>maven</code> </p> </li> <li> <p> <code>nuget</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetRepositoryEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryEndpointAsync(const Model::GetRepositoryEndpointRequest& request, const GetRepositoryEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the resource policy that is set on a repository. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryPermissionsPolicyOutcome GetRepositoryPermissionsPolicy(const Model::GetRepositoryPermissionsPolicyRequest& request) const;

        /**
         * <p> Returns the resource policy that is set on a repository. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryPermissionsPolicyOutcomeCallable GetRepositoryPermissionsPolicyCallable(const Model::GetRepositoryPermissionsPolicyRequest& request) const;

        /**
         * <p> Returns the resource policy that is set on a repository. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryPermissionsPolicyAsync(const Model::GetRepositoryPermissionsPolicyRequest& request, const GetRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">DomainSummary</a>
         * </code> objects for all domains owned by the AWS account that makes this call.
         * Each returned <code>DomainSummary</code> object contains information about a
         * domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * <p> Returns a list of <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">DomainSummary</a>
         * </code> objects for all domains owned by the AWS account that makes this call.
         * Each returned <code>DomainSummary</code> object contains information about a
         * domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * <p> Returns a list of <code> <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">DomainSummary</a>
         * </code> objects for all domains owned by the AWS account that makes this call.
         * Each returned <code>DomainSummary</code> object contains information about a
         * domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">
         * <code>AssetSummary</code> </a> objects for assets in a package version.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersionAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageVersionAssetsOutcome ListPackageVersionAssets(const Model::ListPackageVersionAssetsRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">
         * <code>AssetSummary</code> </a> objects for assets in a package version.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersionAssets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackageVersionAssetsOutcomeCallable ListPackageVersionAssetsCallable(const Model::ListPackageVersionAssetsRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">
         * <code>AssetSummary</code> </a> objects for assets in a package version.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersionAssets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackageVersionAssetsAsync(const Model::ListPackageVersionAssetsRequest& request, const ListPackageVersionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the direct dependencies for a package version. The dependencies are
         * returned as <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDependency.html">
         * <code>PackageDependency</code> </a> objects. CodeArtifact extracts the
         * dependencies for a package version from the metadata file for the package format
         * (for example, the <code>package.json</code> file for npm packages and the
         * <code>pom.xml</code> file for Maven). Any package version dependencies that are
         * not listed in the configuration file are not returned. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersionDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageVersionDependenciesOutcome ListPackageVersionDependencies(const Model::ListPackageVersionDependenciesRequest& request) const;

        /**
         * <p> Returns the direct dependencies for a package version. The dependencies are
         * returned as <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDependency.html">
         * <code>PackageDependency</code> </a> objects. CodeArtifact extracts the
         * dependencies for a package version from the metadata file for the package format
         * (for example, the <code>package.json</code> file for npm packages and the
         * <code>pom.xml</code> file for Maven). Any package version dependencies that are
         * not listed in the configuration file are not returned. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersionDependencies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackageVersionDependenciesOutcomeCallable ListPackageVersionDependenciesCallable(const Model::ListPackageVersionDependenciesRequest& request) const;

        /**
         * <p> Returns the direct dependencies for a package version. The dependencies are
         * returned as <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDependency.html">
         * <code>PackageDependency</code> </a> objects. CodeArtifact extracts the
         * dependencies for a package version from the metadata file for the package format
         * (for example, the <code>package.json</code> file for npm packages and the
         * <code>pom.xml</code> file for Maven). Any package version dependencies that are
         * not listed in the configuration file are not returned. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersionDependencies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackageVersionDependenciesAsync(const Model::ListPackageVersionDependenciesRequest& request, const ListPackageVersionDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">
         * <code>PackageVersionSummary</code> </a> objects for package versions in a
         * repository that match the request parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageVersionsOutcome ListPackageVersions(const Model::ListPackageVersionsRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">
         * <code>PackageVersionSummary</code> </a> objects for package versions in a
         * repository that match the request parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackageVersionsOutcomeCallable ListPackageVersionsCallable(const Model::ListPackageVersionsRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">
         * <code>PackageVersionSummary</code> </a> objects for package versions in a
         * repository that match the request parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackageVersionsAsync(const Model::ListPackageVersionsRequest& request, const ListPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">
         * <code>PackageSummary</code> </a> objects for packages in a repository that match
         * the request parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesOutcome ListPackages(const Model::ListPackagesRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">
         * <code>PackageSummary</code> </a> objects for packages in a repository that match
         * the request parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagesOutcomeCallable ListPackagesCallable(const Model::ListPackagesRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">
         * <code>PackageSummary</code> </a> objects for packages in a repository that match
         * the request parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackagesAsync(const Model::ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">
         * <code>RepositorySummary</code> </a> objects. Each <code>RepositorySummary</code>
         * contains information about a repository in the specified AWS account and that
         * matches the input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesOutcome ListRepositories(const Model::ListRepositoriesRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">
         * <code>RepositorySummary</code> </a> objects. Each <code>RepositorySummary</code>
         * contains information about a repository in the specified AWS account and that
         * matches the input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoriesOutcomeCallable ListRepositoriesCallable(const Model::ListRepositoriesRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">
         * <code>RepositorySummary</code> </a> objects. Each <code>RepositorySummary</code>
         * contains information about a repository in the specified AWS account and that
         * matches the input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoriesAsync(const Model::ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">
         * <code>RepositorySummary</code> </a> objects. Each <code>RepositorySummary</code>
         * contains information about a repository in the specified domain and that matches
         * the input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListRepositoriesInDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesInDomainOutcome ListRepositoriesInDomain(const Model::ListRepositoriesInDomainRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">
         * <code>RepositorySummary</code> </a> objects. Each <code>RepositorySummary</code>
         * contains information about a repository in the specified domain and that matches
         * the input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListRepositoriesInDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoriesInDomainOutcomeCallable ListRepositoriesInDomainCallable(const Model::ListRepositoriesInDomainRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">
         * <code>RepositorySummary</code> </a> objects. Each <code>RepositorySummary</code>
         * contains information about a repository in the specified domain and that matches
         * the input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListRepositoriesInDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoriesInDomainAsync(const Model::ListRepositoriesInDomainRequest& request, const ListRepositoriesInDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about AWS tags for a specified Amazon Resource Name (ARN) in
         * AWS CodeArtifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets information about AWS tags for a specified Amazon Resource Name (ARN) in
         * AWS CodeArtifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets information about AWS tags for a specified Amazon Resource Name (ARN) in
         * AWS CodeArtifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Sets a resource policy on a domain that specifies permissions to access it.
         * </p> <p> When you call <code>PutDomainPermissionsPolicy</code>, the resource
         * policy on the domain is ignored when evaluting permissions. This ensures that
         * the owner of a domain cannot lock themselves out of the domain, which would
         * prevent them from being able to update the resource policy. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PutDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDomainPermissionsPolicyOutcome PutDomainPermissionsPolicy(const Model::PutDomainPermissionsPolicyRequest& request) const;

        /**
         * <p> Sets a resource policy on a domain that specifies permissions to access it.
         * </p> <p> When you call <code>PutDomainPermissionsPolicy</code>, the resource
         * policy on the domain is ignored when evaluting permissions. This ensures that
         * the owner of a domain cannot lock themselves out of the domain, which would
         * prevent them from being able to update the resource policy. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PutDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDomainPermissionsPolicyOutcomeCallable PutDomainPermissionsPolicyCallable(const Model::PutDomainPermissionsPolicyRequest& request) const;

        /**
         * <p> Sets a resource policy on a domain that specifies permissions to access it.
         * </p> <p> When you call <code>PutDomainPermissionsPolicy</code>, the resource
         * policy on the domain is ignored when evaluting permissions. This ensures that
         * the owner of a domain cannot lock themselves out of the domain, which would
         * prevent them from being able to update the resource policy. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PutDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDomainPermissionsPolicyAsync(const Model::PutDomainPermissionsPolicyRequest& request, const PutDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Sets the resource policy on a repository that specifies permissions to
         * access it. </p> <p> When you call <code>PutRepositoryPermissionsPolicy</code>,
         * the resource policy on the repository is ignored when evaluting permissions.
         * This ensures that the owner of a repository cannot lock themselves out of the
         * repository, which would prevent them from being able to update the resource
         * policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PutRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRepositoryPermissionsPolicyOutcome PutRepositoryPermissionsPolicy(const Model::PutRepositoryPermissionsPolicyRequest& request) const;

        /**
         * <p> Sets the resource policy on a repository that specifies permissions to
         * access it. </p> <p> When you call <code>PutRepositoryPermissionsPolicy</code>,
         * the resource policy on the repository is ignored when evaluting permissions.
         * This ensures that the owner of a repository cannot lock themselves out of the
         * repository, which would prevent them from being able to update the resource
         * policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PutRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRepositoryPermissionsPolicyOutcomeCallable PutRepositoryPermissionsPolicyCallable(const Model::PutRepositoryPermissionsPolicyRequest& request) const;

        /**
         * <p> Sets the resource policy on a repository that specifies permissions to
         * access it. </p> <p> When you call <code>PutRepositoryPermissionsPolicy</code>,
         * the resource policy on the repository is ignored when evaluting permissions.
         * This ensures that the owner of a repository cannot lock themselves out of the
         * repository, which would prevent them from being able to update the resource
         * policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PutRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRepositoryPermissionsPolicyAsync(const Model::PutRepositoryPermissionsPolicyRequest& request, const PutRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates tags for a resource in AWS CodeArtifact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates tags for a resource in AWS CodeArtifact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates tags for a resource in AWS CodeArtifact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource in AWS CodeArtifact.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a resource in AWS CodeArtifact.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a resource in AWS CodeArtifact.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the status of one or more versions of a package. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdatePackageVersionsStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageVersionsStatusOutcome UpdatePackageVersionsStatus(const Model::UpdatePackageVersionsStatusRequest& request) const;

        /**
         * <p> Updates the status of one or more versions of a package. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdatePackageVersionsStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePackageVersionsStatusOutcomeCallable UpdatePackageVersionsStatusCallable(const Model::UpdatePackageVersionsStatusRequest& request) const;

        /**
         * <p> Updates the status of one or more versions of a package. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdatePackageVersionsStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePackageVersionsStatusAsync(const Model::UpdatePackageVersionsStatusRequest& request, const UpdatePackageVersionsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Update the properties of a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryOutcome UpdateRepository(const Model::UpdateRepositoryRequest& request) const;

        /**
         * <p> Update the properties of a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRepositoryOutcomeCallable UpdateRepositoryCallable(const Model::UpdateRepositoryRequest& request) const;

        /**
         * <p> Update the properties of a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRepositoryAsync(const Model::UpdateRepositoryRequest& request, const UpdateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateExternalConnectionAsyncHelper(const Model::AssociateExternalConnectionRequest& request, const AssociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyPackageVersionsAsyncHelper(const Model::CopyPackageVersionsRequest& request, const CopyPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainAsyncHelper(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRepositoryAsyncHelper(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainAsyncHelper(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainPermissionsPolicyAsyncHelper(const Model::DeleteDomainPermissionsPolicyRequest& request, const DeleteDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePackageVersionsAsyncHelper(const Model::DeletePackageVersionsRequest& request, const DeletePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryAsyncHelper(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryPermissionsPolicyAsyncHelper(const Model::DeleteRepositoryPermissionsPolicyRequest& request, const DeleteRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainAsyncHelper(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePackageVersionAsyncHelper(const Model::DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRepositoryAsyncHelper(const Model::DescribeRepositoryRequest& request, const DescribeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateExternalConnectionAsyncHelper(const Model::DisassociateExternalConnectionRequest& request, const DisassociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisposePackageVersionsAsyncHelper(const Model::DisposePackageVersionsRequest& request, const DisposePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAuthorizationTokenAsyncHelper(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainPermissionsPolicyAsyncHelper(const Model::GetDomainPermissionsPolicyRequest& request, const GetDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPackageVersionAssetAsyncHelper(const Model::GetPackageVersionAssetRequest& request, const GetPackageVersionAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPackageVersionReadmeAsyncHelper(const Model::GetPackageVersionReadmeRequest& request, const GetPackageVersionReadmeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryEndpointAsyncHelper(const Model::GetRepositoryEndpointRequest& request, const GetRepositoryEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryPermissionsPolicyAsyncHelper(const Model::GetRepositoryPermissionsPolicyRequest& request, const GetRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainsAsyncHelper(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPackageVersionAssetsAsyncHelper(const Model::ListPackageVersionAssetsRequest& request, const ListPackageVersionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPackageVersionDependenciesAsyncHelper(const Model::ListPackageVersionDependenciesRequest& request, const ListPackageVersionDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPackageVersionsAsyncHelper(const Model::ListPackageVersionsRequest& request, const ListPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPackagesAsyncHelper(const Model::ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRepositoriesAsyncHelper(const Model::ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRepositoriesInDomainAsyncHelper(const Model::ListRepositoriesInDomainRequest& request, const ListRepositoriesInDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDomainPermissionsPolicyAsyncHelper(const Model::PutDomainPermissionsPolicyRequest& request, const PutDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRepositoryPermissionsPolicyAsyncHelper(const Model::PutRepositoryPermissionsPolicyRequest& request, const PutRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePackageVersionsStatusAsyncHelper(const Model::UpdatePackageVersionsStatusRequest& request, const UpdatePackageVersionsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRepositoryAsyncHelper(const Model::UpdateRepositoryRequest& request, const UpdateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeArtifact
} // namespace Aws
