/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeartifact/CodeArtifactServiceClientModel.h>

namespace Aws
{
namespace CodeArtifact
{
  /**
   * <p> CodeArtifact is a fully managed artifact repository compatible with
   * language-native package managers and build tools such as npm, Apache Maven, pip,
   * and dotnet. You can use CodeArtifact to share packages with development teams
   * and pull packages. Packages can be pulled from both public and CodeArtifact
   * repositories. You can also create an upstream relationship between a
   * CodeArtifact repository and another repository, which effectively merges their
   * contents from the point of view of a package manager client. </p> <p>
   * <b>CodeArtifact Components</b> </p> <p>Use the information in this guide to help
   * you work with the following CodeArtifact components:</p> <ul> <li> <p>
   * <b>Repository</b>: A CodeArtifact repository contains a set of <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/ug/welcome.html#welcome-concepts-package-version">package
   * versions</a>, each of which maps to a set of assets, or files. Repositories are
   * polyglot, so a single repository can contain packages of any supported type.
   * Each repository exposes endpoints for fetching and publishing packages using
   * tools like the <b> <code>npm</code> </b> CLI, the Maven CLI (<b>
   * <code>mvn</code> </b>), Python CLIs (<b> <code>pip</code> </b> and
   * <code>twine</code>), and NuGet CLIs (<code>nuget</code> and
   * <code>dotnet</code>).</p> </li> <li> <p> <b>Domain</b>: Repositories are
   * aggregated into a higher-level entity known as a <i>domain</i>. All package
   * assets and metadata are stored in the domain, but are consumed through
   * repositories. A given package asset, such as a Maven JAR file, is stored once
   * per domain, no matter how many repositories it's present in. All of the assets
   * and metadata in a domain are encrypted with the same customer master key (CMK)
   * stored in Key Management Service (KMS).</p> <p>Each repository is a member of a
   * single domain and can't be moved to a different domain.</p> <p>The domain allows
   * organizational policy to be applied across multiple repositories, such as which
   * accounts can access repositories in the domain, and which public repositories
   * can be used as sources of packages.</p> <p>Although an organization can have
   * multiple domains, we recommend a single production domain that contains all
   * published artifacts so that teams can find and share packages across their
   * organization.</p> </li> <li> <p> <b>Package</b>: A <i>package</i> is a bundle of
   * software and the metadata required to resolve dependencies and install the
   * software. CodeArtifact supports <a
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
   * requested domain.</p> </li> <li> <p> <code>DescribePackage</code>: Returns a <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDescription.html">PackageDescription</a>
   * object that contains details about a package. </p> </li> <li> <p>
   * <code>DescribePackageVersion</code>: Returns a <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
   * object that contains details about a package version. </p> </li> <li> <p>
   * <code>DescribeRepository</code>: Returns a <code>RepositoryDescription</code>
   * object that contains detailed information about the requested repository. </p>
   * </li> <li> <p> <code>DisposePackageVersions</code>: Disposes versions of a
   * package. A package version with the status <code>Disposed</code> cannot be
   * restored because they have been permanently removed from storage.</p> </li> <li>
   * <p> <code>DisassociateExternalConnection</code>: Removes an existing external
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
   * format: </p> <ul> <li> <p> <code>maven</code> </p> </li> <li> <p>
   * <code>npm</code> </p> </li> <li> <p> <code>nuget</code> </p> </li> <li> <p>
   * <code>pypi</code> </p> </li> </ul> </li> <li> <p>
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
   * <code>ListRepositories</code>: Returns a list of repositories owned by the
   * Amazon Web Services account that called this method.</p> </li> <li> <p>
   * <code>ListRepositoriesInDomain</code>: Returns a list of the repositories in a
   * domain.</p> </li> <li> <p> <code>PutDomainPermissionsPolicy</code>: Attaches a
   * resource policy to a domain.</p> </li> <li> <p>
   * <code>PutPackageOriginConfiguration</code>: Sets the package origin
   * configuration for a package, which determine how new versions of the package can
   * be added to a specific repository.</p> </li> <li> <p>
   * <code>PutRepositoryPermissionsPolicy</code>: Sets the resource policy on a
   * repository that specifies permissions to access it. </p> </li> <li> <p>
   * <code>UpdatePackageVersionsStatus</code>: Updates the status of one or more
   * versions of a package.</p> </li> <li> <p> <code>UpdateRepository</code>: Updates
   * the properties of a repository.</p> </li> </ul>
   */
  class AWS_CODEARTIFACT_API CodeArtifactClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeArtifactClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeArtifactClient(const Aws::CodeArtifact::CodeArtifactClientConfiguration& clientConfiguration = Aws::CodeArtifact::CodeArtifactClientConfiguration(),
                           std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeArtifactClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG),
                           const Aws::CodeArtifact::CodeArtifactClientConfiguration& clientConfiguration = Aws::CodeArtifact::CodeArtifactClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeArtifactClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeArtifactEndpointProvider>(ALLOCATION_TAG),
                           const Aws::CodeArtifact::CodeArtifactClientConfiguration& clientConfiguration = Aws::CodeArtifact::CodeArtifactClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeArtifactClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeArtifactClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeArtifactClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * A Callable wrapper for AssociateExternalConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateExternalConnectionOutcomeCallable AssociateExternalConnectionCallable(const Model::AssociateExternalConnectionRequest& request) const;

