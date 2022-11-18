/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/OpenSearchServiceServiceClientModel.h>
#include <aws/opensearch/OpenSearchServiceLegacyAsyncMacros.h>

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
  class AWS_OPENSEARCHSERVICE_API OpenSearchServiceClient : public Aws::Client::AWSJsonClient
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
         * <p>Allows the destination Amazon OpenSearch Service domain owner to accept an
         * inbound cross-cluster search connection request. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AcceptInboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInboundConnectionOutcome AcceptInboundConnection(const Model::AcceptInboundConnectionRequest& request) const;


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
         * <p>Associates a package with an Amazon OpenSearch Service domain. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AssociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePackageOutcome AssociatePackage(const Model::AssociatePackageRequest& request) const;


        /**
         * <p>Provides access to an Amazon OpenSearch Service domain through the use of an
         * interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AuthorizeVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeVpcEndpointAccessOutcome AuthorizeVpcEndpointAccess(const Model::AuthorizeVpcEndpointAccessRequest& request) const;


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
         * <p>Creates an Amazon OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html">Creating
         * and managing Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;


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
         * <p>Creates a package for use with Amazon OpenSearch Service domains. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;


        /**
         * <p>Creates an Amazon OpenSearch Service-managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointOutcome CreateVpcEndpoint(const Model::CreateVpcEndpointRequest& request) const;


        /**
         * <p>Deletes an Amazon OpenSearch Service domain and all of its data. You can't
         * recover a domain after you delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;


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
         * <p>Allows the source Amazon OpenSearch Service domain owner to delete an
         * existing outbound cross-cluster search connection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteOutboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutboundConnectionOutcome DeleteOutboundConnection(const Model::DeleteOutboundConnectionRequest& request) const;


        /**
         * <p>Deletes an Amazon OpenSearch Service package. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;


        /**
         * <p>Deletes an Amazon OpenSearch Service-managed interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointOutcome DeleteVpcEndpoint(const Model::DeleteVpcEndpointRequest& request) const;


        /**
         * <p>Describes the domain configuration for the specified Amazon OpenSearch
         * Service domain, including the domain ID, domain service endpoint, and domain
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;


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
         * <p>Returns the configuration of an Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainConfigOutcome DescribeDomainConfig(const Model::DescribeDomainConfigRequest& request) const;


        /**
         * <p>Returns domain configuration information about the specified Amazon
         * OpenSearch Service domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest& request) const;


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
         * <p>Describes the instance count, storage, and master node limits for a given
         * OpenSearch or Elasticsearch version and instance type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInstanceTypeLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceTypeLimitsOutcome DescribeInstanceTypeLimits(const Model::DescribeInstanceTypeLimitsRequest& request) const;


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
         * <p>Describes all packages available to OpenSearch Service. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribePackages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagesOutcome DescribePackages(const Model::DescribePackagesRequest& request) const;


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
         * <p>Describes the Amazon OpenSearch Service instances that you have reserved in a
         * given Region. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/ri.html">Reserved
         * Instances in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesOutcome DescribeReservedInstances(const Model::DescribeReservedInstancesRequest& request) const;


        /**
         * <p>Describes one or more Amazon OpenSearch Service-managed VPC
         * endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointsOutcome DescribeVpcEndpoints(const Model::DescribeVpcEndpointsRequest& request) const;


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
         * <p>Returns a map of OpenSearch or Elasticsearch versions and the versions you
         * can upgrade them to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetCompatibleVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCompatibleVersionsOutcome GetCompatibleVersions(const Model::GetCompatibleVersionsRequest& request) const;


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
         * <p>Retrieves the complete history of the last 10 upgrades performed on an Amazon
         * OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUpgradeHistoryOutcome GetUpgradeHistory(const Model::GetUpgradeHistoryRequest& request) const;


        /**
         * <p>Returns the most recent status of the last upgrade or upgrade eligibility
         * check performed on an Amazon OpenSearch Service domain.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUpgradeStatusOutcome GetUpgradeStatus(const Model::GetUpgradeStatusRequest& request) const;


        /**
         * <p>Returns the names of all Amazon OpenSearch Service domains owned by the
         * current user in the active Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;


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
         * <p>Lists all instance types and available features for a given OpenSearch or
         * Elasticsearch version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListInstanceTypeDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceTypeDetailsOutcome ListInstanceTypeDetails(const Model::ListInstanceTypeDetailsRequest& request) const;


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
         * <p>Returns all resource tags for an Amazon OpenSearch Service domain. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-awsresourcetagging.html">Tagging
         * Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;


        /**
         * <p>Lists all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
         * Service supports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVersionsOutcome ListVersions(const Model::ListVersionsRequest& request) const;


        /**
         * <p>Retrieves information about each Amazon Web Services principal that is
         * allowed to access a given Amazon OpenSearch Service domain through the use of an
         * interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointAccessOutcome ListVpcEndpointAccess(const Model::ListVpcEndpointAccessRequest& request) const;


        /**
         * <p>Retrieves all Amazon OpenSearch Service-managed VPC endpoints in the current
         * Amazon Web Services account and Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsOutcome ListVpcEndpoints(const Model::ListVpcEndpointsRequest& request) const;


        /**
         * <p>Retrieves all Amazon OpenSearch Service-managed VPC endpoints associated with
         * a particular domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpointsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsForDomainOutcome ListVpcEndpointsForDomain(const Model::ListVpcEndpointsForDomainRequest& request) const;


        /**
         * <p>Allows you to purchase Amazon OpenSearch Service Reserved
         * Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PurchaseReservedInstanceOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedInstanceOfferingOutcome PurchaseReservedInstanceOffering(const Model::PurchaseReservedInstanceOfferingRequest& request) const;


        /**
         * <p>Allows the remote Amazon OpenSearch Service domain owner to reject an inbound
         * cross-cluster connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RejectInboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInboundConnectionOutcome RejectInboundConnection(const Model::RejectInboundConnectionRequest& request) const;


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
         * <p>Revokes access to an Amazon OpenSearch Service domain that was provided
         * through an interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RevokeVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeVpcEndpointAccessOutcome RevokeVpcEndpointAccess(const Model::RevokeVpcEndpointAccessRequest& request) const;


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
         * <p>Modifies the cluster configuration of the specified Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainConfigOutcome UpdateDomainConfig(const Model::UpdateDomainConfigRequest& request) const;


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
         * <p>Modifies an Amazon OpenSearch Service-managed interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcEndpointOutcome UpdateVpcEndpoint(const Model::UpdateVpcEndpointRequest& request) const;


        /**
         * <p>Allows you to either upgrade your Amazon OpenSearch Service domain or perform
         * an upgrade eligibility check to a compatible version of OpenSearch or
         * Elasticsearch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeDomainOutcome UpgradeDomain(const Model::UpgradeDomainRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OpenSearchServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const OpenSearchServiceClientConfiguration& clientConfiguration);

      OpenSearchServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OpenSearchServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace OpenSearchService
} // namespace Aws
