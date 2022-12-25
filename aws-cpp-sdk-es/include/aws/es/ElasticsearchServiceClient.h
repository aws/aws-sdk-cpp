/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/ElasticsearchServiceServiceClientModel.h>

namespace Aws
{
namespace ElasticsearchService
{
  /**
   * <fullname>Amazon Elasticsearch Configuration Service</fullname> <p>Use the
   * Amazon Elasticsearch Configuration API to create, configure, and manage
   * Elasticsearch domains.</p> <p>For sample code that uses the Configuration API,
   * see the <a
   * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
   * Elasticsearch Service Developer Guide</a>. The guide also contains <a
   * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample
   * code for sending signed HTTP requests to the Elasticsearch APIs</a>.</p> <p>The
   * endpoint for configuration service requests is region-specific:
   * es.<i>region</i>.amazonaws.com. For example, es.us-east-1.amazonaws.com. For a
   * current list of supported regions and endpoints, see <a
   * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions"
   * target="_blank">Regions and Endpoints</a>.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ElasticsearchServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticsearchServiceClient(const Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration = Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration(),
                                   std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticsearchServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration = Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticsearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticsearchServiceEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration = Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticsearchServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticsearchServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticsearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ElasticsearchServiceClient();

        /**
         * <p>Allows the destination domain owner to accept an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AcceptInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInboundCrossClusterSearchConnectionOutcome AcceptInboundCrossClusterSearchConnection(const Model::AcceptInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * A Callable wrapper for AcceptInboundCrossClusterSearchConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInboundCrossClusterSearchConnectionOutcomeCallable AcceptInboundCrossClusterSearchConnectionCallable(const Model::AcceptInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * An Async wrapper for AcceptInboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInboundCrossClusterSearchConnectionAsync(const Model::AcceptInboundCrossClusterSearchConnectionRequest& request, const AcceptInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches tags to an existing Elasticsearch domain. Tags are a set of
         * case-sensitive key value pairs. An Elasticsearch domain may have up to 10 tags.
         * See <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-awsresorcetagging"
         * target="_blank"> Tagging Amazon Elasticsearch Service Domains for more
         * information.</a></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AddTags">AWS API
         * Reference</a></p>
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
         * <p>Associates a package with an Amazon ES domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AssociatePackage">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AuthorizeVpcEndpointAccess">AWS
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
         * <p>Cancels a scheduled service software update for an Amazon ES domain. You can
         * only perform this operation before the <code>AutomatedUpdateDate</code> and when
         * the <code>UpdateStatus</code> is in the <code>PENDING_UPDATE</code>
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelElasticsearchServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelElasticsearchServiceSoftwareUpdateOutcome CancelElasticsearchServiceSoftwareUpdate(const Model::CancelElasticsearchServiceSoftwareUpdateRequest& request) const;

        /**
         * A Callable wrapper for CancelElasticsearchServiceSoftwareUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelElasticsearchServiceSoftwareUpdateOutcomeCallable CancelElasticsearchServiceSoftwareUpdateCallable(const Model::CancelElasticsearchServiceSoftwareUpdateRequest& request) const;

        /**
         * An Async wrapper for CancelElasticsearchServiceSoftwareUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelElasticsearchServiceSoftwareUpdateAsync(const Model::CancelElasticsearchServiceSoftwareUpdateRequest& request, const CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Elasticsearch domain. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
         * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
         * Elasticsearch Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateElasticsearchDomainOutcome CreateElasticsearchDomain(const Model::CreateElasticsearchDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateElasticsearchDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateElasticsearchDomainOutcomeCallable CreateElasticsearchDomainCallable(const Model::CreateElasticsearchDomainRequest& request) const;

        /**
         * An Async wrapper for CreateElasticsearchDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateElasticsearchDomainAsync(const Model::CreateElasticsearchDomainRequest& request, const CreateElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new cross-cluster search connection from a source domain to a
         * destination domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateOutboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutboundCrossClusterSearchConnectionOutcome CreateOutboundCrossClusterSearchConnection(const Model::CreateOutboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateOutboundCrossClusterSearchConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOutboundCrossClusterSearchConnectionOutcomeCallable CreateOutboundCrossClusterSearchConnectionCallable(const Model::CreateOutboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateOutboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOutboundCrossClusterSearchConnectionAsync(const Model::CreateOutboundCrossClusterSearchConnectionRequest& request, const CreateOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreatePackage">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateVpcEndpoint">AWS
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
         * <p>Permanently deletes the specified Elasticsearch domain and all of its data.
         * Once a domain is deleted, it cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteElasticsearchDomainOutcome DeleteElasticsearchDomain(const Model::DeleteElasticsearchDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteElasticsearchDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteElasticsearchDomainOutcomeCallable DeleteElasticsearchDomainCallable(const Model::DeleteElasticsearchDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteElasticsearchDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteElasticsearchDomainAsync(const Model::DeleteElasticsearchDomainRequest& request, const DeleteElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the service-linked role that Elasticsearch Service uses to manage and
         * maintain VPC domains. Role deletion will fail if any existing VPC domains use
         * the role. You must delete any such Elasticsearch domains before deleting the
         * role. See <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-enabling-slr"
         * target="_blank">Deleting Elasticsearch Service Role</a> in <i>VPC Endpoints for
         * Amazon Elasticsearch Service Domains</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchServiceRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteElasticsearchServiceRoleOutcome DeleteElasticsearchServiceRole() const;

        /**
         * A Callable wrapper for DeleteElasticsearchServiceRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteElasticsearchServiceRoleOutcomeCallable DeleteElasticsearchServiceRoleCallable() const;

        /**
         * An Async wrapper for DeleteElasticsearchServiceRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteElasticsearchServiceRoleAsync(const DeleteElasticsearchServiceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Allows the destination domain owner to delete an existing inbound
         * cross-cluster search connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInboundCrossClusterSearchConnectionOutcome DeleteInboundCrossClusterSearchConnection(const Model::DeleteInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteInboundCrossClusterSearchConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInboundCrossClusterSearchConnectionOutcomeCallable DeleteInboundCrossClusterSearchConnectionCallable(const Model::DeleteInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteInboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInboundCrossClusterSearchConnectionAsync(const Model::DeleteInboundCrossClusterSearchConnectionRequest& request, const DeleteInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the source domain owner to delete an existing outbound cross-cluster
         * search connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteOutboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutboundCrossClusterSearchConnectionOutcome DeleteOutboundCrossClusterSearchConnection(const Model::DeleteOutboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteOutboundCrossClusterSearchConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOutboundCrossClusterSearchConnectionOutcomeCallable DeleteOutboundCrossClusterSearchConnectionCallable(const Model::DeleteOutboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteOutboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOutboundCrossClusterSearchConnectionAsync(const Model::DeleteOutboundCrossClusterSearchConnectionRequest& request, const DeleteOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackage">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteVpcEndpoint">AWS
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
         * <p>Provides scheduled Auto-Tune action details for the Elasticsearch domain,
         * such as Auto-Tune action type, description, severity, and scheduled
         * date.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeDomainAutoTunes">AWS
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
         * <p>Returns information about the current blue/green deployment happening on a
         * domain, including a change ID, status, and progress stages.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeDomainChangeProgress">AWS
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
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domain, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticsearchDomainOutcome DescribeElasticsearchDomain(const Model::DescribeElasticsearchDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeElasticsearchDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticsearchDomainOutcomeCallable DescribeElasticsearchDomainCallable(const Model::DescribeElasticsearchDomainRequest& request) const;

        /**
         * An Async wrapper for DescribeElasticsearchDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticsearchDomainAsync(const Model::DescribeElasticsearchDomainRequest& request, const DescribeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides cluster configuration information about the specified Elasticsearch
         * domain, such as the state, creation date, update version, and update date for
         * cluster options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticsearchDomainConfigOutcome DescribeElasticsearchDomainConfig(const Model::DescribeElasticsearchDomainConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeElasticsearchDomainConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticsearchDomainConfigOutcomeCallable DescribeElasticsearchDomainConfigCallable(const Model::DescribeElasticsearchDomainConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeElasticsearchDomainConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticsearchDomainConfigAsync(const Model::DescribeElasticsearchDomainConfigRequest& request, const DescribeElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domains, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticsearchDomainsOutcome DescribeElasticsearchDomains(const Model::DescribeElasticsearchDomainsRequest& request) const;

        /**
         * A Callable wrapper for DescribeElasticsearchDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticsearchDomainsOutcomeCallable DescribeElasticsearchDomainsCallable(const Model::DescribeElasticsearchDomainsRequest& request) const;

        /**
         * An Async wrapper for DescribeElasticsearchDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticsearchDomainsAsync(const Model::DescribeElasticsearchDomainsRequest& request, const DescribeElasticsearchDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describe Elasticsearch Limits for a given InstanceType and
         * ElasticsearchVersion. When modifying existing Domain, specify the <code>
         * <a>DomainName</a> </code> to know what Limits are supported for modifying.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchInstanceTypeLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticsearchInstanceTypeLimitsOutcome DescribeElasticsearchInstanceTypeLimits(const Model::DescribeElasticsearchInstanceTypeLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeElasticsearchInstanceTypeLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticsearchInstanceTypeLimitsOutcomeCallable DescribeElasticsearchInstanceTypeLimitsCallable(const Model::DescribeElasticsearchInstanceTypeLimitsRequest& request) const;

        /**
         * An Async wrapper for DescribeElasticsearchInstanceTypeLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticsearchInstanceTypeLimitsAsync(const Model::DescribeElasticsearchInstanceTypeLimitsRequest& request, const DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the inbound cross-cluster search connections for a destination
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeInboundCrossClusterSearchConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInboundCrossClusterSearchConnectionsOutcome DescribeInboundCrossClusterSearchConnections(const Model::DescribeInboundCrossClusterSearchConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInboundCrossClusterSearchConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInboundCrossClusterSearchConnectionsOutcomeCallable DescribeInboundCrossClusterSearchConnectionsCallable(const Model::DescribeInboundCrossClusterSearchConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeInboundCrossClusterSearchConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInboundCrossClusterSearchConnectionsAsync(const Model::DescribeInboundCrossClusterSearchConnectionsRequest& request, const DescribeInboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the outbound cross-cluster search connections for a source
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeOutboundCrossClusterSearchConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOutboundCrossClusterSearchConnectionsOutcome DescribeOutboundCrossClusterSearchConnections(const Model::DescribeOutboundCrossClusterSearchConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOutboundCrossClusterSearchConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOutboundCrossClusterSearchConnectionsOutcomeCallable DescribeOutboundCrossClusterSearchConnectionsCallable(const Model::DescribeOutboundCrossClusterSearchConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeOutboundCrossClusterSearchConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOutboundCrossClusterSearchConnectionsAsync(const Model::DescribeOutboundCrossClusterSearchConnectionsRequest& request, const DescribeOutboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes all packages available to Amazon ES. Includes options for
         * filtering, limiting the number of results, and pagination.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribePackages">AWS
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
         * <p>Lists available reserved Elasticsearch instance offerings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstanceOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedElasticsearchInstanceOfferingsOutcome DescribeReservedElasticsearchInstanceOfferings(const Model::DescribeReservedElasticsearchInstanceOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedElasticsearchInstanceOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedElasticsearchInstanceOfferingsOutcomeCallable DescribeReservedElasticsearchInstanceOfferingsCallable(const Model::DescribeReservedElasticsearchInstanceOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedElasticsearchInstanceOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedElasticsearchInstanceOfferingsAsync(const Model::DescribeReservedElasticsearchInstanceOfferingsRequest& request, const DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about reserved Elasticsearch instances for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedElasticsearchInstancesOutcome DescribeReservedElasticsearchInstances(const Model::DescribeReservedElasticsearchInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedElasticsearchInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedElasticsearchInstancesOutcomeCallable DescribeReservedElasticsearchInstancesCallable(const Model::DescribeReservedElasticsearchInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedElasticsearchInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedElasticsearchInstancesAsync(const Model::DescribeReservedElasticsearchInstancesRequest& request, const DescribeReservedElasticsearchInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more Amazon OpenSearch Service-managed VPC
         * endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeVpcEndpoints">AWS
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
         * <p>Dissociates a package from the Amazon ES domain.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DissociatePackage">AWS
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
         * <p> Returns a list of upgrade compatible Elastisearch versions. You can
         * optionally pass a <code> <a>DomainName</a> </code> to get all upgrade compatible
         * Elasticsearch versions for that specific domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetCompatibleElasticsearchVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCompatibleElasticsearchVersionsOutcome GetCompatibleElasticsearchVersions(const Model::GetCompatibleElasticsearchVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetCompatibleElasticsearchVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCompatibleElasticsearchVersionsOutcomeCallable GetCompatibleElasticsearchVersionsCallable(const Model::GetCompatibleElasticsearchVersionsRequest& request) const;

        /**
         * An Async wrapper for GetCompatibleElasticsearchVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCompatibleElasticsearchVersionsAsync(const Model::GetCompatibleElasticsearchVersionsRequest& request, const GetCompatibleElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of versions of the package, along with their creation time and
         * commit message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetPackageVersionHistory">AWS
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
         * <p>Retrieves the complete history of the last 10 upgrades that were performed on
         * the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeHistory">AWS
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
         * <p>Retrieves the latest status of the last upgrade or upgrade eligibility check
         * that was performed on the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeStatus">AWS
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
         * <p>Returns the name of all Elasticsearch domains owned by the current user's
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNames">AWS
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
         * <p>Lists all Amazon ES domains associated with the package.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainsForPackage">AWS
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
         * <p>List all Elasticsearch instance types that are supported for given
         * ElasticsearchVersion</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListElasticsearchInstanceTypesOutcome ListElasticsearchInstanceTypes(const Model::ListElasticsearchInstanceTypesRequest& request) const;

        /**
         * A Callable wrapper for ListElasticsearchInstanceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListElasticsearchInstanceTypesOutcomeCallable ListElasticsearchInstanceTypesCallable(const Model::ListElasticsearchInstanceTypesRequest& request) const;

        /**
         * An Async wrapper for ListElasticsearchInstanceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListElasticsearchInstanceTypesAsync(const Model::ListElasticsearchInstanceTypesRequest& request, const ListElasticsearchInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all supported Elasticsearch versions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListElasticsearchVersionsOutcome ListElasticsearchVersions(const Model::ListElasticsearchVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListElasticsearchVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListElasticsearchVersionsOutcomeCallable ListElasticsearchVersionsCallable(const Model::ListElasticsearchVersionsRequest& request) const;

        /**
         * An Async wrapper for ListElasticsearchVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListElasticsearchVersionsAsync(const Model::ListElasticsearchVersionsRequest& request, const ListElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all packages associated with the Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListPackagesForDomain">AWS
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
         * <p>Returns all tags for the given Elasticsearch domain.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListTags">AWS API
         * Reference</a></p>
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
         * <p>Retrieves information about each principal that is allowed to access a given
         * Amazon OpenSearch Service domain through the use of an interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpointAccess">AWS
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
         * account and Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpoints">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpointsForDomain">AWS
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
         * <p>Allows you to purchase reserved Elasticsearch instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PurchaseReservedElasticsearchInstanceOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedElasticsearchInstanceOfferingOutcome PurchaseReservedElasticsearchInstanceOffering(const Model::PurchaseReservedElasticsearchInstanceOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseReservedElasticsearchInstanceOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedElasticsearchInstanceOfferingOutcomeCallable PurchaseReservedElasticsearchInstanceOfferingCallable(const Model::PurchaseReservedElasticsearchInstanceOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseReservedElasticsearchInstanceOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedElasticsearchInstanceOfferingAsync(const Model::PurchaseReservedElasticsearchInstanceOfferingRequest& request, const PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the destination domain owner to reject an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RejectInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInboundCrossClusterSearchConnectionOutcome RejectInboundCrossClusterSearchConnection(const Model::RejectInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * A Callable wrapper for RejectInboundCrossClusterSearchConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInboundCrossClusterSearchConnectionOutcomeCallable RejectInboundCrossClusterSearchConnectionCallable(const Model::RejectInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * An Async wrapper for RejectInboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectInboundCrossClusterSearchConnectionAsync(const Model::RejectInboundCrossClusterSearchConnectionRequest& request, const RejectInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified set of tags from the specified Elasticsearch
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RemoveTags">AWS API
         * Reference</a></p>
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RevokeVpcEndpointAccess">AWS
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
         * <p>Schedules a service software update for an Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/StartElasticsearchServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartElasticsearchServiceSoftwareUpdateOutcome StartElasticsearchServiceSoftwareUpdate(const Model::StartElasticsearchServiceSoftwareUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartElasticsearchServiceSoftwareUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartElasticsearchServiceSoftwareUpdateOutcomeCallable StartElasticsearchServiceSoftwareUpdateCallable(const Model::StartElasticsearchServiceSoftwareUpdateRequest& request) const;

        /**
         * An Async wrapper for StartElasticsearchServiceSoftwareUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartElasticsearchServiceSoftwareUpdateAsync(const Model::StartElasticsearchServiceSoftwareUpdateRequest& request, const StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the cluster configuration of the specified Elasticsearch domain,
         * setting as setting the instance type and the number of instances. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateElasticsearchDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateElasticsearchDomainConfigOutcome UpdateElasticsearchDomainConfig(const Model::UpdateElasticsearchDomainConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateElasticsearchDomainConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateElasticsearchDomainConfigOutcomeCallable UpdateElasticsearchDomainConfigCallable(const Model::UpdateElasticsearchDomainConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateElasticsearchDomainConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateElasticsearchDomainConfigAsync(const Model::UpdateElasticsearchDomainConfigRequest& request, const UpdateElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdatePackage">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateVpcEndpoint">AWS
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
         * <p>Allows you to either upgrade your domain or perform an Upgrade eligibility
         * check to a compatible Elasticsearch version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeElasticsearchDomainOutcome UpgradeElasticsearchDomain(const Model::UpgradeElasticsearchDomainRequest& request) const;

        /**
         * A Callable wrapper for UpgradeElasticsearchDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpgradeElasticsearchDomainOutcomeCallable UpgradeElasticsearchDomainCallable(const Model::UpgradeElasticsearchDomainRequest& request) const;

        /**
         * An Async wrapper for UpgradeElasticsearchDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpgradeElasticsearchDomainAsync(const Model::UpgradeElasticsearchDomainRequest& request, const UpgradeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ElasticsearchServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ElasticsearchServiceClient>;
      void init(const ElasticsearchServiceClientConfiguration& clientConfiguration);

      ElasticsearchServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ElasticsearchServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ElasticsearchService
} // namespace Aws
