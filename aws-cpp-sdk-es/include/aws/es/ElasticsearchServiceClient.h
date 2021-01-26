/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/model/AcceptInboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/AssociatePackageResult.h>
#include <aws/es/model/CancelElasticsearchServiceSoftwareUpdateResult.h>
#include <aws/es/model/CreateElasticsearchDomainResult.h>
#include <aws/es/model/CreateOutboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/CreatePackageResult.h>
#include <aws/es/model/DeleteElasticsearchDomainResult.h>
#include <aws/es/model/DeleteInboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/DeleteOutboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/DeletePackageResult.h>
#include <aws/es/model/DescribeElasticsearchDomainResult.h>
#include <aws/es/model/DescribeElasticsearchDomainConfigResult.h>
#include <aws/es/model/DescribeElasticsearchDomainsResult.h>
#include <aws/es/model/DescribeElasticsearchInstanceTypeLimitsResult.h>
#include <aws/es/model/DescribeInboundCrossClusterSearchConnectionsResult.h>
#include <aws/es/model/DescribeOutboundCrossClusterSearchConnectionsResult.h>
#include <aws/es/model/DescribePackagesResult.h>
#include <aws/es/model/DescribeReservedElasticsearchInstanceOfferingsResult.h>
#include <aws/es/model/DescribeReservedElasticsearchInstancesResult.h>
#include <aws/es/model/DissociatePackageResult.h>
#include <aws/es/model/GetCompatibleElasticsearchVersionsResult.h>
#include <aws/es/model/GetPackageVersionHistoryResult.h>
#include <aws/es/model/GetUpgradeHistoryResult.h>
#include <aws/es/model/GetUpgradeStatusResult.h>
#include <aws/es/model/ListDomainNamesResult.h>
#include <aws/es/model/ListDomainsForPackageResult.h>
#include <aws/es/model/ListElasticsearchInstanceTypesResult.h>
#include <aws/es/model/ListElasticsearchVersionsResult.h>
#include <aws/es/model/ListPackagesForDomainResult.h>
#include <aws/es/model/ListTagsResult.h>
#include <aws/es/model/PurchaseReservedElasticsearchInstanceOfferingResult.h>
#include <aws/es/model/RejectInboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/StartElasticsearchServiceSoftwareUpdateResult.h>
#include <aws/es/model/UpdateElasticsearchDomainConfigResult.h>
#include <aws/es/model/UpdatePackageResult.h>
#include <aws/es/model/UpgradeElasticsearchDomainResult.h>
#include <aws/core/NoResult.h>
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

namespace ElasticsearchService
{

namespace Model
{
        class AcceptInboundCrossClusterSearchConnectionRequest;
        class AddTagsRequest;
        class AssociatePackageRequest;
        class CancelElasticsearchServiceSoftwareUpdateRequest;
        class CreateElasticsearchDomainRequest;
        class CreateOutboundCrossClusterSearchConnectionRequest;
        class CreatePackageRequest;
        class DeleteElasticsearchDomainRequest;
        class DeleteInboundCrossClusterSearchConnectionRequest;
        class DeleteOutboundCrossClusterSearchConnectionRequest;
        class DeletePackageRequest;
        class DescribeElasticsearchDomainRequest;
        class DescribeElasticsearchDomainConfigRequest;
        class DescribeElasticsearchDomainsRequest;
        class DescribeElasticsearchInstanceTypeLimitsRequest;
        class DescribeInboundCrossClusterSearchConnectionsRequest;
        class DescribeOutboundCrossClusterSearchConnectionsRequest;
        class DescribePackagesRequest;
        class DescribeReservedElasticsearchInstanceOfferingsRequest;
        class DescribeReservedElasticsearchInstancesRequest;
        class DissociatePackageRequest;
        class GetCompatibleElasticsearchVersionsRequest;
        class GetPackageVersionHistoryRequest;
        class GetUpgradeHistoryRequest;
        class GetUpgradeStatusRequest;
        class ListDomainsForPackageRequest;
        class ListElasticsearchInstanceTypesRequest;
        class ListElasticsearchVersionsRequest;
        class ListPackagesForDomainRequest;
        class ListTagsRequest;
        class PurchaseReservedElasticsearchInstanceOfferingRequest;
        class RejectInboundCrossClusterSearchConnectionRequest;
        class RemoveTagsRequest;
        class StartElasticsearchServiceSoftwareUpdateRequest;
        class UpdateElasticsearchDomainConfigRequest;
        class UpdatePackageRequest;
        class UpgradeElasticsearchDomainRequest;

