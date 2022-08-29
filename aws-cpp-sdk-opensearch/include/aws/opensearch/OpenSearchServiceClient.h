/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/AcceptInboundConnectionResult.h>
#include <aws/opensearch/model/AssociatePackageResult.h>
#include <aws/opensearch/model/CancelServiceSoftwareUpdateResult.h>
#include <aws/opensearch/model/CreateDomainResult.h>
#include <aws/opensearch/model/CreateOutboundConnectionResult.h>
#include <aws/opensearch/model/CreatePackageResult.h>
#include <aws/opensearch/model/DeleteDomainResult.h>
#include <aws/opensearch/model/DeleteInboundConnectionResult.h>
#include <aws/opensearch/model/DeleteOutboundConnectionResult.h>
#include <aws/opensearch/model/DeletePackageResult.h>
#include <aws/opensearch/model/DescribeDomainResult.h>
#include <aws/opensearch/model/DescribeDomainAutoTunesResult.h>
#include <aws/opensearch/model/DescribeDomainChangeProgressResult.h>
#include <aws/opensearch/model/DescribeDomainConfigResult.h>
#include <aws/opensearch/model/DescribeDomainsResult.h>
#include <aws/opensearch/model/DescribeInboundConnectionsResult.h>
#include <aws/opensearch/model/DescribeInstanceTypeLimitsResult.h>
#include <aws/opensearch/model/DescribeOutboundConnectionsResult.h>
#include <aws/opensearch/model/DescribePackagesResult.h>
#include <aws/opensearch/model/DescribeReservedInstanceOfferingsResult.h>
#include <aws/opensearch/model/DescribeReservedInstancesResult.h>
#include <aws/opensearch/model/DissociatePackageResult.h>
#include <aws/opensearch/model/GetCompatibleVersionsResult.h>
#include <aws/opensearch/model/GetPackageVersionHistoryResult.h>
#include <aws/opensearch/model/GetUpgradeHistoryResult.h>
#include <aws/opensearch/model/GetUpgradeStatusResult.h>
#include <aws/opensearch/model/ListDomainNamesResult.h>
#include <aws/opensearch/model/ListDomainsForPackageResult.h>
#include <aws/opensearch/model/ListInstanceTypeDetailsResult.h>
#include <aws/opensearch/model/ListPackagesForDomainResult.h>
#include <aws/opensearch/model/ListTagsResult.h>
#include <aws/opensearch/model/ListVersionsResult.h>
#include <aws/opensearch/model/PurchaseReservedInstanceOfferingResult.h>
#include <aws/opensearch/model/RejectInboundConnectionResult.h>
#include <aws/opensearch/model/StartServiceSoftwareUpdateResult.h>
#include <aws/opensearch/model/UpdateDomainConfigResult.h>
#include <aws/opensearch/model/UpdatePackageResult.h>
#include <aws/opensearch/model/UpgradeDomainResult.h>
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

namespace OpenSearchService
{

namespace Model
{
        class AcceptInboundConnectionRequest;
        class AddTagsRequest;
        class AssociatePackageRequest;
        class CancelServiceSoftwareUpdateRequest;
        class CreateDomainRequest;
        class CreateOutboundConnectionRequest;
        class CreatePackageRequest;
        class DeleteDomainRequest;
        class DeleteInboundConnectionRequest;
        class DeleteOutboundConnectionRequest;
        class DeletePackageRequest;
        class DescribeDomainRequest;
        class DescribeDomainAutoTunesRequest;
        class DescribeDomainChangeProgressRequest;
        class DescribeDomainConfigRequest;
        class DescribeDomainsRequest;
        class DescribeInboundConnectionsRequest;
        class DescribeInstanceTypeLimitsRequest;
        class DescribeOutboundConnectionsRequest;
        class DescribePackagesRequest;
        class DescribeReservedInstanceOfferingsRequest;
        class DescribeReservedInstancesRequest;
        class DissociatePackageRequest;
        class GetCompatibleVersionsRequest;
        class GetPackageVersionHistoryRequest;
        class GetUpgradeHistoryRequest;
        class GetUpgradeStatusRequest;
        class ListDomainNamesRequest;
        class ListDomainsForPackageRequest;
        class ListInstanceTypeDetailsRequest;
        class ListPackagesForDomainRequest;
        class ListTagsRequest;
        class ListVersionsRequest;
        class PurchaseReservedInstanceOfferingRequest;
        class RejectInboundConnectionRequest;
        class RemoveTagsRequest;
        class StartServiceSoftwareUpdateRequest;
        class UpdateDomainConfigRequest;
        class UpdatePackageRequest;
        class UpgradeDomainRequest;

