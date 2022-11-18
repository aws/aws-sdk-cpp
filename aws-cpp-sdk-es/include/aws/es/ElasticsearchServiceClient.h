/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/ElasticsearchServiceServiceClientModel.h>
#include <aws/es/ElasticsearchServiceLegacyAsyncMacros.h>

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
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchServiceClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Allows the destination domain owner to accept an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AcceptInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInboundCrossClusterSearchConnectionOutcome AcceptInboundCrossClusterSearchConnection(const Model::AcceptInboundCrossClusterSearchConnectionRequest& request) const;


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
         * <p>Associates a package with an Amazon ES domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AssociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePackageOutcome AssociatePackage(const Model::AssociatePackageRequest& request) const;


        /**
         * <p>Provides access to an Amazon OpenSearch Service domain through the use of an
         * interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AuthorizeVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeVpcEndpointAccessOutcome AuthorizeVpcEndpointAccess(const Model::AuthorizeVpcEndpointAccessRequest& request) const;


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
         * <p>Creates a new Elasticsearch domain. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
         * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
         * Elasticsearch Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateElasticsearchDomainOutcome CreateElasticsearchDomain(const Model::CreateElasticsearchDomainRequest& request) const;


        /**
         * <p>Creates a new cross-cluster search connection from a source domain to a
         * destination domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateOutboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutboundCrossClusterSearchConnectionOutcome CreateOutboundCrossClusterSearchConnection(const Model::CreateOutboundCrossClusterSearchConnectionRequest& request) const;


        /**
         * <p>Create a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;


        /**
         * <p>Creates an Amazon OpenSearch Service-managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointOutcome CreateVpcEndpoint(const Model::CreateVpcEndpointRequest& request) const;


        /**
         * <p>Permanently deletes the specified Elasticsearch domain and all of its data.
         * Once a domain is deleted, it cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteElasticsearchDomainOutcome DeleteElasticsearchDomain(const Model::DeleteElasticsearchDomainRequest& request) const;


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
         * <p>Allows the source domain owner to delete an existing outbound cross-cluster
         * search connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteOutboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutboundCrossClusterSearchConnectionOutcome DeleteOutboundCrossClusterSearchConnection(const Model::DeleteOutboundCrossClusterSearchConnectionRequest& request) const;


        /**
         * <p>Delete the package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;


        /**
         * <p>Deletes an Amazon OpenSearch Service-managed interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointOutcome DeleteVpcEndpoint(const Model::DeleteVpcEndpointRequest& request) const;


        /**
         * <p>Provides scheduled Auto-Tune action details for the Elasticsearch domain,
         * such as Auto-Tune action type, description, severity, and scheduled
         * date.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeDomainAutoTunes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainAutoTunesOutcome DescribeDomainAutoTunes(const Model::DescribeDomainAutoTunesRequest& request) const;


        /**
         * <p>Returns information about the current blue/green deployment happening on a
         * domain, including a change ID, status, and progress stages.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeDomainChangeProgress">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainChangeProgressOutcome DescribeDomainChangeProgress(const Model::DescribeDomainChangeProgressRequest& request) const;


        /**
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domain, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticsearchDomainOutcome DescribeElasticsearchDomain(const Model::DescribeElasticsearchDomainRequest& request) const;


        /**
         * <p>Provides cluster configuration information about the specified Elasticsearch
         * domain, such as the state, creation date, update version, and update date for
         * cluster options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticsearchDomainConfigOutcome DescribeElasticsearchDomainConfig(const Model::DescribeElasticsearchDomainConfigRequest& request) const;


        /**
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domains, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticsearchDomainsOutcome DescribeElasticsearchDomains(const Model::DescribeElasticsearchDomainsRequest& request) const;


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
         * <p>Lists all the inbound cross-cluster search connections for a destination
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeInboundCrossClusterSearchConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInboundCrossClusterSearchConnectionsOutcome DescribeInboundCrossClusterSearchConnections(const Model::DescribeInboundCrossClusterSearchConnectionsRequest& request) const;


        /**
         * <p>Lists all the outbound cross-cluster search connections for a source
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeOutboundCrossClusterSearchConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOutboundCrossClusterSearchConnectionsOutcome DescribeOutboundCrossClusterSearchConnections(const Model::DescribeOutboundCrossClusterSearchConnectionsRequest& request) const;


        /**
         * <p>Describes all packages available to Amazon ES. Includes options for
         * filtering, limiting the number of results, and pagination.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribePackages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagesOutcome DescribePackages(const Model::DescribePackagesRequest& request) const;


        /**
         * <p>Lists available reserved Elasticsearch instance offerings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstanceOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedElasticsearchInstanceOfferingsOutcome DescribeReservedElasticsearchInstanceOfferings(const Model::DescribeReservedElasticsearchInstanceOfferingsRequest& request) const;


        /**
         * <p>Returns information about reserved Elasticsearch instances for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedElasticsearchInstancesOutcome DescribeReservedElasticsearchInstances(const Model::DescribeReservedElasticsearchInstancesRequest& request) const;


        /**
         * <p>Describes one or more Amazon OpenSearch Service-managed VPC
         * endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointsOutcome DescribeVpcEndpoints(const Model::DescribeVpcEndpointsRequest& request) const;


        /**
         * <p>Dissociates a package from the Amazon ES domain.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DissociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DissociatePackageOutcome DissociatePackage(const Model::DissociatePackageRequest& request) const;


        /**
         * <p> Returns a list of upgrade compatible Elastisearch versions. You can
         * optionally pass a <code> <a>DomainName</a> </code> to get all upgrade compatible
         * Elasticsearch versions for that specific domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetCompatibleElasticsearchVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCompatibleElasticsearchVersionsOutcome GetCompatibleElasticsearchVersions(const Model::GetCompatibleElasticsearchVersionsRequest& request) const;


        /**
         * <p>Returns a list of versions of the package, along with their creation time and
         * commit message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetPackageVersionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPackageVersionHistoryOutcome GetPackageVersionHistory(const Model::GetPackageVersionHistoryRequest& request) const;


        /**
         * <p>Retrieves the complete history of the last 10 upgrades that were performed on
         * the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUpgradeHistoryOutcome GetUpgradeHistory(const Model::GetUpgradeHistoryRequest& request) const;


        /**
         * <p>Retrieves the latest status of the last upgrade or upgrade eligibility check
         * that was performed on the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUpgradeStatusOutcome GetUpgradeStatus(const Model::GetUpgradeStatusRequest& request) const;


        /**
         * <p>Returns the name of all Elasticsearch domains owned by the current user's
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;


        /**
         * <p>Lists all Amazon ES domains associated with the package.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainsForPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsForPackageOutcome ListDomainsForPackage(const Model::ListDomainsForPackageRequest& request) const;


        /**
         * <p>List all Elasticsearch instance types that are supported for given
         * ElasticsearchVersion</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListElasticsearchInstanceTypesOutcome ListElasticsearchInstanceTypes(const Model::ListElasticsearchInstanceTypesRequest& request) const;


        /**
         * <p>List all supported Elasticsearch versions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListElasticsearchVersionsOutcome ListElasticsearchVersions(const Model::ListElasticsearchVersionsRequest& request) const;


        /**
         * <p>Lists all packages associated with the Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListPackagesForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesForDomainOutcome ListPackagesForDomain(const Model::ListPackagesForDomainRequest& request) const;


        /**
         * <p>Returns all tags for the given Elasticsearch domain.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;


        /**
         * <p>Retrieves information about each principal that is allowed to access a given
         * Amazon OpenSearch Service domain through the use of an interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointAccessOutcome ListVpcEndpointAccess(const Model::ListVpcEndpointAccessRequest& request) const;


        /**
         * <p>Retrieves all Amazon OpenSearch Service-managed VPC endpoints in the current
         * account and Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsOutcome ListVpcEndpoints(const Model::ListVpcEndpointsRequest& request) const;


        /**
         * <p>Retrieves all Amazon OpenSearch Service-managed VPC endpoints associated with
         * a particular domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpointsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsForDomainOutcome ListVpcEndpointsForDomain(const Model::ListVpcEndpointsForDomainRequest& request) const;


        /**
         * <p>Allows you to purchase reserved Elasticsearch instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PurchaseReservedElasticsearchInstanceOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedElasticsearchInstanceOfferingOutcome PurchaseReservedElasticsearchInstanceOffering(const Model::PurchaseReservedElasticsearchInstanceOfferingRequest& request) const;


        /**
         * <p>Allows the destination domain owner to reject an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RejectInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInboundCrossClusterSearchConnectionOutcome RejectInboundCrossClusterSearchConnection(const Model::RejectInboundCrossClusterSearchConnectionRequest& request) const;


        /**
         * <p>Removes the specified set of tags from the specified Elasticsearch
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RemoveTags">AWS API
         * Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;


        /**
         * <p>Revokes access to an Amazon OpenSearch Service domain that was provided
         * through an interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RevokeVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeVpcEndpointAccessOutcome RevokeVpcEndpointAccess(const Model::RevokeVpcEndpointAccessRequest& request) const;


        /**
         * <p>Schedules a service software update for an Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/StartElasticsearchServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartElasticsearchServiceSoftwareUpdateOutcome StartElasticsearchServiceSoftwareUpdate(const Model::StartElasticsearchServiceSoftwareUpdateRequest& request) const;


        /**
         * <p>Modifies the cluster configuration of the specified Elasticsearch domain,
         * setting as setting the instance type and the number of instances. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateElasticsearchDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateElasticsearchDomainConfigOutcome UpdateElasticsearchDomainConfig(const Model::UpdateElasticsearchDomainConfigRequest& request) const;


        /**
         * <p>Updates a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageOutcome UpdatePackage(const Model::UpdatePackageRequest& request) const;


        /**
         * <p>Modifies an Amazon OpenSearch Service-managed interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcEndpointOutcome UpdateVpcEndpoint(const Model::UpdateVpcEndpointRequest& request) const;


        /**
         * <p>Allows you to either upgrade your domain or perform an Upgrade eligibility
         * check to a compatible Elasticsearch version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeElasticsearchDomainOutcome UpgradeElasticsearchDomain(const Model::UpgradeElasticsearchDomainRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ElasticsearchServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ElasticsearchServiceClientConfiguration& clientConfiguration);

      ElasticsearchServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ElasticsearchServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ElasticsearchService
} // namespace Aws
