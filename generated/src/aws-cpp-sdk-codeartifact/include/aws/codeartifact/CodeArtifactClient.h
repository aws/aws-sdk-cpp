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
   * set on a domain.</p> </li> <li> <p> <code>DeletePackage</code>: Deletes a
   * package and all associated package versions.</p> </li> <li> <p>
   * <code>DeletePackageVersions</code>: Deletes versions of a package. After a
   * package has been deleted, it can be republished, but its assets and metadata
   * cannot be restored because they have been permanently removed from storage.</p>
   * </li> <li> <p> <code>DeleteRepository</code>: Deletes a repository. </p> </li>
   * <li> <p> <code>DeleteRepositoryPermissionsPolicy</code>: Deletes the resource
   * policy that is set on a repository.</p> </li> <li> <p>
   * <code>DescribeDomain</code>: Returns a <code>DomainDescription</code> object
   * that contains information about the requested domain.</p> </li> <li> <p>
   * <code>DescribePackage</code>: Returns a <a
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
   * domain.</p> </li> <li> <p> <code>PublishPackageVersion</code>: Creates a new
   * package version containing one or more assets.</p> </li> <li> <p>
   * <code>PutDomainPermissionsPolicy</code>: Attaches a resource policy to a
   * domain.</p> </li> <li> <p> <code>PutPackageOriginConfiguration</code>: Sets the
   * package origin configuration for a package, which determine how new versions of
   * the package can be added to a specific repository.</p> </li> <li> <p>
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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeArtifactClientConfiguration ClientConfigurationType;
      typedef CodeArtifactEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeArtifactClient(const Aws::CodeArtifact::CodeArtifactClientConfiguration& clientConfiguration = Aws::CodeArtifact::CodeArtifactClientConfiguration(),
                           std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeArtifactClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::CodeArtifact::CodeArtifactClientConfiguration& clientConfiguration = Aws::CodeArtifact::CodeArtifactClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeArtifactClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CodeArtifactEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AssociateExternalConnectionRequestT = Model::AssociateExternalConnectionRequest>
        Model::AssociateExternalConnectionOutcomeCallable AssociateExternalConnectionCallable(const AssociateExternalConnectionRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::AssociateExternalConnection, request);
        }

        /**
         * An Async wrapper for AssociateExternalConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateExternalConnectionRequestT = Model::AssociateExternalConnectionRequest>
        void AssociateExternalConnectionAsync(const AssociateExternalConnectionRequestT& request, const AssociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::AssociateExternalConnection, request, handler, context);
        }

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
        template<typename CopyPackageVersionsRequestT = Model::CopyPackageVersionsRequest>
        Model::CopyPackageVersionsOutcomeCallable CopyPackageVersionsCallable(const CopyPackageVersionsRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::CopyPackageVersions, request);
        }

        /**
         * An Async wrapper for CopyPackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyPackageVersionsRequestT = Model::CopyPackageVersionsRequest>
        void CopyPackageVersionsAsync(const CopyPackageVersionsRequestT& request, const CopyPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::CopyPackageVersions, request, handler, context);
        }

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
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::CreateDomain, request, handler, context);
        }

        /**
         * <p> Creates a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for CreateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRepositoryRequestT = Model::CreateRepositoryRequest>
        Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const CreateRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::CreateRepository, request);
        }

        /**
         * An Async wrapper for CreateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRepositoryRequestT = Model::CreateRepositoryRequest>
        void CreateRepositoryAsync(const CreateRepositoryRequestT& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::CreateRepository, request, handler, context);
        }

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
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DeleteDomain, request, handler, context);
        }

        /**
         * <p> Deletes the resource policy set on a domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteDomainPermissionsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainPermissionsPolicyOutcome DeleteDomainPermissionsPolicy(const Model::DeleteDomainPermissionsPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainPermissionsPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainPermissionsPolicyRequestT = Model::DeleteDomainPermissionsPolicyRequest>
        Model::DeleteDomainPermissionsPolicyOutcomeCallable DeleteDomainPermissionsPolicyCallable(const DeleteDomainPermissionsPolicyRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DeleteDomainPermissionsPolicy, request);
        }

        /**
         * An Async wrapper for DeleteDomainPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainPermissionsPolicyRequestT = Model::DeleteDomainPermissionsPolicyRequest>
        void DeleteDomainPermissionsPolicyAsync(const DeleteDomainPermissionsPolicyRequestT& request, const DeleteDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DeleteDomainPermissionsPolicy, request, handler, context);
        }

        /**
         * <p>Deletes a package and all associated package versions. A deleted package
         * cannot be restored. To delete one or more package versions, use the <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DeletePackageVersions.html">DeletePackageVersions</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;

        /**
         * A Callable wrapper for DeletePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        Model::DeletePackageOutcomeCallable DeletePackageCallable(const DeletePackageRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DeletePackage, request);
        }

        /**
         * An Async wrapper for DeletePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        void DeletePackageAsync(const DeletePackageRequestT& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DeletePackage, request, handler, context);
        }

        /**
         * <p> Deletes one or more versions of a package. A deleted package version cannot
         * be restored in your repository. If you want to remove a package version from
         * your repository and be able to restore it later, set its status to
         * <code>Archived</code>. Archived packages cannot be downloaded from a repository
         * and don't show up with list package APIs (for example, <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListPackageVersions</a>),
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
        template<typename DeletePackageVersionsRequestT = Model::DeletePackageVersionsRequest>
        Model::DeletePackageVersionsOutcomeCallable DeletePackageVersionsCallable(const DeletePackageVersionsRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DeletePackageVersions, request);
        }

        /**
         * An Async wrapper for DeletePackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackageVersionsRequestT = Model::DeletePackageVersionsRequest>
        void DeletePackageVersionsAsync(const DeletePackageVersionsRequestT& request, const DeletePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DeletePackageVersions, request, handler, context);
        }

        /**
         * <p> Deletes a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRepositoryRequestT = Model::DeleteRepositoryRequest>
        Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const DeleteRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DeleteRepository, request);
        }

        /**
         * An Async wrapper for DeleteRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRepositoryRequestT = Model::DeleteRepositoryRequest>
        void DeleteRepositoryAsync(const DeleteRepositoryRequestT& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DeleteRepository, request, handler, context);
        }

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
        template<typename DeleteRepositoryPermissionsPolicyRequestT = Model::DeleteRepositoryPermissionsPolicyRequest>
        Model::DeleteRepositoryPermissionsPolicyOutcomeCallable DeleteRepositoryPermissionsPolicyCallable(const DeleteRepositoryPermissionsPolicyRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DeleteRepositoryPermissionsPolicy, request);
        }

        /**
         * An Async wrapper for DeleteRepositoryPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRepositoryPermissionsPolicyRequestT = Model::DeleteRepositoryPermissionsPolicyRequest>
        void DeleteRepositoryPermissionsPolicyAsync(const DeleteRepositoryPermissionsPolicyRequestT& request, const DeleteRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DeleteRepositoryPermissionsPolicy, request, handler, context);
        }

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
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const DescribeDomainRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DescribeDomain, request);
        }

        /**
         * An Async wrapper for DescribeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        void DescribeDomainAsync(const DescribeDomainRequestT& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DescribeDomain, request, handler, context);
        }

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
        template<typename DescribePackageRequestT = Model::DescribePackageRequest>
        Model::DescribePackageOutcomeCallable DescribePackageCallable(const DescribePackageRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DescribePackage, request);
        }

        /**
         * An Async wrapper for DescribePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackageRequestT = Model::DescribePackageRequest>
        void DescribePackageAsync(const DescribePackageRequestT& request, const DescribePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DescribePackage, request, handler, context);
        }

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
        template<typename DescribePackageVersionRequestT = Model::DescribePackageVersionRequest>
        Model::DescribePackageVersionOutcomeCallable DescribePackageVersionCallable(const DescribePackageVersionRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DescribePackageVersion, request);
        }

        /**
         * An Async wrapper for DescribePackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackageVersionRequestT = Model::DescribePackageVersionRequest>
        void DescribePackageVersionAsync(const DescribePackageVersionRequestT& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DescribePackageVersion, request, handler, context);
        }

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
        template<typename DescribeRepositoryRequestT = Model::DescribeRepositoryRequest>
        Model::DescribeRepositoryOutcomeCallable DescribeRepositoryCallable(const DescribeRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DescribeRepository, request);
        }

        /**
         * An Async wrapper for DescribeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRepositoryRequestT = Model::DescribeRepositoryRequest>
        void DescribeRepositoryAsync(const DescribeRepositoryRequestT& request, const DescribeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DescribeRepository, request, handler, context);
        }

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
        template<typename DisassociateExternalConnectionRequestT = Model::DisassociateExternalConnectionRequest>
        Model::DisassociateExternalConnectionOutcomeCallable DisassociateExternalConnectionCallable(const DisassociateExternalConnectionRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DisassociateExternalConnection, request);
        }

        /**
         * An Async wrapper for DisassociateExternalConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateExternalConnectionRequestT = Model::DisassociateExternalConnectionRequest>
        void DisassociateExternalConnectionAsync(const DisassociateExternalConnectionRequestT& request, const DisassociateExternalConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DisassociateExternalConnection, request, handler, context);
        }

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
        template<typename DisposePackageVersionsRequestT = Model::DisposePackageVersionsRequest>
        Model::DisposePackageVersionsOutcomeCallable DisposePackageVersionsCallable(const DisposePackageVersionsRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::DisposePackageVersions, request);
        }

        /**
         * An Async wrapper for DisposePackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisposePackageVersionsRequestT = Model::DisposePackageVersionsRequest>
        void DisposePackageVersionsAsync(const DisposePackageVersionsRequestT& request, const DisposePackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::DisposePackageVersions, request, handler, context);
        }

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
        template<typename GetAuthorizationTokenRequestT = Model::GetAuthorizationTokenRequest>
        Model::GetAuthorizationTokenOutcomeCallable GetAuthorizationTokenCallable(const GetAuthorizationTokenRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::GetAuthorizationToken, request);
        }

        /**
         * An Async wrapper for GetAuthorizationToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAuthorizationTokenRequestT = Model::GetAuthorizationTokenRequest>
        void GetAuthorizationTokenAsync(const GetAuthorizationTokenRequestT& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::GetAuthorizationToken, request, handler, context);
        }

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
        template<typename GetDomainPermissionsPolicyRequestT = Model::GetDomainPermissionsPolicyRequest>
        Model::GetDomainPermissionsPolicyOutcomeCallable GetDomainPermissionsPolicyCallable(const GetDomainPermissionsPolicyRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::GetDomainPermissionsPolicy, request);
        }

        /**
         * An Async wrapper for GetDomainPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainPermissionsPolicyRequestT = Model::GetDomainPermissionsPolicyRequest>
        void GetDomainPermissionsPolicyAsync(const GetDomainPermissionsPolicyRequestT& request, const GetDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::GetDomainPermissionsPolicy, request, handler, context);
        }

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
        template<typename GetPackageVersionAssetRequestT = Model::GetPackageVersionAssetRequest>
        Model::GetPackageVersionAssetOutcomeCallable GetPackageVersionAssetCallable(const GetPackageVersionAssetRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::GetPackageVersionAsset, request);
        }

        /**
         * An Async wrapper for GetPackageVersionAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPackageVersionAssetRequestT = Model::GetPackageVersionAssetRequest>
        void GetPackageVersionAssetAsync(const GetPackageVersionAssetRequestT& request, const GetPackageVersionAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::GetPackageVersionAsset, request, handler, context);
        }

        /**
         * <p> Gets the readme file or descriptive text for a package version. </p> <p> The
         * returned text might contain formatting. For example, it might contain formatting
         * for Markdown or reStructuredText. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/GetPackageVersionReadme">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPackageVersionReadmeOutcome GetPackageVersionReadme(const Model::GetPackageVersionReadmeRequest& request) const;

        /**
         * A Callable wrapper for GetPackageVersionReadme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPackageVersionReadmeRequestT = Model::GetPackageVersionReadmeRequest>
        Model::GetPackageVersionReadmeOutcomeCallable GetPackageVersionReadmeCallable(const GetPackageVersionReadmeRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::GetPackageVersionReadme, request);
        }

        /**
         * An Async wrapper for GetPackageVersionReadme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPackageVersionReadmeRequestT = Model::GetPackageVersionReadmeRequest>
        void GetPackageVersionReadmeAsync(const GetPackageVersionReadmeRequestT& request, const GetPackageVersionReadmeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::GetPackageVersionReadme, request, handler, context);
        }

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
        template<typename GetRepositoryEndpointRequestT = Model::GetRepositoryEndpointRequest>
        Model::GetRepositoryEndpointOutcomeCallable GetRepositoryEndpointCallable(const GetRepositoryEndpointRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::GetRepositoryEndpoint, request);
        }

        /**
         * An Async wrapper for GetRepositoryEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRepositoryEndpointRequestT = Model::GetRepositoryEndpointRequest>
        void GetRepositoryEndpointAsync(const GetRepositoryEndpointRequestT& request, const GetRepositoryEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::GetRepositoryEndpoint, request, handler, context);
        }

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
        template<typename GetRepositoryPermissionsPolicyRequestT = Model::GetRepositoryPermissionsPolicyRequest>
        Model::GetRepositoryPermissionsPolicyOutcomeCallable GetRepositoryPermissionsPolicyCallable(const GetRepositoryPermissionsPolicyRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::GetRepositoryPermissionsPolicy, request);
        }

        /**
         * An Async wrapper for GetRepositoryPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRepositoryPermissionsPolicyRequestT = Model::GetRepositoryPermissionsPolicyRequest>
        void GetRepositoryPermissionsPolicyAsync(const GetRepositoryPermissionsPolicyRequestT& request, const GetRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::GetRepositoryPermissionsPolicy, request, handler, context);
        }

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
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsRequestT& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::ListDomains, request, handler, context);
        }

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
        template<typename ListPackageVersionAssetsRequestT = Model::ListPackageVersionAssetsRequest>
        Model::ListPackageVersionAssetsOutcomeCallable ListPackageVersionAssetsCallable(const ListPackageVersionAssetsRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::ListPackageVersionAssets, request);
        }

        /**
         * An Async wrapper for ListPackageVersionAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackageVersionAssetsRequestT = Model::ListPackageVersionAssetsRequest>
        void ListPackageVersionAssetsAsync(const ListPackageVersionAssetsRequestT& request, const ListPackageVersionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::ListPackageVersionAssets, request, handler, context);
        }

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
        template<typename ListPackageVersionDependenciesRequestT = Model::ListPackageVersionDependenciesRequest>
        Model::ListPackageVersionDependenciesOutcomeCallable ListPackageVersionDependenciesCallable(const ListPackageVersionDependenciesRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::ListPackageVersionDependencies, request);
        }

        /**
         * An Async wrapper for ListPackageVersionDependencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackageVersionDependenciesRequestT = Model::ListPackageVersionDependenciesRequest>
        void ListPackageVersionDependenciesAsync(const ListPackageVersionDependenciesRequestT& request, const ListPackageVersionDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::ListPackageVersionDependencies, request, handler, context);
        }

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
         * objects for package versions in a repository that match the request parameters.
         * Package versions of all statuses will be returned by default when calling
         * <code>list-package-versions</code> with no <code>--status</code> parameter.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ListPackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageVersionsOutcome ListPackageVersions(const Model::ListPackageVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPackageVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPackageVersionsRequestT = Model::ListPackageVersionsRequest>
        Model::ListPackageVersionsOutcomeCallable ListPackageVersionsCallable(const ListPackageVersionsRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::ListPackageVersions, request);
        }

        /**
         * An Async wrapper for ListPackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackageVersionsRequestT = Model::ListPackageVersionsRequest>
        void ListPackageVersionsAsync(const ListPackageVersionsRequestT& request, const ListPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::ListPackageVersions, request, handler, context);
        }

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
        template<typename ListPackagesRequestT = Model::ListPackagesRequest>
        Model::ListPackagesOutcomeCallable ListPackagesCallable(const ListPackagesRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::ListPackages, request);
        }

        /**
         * An Async wrapper for ListPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackagesRequestT = Model::ListPackagesRequest>
        void ListPackagesAsync(const ListPackagesRequestT& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::ListPackages, request, handler, context);
        }

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
        template<typename ListRepositoriesRequestT = Model::ListRepositoriesRequest>
        Model::ListRepositoriesOutcomeCallable ListRepositoriesCallable(const ListRepositoriesRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::ListRepositories, request);
        }

        /**
         * An Async wrapper for ListRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRepositoriesRequestT = Model::ListRepositoriesRequest>
        void ListRepositoriesAsync(const ListRepositoriesRequestT& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::ListRepositories, request, handler, context);
        }

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
        template<typename ListRepositoriesInDomainRequestT = Model::ListRepositoriesInDomainRequest>
        Model::ListRepositoriesInDomainOutcomeCallable ListRepositoriesInDomainCallable(const ListRepositoriesInDomainRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::ListRepositoriesInDomain, request);
        }

        /**
         * An Async wrapper for ListRepositoriesInDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRepositoriesInDomainRequestT = Model::ListRepositoriesInDomainRequest>
        void ListRepositoriesInDomainAsync(const ListRepositoriesInDomainRequestT& request, const ListRepositoriesInDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::ListRepositoriesInDomain, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates a new package version containing one or more assets (or files).</p>
         * <p>The <code>unfinished</code> flag can be used to keep the package version in
         * the <code>Unfinished</code> state until all of its assets have been uploaded
         * (see <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status.html#package-version-status">Package
         * version status</a> in the <i>CodeArtifact user guide</i>). To set the package
         * version’s status to <code>Published</code>, omit the <code>unfinished</code>
         * flag when uploading the final asset, or set the status using <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_UpdatePackageVersionsStatus.html">UpdatePackageVersionStatus</a>.
         * Once a package version’s status is set to <code>Published</code>, it cannot
         * change back to <code>Unfinished</code>.</p>  <p>Only generic packages can
         * be published using this API. For more information, see <a
         * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html">Using
         * generic packages</a> in the <i>CodeArtifact User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PublishPackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishPackageVersionOutcome PublishPackageVersion(const Model::PublishPackageVersionRequest& request) const;

        /**
         * A Callable wrapper for PublishPackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PublishPackageVersionRequestT = Model::PublishPackageVersionRequest>
        Model::PublishPackageVersionOutcomeCallable PublishPackageVersionCallable(const PublishPackageVersionRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::PublishPackageVersion, request);
        }

        /**
         * An Async wrapper for PublishPackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PublishPackageVersionRequestT = Model::PublishPackageVersionRequest>
        void PublishPackageVersionAsync(const PublishPackageVersionRequestT& request, const PublishPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::PublishPackageVersion, request, handler, context);
        }

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
        template<typename PutDomainPermissionsPolicyRequestT = Model::PutDomainPermissionsPolicyRequest>
        Model::PutDomainPermissionsPolicyOutcomeCallable PutDomainPermissionsPolicyCallable(const PutDomainPermissionsPolicyRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::PutDomainPermissionsPolicy, request);
        }

        /**
         * An Async wrapper for PutDomainPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDomainPermissionsPolicyRequestT = Model::PutDomainPermissionsPolicyRequest>
        void PutDomainPermissionsPolicyAsync(const PutDomainPermissionsPolicyRequestT& request, const PutDomainPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::PutDomainPermissionsPolicy, request, handler, context);
        }

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
        template<typename PutPackageOriginConfigurationRequestT = Model::PutPackageOriginConfigurationRequest>
        Model::PutPackageOriginConfigurationOutcomeCallable PutPackageOriginConfigurationCallable(const PutPackageOriginConfigurationRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::PutPackageOriginConfiguration, request);
        }

        /**
         * An Async wrapper for PutPackageOriginConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPackageOriginConfigurationRequestT = Model::PutPackageOriginConfigurationRequest>
        void PutPackageOriginConfigurationAsync(const PutPackageOriginConfigurationRequestT& request, const PutPackageOriginConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::PutPackageOriginConfiguration, request, handler, context);
        }

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
        template<typename PutRepositoryPermissionsPolicyRequestT = Model::PutRepositoryPermissionsPolicyRequest>
        Model::PutRepositoryPermissionsPolicyOutcomeCallable PutRepositoryPermissionsPolicyCallable(const PutRepositoryPermissionsPolicyRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::PutRepositoryPermissionsPolicy, request);
        }

        /**
         * An Async wrapper for PutRepositoryPermissionsPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRepositoryPermissionsPolicyRequestT = Model::PutRepositoryPermissionsPolicyRequest>
        void PutRepositoryPermissionsPolicyAsync(const PutRepositoryPermissionsPolicyRequestT& request, const PutRepositoryPermissionsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::PutRepositoryPermissionsPolicy, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource in CodeArtifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdatePackageVersionsStatusRequestT = Model::UpdatePackageVersionsStatusRequest>
        Model::UpdatePackageVersionsStatusOutcomeCallable UpdatePackageVersionsStatusCallable(const UpdatePackageVersionsStatusRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::UpdatePackageVersionsStatus, request);
        }

        /**
         * An Async wrapper for UpdatePackageVersionsStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePackageVersionsStatusRequestT = Model::UpdatePackageVersionsStatusRequest>
        void UpdatePackageVersionsStatusAsync(const UpdatePackageVersionsStatusRequestT& request, const UpdatePackageVersionsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::UpdatePackageVersionsStatus, request, handler, context);
        }

        /**
         * <p> Update the properties of a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/UpdateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryOutcome UpdateRepository(const Model::UpdateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for UpdateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRepositoryRequestT = Model::UpdateRepositoryRequest>
        Model::UpdateRepositoryOutcomeCallable UpdateRepositoryCallable(const UpdateRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeArtifactClient::UpdateRepository, request);
        }

        /**
         * An Async wrapper for UpdateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRepositoryRequestT = Model::UpdateRepositoryRequest>
        void UpdateRepositoryAsync(const UpdateRepositoryRequestT& request, const UpdateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeArtifactClient::UpdateRepository, request, handler, context);
        }


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