        typedef Aws::Utils::Outcome<AcceptInboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> AcceptInboundCrossClusterSearchConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ElasticsearchServiceError> AddTagsOutcome;
        typedef Aws::Utils::Outcome<AssociatePackageResult, ElasticsearchServiceError> AssociatePackageOutcome;
        typedef Aws::Utils::Outcome<CancelElasticsearchServiceSoftwareUpdateResult, ElasticsearchServiceError> CancelElasticsearchServiceSoftwareUpdateOutcome;
        typedef Aws::Utils::Outcome<CreateElasticsearchDomainResult, ElasticsearchServiceError> CreateElasticsearchDomainOutcome;
        typedef Aws::Utils::Outcome<CreateOutboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> CreateOutboundCrossClusterSearchConnectionOutcome;
        typedef Aws::Utils::Outcome<CreatePackageResult, ElasticsearchServiceError> CreatePackageOutcome;
        typedef Aws::Utils::Outcome<DeleteElasticsearchDomainResult, ElasticsearchServiceError> DeleteElasticsearchDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ElasticsearchServiceError> DeleteElasticsearchServiceRoleOutcome;
        typedef Aws::Utils::Outcome<DeleteInboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> DeleteInboundCrossClusterSearchConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteOutboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> DeleteOutboundCrossClusterSearchConnectionOutcome;
        typedef Aws::Utils::Outcome<DeletePackageResult, ElasticsearchServiceError> DeletePackageOutcome;
        typedef Aws::Utils::Outcome<DescribeElasticsearchDomainResult, ElasticsearchServiceError> DescribeElasticsearchDomainOutcome;
        typedef Aws::Utils::Outcome<DescribeElasticsearchDomainConfigResult, ElasticsearchServiceError> DescribeElasticsearchDomainConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeElasticsearchDomainsResult, ElasticsearchServiceError> DescribeElasticsearchDomainsOutcome;
        typedef Aws::Utils::Outcome<DescribeElasticsearchInstanceTypeLimitsResult, ElasticsearchServiceError> DescribeElasticsearchInstanceTypeLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeInboundCrossClusterSearchConnectionsResult, ElasticsearchServiceError> DescribeInboundCrossClusterSearchConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeOutboundCrossClusterSearchConnectionsResult, ElasticsearchServiceError> DescribeOutboundCrossClusterSearchConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribePackagesResult, ElasticsearchServiceError> DescribePackagesOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedElasticsearchInstanceOfferingsResult, ElasticsearchServiceError> DescribeReservedElasticsearchInstanceOfferingsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedElasticsearchInstancesResult, ElasticsearchServiceError> DescribeReservedElasticsearchInstancesOutcome;
        typedef Aws::Utils::Outcome<DissociatePackageResult, ElasticsearchServiceError> DissociatePackageOutcome;
        typedef Aws::Utils::Outcome<GetCompatibleElasticsearchVersionsResult, ElasticsearchServiceError> GetCompatibleElasticsearchVersionsOutcome;
        typedef Aws::Utils::Outcome<GetPackageVersionHistoryResult, ElasticsearchServiceError> GetPackageVersionHistoryOutcome;
        typedef Aws::Utils::Outcome<GetUpgradeHistoryResult, ElasticsearchServiceError> GetUpgradeHistoryOutcome;
        typedef Aws::Utils::Outcome<GetUpgradeStatusResult, ElasticsearchServiceError> GetUpgradeStatusOutcome;
        typedef Aws::Utils::Outcome<ListDomainNamesResult, ElasticsearchServiceError> ListDomainNamesOutcome;
        typedef Aws::Utils::Outcome<ListDomainsForPackageResult, ElasticsearchServiceError> ListDomainsForPackageOutcome;
        typedef Aws::Utils::Outcome<ListElasticsearchInstanceTypesResult, ElasticsearchServiceError> ListElasticsearchInstanceTypesOutcome;
        typedef Aws::Utils::Outcome<ListElasticsearchVersionsResult, ElasticsearchServiceError> ListElasticsearchVersionsOutcome;
        typedef Aws::Utils::Outcome<ListPackagesForDomainResult, ElasticsearchServiceError> ListPackagesForDomainOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, ElasticsearchServiceError> ListTagsOutcome;
        typedef Aws::Utils::Outcome<PurchaseReservedElasticsearchInstanceOfferingResult, ElasticsearchServiceError> PurchaseReservedElasticsearchInstanceOfferingOutcome;
        typedef Aws::Utils::Outcome<RejectInboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> RejectInboundCrossClusterSearchConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ElasticsearchServiceError> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<StartElasticsearchServiceSoftwareUpdateResult, ElasticsearchServiceError> StartElasticsearchServiceSoftwareUpdateOutcome;
        typedef Aws::Utils::Outcome<UpdateElasticsearchDomainConfigResult, ElasticsearchServiceError> UpdateElasticsearchDomainConfigOutcome;
        typedef Aws::Utils::Outcome<UpdatePackageResult, ElasticsearchServiceError> UpdatePackageOutcome;
        typedef Aws::Utils::Outcome<UpgradeElasticsearchDomainResult, ElasticsearchServiceError> UpgradeElasticsearchDomainOutcome;

