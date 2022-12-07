/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/OpenSearchServiceServiceClientModel.h>

namespace Aws
{
namespace OpenSearchService
{
  /**
   * <p>Use the Amazon OpenSearch Service configuration API to create, configure, and
   * manage OpenSearch Service domains.</p> <p>For sample code that uses the
   * configuration API, see the <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
   * <i>Amazon OpenSearch Service Developer Guide</i> </a>. The guide also contains
   * <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html">sample
   * code</a> for sending signed HTTP requests to the OpenSearch APIs. The endpoint
   * for configuration service requests is Region specific:
   * es.<i>region</i>.amazonaws.com. For example, es.us-east-1.amazonaws.com. For a
   * current list of supported Regions and endpoints, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions">Amazon
   * Web Services service endpoints</a>.</p>
   */
  class AWS_OPENSEARCHSERVICE_API OpenSearchServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration = Aws::OpenSearchService::OpenSearchServiceClientConfiguration(),
                                std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG),
                                const Aws::OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration = Aws::OpenSearchService::OpenSearchServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG),
                                const Aws::OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration = Aws::OpenSearchService::OpenSearchServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OpenSearchServiceClient();

        /**
         * <p>Allows the destination Amazon OpenSearch Service domain owner to accept an
         * inbound cross-cluster search connection request. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AcceptInboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInboundConnectionOutcome AcceptInboundConnection(const Model::AcceptInboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for AcceptInboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInboundConnectionOutcomeCallable AcceptInboundConnectionCallable(const Model::AcceptInboundConnectionRequest& request) const;

        /**
         * An Async wrapper for AcceptInboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInboundConnectionAsync(const Model::AcceptInboundConnectionRequest& request, const AcceptInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches tags to an existing Amazon OpenSearch Service domain. Tags are a set
         * of case-sensitive key-value pairs. An domain can have up to 10 tags. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-awsresorcetagging">
         * Tagging Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a package with an Amazon OpenSearch Service domain. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AssociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePackageOutcome AssociatePackage(const Model::AssociatePackageRequest& request) const;

        /**
         * A Callable wrapper for AssociatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePackageOutcomeCallable AssociatePackageCallable(const Model::AssociatePackageRequest& request) const;

        /**
         * An Async wrapper for AssociatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePackageAsync(const Model::AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides access to an Amazon OpenSearch Service domain through the use of an
         * interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AuthorizeVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeVpcEndpointAccessOutcome AuthorizeVpcEndpointAccess(const Model::AuthorizeVpcEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeVpcEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeVpcEndpointAccessOutcomeCallable AuthorizeVpcEndpointAccessCallable(const Model::AuthorizeVpcEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for AuthorizeVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeVpcEndpointAccessAsync(const Model::AuthorizeVpcEndpointAccessRequest& request, const AuthorizeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a scheduled service software update for an Amazon OpenSearch Service
         * domain. You can only perform this operation before the
         * <code>AutomatedUpdateDate</code> and when the domain's <code>UpdateStatus</code>
         * is <code>PENDING_UPDATE</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">Service
         * software updates in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CancelServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelServiceSoftwareUpdateOutcome CancelServiceSoftwareUpdate(const Model::CancelServiceSoftwareUpdateRequest& request) const;

        /**
         * A Callable wrapper for CancelServiceSoftwareUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelServiceSoftwareUpdateOutcomeCallable CancelServiceSoftwareUpdateCallable(const Model::CancelServiceSoftwareUpdateRequest& request) const;

        /**
         * An Async wrapper for CancelServiceSoftwareUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelServiceSoftwareUpdateAsync(const Model::CancelServiceSoftwareUpdateRequest& request, const CancelServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html">Creating
         * and managing Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateDomain">AWS
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
         * <p>Creates a new cross-cluster search connection from a source Amazon OpenSearch
         * Service domain to a destination domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateOutboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutboundConnectionOutcome CreateOutboundConnection(const Model::CreateOutboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateOutboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOutboundConnectionOutcomeCallable CreateOutboundConnectionCallable(const Model::CreateOutboundConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateOutboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOutboundConnectionAsync(const Model::CreateOutboundConnectionRequest& request, const CreateOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a package for use with Amazon OpenSearch Service domains. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;

        /**
         * A Callable wrapper for CreatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePackageOutcomeCallable CreatePackageCallable(const Model::CreatePackageRequest& request) const;

        /**
         * An Async wrapper for CreatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePackageAsync(const Model::CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon OpenSearch Service-managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointOutcome CreateVpcEndpoint(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcEndpointOutcomeCallable CreateVpcEndpointCallable(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcEndpointAsync(const Model::CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon OpenSearch Service domain and all of its data. You can't
         * recover a domain after you delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteDomain">AWS
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
         * <p>Allows the destination Amazon OpenSearch Service domain owner to delete an
         * existing inbound cross-cluster search connection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteInboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInboundConnectionOutcome DeleteInboundConnection(const Model::DeleteInboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteInboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInboundConnectionOutcomeCallable DeleteInboundConnectionCallable(const Model::DeleteInboundConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteInboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInboundConnectionAsync(const Model::DeleteInboundConnectionRequest& request, const DeleteInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the source Amazon OpenSearch Service domain owner to delete an
         * existing outbound cross-cluster search connection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteOutboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutboundConnectionOutcome DeleteOutboundConnection(const Model::DeleteOutboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteOutboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOutboundConnectionOutcomeCallable DeleteOutboundConnectionCallable(const Model::DeleteOutboundConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteOutboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOutboundConnectionAsync(const Model::DeleteOutboundConnectionRequest& request, const DeleteOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon OpenSearch Service package. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;

        /**
         * A Callable wrapper for DeletePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackageOutcomeCallable DeletePackageCallable(const Model::DeletePackageRequest& request) const;

        /**
         * An Async wrapper for DeletePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePackageAsync(const Model::DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon OpenSearch Service-managed interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointOutcome DeleteVpcEndpoint(const Model::DeleteVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcEndpointOutcomeCallable DeleteVpcEndpointCallable(const Model::DeleteVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcEndpointAsync(const Model::DeleteVpcEndpointRequest& request, const DeleteVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the domain configuration for the specified Amazon OpenSearch
         * Service domain, including the domain ID, domain service endpoint, and domain
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomain">AWS
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
         * <p>Returns the list of optimizations that Auto-Tune has made to an Amazon
         * OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
         * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainAutoTunes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainAutoTunesOutcome DescribeDomainAutoTunes(const Model::DescribeDomainAutoTunesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainAutoTunes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainAutoTunesOutcomeCallable DescribeDomainAutoTunesCallable(const Model::DescribeDomainAutoTunesRequest& request) const;

        /**
         * An Async wrapper for DescribeDomainAutoTunes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainAutoTunesAsync(const Model::DescribeDomainAutoTunesRequest& request, const DescribeDomainAutoTunesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the current blue/green deployment happening on an
         * Amazon OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-configuration-changes.html">Making
         * configuration changes in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainChangeProgress">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainChangeProgressOutcome DescribeDomainChangeProgress(const Model::DescribeDomainChangeProgressRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainChangeProgress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainChangeProgressOutcomeCallable DescribeDomainChangeProgressCallable(const Model::DescribeDomainChangeProgressRequest& request) const;

        /**
         * An Async wrapper for DescribeDomainChangeProgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainChangeProgressAsync(const Model::DescribeDomainChangeProgressRequest& request, const DescribeDomainChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration of an Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainConfigOutcome DescribeDomainConfig(const Model::DescribeDomainConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainConfigOutcomeCallable DescribeDomainConfigCallable(const Model::DescribeDomainConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeDomainConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainConfigAsync(const Model::DescribeDomainConfigRequest& request, const DescribeDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns domain configuration information about the specified Amazon
         * OpenSearch Service domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request) const;

        /**
         * An Async wrapper for DescribeDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the inbound cross-cluster search connections for a destination
         * (remote) Amazon OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInboundConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInboundConnectionsOutcome DescribeInboundConnections(const Model::DescribeInboundConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInboundConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInboundConnectionsOutcomeCallable DescribeInboundConnectionsCallable(const Model::DescribeInboundConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeInboundConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInboundConnectionsAsync(const Model::DescribeInboundConnectionsRequest& request, const DescribeInboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the instance count, storage, and master node limits for a given
         * OpenSearch or Elasticsearch version and instance type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInstanceTypeLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceTypeLimitsOutcome DescribeInstanceTypeLimits(const Model::DescribeInstanceTypeLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceTypeLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceTypeLimitsOutcomeCallable DescribeInstanceTypeLimitsCallable(const Model::DescribeInstanceTypeLimitsRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceTypeLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceTypeLimitsAsync(const Model::DescribeInstanceTypeLimitsRequest& request, const DescribeInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the outbound cross-cluster connections for a local (source) Amazon
         * OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeOutboundConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOutboundConnectionsOutcome DescribeOutboundConnections(const Model::DescribeOutboundConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOutboundConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOutboundConnectionsOutcomeCallable DescribeOutboundConnectionsCallable(const Model::DescribeOutboundConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeOutboundConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOutboundConnectionsAsync(const Model::DescribeOutboundConnectionsRequest& request, const DescribeOutboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes all packages available to OpenSearch Service. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribePackages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagesOutcome DescribePackages(const Model::DescribePackagesRequest& request) const;

        /**
         * A Callable wrapper for DescribePackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackagesOutcomeCallable DescribePackagesCallable(const Model::DescribePackagesRequest& request) const;

        /**
         * An Async wrapper for DescribePackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePackagesAsync(const Model::DescribePackagesRequest& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available Amazon OpenSearch Service Reserved Instance offerings
         * for a given Region. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/ri.html">Reserved
         * Instances in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstanceOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstanceOfferingsOutcome DescribeReservedInstanceOfferings(const Model::DescribeReservedInstanceOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedInstanceOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstanceOfferingsOutcomeCallable DescribeReservedInstanceOfferingsCallable(const Model::DescribeReservedInstanceOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedInstanceOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstanceOfferingsAsync(const Model::DescribeReservedInstanceOfferingsRequest& request, const DescribeReservedInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Amazon OpenSearch Service instances that you have reserved in a
         * given Region. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/ri.html">Reserved
         * Instances in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesOutcome DescribeReservedInstances(const Model::DescribeReservedInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesOutcomeCallable DescribeReservedInstancesCallable(const Model::DescribeReservedInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesAsync(const Model::DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Amazon OpenSearch Service-managed VPC
         * endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointsOutcome DescribeVpcEndpoints(const Model::DescribeVpcEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointsOutcomeCallable DescribeVpcEndpointsCallable(const Model::DescribeVpcEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointsAsync(const Model::DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a package from the specified Amazon OpenSearch Service domain. The
         * package can't be in use with any OpenSearch index for the dissociation to
         * succeed. The package is still available in OpenSearch Service for association
         * later. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DissociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DissociatePackageOutcome DissociatePackage(const Model::DissociatePackageRequest& request) const;

        /**
         * A Callable wrapper for DissociatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DissociatePackageOutcomeCallable DissociatePackageCallable(const Model::DissociatePackageRequest& request) const;

        /**
         * An Async wrapper for DissociatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DissociatePackageAsync(const Model::DissociatePackageRequest& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a map of OpenSearch or Elasticsearch versions and the versions you
         * can upgrade them to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetCompatibleVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCompatibleVersionsOutcome GetCompatibleVersions(const Model::GetCompatibleVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetCompatibleVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCompatibleVersionsOutcomeCallable GetCompatibleVersionsCallable(const Model::GetCompatibleVersionsRequest& request) const;

        /**
         * An Async wrapper for GetCompatibleVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCompatibleVersionsAsync(const Model::GetCompatibleVersionsRequest& request, const GetCompatibleVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Amazon OpenSearch Service package versions, along with
         * their creation time and commit message. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetPackageVersionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPackageVersionHistoryOutcome GetPackageVersionHistory(const Model::GetPackageVersionHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetPackageVersionHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPackageVersionHistoryOutcomeCallable GetPackageVersionHistoryCallable(const Model::GetPackageVersionHistoryRequest& request) const;

        /**
         * An Async wrapper for GetPackageVersionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPackageVersionHistoryAsync(const Model::GetPackageVersionHistoryRequest& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the complete history of the last 10 upgrades performed on an Amazon
         * OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUpgradeHistoryOutcome GetUpgradeHistory(const Model::GetUpgradeHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetUpgradeHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUpgradeHistoryOutcomeCallable GetUpgradeHistoryCallable(const Model::GetUpgradeHistoryRequest& request) const;

        /**
         * An Async wrapper for GetUpgradeHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUpgradeHistoryAsync(const Model::GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the most recent status of the last upgrade or upgrade eligibility
         * check performed on an Amazon OpenSearch Service domain.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUpgradeStatusOutcome GetUpgradeStatus(const Model::GetUpgradeStatusRequest& request) const;

        /**
         * A Callable wrapper for GetUpgradeStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUpgradeStatusOutcomeCallable GetUpgradeStatusCallable(const Model::GetUpgradeStatusRequest& request) const;

        /**
         * An Async wrapper for GetUpgradeStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUpgradeStatusAsync(const Model::GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the names of all Amazon OpenSearch Service domains owned by the
         * current user in the active Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;

        /**
         * A Callable wrapper for ListDomainNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainNamesOutcomeCallable ListDomainNamesCallable(const Model::ListDomainNamesRequest& request) const;

        /**
         * An Async wrapper for ListDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainNamesAsync(const Model::ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Amazon OpenSearch Service domains associated with a given package.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainsForPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsForPackageOutcome ListDomainsForPackage(const Model::ListDomainsForPackageRequest& request) const;

        /**
         * A Callable wrapper for ListDomainsForPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsForPackageOutcomeCallable ListDomainsForPackageCallable(const Model::ListDomainsForPackageRequest& request) const;

        /**
         * An Async wrapper for ListDomainsForPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsForPackageAsync(const Model::ListDomainsForPackageRequest& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all instance types and available features for a given OpenSearch or
         * Elasticsearch version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListInstanceTypeDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceTypeDetailsOutcome ListInstanceTypeDetails(const Model::ListInstanceTypeDetailsRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceTypeDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceTypeDetailsOutcomeCallable ListInstanceTypeDetailsCallable(const Model::ListInstanceTypeDetailsRequest& request) const;

        /**
         * An Async wrapper for ListInstanceTypeDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceTypeDetailsAsync(const Model::ListInstanceTypeDetailsRequest& request, const ListInstanceTypeDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all packages associated with an Amazon OpenSearch Service domain. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListPackagesForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesForDomainOutcome ListPackagesForDomain(const Model::ListPackagesForDomainRequest& request) const;

        /**
         * A Callable wrapper for ListPackagesForDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagesForDomainOutcomeCallable ListPackagesForDomainCallable(const Model::ListPackagesForDomainRequest& request) const;

        /**
         * An Async wrapper for ListPackagesForDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackagesForDomainAsync(const Model::ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all resource tags for an Amazon OpenSearch Service domain. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-awsresourcetagging.html">Tagging
         * Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
         * Service supports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVersionsOutcome ListVersions(const Model::ListVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVersionsOutcomeCallable ListVersionsCallable(const Model::ListVersionsRequest& request) const;

        /**
         * An Async wrapper for ListVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVersionsAsync(const Model::ListVersionsRequest& request, const ListVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about each Amazon Web Services principal that is
         * allowed to access a given Amazon OpenSearch Service domain through the use of an
         * interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointAccessOutcome ListVpcEndpointAccess(const Model::ListVpcEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for ListVpcEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVpcEndpointAccessOutcomeCallable ListVpcEndpointAccessCallable(const Model::ListVpcEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for ListVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVpcEndpointAccessAsync(const Model::ListVpcEndpointAccessRequest& request, const ListVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all Amazon OpenSearch Service-managed VPC endpoints in the current
         * Amazon Web Services account and Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsOutcome ListVpcEndpoints(const Model::ListVpcEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListVpcEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVpcEndpointsOutcomeCallable ListVpcEndpointsCallable(const Model::ListVpcEndpointsRequest& request) const;

        /**
         * An Async wrapper for ListVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVpcEndpointsAsync(const Model::ListVpcEndpointsRequest& request, const ListVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all Amazon OpenSearch Service-managed VPC endpoints associated with
         * a particular domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpointsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsForDomainOutcome ListVpcEndpointsForDomain(const Model::ListVpcEndpointsForDomainRequest& request) const;

        /**
         * A Callable wrapper for ListVpcEndpointsForDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVpcEndpointsForDomainOutcomeCallable ListVpcEndpointsForDomainCallable(const Model::ListVpcEndpointsForDomainRequest& request) const;

        /**
         * An Async wrapper for ListVpcEndpointsForDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVpcEndpointsForDomainAsync(const Model::ListVpcEndpointsForDomainRequest& request, const ListVpcEndpointsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to purchase Amazon OpenSearch Service Reserved
         * Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PurchaseReservedInstanceOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedInstanceOfferingOutcome PurchaseReservedInstanceOffering(const Model::PurchaseReservedInstanceOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseReservedInstanceOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedInstanceOfferingOutcomeCallable PurchaseReservedInstanceOfferingCallable(const Model::PurchaseReservedInstanceOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseReservedInstanceOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedInstanceOfferingAsync(const Model::PurchaseReservedInstanceOfferingRequest& request, const PurchaseReservedInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the remote Amazon OpenSearch Service domain owner to reject an inbound
         * cross-cluster connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RejectInboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInboundConnectionOutcome RejectInboundConnection(const Model::RejectInboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for RejectInboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInboundConnectionOutcomeCallable RejectInboundConnectionCallable(const Model::RejectInboundConnectionRequest& request) const;

        /**
         * An Async wrapper for RejectInboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectInboundConnectionAsync(const Model::RejectInboundConnectionRequest& request, const RejectInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified set of tags from an Amazon OpenSearch Service domain.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-awsresorcetagging">
         * Tagging Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes access to an Amazon OpenSearch Service domain that was provided
         * through an interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RevokeVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeVpcEndpointAccessOutcome RevokeVpcEndpointAccess(const Model::RevokeVpcEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for RevokeVpcEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeVpcEndpointAccessOutcomeCallable RevokeVpcEndpointAccessCallable(const Model::RevokeVpcEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for RevokeVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeVpcEndpointAccessAsync(const Model::RevokeVpcEndpointAccessRequest& request, const RevokeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules a service software update for an Amazon OpenSearch Service domain.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">Service
         * software updates in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StartServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartServiceSoftwareUpdateOutcome StartServiceSoftwareUpdate(const Model::StartServiceSoftwareUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartServiceSoftwareUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartServiceSoftwareUpdateOutcomeCallable StartServiceSoftwareUpdateCallable(const Model::StartServiceSoftwareUpdateRequest& request) const;

        /**
         * An Async wrapper for StartServiceSoftwareUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartServiceSoftwareUpdateAsync(const Model::StartServiceSoftwareUpdateRequest& request, const StartServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the cluster configuration of the specified Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainConfigOutcome UpdateDomainConfig(const Model::UpdateDomainConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainConfigOutcomeCallable UpdateDomainConfigCallable(const Model::UpdateDomainConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateDomainConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainConfigAsync(const Model::UpdateDomainConfigRequest& request, const UpdateDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a package for use with Amazon OpenSearch Service domains. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageOutcome UpdatePackage(const Model::UpdatePackageRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePackageOutcomeCallable UpdatePackageCallable(const Model::UpdatePackageRequest& request) const;

        /**
         * An Async wrapper for UpdatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePackageAsync(const Model::UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an Amazon OpenSearch Service-managed interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcEndpointOutcome UpdateVpcEndpoint(const Model::UpdateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVpcEndpointOutcomeCallable UpdateVpcEndpointCallable(const Model::UpdateVpcEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVpcEndpointAsync(const Model::UpdateVpcEndpointRequest& request, const UpdateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to either upgrade your Amazon OpenSearch Service domain or perform
         * an upgrade eligibility check to a compatible version of OpenSearch or
         * Elasticsearch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeDomainOutcome UpgradeDomain(const Model::UpgradeDomainRequest& request) const;

        /**
         * A Callable wrapper for UpgradeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpgradeDomainOutcomeCallable UpgradeDomainCallable(const Model::UpgradeDomainRequest& request) const;

        /**
         * An Async wrapper for UpgradeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpgradeDomainAsync(const Model::UpgradeDomainRequest& request, const UpgradeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OpenSearchServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchServiceClient>;
      void init(const OpenSearchServiceClientConfiguration& clientConfiguration);

      OpenSearchServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OpenSearchServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace OpenSearchService
} // namespace Aws