        typedef Aws::Utils::Outcome<AcceptInboundConnectionResult, OpenSearchServiceError> AcceptInboundConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OpenSearchServiceError> AddTagsOutcome;
        typedef Aws::Utils::Outcome<AssociatePackageResult, OpenSearchServiceError> AssociatePackageOutcome;
        typedef Aws::Utils::Outcome<CancelServiceSoftwareUpdateResult, OpenSearchServiceError> CancelServiceSoftwareUpdateOutcome;
        typedef Aws::Utils::Outcome<CreateDomainResult, OpenSearchServiceError> CreateDomainOutcome;
        typedef Aws::Utils::Outcome<CreateOutboundConnectionResult, OpenSearchServiceError> CreateOutboundConnectionOutcome;
        typedef Aws::Utils::Outcome<CreatePackageResult, OpenSearchServiceError> CreatePackageOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainResult, OpenSearchServiceError> DeleteDomainOutcome;
        typedef Aws::Utils::Outcome<DeleteInboundConnectionResult, OpenSearchServiceError> DeleteInboundConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteOutboundConnectionResult, OpenSearchServiceError> DeleteOutboundConnectionOutcome;
        typedef Aws::Utils::Outcome<DeletePackageResult, OpenSearchServiceError> DeletePackageOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainResult, OpenSearchServiceError> DescribeDomainOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainAutoTunesResult, OpenSearchServiceError> DescribeDomainAutoTunesOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainChangeProgressResult, OpenSearchServiceError> DescribeDomainChangeProgressOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainConfigResult, OpenSearchServiceError> DescribeDomainConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainsResult, OpenSearchServiceError> DescribeDomainsOutcome;
        typedef Aws::Utils::Outcome<DescribeInboundConnectionsResult, OpenSearchServiceError> DescribeInboundConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceTypeLimitsResult, OpenSearchServiceError> DescribeInstanceTypeLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeOutboundConnectionsResult, OpenSearchServiceError> DescribeOutboundConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribePackagesResult, OpenSearchServiceError> DescribePackagesOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedInstanceOfferingsResult, OpenSearchServiceError> DescribeReservedInstanceOfferingsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedInstancesResult, OpenSearchServiceError> DescribeReservedInstancesOutcome;
        typedef Aws::Utils::Outcome<DissociatePackageResult, OpenSearchServiceError> DissociatePackageOutcome;
        typedef Aws::Utils::Outcome<GetCompatibleVersionsResult, OpenSearchServiceError> GetCompatibleVersionsOutcome;
        typedef Aws::Utils::Outcome<GetPackageVersionHistoryResult, OpenSearchServiceError> GetPackageVersionHistoryOutcome;
        typedef Aws::Utils::Outcome<GetUpgradeHistoryResult, OpenSearchServiceError> GetUpgradeHistoryOutcome;
        typedef Aws::Utils::Outcome<GetUpgradeStatusResult, OpenSearchServiceError> GetUpgradeStatusOutcome;
        typedef Aws::Utils::Outcome<ListDomainNamesResult, OpenSearchServiceError> ListDomainNamesOutcome;
        typedef Aws::Utils::Outcome<ListDomainsForPackageResult, OpenSearchServiceError> ListDomainsForPackageOutcome;
        typedef Aws::Utils::Outcome<ListInstanceTypeDetailsResult, OpenSearchServiceError> ListInstanceTypeDetailsOutcome;
        typedef Aws::Utils::Outcome<ListPackagesForDomainResult, OpenSearchServiceError> ListPackagesForDomainOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, OpenSearchServiceError> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ListVersionsResult, OpenSearchServiceError> ListVersionsOutcome;
        typedef Aws::Utils::Outcome<PurchaseReservedInstanceOfferingResult, OpenSearchServiceError> PurchaseReservedInstanceOfferingOutcome;
        typedef Aws::Utils::Outcome<RejectInboundConnectionResult, OpenSearchServiceError> RejectInboundConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OpenSearchServiceError> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<StartServiceSoftwareUpdateResult, OpenSearchServiceError> StartServiceSoftwareUpdateOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainConfigResult, OpenSearchServiceError> UpdateDomainConfigOutcome;
        typedef Aws::Utils::Outcome<UpdatePackageResult, OpenSearchServiceError> UpdatePackageOutcome;
        typedef Aws::Utils::Outcome<UpgradeDomainResult, OpenSearchServiceError> UpgradeDomainOutcome;