        typedef std::future<AcceptInboundCrossClusterSearchConnectionOutcome> AcceptInboundCrossClusterSearchConnectionOutcomeCallable;
        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<AssociatePackageOutcome> AssociatePackageOutcomeCallable;
        typedef std::future<CancelElasticsearchServiceSoftwareUpdateOutcome> CancelElasticsearchServiceSoftwareUpdateOutcomeCallable;
        typedef std::future<CreateElasticsearchDomainOutcome> CreateElasticsearchDomainOutcomeCallable;
        typedef std::future<CreateOutboundCrossClusterSearchConnectionOutcome> CreateOutboundCrossClusterSearchConnectionOutcomeCallable;
        typedef std::future<CreatePackageOutcome> CreatePackageOutcomeCallable;
        typedef std::future<DeleteElasticsearchDomainOutcome> DeleteElasticsearchDomainOutcomeCallable;
        typedef std::future<DeleteElasticsearchServiceRoleOutcome> DeleteElasticsearchServiceRoleOutcomeCallable;
        typedef std::future<DeleteInboundCrossClusterSearchConnectionOutcome> DeleteInboundCrossClusterSearchConnectionOutcomeCallable;
        typedef std::future<DeleteOutboundCrossClusterSearchConnectionOutcome> DeleteOutboundCrossClusterSearchConnectionOutcomeCallable;
        typedef std::future<DeletePackageOutcome> DeletePackageOutcomeCallable;
        typedef std::future<DescribeElasticsearchDomainOutcome> DescribeElasticsearchDomainOutcomeCallable;
        typedef std::future<DescribeElasticsearchDomainConfigOutcome> DescribeElasticsearchDomainConfigOutcomeCallable;
        typedef std::future<DescribeElasticsearchDomainsOutcome> DescribeElasticsearchDomainsOutcomeCallable;
        typedef std::future<DescribeElasticsearchInstanceTypeLimitsOutcome> DescribeElasticsearchInstanceTypeLimitsOutcomeCallable;
        typedef std::future<DescribeInboundCrossClusterSearchConnectionsOutcome> DescribeInboundCrossClusterSearchConnectionsOutcomeCallable;
        typedef std::future<DescribeOutboundCrossClusterSearchConnectionsOutcome> DescribeOutboundCrossClusterSearchConnectionsOutcomeCallable;
        typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
        typedef std::future<DescribeReservedElasticsearchInstanceOfferingsOutcome> DescribeReservedElasticsearchInstanceOfferingsOutcomeCallable;
        typedef std::future<DescribeReservedElasticsearchInstancesOutcome> DescribeReservedElasticsearchInstancesOutcomeCallable;
        typedef std::future<DissociatePackageOutcome> DissociatePackageOutcomeCallable;
        typedef std::future<GetCompatibleElasticsearchVersionsOutcome> GetCompatibleElasticsearchVersionsOutcomeCallable;
        typedef std::future<GetPackageVersionHistoryOutcome> GetPackageVersionHistoryOutcomeCallable;
        typedef std::future<GetUpgradeHistoryOutcome> GetUpgradeHistoryOutcomeCallable;
        typedef std::future<GetUpgradeStatusOutcome> GetUpgradeStatusOutcomeCallable;
        typedef std::future<ListDomainNamesOutcome> ListDomainNamesOutcomeCallable;
        typedef std::future<ListDomainsForPackageOutcome> ListDomainsForPackageOutcomeCallable;
        typedef std::future<ListElasticsearchInstanceTypesOutcome> ListElasticsearchInstanceTypesOutcomeCallable;
        typedef std::future<ListElasticsearchVersionsOutcome> ListElasticsearchVersionsOutcomeCallable;
        typedef std::future<ListPackagesForDomainOutcome> ListPackagesForDomainOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<PurchaseReservedElasticsearchInstanceOfferingOutcome> PurchaseReservedElasticsearchInstanceOfferingOutcomeCallable;
        typedef std::future<RejectInboundCrossClusterSearchConnectionOutcome> RejectInboundCrossClusterSearchConnectionOutcomeCallable;
        typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
        typedef std::future<StartElasticsearchServiceSoftwareUpdateOutcome> StartElasticsearchServiceSoftwareUpdateOutcomeCallable;
        typedef std::future<UpdateElasticsearchDomainConfigOutcome> UpdateElasticsearchDomainConfigOutcomeCallable;
        typedef std::future<UpdatePackageOutcome> UpdatePackageOutcomeCallable;
        typedef std::future<UpgradeElasticsearchDomainOutcome> UpgradeElasticsearchDomainOutcomeCallable;
} // namespace Model

  class ElasticsearchServiceClient;