        /**
         * An Async wrapper for AssociateExternalConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CopyPackageVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyPackageVersionsOutcomeCallable CopyPackageVersionsCallable(const Model::CopyPackageVersionsRequest& request) const;

        /**
         * An Async wrapper for CopyPackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyPackageVersionsAsync(const Model::CopyPackageVersionsRequest& request, const CopyPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a domain. CodeArtifact <i>domains</i> make it easier to manage
         * multiple repositories across an organization. You can use a domain to apply
         * permissions across many repositories owned by different Amazon Web Services
         * accounts. An asset is stored only once in a domain, even if it's in multiple
         * repositories. </p> <p>Although you can have multiple domains, we recommend a
         * single production domain that contains all published artifacts so that your
         * development teams can find and share packages. You can use a second
         * pre-production domain to test changes to the production domain configuration.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for CreateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request) const;

        /**
         * An Async wrapper for CreateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the resource policy set on a domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainPermissionsPolicyOutcome DeleteDomainPermissionsPolicy(const Model::DeleteDomainPermissionsPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainPermissionsPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainPermissionsPolicyOutcomeCallable DeleteDomainPermissionsPolicyCallable(const Model::DeleteDomainPermissionsPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteDomainPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainPermissionsPolicyAsync(const Model::DeleteDomainPermissionsPolicyRequest& request, const DeleteDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes one or more versions of a package. A deleted package version cannot
         * be restored in your repository. If you want to remove a package version from
         * your repository and be able to restore it later, set its status to
         * <code>Archived</code>. Archived packages cannot be downloaded from a repository
         * and don't show up with list package APIs (for example, <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListackageVersions</a>),
         * but you can restore them using <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_UpdatePackageVersionsStatus.html">UpdatePackageVersionsStatus</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeletePackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageVersionsOutcome DeletePackageVersions(const Model::DeletePackageVersionsRequest& request) const;

        /**
         * A Callable wrapper for DeletePackageVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackageVersionsOutcomeCallable DeletePackageVersionsCallable(const Model::DeletePackageVersionsRequest& request) const;

        /**
         * An Async wrapper for DeletePackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePackageVersionsAsync(const Model::DeletePackageVersionsRequest& request, const DeletePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;

        /**
         * An Async wrapper for DeleteRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the resource policy that is set on a repository. After a resource
         * policy is deleted, the permissions allowed and denied by the deleted policy are
         * removed. The effect of deleting a resource policy might not be immediate. </p>
         *  <p> Use <code>DeleteRepositoryPermissionsPolicy</code> with caution.
         * After a policy is deleted, Amazon Web Services users, roles, and accounts lose
         * permissions to perform the repository actions granted by the deleted policy.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepositoryPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryPermissionsPolicyOutcome DeleteRepositoryPermissionsPolicy(const Model::DeleteRepositoryPermissionsPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepositoryPermissionsPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryPermissionsPolicyOutcomeCallable DeleteRepositoryPermissionsPolicyCallable(const Model::DeleteRepositoryPermissionsPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteRepositoryPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryPermissionsPolicyAsync(const Model::DeleteRepositoryPermissionsPolicyRequest& request, const DeleteRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainDescription.html">DomainDescription</a>
         * object that contains information about the requested domain. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request) const;

        /**
         * An Async wrapper for DescribeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDescription.html">PackageDescription</a>
         * object that contains information about the requested package.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageOutcome DescribePackage(const Model::DescribePackageRequest& request) const;

        /**
         * A Callable wrapper for DescribePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackageOutcomeCallable DescribePackageCallable(const Model::DescribePackageRequest& request) const;

        /**
         * An Async wrapper for DescribePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePackageAsync(const Model::DescribePackageRequest& request, const DescribePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
         * object that contains information about the requested package version.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DescribePackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageVersionOutcome DescribePackageVersion(const Model::DescribePackageVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribePackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackageVersionOutcomeCallable DescribePackageVersionCallable(const Model::DescribePackageVersionRequest& request) const;

        /**
         * An Async wrapper for DescribePackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRepositoryOutcomeCallable DescribeRepositoryCallable(const Model::DescribeRepositoryRequest& request) const;

        /**
         * An Async wrapper for DescribeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateExternalConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateExternalConnectionOutcomeCallable DisassociateExternalConnectionCallable(const Model::DisassociateExternalConnectionRequest& request) const;

        /**
         * An Async wrapper for DisassociateExternalConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateExternalConnectionAsync(const Model::DisassociateExternalConnectionRequest& request, const DisassociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the assets in package versions and sets the package versions' status
         * to <code>Disposed</code>. A disposed package version cannot be restored in your
         * repository because its assets are deleted. </p> <p> To view all disposed package
         * versions in a repository, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListPackageVersions</a>
         * and set the <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html#API_ListPackageVersions_RequestSyntax">status</a>
         * parameter to <code>Disposed</code>. </p> <p> To view information about a
         * disposed package version, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DescribePackageVersion.html">DescribePackageVersion</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DisposePackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DisposePackageVersionsOutcome DisposePackageVersions(const Model::DisposePackageVersionsRequest& request) const;

        /**
         * A Callable wrapper for DisposePackageVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisposePackageVersionsOutcomeCallable DisposePackageVersionsCallable(const Model::DisposePackageVersionsRequest& request) const;

        /**
         * An Async wrapper for DisposePackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisposePackageVersionsAsync(const Model::DisposePackageVersionsRequest& request, const DisposePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Generates a temporary authorization token for accessing repositories in the
         * domain. This API requires the <code>codeartifact:GetAuthorizationToken</code>
         * and <code>sts:GetServiceBearerToken</code> permissions. For more information
         * about authorization tokens, see <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/ug/tokens-authentication.html">CodeArtifact
         * authentication and tokens</a>. </p>  <p>CodeArtifact authorization tokens
         * are valid for a period of 12 hours when created with the <code>login</code>
         * command. You can call <code>login</code> periodically to refresh the token. When
         * you create an authorization token with the <code>GetAuthorizationToken</code>
         * API, you can set a custom authorization period, up to a maximum of 12 hours,
         * with the <code>durationSeconds</code> parameter.</p> <p>The authorization period
         * begins after <code>login</code> or <code>GetAuthorizationToken</code> is called.
         * If <code>login</code> or <code>GetAuthorizationToken</code> is called while
         * assuming a role, the token lifetime is independent of the maximum session
         * duration of the role. For example, if you call <code>sts assume-role</code> and
         * specify a session duration of 15 minutes, then generate a CodeArtifact
         * authorization token, the token will be valid for the full authorization period
         * even though this is longer than the 15-minute session duration.</p> <p>See <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using
         * IAM Roles</a> for more information on controlling session duration. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetAuthorizationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizationTokenOutcome GetAuthorizationToken(const Model::GetAuthorizationTokenRequest& request) const;

        /**
         * A Callable wrapper for GetAuthorizationToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizationTokenOutcomeCallable GetAuthorizationTokenCallable(const Model::GetAuthorizationTokenRequest& request) const;

        /**
         * An Async wrapper for GetAuthorizationToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizationTokenAsync(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the resource policy attached to the specified domain. </p> 
         * <p> The policy is a resource-based policy, not an identity-based policy. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
         * policies and resource-based policies </a> in the <i>IAM User Guide</i>. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainPermissionsPolicyOutcome GetDomainPermissionsPolicy(const Model::GetDomainPermissionsPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetDomainPermissionsPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainPermissionsPolicyOutcomeCallable GetDomainPermissionsPolicyCallable(const Model::GetDomainPermissionsPolicyRequest& request) const;

        /**
         * An Async wrapper for GetDomainPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetPackageVersionAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPackageVersionAssetOutcomeCallable GetPackageVersionAssetCallable(const Model::GetPackageVersionAssetRequest& request) const;

        /**
         * An Async wrapper for GetPackageVersionAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetPackageVersionReadme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPackageVersionReadmeOutcomeCallable GetPackageVersionReadmeCallable(const Model::GetPackageVersionReadmeRequest& request) const;

        /**
         * An Async wrapper for GetPackageVersionReadme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPackageVersionReadmeAsync(const Model::GetPackageVersionReadmeRequest& request, const GetPackageVersionReadmeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the endpoint of a repository for a specific package format. A
         * repository has one endpoint for each package format: </p> <ul> <li> <p>
         * <code>maven</code> </p> </li> <li> <p> <code>npm</code> </p> </li> <li> <p>
         * <code>nuget</code> </p> </li> <li> <p> <code>pypi</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetRepositoryEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryEndpointOutcome GetRepositoryEndpoint(const Model::GetRepositoryEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetRepositoryEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryEndpointOutcomeCallable GetRepositoryEndpointCallable(const Model::GetRepositoryEndpointRequest& request) const;

        /**
         * An Async wrapper for GetRepositoryEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetRepositoryPermissionsPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryPermissionsPolicyOutcomeCallable GetRepositoryPermissionsPolicyCallable(const Model::GetRepositoryPermissionsPolicyRequest& request) const;

        /**
         * An Async wrapper for GetRepositoryPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryPermissionsPolicyAsync(const Model::GetRepositoryPermissionsPolicyRequest& request, const GetRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">DomainSummary</a>
         * objects for all domains owned by the Amazon Web Services account that makes this
         * call. Each returned <code>DomainSummary</code> object contains information about
         * a domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
         * objects for assets in a package version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersionAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageVersionAssetsOutcome ListPackageVersionAssets(const Model::ListPackageVersionAssetsRequest& request) const;

        /**
         * A Callable wrapper for ListPackageVersionAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackageVersionAssetsOutcomeCallable ListPackageVersionAssetsCallable(const Model::ListPackageVersionAssetsRequest& request) const;

        /**
         * An Async wrapper for ListPackageVersionAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackageVersionAssetsAsync(const Model::ListPackageVersionAssetsRequest& request, const ListPackageVersionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the direct dependencies for a package version. The dependencies are
         * returned as <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDependency.html">PackageDependency</a>
         * objects. CodeArtifact extracts the dependencies for a package version from the
         * metadata file for the package format (for example, the <code>package.json</code>
         * file for npm packages and the <code>pom.xml</code> file for Maven). Any package
         * version dependencies that are not listed in the configuration file are not
         * returned. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersionDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageVersionDependenciesOutcome ListPackageVersionDependencies(const Model::ListPackageVersionDependenciesRequest& request) const;

        /**
         * A Callable wrapper for ListPackageVersionDependencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackageVersionDependenciesOutcomeCallable ListPackageVersionDependenciesCallable(const Model::ListPackageVersionDependenciesRequest& request) const;

        /**
         * An Async wrapper for ListPackageVersionDependencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackageVersionDependenciesAsync(const Model::ListPackageVersionDependenciesRequest& request, const ListPackageVersionDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
         * objects for package versions in a repository that match the request parameters.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageVersionsOutcome ListPackageVersions(const Model::ListPackageVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPackageVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackageVersionsOutcomeCallable ListPackageVersionsCallable(const Model::ListPackageVersionsRequest& request) const;

        /**
         * An Async wrapper for ListPackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackageVersionsAsync(const Model::ListPackageVersionsRequest& request, const ListPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a>
         * objects for packages in a repository that match the request parameters.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesOutcome ListPackages(const Model::ListPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagesOutcomeCallable ListPackagesCallable(const Model::ListPackagesRequest& request) const;

        /**
         * An Async wrapper for ListPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackagesAsync(const Model::ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">RepositorySummary</a>
         * objects. Each <code>RepositorySummary</code> contains information about a
         * repository in the specified Amazon Web Services account and that matches the
         * input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesOutcome ListRepositories(const Model::ListRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for ListRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoriesOutcomeCallable ListRepositoriesCallable(const Model::ListRepositoriesRequest& request) const;

        /**
         * An Async wrapper for ListRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoriesAsync(const Model::ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">RepositorySummary</a>
         * objects. Each <code>RepositorySummary</code> contains information about a
         * repository in the specified domain and that matches the input parameters.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListRepositoriesInDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesInDomainOutcome ListRepositoriesInDomain(const Model::ListRepositoriesInDomainRequest& request) const;

        /**
         * A Callable wrapper for ListRepositoriesInDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoriesInDomainOutcomeCallable ListRepositoriesInDomainCallable(const Model::ListRepositoriesInDomainRequest& request) const;

        /**
         * An Async wrapper for ListRepositoriesInDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoriesInDomainAsync(const Model::ListRepositoriesInDomainRequest& request, const ListRepositoriesInDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about Amazon Web Services tags for a specified Amazon
         * Resource Name (ARN) in CodeArtifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for PutDomainPermissionsPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDomainPermissionsPolicyOutcomeCallable PutDomainPermissionsPolicyCallable(const Model::PutDomainPermissionsPolicyRequest& request) const;

        /**
         * An Async wrapper for PutDomainPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDomainPermissionsPolicyAsync(const Model::PutDomainPermissionsPolicyRequest& request, const PutDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the package origin configuration for a package.</p> <p>The package
         * origin configuration determines how new versions of a package can be added to a
         * repository. You can allow or block direct publishing of new package versions, or
         * ingestion and retaining of new package versions from an external connection or
         * upstream source. For more information about package origin controls and
         * configuration, see <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/ug/package-origin-controls.html">Editing
         * package origin controls</a> in the <i>CodeArtifact User Guide</i>.</p> <p>
         * <code>PutPackageOriginConfiguration</code> can be called on a package that
         * doesn't yet exist in the repository. When called on a package that does not
         * exist, a package is created in the repository with no versions and the requested
         * restrictions are set on the package. This can be used to preemptively block
         * ingesting or retaining any versions from external connections or upstream
         * repositories, or to block publishing any versions of the package into the
         * repository before connecting any package managers or publishers to the
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PutPackageOriginConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPackageOriginConfigurationOutcome PutPackageOriginConfiguration(const Model::PutPackageOriginConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutPackageOriginConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPackageOriginConfigurationOutcomeCallable PutPackageOriginConfigurationCallable(const Model::PutPackageOriginConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutPackageOriginConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPackageOriginConfigurationAsync(const Model::PutPackageOriginConfigurationRequest& request, const PutPackageOriginConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for PutRepositoryPermissionsPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRepositoryPermissionsPolicyOutcomeCallable PutRepositoryPermissionsPolicyCallable(const Model::PutRepositoryPermissionsPolicyRequest& request) const;

        /**
         * An Async wrapper for PutRepositoryPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRepositoryPermissionsPolicyAsync(const Model::PutRepositoryPermissionsPolicyRequest& request, const PutRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates tags for a resource in CodeArtifact.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource in CodeArtifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the status of one or more versions of a package. Using
         * <code>UpdatePackageVersionsStatus</code>, you can update the status of package
         * versions to <code>Archived</code>, <code>Published</code>, or
         * <code>Unlisted</code>. To set the status of a package version to
         * <code>Disposed</code>, use <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DisposePackageVersions.html">DisposePackageVersions</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdatePackageVersionsStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageVersionsStatusOutcome UpdatePackageVersionsStatus(const Model::UpdatePackageVersionsStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackageVersionsStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePackageVersionsStatusOutcomeCallable UpdatePackageVersionsStatusCallable(const Model::UpdatePackageVersionsStatusRequest& request) const;

        /**
         * An Async wrapper for UpdatePackageVersionsStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePackageVersionsStatusAsync(const Model::UpdatePackageVersionsStatusRequest& request, const UpdatePackageVersionsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Update the properties of a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryOutcome UpdateRepository(const Model::UpdateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for UpdateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRepositoryOutcomeCallable UpdateRepositoryCallable(const Model::UpdateRepositoryRequest& request) const;

        /**
         * An Async wrapper for UpdateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRepositoryAsync(const Model::UpdateRepositoryRequest& request, const UpdateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeArtifactEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeArtifactClient>;
      void init(const CodeArtifactClientConfiguration& clientConfiguration);

      CodeArtifactClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeArtifactEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeArtifact
} // namespace Aws