        typedef std::future<AcceptInboundConnectionOutcome> AcceptInboundConnectionOutcomeCallable;
        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<AssociatePackageOutcome> AssociatePackageOutcomeCallable;
        typedef std::future<CancelServiceSoftwareUpdateOutcome> CancelServiceSoftwareUpdateOutcomeCallable;
        typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
        typedef std::future<CreateOutboundConnectionOutcome> CreateOutboundConnectionOutcomeCallable;
        typedef std::future<CreatePackageOutcome> CreatePackageOutcomeCallable;
        typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
        typedef std::future<DeleteInboundConnectionOutcome> DeleteInboundConnectionOutcomeCallable;
        typedef std::future<DeleteOutboundConnectionOutcome> DeleteOutboundConnectionOutcomeCallable;
        typedef std::future<DeletePackageOutcome> DeletePackageOutcomeCallable;
        typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
        typedef std::future<DescribeDomainAutoTunesOutcome> DescribeDomainAutoTunesOutcomeCallable;
        typedef std::future<DescribeDomainChangeProgressOutcome> DescribeDomainChangeProgressOutcomeCallable;
        typedef std::future<DescribeDomainConfigOutcome> DescribeDomainConfigOutcomeCallable;
        typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
        typedef std::future<DescribeInboundConnectionsOutcome> DescribeInboundConnectionsOutcomeCallable;
        typedef std::future<DescribeInstanceTypeLimitsOutcome> DescribeInstanceTypeLimitsOutcomeCallable;
        typedef std::future<DescribeOutboundConnectionsOutcome> DescribeOutboundConnectionsOutcomeCallable;
        typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
        typedef std::future<DescribeReservedInstanceOfferingsOutcome> DescribeReservedInstanceOfferingsOutcomeCallable;
        typedef std::future<DescribeReservedInstancesOutcome> DescribeReservedInstancesOutcomeCallable;
        typedef std::future<DissociatePackageOutcome> DissociatePackageOutcomeCallable;
        typedef std::future<GetCompatibleVersionsOutcome> GetCompatibleVersionsOutcomeCallable;
        typedef std::future<GetPackageVersionHistoryOutcome> GetPackageVersionHistoryOutcomeCallable;
        typedef std::future<GetUpgradeHistoryOutcome> GetUpgradeHistoryOutcomeCallable;
        typedef std::future<GetUpgradeStatusOutcome> GetUpgradeStatusOutcomeCallable;
        typedef std::future<ListDomainNamesOutcome> ListDomainNamesOutcomeCallable;
        typedef std::future<ListDomainsForPackageOutcome> ListDomainsForPackageOutcomeCallable;
        typedef std::future<ListInstanceTypeDetailsOutcome> ListInstanceTypeDetailsOutcomeCallable;
        typedef std::future<ListPackagesForDomainOutcome> ListPackagesForDomainOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ListVersionsOutcome> ListVersionsOutcomeCallable;
        typedef std::future<PurchaseReservedInstanceOfferingOutcome> PurchaseReservedInstanceOfferingOutcomeCallable;
        typedef std::future<RejectInboundConnectionOutcome> RejectInboundConnectionOutcomeCallable;
        typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
        typedef std::future<StartServiceSoftwareUpdateOutcome> StartServiceSoftwareUpdateOutcomeCallable;
        typedef std::future<UpdateDomainConfigOutcome> UpdateDomainConfigOutcomeCallable;
        typedef std::future<UpdatePackageOutcome> UpdatePackageOutcomeCallable;
        typedef std::future<UpgradeDomainOutcome> UpgradeDomainOutcomeCallable;
} // namespace Model