    typedef std::function<void(const ElasticsearchServiceClient*, const Model::AcceptInboundCrossClusterSearchConnectionRequest&, const Model::AcceptInboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::AssociatePackageRequest&, const Model::AssociatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CancelElasticsearchServiceSoftwareUpdateRequest&, const Model::CancelElasticsearchServiceSoftwareUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CreateElasticsearchDomainRequest&, const Model::CreateElasticsearchDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateElasticsearchDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CreateOutboundCrossClusterSearchConnectionRequest&, const Model::CreateOutboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOutboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CreatePackageRequest&, const Model::CreatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteElasticsearchDomainRequest&, const Model::DeleteElasticsearchDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteElasticsearchDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteElasticsearchServiceRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteElasticsearchServiceRoleResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteInboundCrossClusterSearchConnectionRequest&, const Model::DeleteInboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteOutboundCrossClusterSearchConnectionRequest&, const Model::DeleteOutboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOutboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeletePackageRequest&, const Model::DeletePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeElasticsearchDomainRequest&, const Model::DescribeElasticsearchDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticsearchDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeElasticsearchDomainConfigRequest&, const Model::DescribeElasticsearchDomainConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticsearchDomainConfigResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeElasticsearchDomainsRequest&, const Model::DescribeElasticsearchDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticsearchDomainsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeElasticsearchInstanceTypeLimitsRequest&, const Model::DescribeElasticsearchInstanceTypeLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeInboundCrossClusterSearchConnectionsRequest&, const Model::DescribeInboundCrossClusterSearchConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInboundCrossClusterSearchConnectionsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeOutboundCrossClusterSearchConnectionsRequest&, const Model::DescribeOutboundCrossClusterSearchConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOutboundCrossClusterSearchConnectionsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribePackagesRequest&, const Model::DescribePackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackagesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeReservedElasticsearchInstanceOfferingsRequest&, const Model::DescribeReservedElasticsearchInstanceOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeReservedElasticsearchInstancesRequest&, const Model::DescribeReservedElasticsearchInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedElasticsearchInstancesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DissociatePackageRequest&, const Model::DissociatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DissociatePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::GetCompatibleElasticsearchVersionsRequest&, const Model::GetCompatibleElasticsearchVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCompatibleElasticsearchVersionsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::GetPackageVersionHistoryRequest&, const Model::GetPackageVersionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPackageVersionHistoryResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::GetUpgradeHistoryRequest&, const Model::GetUpgradeHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUpgradeHistoryResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::GetUpgradeStatusRequest&, const Model::GetUpgradeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUpgradeStatusResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainNamesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListDomainsForPackageRequest&, const Model::ListDomainsForPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsForPackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListElasticsearchInstanceTypesRequest&, const Model::ListElasticsearchInstanceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListElasticsearchInstanceTypesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListElasticsearchVersionsRequest&, const Model::ListElasticsearchVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListElasticsearchVersionsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListPackagesForDomainRequest&, const Model::ListPackagesForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagesForDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::PurchaseReservedElasticsearchInstanceOfferingRequest&, const Model::PurchaseReservedElasticsearchInstanceOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::RejectInboundCrossClusterSearchConnectionRequest&, const Model::RejectInboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::StartElasticsearchServiceSoftwareUpdateRequest&, const Model::StartElasticsearchServiceSoftwareUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::UpdateElasticsearchDomainConfigRequest&, const Model::UpdateElasticsearchDomainConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateElasticsearchDomainConfigResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::UpdatePackageRequest&, const Model::UpdatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::UpgradeElasticsearchDomainRequest&, const Model::UpgradeElasticsearchDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradeElasticsearchDomainResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticsearchServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticsearchServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticsearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ElasticsearchServiceClient();


        /**
         * <p>Allows the destination domain owner to accept an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AcceptInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInboundCrossClusterSearchConnectionOutcome AcceptInboundCrossClusterSearchConnection(const Model::AcceptInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * <p>Allows the destination domain owner to accept an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AcceptInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInboundCrossClusterSearchConnectionOutcomeCallable AcceptInboundCrossClusterSearchConnectionCallable(const Model::AcceptInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * <p>Allows the destination domain owner to accept an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AcceptInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Attaches tags to an existing Elasticsearch domain. Tags are a set of
         * case-sensitive key value pairs. An Elasticsearch domain may have up to 10 tags.
         * See <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-awsresorcetagging"
         * target="_blank"> Tagging Amazon Elasticsearch Service Domains for more
         * information.</a></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AddTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Attaches tags to an existing Elasticsearch domain. Tags are a set of
         * case-sensitive key value pairs. An Elasticsearch domain may have up to 10 tags.
         * See <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-awsresorcetagging"
         * target="_blank"> Tagging Amazon Elasticsearch Service Domains for more
         * information.</a></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AddTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a package with an Amazon ES domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AssociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePackageOutcome AssociatePackage(const Model::AssociatePackageRequest& request) const;

        /**
         * <p>Associates a package with an Amazon ES domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AssociatePackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePackageOutcomeCallable AssociatePackageCallable(const Model::AssociatePackageRequest& request) const;

        /**
         * <p>Associates a package with an Amazon ES domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AssociatePackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePackageAsync(const Model::AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Cancels a scheduled service software update for an Amazon ES domain. You can
         * only perform this operation before the <code>AutomatedUpdateDate</code> and when
         * the <code>UpdateStatus</code> is in the <code>PENDING_UPDATE</code>
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelElasticsearchServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelElasticsearchServiceSoftwareUpdateOutcomeCallable CancelElasticsearchServiceSoftwareUpdateCallable(const Model::CancelElasticsearchServiceSoftwareUpdateRequest& request) const;

        /**
         * <p>Cancels a scheduled service software update for an Amazon ES domain. You can
         * only perform this operation before the <code>AutomatedUpdateDate</code> and when
         * the <code>UpdateStatus</code> is in the <code>PENDING_UPDATE</code>
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CancelElasticsearchServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a new Elasticsearch domain. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
         * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
         * Elasticsearch Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateElasticsearchDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateElasticsearchDomainOutcomeCallable CreateElasticsearchDomainCallable(const Model::CreateElasticsearchDomainRequest& request) const;

        /**
         * <p>Creates a new Elasticsearch domain. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
         * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
         * Elasticsearch Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateElasticsearchDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a new cross-cluster search connection from a source domain to a
         * destination domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateOutboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOutboundCrossClusterSearchConnectionOutcomeCallable CreateOutboundCrossClusterSearchConnectionCallable(const Model::CreateOutboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * <p>Creates a new cross-cluster search connection from a source domain to a
         * destination domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateOutboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOutboundCrossClusterSearchConnectionAsync(const Model::CreateOutboundCrossClusterSearchConnectionRequest& request, const CreateOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;

        /**
         * <p>Create a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreatePackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePackageOutcomeCallable CreatePackageCallable(const Model::CreatePackageRequest& request) const;

        /**
         * <p>Create a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreatePackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePackageAsync(const Model::CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes the specified Elasticsearch domain and all of its data.
         * Once a domain is deleted, it cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteElasticsearchDomainOutcome DeleteElasticsearchDomain(const Model::DeleteElasticsearchDomainRequest& request) const;

        /**
         * <p>Permanently deletes the specified Elasticsearch domain and all of its data.
         * Once a domain is deleted, it cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteElasticsearchDomainOutcomeCallable DeleteElasticsearchDomainCallable(const Model::DeleteElasticsearchDomainRequest& request) const;

        /**
         * <p>Permanently deletes the specified Elasticsearch domain and all of its data.
         * Once a domain is deleted, it cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the service-linked role that Elasticsearch Service uses to manage and
         * maintain VPC domains. Role deletion will fail if any existing VPC domains use
         * the role. You must delete any such Elasticsearch domains before deleting the
         * role. See <a
         * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-enabling-slr"
         * target="_blank">Deleting Elasticsearch Service Role</a> in <i>VPC Endpoints for
         * Amazon Elasticsearch Service Domains</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteElasticsearchServiceRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteElasticsearchServiceRoleOutcomeCallable DeleteElasticsearchServiceRoleCallable() const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Allows the destination domain owner to delete an existing inbound
         * cross-cluster search connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInboundCrossClusterSearchConnectionOutcomeCallable DeleteInboundCrossClusterSearchConnectionCallable(const Model::DeleteInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * <p>Allows the destination domain owner to delete an existing inbound
         * cross-cluster search connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Allows the source domain owner to delete an existing outbound cross-cluster
         * search connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteOutboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOutboundCrossClusterSearchConnectionOutcomeCallable DeleteOutboundCrossClusterSearchConnectionCallable(const Model::DeleteOutboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * <p>Allows the source domain owner to delete an existing outbound cross-cluster
         * search connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteOutboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOutboundCrossClusterSearchConnectionAsync(const Model::DeleteOutboundCrossClusterSearchConnectionRequest& request, const DeleteOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;

        /**
         * <p>Delete the package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackageOutcomeCallable DeletePackageCallable(const Model::DeletePackageRequest& request) const;

        /**
         * <p>Delete the package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePackageAsync(const Model::DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domain, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticsearchDomainOutcome DescribeElasticsearchDomain(const Model::DescribeElasticsearchDomainRequest& request) const;

        /**
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domain, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticsearchDomainOutcomeCallable DescribeElasticsearchDomainCallable(const Model::DescribeElasticsearchDomainRequest& request) const;

        /**
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domain, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Provides cluster configuration information about the specified Elasticsearch
         * domain, such as the state, creation date, update version, and update date for
         * cluster options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomainConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticsearchDomainConfigOutcomeCallable DescribeElasticsearchDomainConfigCallable(const Model::DescribeElasticsearchDomainConfigRequest& request) const;

        /**
         * <p>Provides cluster configuration information about the specified Elasticsearch
         * domain, such as the state, creation date, update version, and update date for
         * cluster options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomainConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domains, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticsearchDomainsOutcomeCallable DescribeElasticsearchDomainsCallable(const Model::DescribeElasticsearchDomainsRequest& request) const;

        /**
         * <p>Returns domain configuration information about the specified Elasticsearch
         * domains, including the domain ID, domain endpoint, and domain ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Describe Elasticsearch Limits for a given InstanceType and
         * ElasticsearchVersion. When modifying existing Domain, specify the <code>
         * <a>DomainName</a> </code> to know what Limits are supported for modifying.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchInstanceTypeLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticsearchInstanceTypeLimitsOutcomeCallable DescribeElasticsearchInstanceTypeLimitsCallable(const Model::DescribeElasticsearchInstanceTypeLimitsRequest& request) const;

        /**
         * <p> Describe Elasticsearch Limits for a given InstanceType and
         * ElasticsearchVersion. When modifying existing Domain, specify the <code>
         * <a>DomainName</a> </code> to know what Limits are supported for modifying.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchInstanceTypeLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all the inbound cross-cluster search connections for a destination
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeInboundCrossClusterSearchConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInboundCrossClusterSearchConnectionsOutcomeCallable DescribeInboundCrossClusterSearchConnectionsCallable(const Model::DescribeInboundCrossClusterSearchConnectionsRequest& request) const;

        /**
         * <p>Lists all the inbound cross-cluster search connections for a destination
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeInboundCrossClusterSearchConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all the outbound cross-cluster search connections for a source
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeOutboundCrossClusterSearchConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOutboundCrossClusterSearchConnectionsOutcomeCallable DescribeOutboundCrossClusterSearchConnectionsCallable(const Model::DescribeOutboundCrossClusterSearchConnectionsRequest& request) const;

        /**
         * <p>Lists all the outbound cross-cluster search connections for a source
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeOutboundCrossClusterSearchConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Describes all packages available to Amazon ES. Includes options for
         * filtering, limiting the number of results, and pagination.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribePackages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackagesOutcomeCallable DescribePackagesCallable(const Model::DescribePackagesRequest& request) const;

        /**
         * <p>Describes all packages available to Amazon ES. Includes options for
         * filtering, limiting the number of results, and pagination.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribePackages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists available reserved Elasticsearch instance offerings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstanceOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedElasticsearchInstanceOfferingsOutcomeCallable DescribeReservedElasticsearchInstanceOfferingsCallable(const Model::DescribeReservedElasticsearchInstanceOfferingsRequest& request) const;

        /**
         * <p>Lists available reserved Elasticsearch instance offerings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstanceOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about reserved Elasticsearch instances for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedElasticsearchInstancesOutcomeCallable DescribeReservedElasticsearchInstancesCallable(const Model::DescribeReservedElasticsearchInstancesRequest& request) const;

        /**
         * <p>Returns information about reserved Elasticsearch instances for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedElasticsearchInstancesAsync(const Model::DescribeReservedElasticsearchInstancesRequest& request, const DescribeReservedElasticsearchInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Dissociates a package from the Amazon ES domain.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DissociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DissociatePackageOutcome DissociatePackage(const Model::DissociatePackageRequest& request) const;

        /**
         * <p>Dissociates a package from the Amazon ES domain.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DissociatePackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DissociatePackageOutcomeCallable DissociatePackageCallable(const Model::DissociatePackageRequest& request) const;

        /**
         * <p>Dissociates a package from the Amazon ES domain.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DissociatePackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Returns a list of upgrade compatible Elastisearch versions. You can
         * optionally pass a <code> <a>DomainName</a> </code> to get all upgrade compatible
         * Elasticsearch versions for that specific domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetCompatibleElasticsearchVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCompatibleElasticsearchVersionsOutcomeCallable GetCompatibleElasticsearchVersionsCallable(const Model::GetCompatibleElasticsearchVersionsRequest& request) const;

        /**
         * <p> Returns a list of upgrade compatible Elastisearch versions. You can
         * optionally pass a <code> <a>DomainName</a> </code> to get all upgrade compatible
         * Elasticsearch versions for that specific domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetCompatibleElasticsearchVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of versions of the package, along with their creation time and
         * commit message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetPackageVersionHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPackageVersionHistoryOutcomeCallable GetPackageVersionHistoryCallable(const Model::GetPackageVersionHistoryRequest& request) const;

        /**
         * <p>Returns a list of versions of the package, along with their creation time and
         * commit message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetPackageVersionHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the complete history of the last 10 upgrades that were performed on
         * the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUpgradeHistoryOutcomeCallable GetUpgradeHistoryCallable(const Model::GetUpgradeHistoryRequest& request) const;

        /**
         * <p>Retrieves the complete history of the last 10 upgrades that were performed on
         * the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the latest status of the last upgrade or upgrade eligibility check
         * that was performed on the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUpgradeStatusOutcomeCallable GetUpgradeStatusCallable(const Model::GetUpgradeStatusRequest& request) const;

        /**
         * <p>Retrieves the latest status of the last upgrade or upgrade eligibility check
         * that was performed on the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUpgradeStatusAsync(const Model::GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the name of all Elasticsearch domains owned by the current user's
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames() const;

        /**
         * <p>Returns the name of all Elasticsearch domains owned by the current user's
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainNamesOutcomeCallable ListDomainNamesCallable() const;

        /**
         * <p>Returns the name of all Elasticsearch domains owned by the current user's
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainNamesAsync(const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Lists all Amazon ES domains associated with the package.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainsForPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsForPackageOutcome ListDomainsForPackage(const Model::ListDomainsForPackageRequest& request) const;

        /**
         * <p>Lists all Amazon ES domains associated with the package.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainsForPackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsForPackageOutcomeCallable ListDomainsForPackageCallable(const Model::ListDomainsForPackageRequest& request) const;

        /**
         * <p>Lists all Amazon ES domains associated with the package.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainsForPackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>List all Elasticsearch instance types that are supported for given
         * ElasticsearchVersion</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchInstanceTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListElasticsearchInstanceTypesOutcomeCallable ListElasticsearchInstanceTypesCallable(const Model::ListElasticsearchInstanceTypesRequest& request) const;

        /**
         * <p>List all Elasticsearch instance types that are supported for given
         * ElasticsearchVersion</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchInstanceTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListElasticsearchInstanceTypesAsync(const Model::ListElasticsearchInstanceTypesRequest& request, const ListElasticsearchInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all supported Elasticsearch versions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListElasticsearchVersionsOutcome ListElasticsearchVersions(const Model::ListElasticsearchVersionsRequest& request) const;

        /**
         * <p>List all supported Elasticsearch versions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListElasticsearchVersionsOutcomeCallable ListElasticsearchVersionsCallable(const Model::ListElasticsearchVersionsRequest& request) const;

        /**
         * <p>List all supported Elasticsearch versions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all packages associated with the Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListPackagesForDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagesForDomainOutcomeCallable ListPackagesForDomainCallable(const Model::ListPackagesForDomainRequest& request) const;

        /**
         * <p>Lists all packages associated with the Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListPackagesForDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackagesForDomainAsync(const Model::ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tags for the given Elasticsearch domain.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns all tags for the given Elasticsearch domain.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns all tags for the given Elasticsearch domain.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to purchase reserved Elasticsearch instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PurchaseReservedElasticsearchInstanceOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedElasticsearchInstanceOfferingOutcome PurchaseReservedElasticsearchInstanceOffering(const Model::PurchaseReservedElasticsearchInstanceOfferingRequest& request) const;

        /**
         * <p>Allows you to purchase reserved Elasticsearch instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PurchaseReservedElasticsearchInstanceOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedElasticsearchInstanceOfferingOutcomeCallable PurchaseReservedElasticsearchInstanceOfferingCallable(const Model::PurchaseReservedElasticsearchInstanceOfferingRequest& request) const;

        /**
         * <p>Allows you to purchase reserved Elasticsearch instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PurchaseReservedElasticsearchInstanceOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Allows the destination domain owner to reject an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RejectInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInboundCrossClusterSearchConnectionOutcomeCallable RejectInboundCrossClusterSearchConnectionCallable(const Model::RejectInboundCrossClusterSearchConnectionRequest& request) const;

        /**
         * <p>Allows the destination domain owner to reject an inbound cross-cluster search
         * connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RejectInboundCrossClusterSearchConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes the specified set of tags from the specified Elasticsearch
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RemoveTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified set of tags from the specified Elasticsearch
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RemoveTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules a service software update for an Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/StartElasticsearchServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartElasticsearchServiceSoftwareUpdateOutcome StartElasticsearchServiceSoftwareUpdate(const Model::StartElasticsearchServiceSoftwareUpdateRequest& request) const;

        /**
         * <p>Schedules a service software update for an Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/StartElasticsearchServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartElasticsearchServiceSoftwareUpdateOutcomeCallable StartElasticsearchServiceSoftwareUpdateCallable(const Model::StartElasticsearchServiceSoftwareUpdateRequest& request) const;

        /**
         * <p>Schedules a service software update for an Amazon ES domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/StartElasticsearchServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Modifies the cluster configuration of the specified Elasticsearch domain,
         * setting as setting the instance type and the number of instances. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateElasticsearchDomainConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateElasticsearchDomainConfigOutcomeCallable UpdateElasticsearchDomainConfigCallable(const Model::UpdateElasticsearchDomainConfigRequest& request) const;

        /**
         * <p>Modifies the cluster configuration of the specified Elasticsearch domain,
         * setting as setting the instance type and the number of instances. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateElasticsearchDomainConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateElasticsearchDomainConfigAsync(const Model::UpdateElasticsearchDomainConfigRequest& request, const UpdateElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageOutcome UpdatePackage(const Model::UpdatePackageRequest& request) const;

        /**
         * <p>Updates a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdatePackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePackageOutcomeCallable UpdatePackageCallable(const Model::UpdatePackageRequest& request) const;

        /**
         * <p>Updates a package for use with Amazon ES domains.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdatePackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePackageAsync(const Model::UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to either upgrade your domain or perform an Upgrade eligibility
         * check to a compatible Elasticsearch version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeElasticsearchDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeElasticsearchDomainOutcome UpgradeElasticsearchDomain(const Model::UpgradeElasticsearchDomainRequest& request) const;

        /**
         * <p>Allows you to either upgrade your domain or perform an Upgrade eligibility
         * check to a compatible Elasticsearch version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeElasticsearchDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpgradeElasticsearchDomainOutcomeCallable UpgradeElasticsearchDomainCallable(const Model::UpgradeElasticsearchDomainRequest& request) const;

        /**
         * <p>Allows you to either upgrade your domain or perform an Upgrade eligibility
         * check to a compatible Elasticsearch version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpgradeElasticsearchDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpgradeElasticsearchDomainAsync(const Model::UpgradeElasticsearchDomainRequest& request, const UpgradeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInboundCrossClusterSearchConnectionAsyncHelper(const Model::AcceptInboundCrossClusterSearchConnectionRequest& request, const AcceptInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePackageAsyncHelper(const Model::AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelElasticsearchServiceSoftwareUpdateAsyncHelper(const Model::CancelElasticsearchServiceSoftwareUpdateRequest& request, const CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateElasticsearchDomainAsyncHelper(const Model::CreateElasticsearchDomainRequest& request, const CreateElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOutboundCrossClusterSearchConnectionAsyncHelper(const Model::CreateOutboundCrossClusterSearchConnectionRequest& request, const CreateOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePackageAsyncHelper(const Model::CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteElasticsearchDomainAsyncHelper(const Model::DeleteElasticsearchDomainRequest& request, const DeleteElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteElasticsearchServiceRoleAsyncHelper(const DeleteElasticsearchServiceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInboundCrossClusterSearchConnectionAsyncHelper(const Model::DeleteInboundCrossClusterSearchConnectionRequest& request, const DeleteInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOutboundCrossClusterSearchConnectionAsyncHelper(const Model::DeleteOutboundCrossClusterSearchConnectionRequest& request, const DeleteOutboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePackageAsyncHelper(const Model::DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeElasticsearchDomainAsyncHelper(const Model::DescribeElasticsearchDomainRequest& request, const DescribeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeElasticsearchDomainConfigAsyncHelper(const Model::DescribeElasticsearchDomainConfigRequest& request, const DescribeElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeElasticsearchDomainsAsyncHelper(const Model::DescribeElasticsearchDomainsRequest& request, const DescribeElasticsearchDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeElasticsearchInstanceTypeLimitsAsyncHelper(const Model::DescribeElasticsearchInstanceTypeLimitsRequest& request, const DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInboundCrossClusterSearchConnectionsAsyncHelper(const Model::DescribeInboundCrossClusterSearchConnectionsRequest& request, const DescribeInboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOutboundCrossClusterSearchConnectionsAsyncHelper(const Model::DescribeOutboundCrossClusterSearchConnectionsRequest& request, const DescribeOutboundCrossClusterSearchConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePackagesAsyncHelper(const Model::DescribePackagesRequest& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedElasticsearchInstanceOfferingsAsyncHelper(const Model::DescribeReservedElasticsearchInstanceOfferingsRequest& request, const DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedElasticsearchInstancesAsyncHelper(const Model::DescribeReservedElasticsearchInstancesRequest& request, const DescribeReservedElasticsearchInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DissociatePackageAsyncHelper(const Model::DissociatePackageRequest& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCompatibleElasticsearchVersionsAsyncHelper(const Model::GetCompatibleElasticsearchVersionsRequest& request, const GetCompatibleElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPackageVersionHistoryAsyncHelper(const Model::GetPackageVersionHistoryRequest& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUpgradeHistoryAsyncHelper(const Model::GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUpgradeStatusAsyncHelper(const Model::GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainNamesAsyncHelper(const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainsForPackageAsyncHelper(const Model::ListDomainsForPackageRequest& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListElasticsearchInstanceTypesAsyncHelper(const Model::ListElasticsearchInstanceTypesRequest& request, const ListElasticsearchInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListElasticsearchVersionsAsyncHelper(const Model::ListElasticsearchVersionsRequest& request, const ListElasticsearchVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPackagesForDomainAsyncHelper(const Model::ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseReservedElasticsearchInstanceOfferingAsyncHelper(const Model::PurchaseReservedElasticsearchInstanceOfferingRequest& request, const PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectInboundCrossClusterSearchConnectionAsyncHelper(const Model::RejectInboundCrossClusterSearchConnectionRequest& request, const RejectInboundCrossClusterSearchConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartElasticsearchServiceSoftwareUpdateAsyncHelper(const Model::StartElasticsearchServiceSoftwareUpdateRequest& request, const StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateElasticsearchDomainConfigAsyncHelper(const Model::UpdateElasticsearchDomainConfigRequest& request, const UpdateElasticsearchDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePackageAsyncHelper(const Model::UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpgradeElasticsearchDomainAsyncHelper(const Model::UpgradeElasticsearchDomainRequest& request, const UpgradeElasticsearchDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ElasticsearchService
} // namespace Aws
