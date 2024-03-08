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
#include <aws/es/model/DeleteElasticsearchServiceRoleRequest.h>

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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ElasticsearchServiceClientConfiguration ClientConfigurationType;
      typedef ElasticsearchServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticsearchServiceClient(const Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration = Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration(),
                                   std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticsearchServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration& clientConfiguration = Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticsearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<ElasticsearchServiceEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AcceptInboundCrossClusterSearchConnectionRequestT = Model::AcceptInboundCrossClusterSearchConnectionRequest>
        Model::AcceptInboundCrossClusterSearchConnectionOutcomeCallable AcceptInboundCrossClusterSearchConnectionCallable(const AcceptInboundCrossClusterSearchConnectionRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnection, request);
        }

        /**
         * An Async wrapper for AcceptInboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptInboundCrossClusterSearchConnectionRequestT = Model::AcceptInboundCrossClusterSearchConnectionRequest>
        void AcceptInboundCrossClusterSearchConnectionAsync(const AcceptInboundCrossClusterSearchConnectionRequestT& request, const AcceptInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::AcceptInboundCrossClusterSearchConnection, request, handler, context);
        }

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
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        Model::AddTagsOutcomeCallable AddTagsCallable(const AddTagsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::AddTags, request);
        }

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        void AddTagsAsync(const AddTagsRequestT& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::AddTags, request, handler, context);
        }

        /**
         * <p>Associates a package with an Amazon ES domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AssociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePackageOutcome AssociatePackage(const Model::AssociatePackageRequest& request) const;

        /**
         * A Callable wrapper for AssociatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePackageRequestT = Model::AssociatePackageRequest>
        Model::AssociatePackageOutcomeCallable AssociatePackageCallable(const AssociatePackageRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::AssociatePackage, request);
        }

        /**
         * An Async wrapper for AssociatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePackageRequestT = Model::AssociatePackageRequest>
        void AssociatePackageAsync(const AssociatePackageRequestT& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::AssociatePackage, request, handler, context);
        }

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
        template<typename AuthorizeVpcEndpointAccessRequestT = Model::AuthorizeVpcEndpointAccessRequest>
        Model::AuthorizeVpcEndpointAccessOutcomeCallable AuthorizeVpcEndpointAccessCallable(const AuthorizeVpcEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::AuthorizeVpcEndpointAccess, request);
        }

        /**
         * An Async wrapper for AuthorizeVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AuthorizeVpcEndpointAccessRequestT = Model::AuthorizeVpcEndpointAccessRequest>
        void AuthorizeVpcEndpointAccessAsync(const AuthorizeVpcEndpointAccessRequestT& request, const AuthorizeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::AuthorizeVpcEndpointAccess, request, handler, context);
        }

        /**
         * <p>Cancels a pending configuration change on an Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelDomainConfigChange">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDomainConfigChangeOutcome CancelDomainConfigChange(const Model::CancelDomainConfigChangeRequest& request) const;

        /**
         * A Callable wrapper for CancelDomainConfigChange that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelDomainConfigChangeRequestT = Model::CancelDomainConfigChangeRequest>
        Model::CancelDomainConfigChangeOutcomeCallable CancelDomainConfigChangeCallable(const CancelDomainConfigChangeRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::CancelDomainConfigChange, request);
        }

        /**
         * An Async wrapper for CancelDomainConfigChange that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelDomainConfigChangeRequestT = Model::CancelDomainConfigChangeRequest>
        void CancelDomainConfigChangeAsync(const CancelDomainConfigChangeRequestT& request, const CancelDomainConfigChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::CancelDomainConfigChange, request, handler, context);
        }

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
        template<typename CancelElasticsearchServiceSoftwareUpdateRequestT = Model::CancelElasticsearchServiceSoftwareUpdateRequest>
        Model::CancelElasticsearchServiceSoftwareUpdateOutcomeCallable CancelElasticsearchServiceSoftwareUpdateCallable(const CancelElasticsearchServiceSoftwareUpdateRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate, request);
        }

        /**
         * An Async wrapper for CancelElasticsearchServiceSoftwareUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelElasticsearchServiceSoftwareUpdateRequestT = Model::CancelElasticsearchServiceSoftwareUpdateRequest>
        void CancelElasticsearchServiceSoftwareUpdateAsync(const CancelElasticsearchServiceSoftwareUpdateRequestT& request, const CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::CancelElasticsearchServiceSoftwareUpdate, request, handler, context);
        }

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
        template<typename CreateElasticsearchDomainRequestT = Model::CreateElasticsearchDomainRequest>
        Model::CreateElasticsearchDomainOutcomeCallable CreateElasticsearchDomainCallable(const CreateElasticsearchDomainRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::CreateElasticsearchDomain, request);
        }

        /**
         * An Async wrapper for CreateElasticsearchDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateElasticsearchDomainRequestT = Model::CreateElasticsearchDomainRequest>
        void CreateElasticsearchDomainAsync(const CreateElasticsearchDomainRequestT& request, const CreateElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::CreateElasticsearchDomain, request, handler, context);
        }

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
        template<typename CreateOutboundCrossClusterSearchConnectionRequestT = Model::CreateOutboundCrossClusterSearchConnectionRequest>
        Model::CreateOutboundCrossClusterSearchConnectionOutcomeCallable CreateOutboundCrossClusterSearchConnectionCallable(const CreateOutboundCrossClusterSearchConnectionRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnection, request);
        }

        /**
         * An Async wrapper for CreateOutboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOutboundCrossClusterSearchConnectionRequestT = Model::CreateOutboundCrossClusterSearchConnectionRequest>
        void CreateOutboundCrossClusterSearchConnectionAsync(const CreateOutboundCrossClusterSearchConnectionRequestT& request, const CreateOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::CreateOutboundCrossClusterSearchConnection, request, handler, context);
        }

        /**
         * <p>Create a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;

        /**
         * A Callable wrapper for CreatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePackageRequestT = Model::CreatePackageRequest>
        Model::CreatePackageOutcomeCallable CreatePackageCallable(const CreatePackageRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::CreatePackage, request);
        }

        /**
         * An Async wrapper for CreatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePackageRequestT = Model::CreatePackageRequest>
        void CreatePackageAsync(const CreatePackageRequestT& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::CreatePackage, request, handler, context);
        }

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
        template<typename CreateVpcEndpointRequestT = Model::CreateVpcEndpointRequest>
        Model::CreateVpcEndpointOutcomeCallable CreateVpcEndpointCallable(const CreateVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::CreateVpcEndpoint, request);
        }

        /**
         * An Async wrapper for CreateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcEndpointRequestT = Model::CreateVpcEndpointRequest>
        void CreateVpcEndpointAsync(const CreateVpcEndpointRequestT& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::CreateVpcEndpoint, request, handler, context);
        }

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
        template<typename DeleteElasticsearchDomainRequestT = Model::DeleteElasticsearchDomainRequest>
        Model::DeleteElasticsearchDomainOutcomeCallable DeleteElasticsearchDomainCallable(const DeleteElasticsearchDomainRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DeleteElasticsearchDomain, request);
        }

        /**
         * An Async wrapper for DeleteElasticsearchDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteElasticsearchDomainRequestT = Model::DeleteElasticsearchDomainRequest>
        void DeleteElasticsearchDomainAsync(const DeleteElasticsearchDomainRequestT& request, const DeleteElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DeleteElasticsearchDomain, request, handler, context);
        }

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
        virtual Model::DeleteElasticsearchServiceRoleOutcome DeleteElasticsearchServiceRole(const Model::DeleteElasticsearchServiceRoleRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteElasticsearchServiceRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteElasticsearchServiceRoleRequestT = Model::DeleteElasticsearchServiceRoleRequest>
        Model::DeleteElasticsearchServiceRoleOutcomeCallable DeleteElasticsearchServiceRoleCallable(const DeleteElasticsearchServiceRoleRequestT& request = {}) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DeleteElasticsearchServiceRole, request);
        }

        /**
         * An Async wrapper for DeleteElasticsearchServiceRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteElasticsearchServiceRoleRequestT = Model::DeleteElasticsearchServiceRoleRequest>
        void DeleteElasticsearchServiceRoleAsync(const DeleteElasticsearchServiceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteElasticsearchServiceRoleRequestT& request = {}) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DeleteElasticsearchServiceRole, request, handler, context);
        }

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
        template<typename DeleteInboundCrossClusterSearchConnectionRequestT = Model::DeleteInboundCrossClusterSearchConnectionRequest>
        Model::DeleteInboundCrossClusterSearchConnectionOutcomeCallable DeleteInboundCrossClusterSearchConnectionCallable(const DeleteInboundCrossClusterSearchConnectionRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnection, request);
        }

        /**
         * An Async wrapper for DeleteInboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInboundCrossClusterSearchConnectionRequestT = Model::DeleteInboundCrossClusterSearchConnectionRequest>
        void DeleteInboundCrossClusterSearchConnectionAsync(const DeleteInboundCrossClusterSearchConnectionRequestT& request, const DeleteInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DeleteInboundCrossClusterSearchConnection, request, handler, context);
        }

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
        template<typename DeleteOutboundCrossClusterSearchConnectionRequestT = Model::DeleteOutboundCrossClusterSearchConnectionRequest>
        Model::DeleteOutboundCrossClusterSearchConnectionOutcomeCallable DeleteOutboundCrossClusterSearchConnectionCallable(const DeleteOutboundCrossClusterSearchConnectionRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnection, request);
        }

        /**
         * An Async wrapper for DeleteOutboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOutboundCrossClusterSearchConnectionRequestT = Model::DeleteOutboundCrossClusterSearchConnectionRequest>
        void DeleteOutboundCrossClusterSearchConnectionAsync(const DeleteOutboundCrossClusterSearchConnectionRequestT& request, const DeleteOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DeleteOutboundCrossClusterSearchConnection, request, handler, context);
        }

        /**
         * <p>Delete the package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;

        /**
         * A Callable wrapper for DeletePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        Model::DeletePackageOutcomeCallable DeletePackageCallable(const DeletePackageRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DeletePackage, request);
        }

        /**
         * An Async wrapper for DeletePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        void DeletePackageAsync(const DeletePackageRequestT& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DeletePackage, request, handler, context);
        }

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
        template<typename DeleteVpcEndpointRequestT = Model::DeleteVpcEndpointRequest>
        Model::DeleteVpcEndpointOutcomeCallable DeleteVpcEndpointCallable(const DeleteVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DeleteVpcEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcEndpointRequestT = Model::DeleteVpcEndpointRequest>
        void DeleteVpcEndpointAsync(const DeleteVpcEndpointRequestT& request, const DeleteVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DeleteVpcEndpoint, request, handler, context);
        }

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
        template<typename DescribeDomainAutoTunesRequestT = Model::DescribeDomainAutoTunesRequest>
        Model::DescribeDomainAutoTunesOutcomeCallable DescribeDomainAutoTunesCallable(const DescribeDomainAutoTunesRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeDomainAutoTunes, request);
        }

        /**
         * An Async wrapper for DescribeDomainAutoTunes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainAutoTunesRequestT = Model::DescribeDomainAutoTunesRequest>
        void DescribeDomainAutoTunesAsync(const DescribeDomainAutoTunesRequestT& request, const DescribeDomainAutoTunesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeDomainAutoTunes, request, handler, context);
        }

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
        template<typename DescribeDomainChangeProgressRequestT = Model::DescribeDomainChangeProgressRequest>
        Model::DescribeDomainChangeProgressOutcomeCallable DescribeDomainChangeProgressCallable(const DescribeDomainChangeProgressRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeDomainChangeProgress, request);
        }

        /**
         * An Async wrapper for DescribeDomainChangeProgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainChangeProgressRequestT = Model::DescribeDomainChangeProgressRequest>
        void DescribeDomainChangeProgressAsync(const DescribeDomainChangeProgressRequestT& request, const DescribeDomainChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeDomainChangeProgress, request, handler, context);
        }

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
        template<typename DescribeElasticsearchDomainRequestT = Model::DescribeElasticsearchDomainRequest>
        Model::DescribeElasticsearchDomainOutcomeCallable DescribeElasticsearchDomainCallable(const DescribeElasticsearchDomainRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeElasticsearchDomain, request);
        }

        /**
         * An Async wrapper for DescribeElasticsearchDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeElasticsearchDomainRequestT = Model::DescribeElasticsearchDomainRequest>
        void DescribeElasticsearchDomainAsync(const DescribeElasticsearchDomainRequestT& request, const DescribeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeElasticsearchDomain, request, handler, context);
        }

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
        template<typename DescribeElasticsearchDomainConfigRequestT = Model::DescribeElasticsearchDomainConfigRequest>
        Model::DescribeElasticsearchDomainConfigOutcomeCallable DescribeElasticsearchDomainConfigCallable(const DescribeElasticsearchDomainConfigRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeElasticsearchDomainConfig, request);
        }

        /**
         * An Async wrapper for DescribeElasticsearchDomainConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeElasticsearchDomainConfigRequestT = Model::DescribeElasticsearchDomainConfigRequest>
        void DescribeElasticsearchDomainConfigAsync(const DescribeElasticsearchDomainConfigRequestT& request, const DescribeElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeElasticsearchDomainConfig, request, handler, context);
        }

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
        template<typename DescribeElasticsearchDomainsRequestT = Model::DescribeElasticsearchDomainsRequest>
        Model::DescribeElasticsearchDomainsOutcomeCallable DescribeElasticsearchDomainsCallable(const DescribeElasticsearchDomainsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeElasticsearchDomains, request);
        }

        /**
         * An Async wrapper for DescribeElasticsearchDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeElasticsearchDomainsRequestT = Model::DescribeElasticsearchDomainsRequest>
        void DescribeElasticsearchDomainsAsync(const DescribeElasticsearchDomainsRequestT& request, const DescribeElasticsearchDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeElasticsearchDomains, request, handler, context);
        }

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
        template<typename DescribeElasticsearchInstanceTypeLimitsRequestT = Model::DescribeElasticsearchInstanceTypeLimitsRequest>
        Model::DescribeElasticsearchInstanceTypeLimitsOutcomeCallable DescribeElasticsearchInstanceTypeLimitsCallable(const DescribeElasticsearchInstanceTypeLimitsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimits, request);
        }

        /**
         * An Async wrapper for DescribeElasticsearchInstanceTypeLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeElasticsearchInstanceTypeLimitsRequestT = Model::DescribeElasticsearchInstanceTypeLimitsRequest>
        void DescribeElasticsearchInstanceTypeLimitsAsync(const DescribeElasticsearchInstanceTypeLimitsRequestT& request, const DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeElasticsearchInstanceTypeLimits, request, handler, context);
        }

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
        template<typename DescribeInboundCrossClusterSearchConnectionsRequestT = Model::DescribeInboundCrossClusterSearchConnectionsRequest>
        Model::DescribeInboundCrossClusterSearchConnectionsOutcomeCallable DescribeInboundCrossClusterSearchConnectionsCallable(const DescribeInboundCrossClusterSearchConnectionsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnections, request);
        }

        /**
         * An Async wrapper for DescribeInboundCrossClusterSearchConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInboundCrossClusterSearchConnectionsRequestT = Model::DescribeInboundCrossClusterSearchConnectionsRequest>
        void DescribeInboundCrossClusterSearchConnectionsAsync(const DescribeInboundCrossClusterSearchConnectionsRequestT& request, const DescribeInboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeInboundCrossClusterSearchConnections, request, handler, context);
        }

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
        template<typename DescribeOutboundCrossClusterSearchConnectionsRequestT = Model::DescribeOutboundCrossClusterSearchConnectionsRequest>
        Model::DescribeOutboundCrossClusterSearchConnectionsOutcomeCallable DescribeOutboundCrossClusterSearchConnectionsCallable(const DescribeOutboundCrossClusterSearchConnectionsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnections, request);
        }

        /**
         * An Async wrapper for DescribeOutboundCrossClusterSearchConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOutboundCrossClusterSearchConnectionsRequestT = Model::DescribeOutboundCrossClusterSearchConnectionsRequest>
        void DescribeOutboundCrossClusterSearchConnectionsAsync(const DescribeOutboundCrossClusterSearchConnectionsRequestT& request, const DescribeOutboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeOutboundCrossClusterSearchConnections, request, handler, context);
        }

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
        template<typename DescribePackagesRequestT = Model::DescribePackagesRequest>
        Model::DescribePackagesOutcomeCallable DescribePackagesCallable(const DescribePackagesRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribePackages, request);
        }

        /**
         * An Async wrapper for DescribePackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackagesRequestT = Model::DescribePackagesRequest>
        void DescribePackagesAsync(const DescribePackagesRequestT& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribePackages, request, handler, context);
        }

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
        template<typename DescribeReservedElasticsearchInstanceOfferingsRequestT = Model::DescribeReservedElasticsearchInstanceOfferingsRequest>
        Model::DescribeReservedElasticsearchInstanceOfferingsOutcomeCallable DescribeReservedElasticsearchInstanceOfferingsCallable(const DescribeReservedElasticsearchInstanceOfferingsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings, request);
        }

        /**
         * An Async wrapper for DescribeReservedElasticsearchInstanceOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservedElasticsearchInstanceOfferingsRequestT = Model::DescribeReservedElasticsearchInstanceOfferingsRequest>
        void DescribeReservedElasticsearchInstanceOfferingsAsync(const DescribeReservedElasticsearchInstanceOfferingsRequestT& request, const DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeReservedElasticsearchInstanceOfferings, request, handler, context);
        }

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
        template<typename DescribeReservedElasticsearchInstancesRequestT = Model::DescribeReservedElasticsearchInstancesRequest>
        Model::DescribeReservedElasticsearchInstancesOutcomeCallable DescribeReservedElasticsearchInstancesCallable(const DescribeReservedElasticsearchInstancesRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeReservedElasticsearchInstances, request);
        }

        /**
         * An Async wrapper for DescribeReservedElasticsearchInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservedElasticsearchInstancesRequestT = Model::DescribeReservedElasticsearchInstancesRequest>
        void DescribeReservedElasticsearchInstancesAsync(const DescribeReservedElasticsearchInstancesRequestT& request, const DescribeReservedElasticsearchInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeReservedElasticsearchInstances, request, handler, context);
        }

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
        template<typename DescribeVpcEndpointsRequestT = Model::DescribeVpcEndpointsRequest>
        Model::DescribeVpcEndpointsOutcomeCallable DescribeVpcEndpointsCallable(const DescribeVpcEndpointsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DescribeVpcEndpoints, request);
        }

        /**
         * An Async wrapper for DescribeVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVpcEndpointsRequestT = Model::DescribeVpcEndpointsRequest>
        void DescribeVpcEndpointsAsync(const DescribeVpcEndpointsRequestT& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DescribeVpcEndpoints, request, handler, context);
        }

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
        template<typename DissociatePackageRequestT = Model::DissociatePackageRequest>
        Model::DissociatePackageOutcomeCallable DissociatePackageCallable(const DissociatePackageRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::DissociatePackage, request);
        }

        /**
         * An Async wrapper for DissociatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DissociatePackageRequestT = Model::DissociatePackageRequest>
        void DissociatePackageAsync(const DissociatePackageRequestT& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::DissociatePackage, request, handler, context);
        }

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
        template<typename GetCompatibleElasticsearchVersionsRequestT = Model::GetCompatibleElasticsearchVersionsRequest>
        Model::GetCompatibleElasticsearchVersionsOutcomeCallable GetCompatibleElasticsearchVersionsCallable(const GetCompatibleElasticsearchVersionsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::GetCompatibleElasticsearchVersions, request);
        }

        /**
         * An Async wrapper for GetCompatibleElasticsearchVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCompatibleElasticsearchVersionsRequestT = Model::GetCompatibleElasticsearchVersionsRequest>
        void GetCompatibleElasticsearchVersionsAsync(const GetCompatibleElasticsearchVersionsRequestT& request, const GetCompatibleElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::GetCompatibleElasticsearchVersions, request, handler, context);
        }

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
        template<typename GetPackageVersionHistoryRequestT = Model::GetPackageVersionHistoryRequest>
        Model::GetPackageVersionHistoryOutcomeCallable GetPackageVersionHistoryCallable(const GetPackageVersionHistoryRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::GetPackageVersionHistory, request);
        }

        /**
         * An Async wrapper for GetPackageVersionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPackageVersionHistoryRequestT = Model::GetPackageVersionHistoryRequest>
        void GetPackageVersionHistoryAsync(const GetPackageVersionHistoryRequestT& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::GetPackageVersionHistory, request, handler, context);
        }

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
        template<typename GetUpgradeHistoryRequestT = Model::GetUpgradeHistoryRequest>
        Model::GetUpgradeHistoryOutcomeCallable GetUpgradeHistoryCallable(const GetUpgradeHistoryRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::GetUpgradeHistory, request);
        }

        /**
         * An Async wrapper for GetUpgradeHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUpgradeHistoryRequestT = Model::GetUpgradeHistoryRequest>
        void GetUpgradeHistoryAsync(const GetUpgradeHistoryRequestT& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::GetUpgradeHistory, request, handler, context);
        }

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
        template<typename GetUpgradeStatusRequestT = Model::GetUpgradeStatusRequest>
        Model::GetUpgradeStatusOutcomeCallable GetUpgradeStatusCallable(const GetUpgradeStatusRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::GetUpgradeStatus, request);
        }

        /**
         * An Async wrapper for GetUpgradeStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUpgradeStatusRequestT = Model::GetUpgradeStatusRequest>
        void GetUpgradeStatusAsync(const GetUpgradeStatusRequestT& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::GetUpgradeStatus, request, handler, context);
        }

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
        template<typename ListDomainNamesRequestT = Model::ListDomainNamesRequest>
        Model::ListDomainNamesOutcomeCallable ListDomainNamesCallable(const ListDomainNamesRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListDomainNames, request);
        }

        /**
         * An Async wrapper for ListDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainNamesRequestT = Model::ListDomainNamesRequest>
        void ListDomainNamesAsync(const ListDomainNamesRequestT& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListDomainNames, request, handler, context);
        }

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
        template<typename ListDomainsForPackageRequestT = Model::ListDomainsForPackageRequest>
        Model::ListDomainsForPackageOutcomeCallable ListDomainsForPackageCallable(const ListDomainsForPackageRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListDomainsForPackage, request);
        }

        /**
         * An Async wrapper for ListDomainsForPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsForPackageRequestT = Model::ListDomainsForPackageRequest>
        void ListDomainsForPackageAsync(const ListDomainsForPackageRequestT& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListDomainsForPackage, request, handler, context);
        }

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
        template<typename ListElasticsearchInstanceTypesRequestT = Model::ListElasticsearchInstanceTypesRequest>
        Model::ListElasticsearchInstanceTypesOutcomeCallable ListElasticsearchInstanceTypesCallable(const ListElasticsearchInstanceTypesRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListElasticsearchInstanceTypes, request);
        }

        /**
         * An Async wrapper for ListElasticsearchInstanceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListElasticsearchInstanceTypesRequestT = Model::ListElasticsearchInstanceTypesRequest>
        void ListElasticsearchInstanceTypesAsync(const ListElasticsearchInstanceTypesRequestT& request, const ListElasticsearchInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListElasticsearchInstanceTypes, request, handler, context);
        }

        /**
         * <p>List all supported Elasticsearch versions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListElasticsearchVersionsOutcome ListElasticsearchVersions(const Model::ListElasticsearchVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListElasticsearchVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListElasticsearchVersionsRequestT = Model::ListElasticsearchVersionsRequest>
        Model::ListElasticsearchVersionsOutcomeCallable ListElasticsearchVersionsCallable(const ListElasticsearchVersionsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListElasticsearchVersions, request);
        }

        /**
         * An Async wrapper for ListElasticsearchVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListElasticsearchVersionsRequestT = Model::ListElasticsearchVersionsRequest>
        void ListElasticsearchVersionsAsync(const ListElasticsearchVersionsRequestT& request, const ListElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListElasticsearchVersions, request, handler, context);
        }

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
        template<typename ListPackagesForDomainRequestT = Model::ListPackagesForDomainRequest>
        Model::ListPackagesForDomainOutcomeCallable ListPackagesForDomainCallable(const ListPackagesForDomainRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListPackagesForDomain, request);
        }

        /**
         * An Async wrapper for ListPackagesForDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackagesForDomainRequestT = Model::ListPackagesForDomainRequest>
        void ListPackagesForDomainAsync(const ListPackagesForDomainRequestT& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListPackagesForDomain, request, handler, context);
        }

        /**
         * <p>Returns all tags for the given Elasticsearch domain.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListTags, request);
        }

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListTags, request, handler, context);
        }

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
        template<typename ListVpcEndpointAccessRequestT = Model::ListVpcEndpointAccessRequest>
        Model::ListVpcEndpointAccessOutcomeCallable ListVpcEndpointAccessCallable(const ListVpcEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListVpcEndpointAccess, request);
        }

        /**
         * An Async wrapper for ListVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcEndpointAccessRequestT = Model::ListVpcEndpointAccessRequest>
        void ListVpcEndpointAccessAsync(const ListVpcEndpointAccessRequestT& request, const ListVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListVpcEndpointAccess, request, handler, context);
        }

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
        template<typename ListVpcEndpointsRequestT = Model::ListVpcEndpointsRequest>
        Model::ListVpcEndpointsOutcomeCallable ListVpcEndpointsCallable(const ListVpcEndpointsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListVpcEndpoints, request);
        }

        /**
         * An Async wrapper for ListVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcEndpointsRequestT = Model::ListVpcEndpointsRequest>
        void ListVpcEndpointsAsync(const ListVpcEndpointsRequestT& request, const ListVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListVpcEndpoints, request, handler, context);
        }

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
        template<typename ListVpcEndpointsForDomainRequestT = Model::ListVpcEndpointsForDomainRequest>
        Model::ListVpcEndpointsForDomainOutcomeCallable ListVpcEndpointsForDomainCallable(const ListVpcEndpointsForDomainRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::ListVpcEndpointsForDomain, request);
        }

        /**
         * An Async wrapper for ListVpcEndpointsForDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcEndpointsForDomainRequestT = Model::ListVpcEndpointsForDomainRequest>
        void ListVpcEndpointsForDomainAsync(const ListVpcEndpointsForDomainRequestT& request, const ListVpcEndpointsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::ListVpcEndpointsForDomain, request, handler, context);
        }

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
        template<typename PurchaseReservedElasticsearchInstanceOfferingRequestT = Model::PurchaseReservedElasticsearchInstanceOfferingRequest>
        Model::PurchaseReservedElasticsearchInstanceOfferingOutcomeCallable PurchaseReservedElasticsearchInstanceOfferingCallable(const PurchaseReservedElasticsearchInstanceOfferingRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering, request);
        }

        /**
         * An Async wrapper for PurchaseReservedElasticsearchInstanceOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PurchaseReservedElasticsearchInstanceOfferingRequestT = Model::PurchaseReservedElasticsearchInstanceOfferingRequest>
        void PurchaseReservedElasticsearchInstanceOfferingAsync(const PurchaseReservedElasticsearchInstanceOfferingRequestT& request, const PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::PurchaseReservedElasticsearchInstanceOffering, request, handler, context);
        }

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
        template<typename RejectInboundCrossClusterSearchConnectionRequestT = Model::RejectInboundCrossClusterSearchConnectionRequest>
        Model::RejectInboundCrossClusterSearchConnectionOutcomeCallable RejectInboundCrossClusterSearchConnectionCallable(const RejectInboundCrossClusterSearchConnectionRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnection, request);
        }

        /**
         * An Async wrapper for RejectInboundCrossClusterSearchConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectInboundCrossClusterSearchConnectionRequestT = Model::RejectInboundCrossClusterSearchConnectionRequest>
        void RejectInboundCrossClusterSearchConnectionAsync(const RejectInboundCrossClusterSearchConnectionRequestT& request, const RejectInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::RejectInboundCrossClusterSearchConnection, request, handler, context);
        }

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
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const RemoveTagsRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::RemoveTags, request);
        }

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        void RemoveTagsAsync(const RemoveTagsRequestT& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::RemoveTags, request, handler, context);
        }

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
        template<typename RevokeVpcEndpointAccessRequestT = Model::RevokeVpcEndpointAccessRequest>
        Model::RevokeVpcEndpointAccessOutcomeCallable RevokeVpcEndpointAccessCallable(const RevokeVpcEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::RevokeVpcEndpointAccess, request);
        }

        /**
         * An Async wrapper for RevokeVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeVpcEndpointAccessRequestT = Model::RevokeVpcEndpointAccessRequest>
        void RevokeVpcEndpointAccessAsync(const RevokeVpcEndpointAccessRequestT& request, const RevokeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::RevokeVpcEndpointAccess, request, handler, context);
        }

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
        template<typename StartElasticsearchServiceSoftwareUpdateRequestT = Model::StartElasticsearchServiceSoftwareUpdateRequest>
        Model::StartElasticsearchServiceSoftwareUpdateOutcomeCallable StartElasticsearchServiceSoftwareUpdateCallable(const StartElasticsearchServiceSoftwareUpdateRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate, request);
        }

        /**
         * An Async wrapper for StartElasticsearchServiceSoftwareUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartElasticsearchServiceSoftwareUpdateRequestT = Model::StartElasticsearchServiceSoftwareUpdateRequest>
        void StartElasticsearchServiceSoftwareUpdateAsync(const StartElasticsearchServiceSoftwareUpdateRequestT& request, const StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::StartElasticsearchServiceSoftwareUpdate, request, handler, context);
        }

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
        template<typename UpdateElasticsearchDomainConfigRequestT = Model::UpdateElasticsearchDomainConfigRequest>
        Model::UpdateElasticsearchDomainConfigOutcomeCallable UpdateElasticsearchDomainConfigCallable(const UpdateElasticsearchDomainConfigRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::UpdateElasticsearchDomainConfig, request);
        }

        /**
         * An Async wrapper for UpdateElasticsearchDomainConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateElasticsearchDomainConfigRequestT = Model::UpdateElasticsearchDomainConfigRequest>
        void UpdateElasticsearchDomainConfigAsync(const UpdateElasticsearchDomainConfigRequestT& request, const UpdateElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::UpdateElasticsearchDomainConfig, request, handler, context);
        }

        /**
         * <p>Updates a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageOutcome UpdatePackage(const Model::UpdatePackageRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePackageRequestT = Model::UpdatePackageRequest>
        Model::UpdatePackageOutcomeCallable UpdatePackageCallable(const UpdatePackageRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::UpdatePackage, request);
        }

        /**
         * An Async wrapper for UpdatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePackageRequestT = Model::UpdatePackageRequest>
        void UpdatePackageAsync(const UpdatePackageRequestT& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::UpdatePackage, request, handler, context);
        }

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
        template<typename UpdateVpcEndpointRequestT = Model::UpdateVpcEndpointRequest>
        Model::UpdateVpcEndpointOutcomeCallable UpdateVpcEndpointCallable(const UpdateVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::UpdateVpcEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVpcEndpointRequestT = Model::UpdateVpcEndpointRequest>
        void UpdateVpcEndpointAsync(const UpdateVpcEndpointRequestT& request, const UpdateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::UpdateVpcEndpoint, request, handler, context);
        }

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
        template<typename UpgradeElasticsearchDomainRequestT = Model::UpgradeElasticsearchDomainRequest>
        Model::UpgradeElasticsearchDomainOutcomeCallable UpgradeElasticsearchDomainCallable(const UpgradeElasticsearchDomainRequestT& request) const
        {
            return SubmitCallable(&ElasticsearchServiceClient::UpgradeElasticsearchDomain, request);
        }

        /**
         * An Async wrapper for UpgradeElasticsearchDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpgradeElasticsearchDomainRequestT = Model::UpgradeElasticsearchDomainRequest>
        void UpgradeElasticsearchDomainAsync(const UpgradeElasticsearchDomainRequestT& request, const UpgradeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticsearchServiceClient::UpgradeElasticsearchDomain, request, handler, context);
        }


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