  class OpenSearchServiceClient;

    typedef std::function<void(const OpenSearchServiceClient*, const Model::AcceptInboundConnectionRequest&, const Model::AcceptInboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::AssociatePackageRequest&, const Model::AssociatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CancelServiceSoftwareUpdateRequest&, const Model::CancelServiceSoftwareUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelServiceSoftwareUpdateResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CreateOutboundConnectionRequest&, const Model::CreateOutboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOutboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CreatePackageRequest&, const Model::CreatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeleteInboundConnectionRequest&, const Model::DeleteInboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeleteOutboundConnectionRequest&, const Model::DeleteOutboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOutboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeletePackageRequest&, const Model::DeletePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainAutoTunesRequest&, const Model::DescribeDomainAutoTunesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainAutoTunesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainChangeProgressRequest&, const Model::DescribeDomainChangeProgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainChangeProgressResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainConfigRequest&, const Model::DescribeDomainConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainConfigResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainsRequest&, const Model::DescribeDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeInboundConnectionsRequest&, const Model::DescribeInboundConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInboundConnectionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeInstanceTypeLimitsRequest&, const Model::DescribeInstanceTypeLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceTypeLimitsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeOutboundConnectionsRequest&, const Model::DescribeOutboundConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOutboundConnectionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribePackagesRequest&, const Model::DescribePackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackagesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeReservedInstanceOfferingsRequest&, const Model::DescribeReservedInstanceOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstanceOfferingsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeReservedInstancesRequest&, const Model::DescribeReservedInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DissociatePackageRequest&, const Model::DissociatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DissociatePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetCompatibleVersionsRequest&, const Model::GetCompatibleVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCompatibleVersionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetPackageVersionHistoryRequest&, const Model::GetPackageVersionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPackageVersionHistoryResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetUpgradeHistoryRequest&, const Model::GetUpgradeHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUpgradeHistoryResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetUpgradeStatusRequest&, const Model::GetUpgradeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUpgradeStatusResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListDomainNamesRequest&, const Model::ListDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainNamesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListDomainsForPackageRequest&, const Model::ListDomainsForPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsForPackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListInstanceTypeDetailsRequest&, const Model::ListInstanceTypeDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceTypeDetailsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListPackagesForDomainRequest&, const Model::ListPackagesForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagesForDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListVersionsRequest&, const Model::ListVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVersionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::PurchaseReservedInstanceOfferingRequest&, const Model::PurchaseReservedInstanceOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedInstanceOfferingResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::RejectInboundConnectionRequest&, const Model::RejectInboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::StartServiceSoftwareUpdateRequest&, const Model::StartServiceSoftwareUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartServiceSoftwareUpdateResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpdateDomainConfigRequest&, const Model::UpdateDomainConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainConfigResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpdatePackageRequest&, const Model::UpdatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpgradeDomainRequest&, const Model::UpgradeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradeDomainResponseReceivedHandler;

  /**
   * <fullname>Amazon OpenSearch Configuration Service</fullname> <p>Use the Amazon
   * OpenSearch configuration API to create, configure, and manage Amazon OpenSearch
   * Service domains.</p> <p>For sample code that uses the configuration API, see the
   * <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
   * Amazon OpenSearch Service Developer Guide</a>. The guide also contains <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html">
   * sample code for sending signed HTTP requests to the OpenSearch APIs</a>. </p>
   * <p>The endpoint for configuration service requests is region-specific:
   * es.<i>region</i>.amazonaws.com. For example, es.us-east-1.amazonaws.com. For a
   * current list of supported regions and endpoints, see <a
   * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions"
   * target="_blank">Regions and Endpoints</a>. </p>
   */
  class AWS_OPENSEARCHSERVICE_API OpenSearchServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~OpenSearchServiceClient();


        /**
         * <p>Allows the remote domain owner to accept an inbound cross-cluster connection
         * request.</p><p><h3>See Also:</h3>   <a
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
         * <p>Attaches tags to an existing domain. Tags are a set of case-sensitive key
         * value pairs. An domain can have up to 10 tags. See <a
         * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-awsresorcetagging"
         * target="_blank"> Tagging Amazon OpenSearch Service domains</a> for more
         * information. </p><p><h3>See Also:</h3>   <a
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
         * <p>Associates a package with an Amazon OpenSearch Service domain.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Cancels a scheduled service software update for an Amazon OpenSearch Service
         * domain. You can only perform this operation before the
         * <code>AutomatedUpdateDate</code> and when the <code>UpdateStatus</code> is in
         * the <code>PENDING_UPDATE</code> state. </p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a new Amazon OpenSearch Service domain. For more information, see <a
         * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html"
         * target="_blank">Creating and managing Amazon OpenSearch Service domains </a> in
         * the <i>Amazon OpenSearch Service Developer Guide</i>. </p><p><h3>See Also:</h3> 
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
         * <p>Creates a new cross-cluster connection from a local OpenSearch domain to a
         * remote OpenSearch domain.</p><p><h3>See Also:</h3>   <a
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
         * <p>Create a package for use with Amazon OpenSearch Service
         * domains.</p><p><h3>See Also:</h3>   <a
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
         * <p>Permanently deletes the specified domain and all of its data. Once a domain
         * is deleted, it cannot be recovered. </p><p><h3>See Also:</h3>   <a
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
         * <p>Allows the remote domain owner to delete an existing inbound cross-cluster
         * connection.</p><p><h3>See Also:</h3>   <a
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
         * <p>Allows the local domain owner to delete an existing outbound cross-cluster
         * connection.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes the package.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns domain configuration information about the specified domain,
         * including the domain ID, domain endpoint, and domain ARN. </p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Provides scheduled Auto-Tune action details for the domain, such as Auto-Tune
         * action type, description, severity, and scheduled date. </p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Returns information about the current blue/green deployment happening on a
         * domain, including a change ID, status, and progress stages.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Provides cluster configuration information about the specified domain, such
         * as the state, creation date, update version, and update date for cluster
         * options. </p><p><h3>See Also:</h3>   <a
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
         * <p>Returns domain configuration information about the specified domains,
         * including the domain ID, domain endpoint, and domain ARN. </p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Lists all the inbound cross-cluster connections for a remote
         * domain.</p><p><h3>See Also:</h3>   <a
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
         * <p> Describe the limits for a given instance type and OpenSearch or
         * Elasticsearch version. When modifying an existing domain, specify the <code>
         * <a>DomainName</a> </code> to see which limits you can modify. </p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Lists all the outbound cross-cluster connections for a local
         * domain.</p><p><h3>See Also:</h3>   <a
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
         * <p>Describes all packages available to Amazon OpenSearch Service domains.
         * Includes options for filtering, limiting the number of results, and pagination.
         * </p><p><h3>See Also:</h3>   <a
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
         * <p>Lists available reserved OpenSearch instance offerings.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Returns information about reserved OpenSearch instances for this
         * account.</p><p><h3>See Also:</h3>   <a
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
         * <p>Dissociates a package from the Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
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
         * <p> Returns a list of upgrade-compatible versions of OpenSearch/Elasticsearch.
         * You can optionally pass a <code> <a>DomainName</a> </code> to get all
         * upgrade-compatible versions of OpenSearch/Elasticsearch for that specific
         * domain. </p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of package versions, along with their creation time and commit
         * message.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the complete history of the last 10 upgrades performed on the
         * domain.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the latest status of the last upgrade or upgrade eligibility check
         * performed on the domain. </p><p><h3>See Also:</h3>   <a
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
         * <p>Returns the names of all domains owned by the current user's
         * account.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists all Amazon OpenSearch Service domains associated with the
         * package.</p><p><h3>See Also:</h3>   <a
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
         * 
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
         * <p>Lists all packages associated with the Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns all tags for the given domain.</p><p><h3>See Also:</h3>   <a
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
         * <p>List all supported versions of OpenSearch and Elasticsearch.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Allows you to purchase reserved OpenSearch instances.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Allows the remote domain owner to reject an inbound cross-cluster connection
         * request.</p><p><h3>See Also:</h3>   <a
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
         * <p>Removes the specified set of tags from the given domain.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Schedules a service software update for an Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
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
         * <p>Modifies the cluster configuration of the specified domain, such as setting
         * the instance type and the number of instances. </p><p><h3>See Also:</h3>   <a
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
         * <p>Updates a package for use with Amazon OpenSearch Service
         * domains.</p><p><h3>See Also:</h3>   <a
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
         * <p>Allows you to either upgrade your domain or perform an upgrade eligibility
         * check to a compatible version of OpenSearch or Elasticsearch. </p><p><h3>See
         * Also:</h3>   <a
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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInboundConnectionAsyncHelper(const Model::AcceptInboundConnectionRequest& request, const AcceptInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePackageAsyncHelper(const Model::AssociatePackageRequest& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelServiceSoftwareUpdateAsyncHelper(const Model::CancelServiceSoftwareUpdateRequest& request, const CancelServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainAsyncHelper(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOutboundConnectionAsyncHelper(const Model::CreateOutboundConnectionRequest& request, const CreateOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePackageAsyncHelper(const Model::CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainAsyncHelper(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInboundConnectionAsyncHelper(const Model::DeleteInboundConnectionRequest& request, const DeleteInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOutboundConnectionAsyncHelper(const Model::DeleteOutboundConnectionRequest& request, const DeleteOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePackageAsyncHelper(const Model::DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainAsyncHelper(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainAutoTunesAsyncHelper(const Model::DescribeDomainAutoTunesRequest& request, const DescribeDomainAutoTunesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainChangeProgressAsyncHelper(const Model::DescribeDomainChangeProgressRequest& request, const DescribeDomainChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainConfigAsyncHelper(const Model::DescribeDomainConfigRequest& request, const DescribeDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainsAsyncHelper(const Model::DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInboundConnectionsAsyncHelper(const Model::DescribeInboundConnectionsRequest& request, const DescribeInboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceTypeLimitsAsyncHelper(const Model::DescribeInstanceTypeLimitsRequest& request, const DescribeInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOutboundConnectionsAsyncHelper(const Model::DescribeOutboundConnectionsRequest& request, const DescribeOutboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePackagesAsyncHelper(const Model::DescribePackagesRequest& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedInstanceOfferingsAsyncHelper(const Model::DescribeReservedInstanceOfferingsRequest& request, const DescribeReservedInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedInstancesAsyncHelper(const Model::DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DissociatePackageAsyncHelper(const Model::DissociatePackageRequest& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCompatibleVersionsAsyncHelper(const Model::GetCompatibleVersionsRequest& request, const GetCompatibleVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPackageVersionHistoryAsyncHelper(const Model::GetPackageVersionHistoryRequest& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUpgradeHistoryAsyncHelper(const Model::GetUpgradeHistoryRequest& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUpgradeStatusAsyncHelper(const Model::GetUpgradeStatusRequest& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainNamesAsyncHelper(const Model::ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainsForPackageAsyncHelper(const Model::ListDomainsForPackageRequest& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceTypeDetailsAsyncHelper(const Model::ListInstanceTypeDetailsRequest& request, const ListInstanceTypeDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPackagesForDomainAsyncHelper(const Model::ListPackagesForDomainRequest& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVersionsAsyncHelper(const Model::ListVersionsRequest& request, const ListVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseReservedInstanceOfferingAsyncHelper(const Model::PurchaseReservedInstanceOfferingRequest& request, const PurchaseReservedInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectInboundConnectionAsyncHelper(const Model::RejectInboundConnectionRequest& request, const RejectInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartServiceSoftwareUpdateAsyncHelper(const Model::StartServiceSoftwareUpdateRequest& request, const StartServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainConfigAsyncHelper(const Model::UpdateDomainConfigRequest& request, const UpdateDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePackageAsyncHelper(const Model::UpdatePackageRequest& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpgradeDomainAsyncHelper(const Model::UpgradeDomainRequest& request, const UpgradeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace OpenSearchService
} // namespace Aws
