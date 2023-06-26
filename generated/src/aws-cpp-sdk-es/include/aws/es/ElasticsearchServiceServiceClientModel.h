/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/es/ElasticsearchServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/es/ElasticsearchServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ElasticsearchServiceClient header */
#include <aws/es/model/AcceptInboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/AssociatePackageResult.h>
#include <aws/es/model/AuthorizeVpcEndpointAccessResult.h>
#include <aws/es/model/CancelElasticsearchServiceSoftwareUpdateResult.h>
#include <aws/es/model/CreateElasticsearchDomainResult.h>
#include <aws/es/model/CreateOutboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/CreatePackageResult.h>
#include <aws/es/model/CreateVpcEndpointResult.h>
#include <aws/es/model/DeleteElasticsearchDomainResult.h>
#include <aws/es/model/DeleteInboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/DeleteOutboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/DeletePackageResult.h>
#include <aws/es/model/DeleteVpcEndpointResult.h>
#include <aws/es/model/DescribeDomainAutoTunesResult.h>
#include <aws/es/model/DescribeDomainChangeProgressResult.h>
#include <aws/es/model/DescribeElasticsearchDomainResult.h>
#include <aws/es/model/DescribeElasticsearchDomainConfigResult.h>
#include <aws/es/model/DescribeElasticsearchDomainsResult.h>
#include <aws/es/model/DescribeElasticsearchInstanceTypeLimitsResult.h>
#include <aws/es/model/DescribeInboundCrossClusterSearchConnectionsResult.h>
#include <aws/es/model/DescribeOutboundCrossClusterSearchConnectionsResult.h>
#include <aws/es/model/DescribePackagesResult.h>
#include <aws/es/model/DescribeReservedElasticsearchInstanceOfferingsResult.h>
#include <aws/es/model/DescribeReservedElasticsearchInstancesResult.h>
#include <aws/es/model/DescribeVpcEndpointsResult.h>
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
#include <aws/es/model/ListVpcEndpointAccessResult.h>
#include <aws/es/model/ListVpcEndpointsResult.h>
#include <aws/es/model/ListVpcEndpointsForDomainResult.h>
#include <aws/es/model/PurchaseReservedElasticsearchInstanceOfferingResult.h>
#include <aws/es/model/RejectInboundCrossClusterSearchConnectionResult.h>
#include <aws/es/model/RevokeVpcEndpointAccessResult.h>
#include <aws/es/model/StartElasticsearchServiceSoftwareUpdateResult.h>
#include <aws/es/model/UpdateElasticsearchDomainConfigResult.h>
#include <aws/es/model/UpdatePackageResult.h>
#include <aws/es/model/UpdateVpcEndpointResult.h>
#include <aws/es/model/UpgradeElasticsearchDomainResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ElasticsearchServiceClient header */

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
    using ElasticsearchServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ElasticsearchServiceEndpointProviderBase = Aws::ElasticsearchService::Endpoint::ElasticsearchServiceEndpointProviderBase;
    using ElasticsearchServiceEndpointProvider = Aws::ElasticsearchService::Endpoint::ElasticsearchServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ElasticsearchServiceClient header */
      class AcceptInboundCrossClusterSearchConnectionRequest;
      class AddTagsRequest;
      class AssociatePackageRequest;
      class AuthorizeVpcEndpointAccessRequest;
      class CancelElasticsearchServiceSoftwareUpdateRequest;
      class CreateElasticsearchDomainRequest;
      class CreateOutboundCrossClusterSearchConnectionRequest;
      class CreatePackageRequest;
      class CreateVpcEndpointRequest;
      class DeleteElasticsearchDomainRequest;
      class DeleteInboundCrossClusterSearchConnectionRequest;
      class DeleteOutboundCrossClusterSearchConnectionRequest;
      class DeletePackageRequest;
      class DeleteVpcEndpointRequest;
      class DescribeDomainAutoTunesRequest;
      class DescribeDomainChangeProgressRequest;
      class DescribeElasticsearchDomainRequest;
      class DescribeElasticsearchDomainConfigRequest;
      class DescribeElasticsearchDomainsRequest;
      class DescribeElasticsearchInstanceTypeLimitsRequest;
      class DescribeInboundCrossClusterSearchConnectionsRequest;
      class DescribeOutboundCrossClusterSearchConnectionsRequest;
      class DescribePackagesRequest;
      class DescribeReservedElasticsearchInstanceOfferingsRequest;
      class DescribeReservedElasticsearchInstancesRequest;
      class DescribeVpcEndpointsRequest;
      class DissociatePackageRequest;
      class GetCompatibleElasticsearchVersionsRequest;
      class GetPackageVersionHistoryRequest;
      class GetUpgradeHistoryRequest;
      class GetUpgradeStatusRequest;
      class ListDomainNamesRequest;
      class ListDomainsForPackageRequest;
      class ListElasticsearchInstanceTypesRequest;
      class ListElasticsearchVersionsRequest;
      class ListPackagesForDomainRequest;
      class ListTagsRequest;
      class ListVpcEndpointAccessRequest;
      class ListVpcEndpointsRequest;
      class ListVpcEndpointsForDomainRequest;
      class PurchaseReservedElasticsearchInstanceOfferingRequest;
      class RejectInboundCrossClusterSearchConnectionRequest;
      class RemoveTagsRequest;
      class RevokeVpcEndpointAccessRequest;
      class StartElasticsearchServiceSoftwareUpdateRequest;
      class UpdateElasticsearchDomainConfigRequest;
      class UpdatePackageRequest;
      class UpdateVpcEndpointRequest;
      class UpgradeElasticsearchDomainRequest;
      /* End of service model forward declarations required in ElasticsearchServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptInboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> AcceptInboundCrossClusterSearchConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticsearchServiceError> AddTagsOutcome;
      typedef Aws::Utils::Outcome<AssociatePackageResult, ElasticsearchServiceError> AssociatePackageOutcome;
      typedef Aws::Utils::Outcome<AuthorizeVpcEndpointAccessResult, ElasticsearchServiceError> AuthorizeVpcEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<CancelElasticsearchServiceSoftwareUpdateResult, ElasticsearchServiceError> CancelElasticsearchServiceSoftwareUpdateOutcome;
      typedef Aws::Utils::Outcome<CreateElasticsearchDomainResult, ElasticsearchServiceError> CreateElasticsearchDomainOutcome;
      typedef Aws::Utils::Outcome<CreateOutboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> CreateOutboundCrossClusterSearchConnectionOutcome;
      typedef Aws::Utils::Outcome<CreatePackageResult, ElasticsearchServiceError> CreatePackageOutcome;
      typedef Aws::Utils::Outcome<CreateVpcEndpointResult, ElasticsearchServiceError> CreateVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteElasticsearchDomainResult, ElasticsearchServiceError> DeleteElasticsearchDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticsearchServiceError> DeleteElasticsearchServiceRoleOutcome;
      typedef Aws::Utils::Outcome<DeleteInboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> DeleteInboundCrossClusterSearchConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteOutboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> DeleteOutboundCrossClusterSearchConnectionOutcome;
      typedef Aws::Utils::Outcome<DeletePackageResult, ElasticsearchServiceError> DeletePackageOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcEndpointResult, ElasticsearchServiceError> DeleteVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainAutoTunesResult, ElasticsearchServiceError> DescribeDomainAutoTunesOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainChangeProgressResult, ElasticsearchServiceError> DescribeDomainChangeProgressOutcome;
      typedef Aws::Utils::Outcome<DescribeElasticsearchDomainResult, ElasticsearchServiceError> DescribeElasticsearchDomainOutcome;
      typedef Aws::Utils::Outcome<DescribeElasticsearchDomainConfigResult, ElasticsearchServiceError> DescribeElasticsearchDomainConfigOutcome;
      typedef Aws::Utils::Outcome<DescribeElasticsearchDomainsResult, ElasticsearchServiceError> DescribeElasticsearchDomainsOutcome;
      typedef Aws::Utils::Outcome<DescribeElasticsearchInstanceTypeLimitsResult, ElasticsearchServiceError> DescribeElasticsearchInstanceTypeLimitsOutcome;
      typedef Aws::Utils::Outcome<DescribeInboundCrossClusterSearchConnectionsResult, ElasticsearchServiceError> DescribeInboundCrossClusterSearchConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeOutboundCrossClusterSearchConnectionsResult, ElasticsearchServiceError> DescribeOutboundCrossClusterSearchConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribePackagesResult, ElasticsearchServiceError> DescribePackagesOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedElasticsearchInstanceOfferingsResult, ElasticsearchServiceError> DescribeReservedElasticsearchInstanceOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedElasticsearchInstancesResult, ElasticsearchServiceError> DescribeReservedElasticsearchInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointsResult, ElasticsearchServiceError> DescribeVpcEndpointsOutcome;
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
      typedef Aws::Utils::Outcome<ListVpcEndpointAccessResult, ElasticsearchServiceError> ListVpcEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<ListVpcEndpointsResult, ElasticsearchServiceError> ListVpcEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListVpcEndpointsForDomainResult, ElasticsearchServiceError> ListVpcEndpointsForDomainOutcome;
      typedef Aws::Utils::Outcome<PurchaseReservedElasticsearchInstanceOfferingResult, ElasticsearchServiceError> PurchaseReservedElasticsearchInstanceOfferingOutcome;
      typedef Aws::Utils::Outcome<RejectInboundCrossClusterSearchConnectionResult, ElasticsearchServiceError> RejectInboundCrossClusterSearchConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticsearchServiceError> RemoveTagsOutcome;
      typedef Aws::Utils::Outcome<RevokeVpcEndpointAccessResult, ElasticsearchServiceError> RevokeVpcEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<StartElasticsearchServiceSoftwareUpdateResult, ElasticsearchServiceError> StartElasticsearchServiceSoftwareUpdateOutcome;
      typedef Aws::Utils::Outcome<UpdateElasticsearchDomainConfigResult, ElasticsearchServiceError> UpdateElasticsearchDomainConfigOutcome;
      typedef Aws::Utils::Outcome<UpdatePackageResult, ElasticsearchServiceError> UpdatePackageOutcome;
      typedef Aws::Utils::Outcome<UpdateVpcEndpointResult, ElasticsearchServiceError> UpdateVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<UpgradeElasticsearchDomainResult, ElasticsearchServiceError> UpgradeElasticsearchDomainOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptInboundCrossClusterSearchConnectionOutcome> AcceptInboundCrossClusterSearchConnectionOutcomeCallable;
      typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
      typedef std::future<AssociatePackageOutcome> AssociatePackageOutcomeCallable;
      typedef std::future<AuthorizeVpcEndpointAccessOutcome> AuthorizeVpcEndpointAccessOutcomeCallable;
      typedef std::future<CancelElasticsearchServiceSoftwareUpdateOutcome> CancelElasticsearchServiceSoftwareUpdateOutcomeCallable;
      typedef std::future<CreateElasticsearchDomainOutcome> CreateElasticsearchDomainOutcomeCallable;
      typedef std::future<CreateOutboundCrossClusterSearchConnectionOutcome> CreateOutboundCrossClusterSearchConnectionOutcomeCallable;
      typedef std::future<CreatePackageOutcome> CreatePackageOutcomeCallable;
      typedef std::future<CreateVpcEndpointOutcome> CreateVpcEndpointOutcomeCallable;
      typedef std::future<DeleteElasticsearchDomainOutcome> DeleteElasticsearchDomainOutcomeCallable;
      typedef std::future<DeleteElasticsearchServiceRoleOutcome> DeleteElasticsearchServiceRoleOutcomeCallable;
      typedef std::future<DeleteInboundCrossClusterSearchConnectionOutcome> DeleteInboundCrossClusterSearchConnectionOutcomeCallable;
      typedef std::future<DeleteOutboundCrossClusterSearchConnectionOutcome> DeleteOutboundCrossClusterSearchConnectionOutcomeCallable;
      typedef std::future<DeletePackageOutcome> DeletePackageOutcomeCallable;
      typedef std::future<DeleteVpcEndpointOutcome> DeleteVpcEndpointOutcomeCallable;
      typedef std::future<DescribeDomainAutoTunesOutcome> DescribeDomainAutoTunesOutcomeCallable;
      typedef std::future<DescribeDomainChangeProgressOutcome> DescribeDomainChangeProgressOutcomeCallable;
      typedef std::future<DescribeElasticsearchDomainOutcome> DescribeElasticsearchDomainOutcomeCallable;
      typedef std::future<DescribeElasticsearchDomainConfigOutcome> DescribeElasticsearchDomainConfigOutcomeCallable;
      typedef std::future<DescribeElasticsearchDomainsOutcome> DescribeElasticsearchDomainsOutcomeCallable;
      typedef std::future<DescribeElasticsearchInstanceTypeLimitsOutcome> DescribeElasticsearchInstanceTypeLimitsOutcomeCallable;
      typedef std::future<DescribeInboundCrossClusterSearchConnectionsOutcome> DescribeInboundCrossClusterSearchConnectionsOutcomeCallable;
      typedef std::future<DescribeOutboundCrossClusterSearchConnectionsOutcome> DescribeOutboundCrossClusterSearchConnectionsOutcomeCallable;
      typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
      typedef std::future<DescribeReservedElasticsearchInstanceOfferingsOutcome> DescribeReservedElasticsearchInstanceOfferingsOutcomeCallable;
      typedef std::future<DescribeReservedElasticsearchInstancesOutcome> DescribeReservedElasticsearchInstancesOutcomeCallable;
      typedef std::future<DescribeVpcEndpointsOutcome> DescribeVpcEndpointsOutcomeCallable;
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
      typedef std::future<ListVpcEndpointAccessOutcome> ListVpcEndpointAccessOutcomeCallable;
      typedef std::future<ListVpcEndpointsOutcome> ListVpcEndpointsOutcomeCallable;
      typedef std::future<ListVpcEndpointsForDomainOutcome> ListVpcEndpointsForDomainOutcomeCallable;
      typedef std::future<PurchaseReservedElasticsearchInstanceOfferingOutcome> PurchaseReservedElasticsearchInstanceOfferingOutcomeCallable;
      typedef std::future<RejectInboundCrossClusterSearchConnectionOutcome> RejectInboundCrossClusterSearchConnectionOutcomeCallable;
      typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
      typedef std::future<RevokeVpcEndpointAccessOutcome> RevokeVpcEndpointAccessOutcomeCallable;
      typedef std::future<StartElasticsearchServiceSoftwareUpdateOutcome> StartElasticsearchServiceSoftwareUpdateOutcomeCallable;
      typedef std::future<UpdateElasticsearchDomainConfigOutcome> UpdateElasticsearchDomainConfigOutcomeCallable;
      typedef std::future<UpdatePackageOutcome> UpdatePackageOutcomeCallable;
      typedef std::future<UpdateVpcEndpointOutcome> UpdateVpcEndpointOutcomeCallable;
      typedef std::future<UpgradeElasticsearchDomainOutcome> UpgradeElasticsearchDomainOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ElasticsearchServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::AcceptInboundCrossClusterSearchConnectionRequest&, const Model::AcceptInboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::AssociatePackageRequest&, const Model::AssociatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::AuthorizeVpcEndpointAccessRequest&, const Model::AuthorizeVpcEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeVpcEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CancelElasticsearchServiceSoftwareUpdateRequest&, const Model::CancelElasticsearchServiceSoftwareUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelElasticsearchServiceSoftwareUpdateResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CreateElasticsearchDomainRequest&, const Model::CreateElasticsearchDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateElasticsearchDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CreateOutboundCrossClusterSearchConnectionRequest&, const Model::CreateOutboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOutboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CreatePackageRequest&, const Model::CreatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::CreateVpcEndpointRequest&, const Model::CreateVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteElasticsearchDomainRequest&, const Model::DeleteElasticsearchDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteElasticsearchDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteElasticsearchServiceRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteElasticsearchServiceRoleResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteInboundCrossClusterSearchConnectionRequest&, const Model::DeleteInboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteOutboundCrossClusterSearchConnectionRequest&, const Model::DeleteOutboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOutboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeletePackageRequest&, const Model::DeletePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DeleteVpcEndpointRequest&, const Model::DeleteVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeDomainAutoTunesRequest&, const Model::DescribeDomainAutoTunesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainAutoTunesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeDomainChangeProgressRequest&, const Model::DescribeDomainChangeProgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainChangeProgressResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeElasticsearchDomainRequest&, const Model::DescribeElasticsearchDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticsearchDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeElasticsearchDomainConfigRequest&, const Model::DescribeElasticsearchDomainConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticsearchDomainConfigResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeElasticsearchDomainsRequest&, const Model::DescribeElasticsearchDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticsearchDomainsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeElasticsearchInstanceTypeLimitsRequest&, const Model::DescribeElasticsearchInstanceTypeLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticsearchInstanceTypeLimitsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeInboundCrossClusterSearchConnectionsRequest&, const Model::DescribeInboundCrossClusterSearchConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInboundCrossClusterSearchConnectionsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeOutboundCrossClusterSearchConnectionsRequest&, const Model::DescribeOutboundCrossClusterSearchConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOutboundCrossClusterSearchConnectionsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribePackagesRequest&, const Model::DescribePackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackagesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeReservedElasticsearchInstanceOfferingsRequest&, const Model::DescribeReservedElasticsearchInstanceOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedElasticsearchInstanceOfferingsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeReservedElasticsearchInstancesRequest&, const Model::DescribeReservedElasticsearchInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedElasticsearchInstancesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DescribeVpcEndpointsRequest&, const Model::DescribeVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::DissociatePackageRequest&, const Model::DissociatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DissociatePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::GetCompatibleElasticsearchVersionsRequest&, const Model::GetCompatibleElasticsearchVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCompatibleElasticsearchVersionsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::GetPackageVersionHistoryRequest&, const Model::GetPackageVersionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPackageVersionHistoryResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::GetUpgradeHistoryRequest&, const Model::GetUpgradeHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUpgradeHistoryResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::GetUpgradeStatusRequest&, const Model::GetUpgradeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUpgradeStatusResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListDomainNamesRequest&, const Model::ListDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainNamesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListDomainsForPackageRequest&, const Model::ListDomainsForPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsForPackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListElasticsearchInstanceTypesRequest&, const Model::ListElasticsearchInstanceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListElasticsearchInstanceTypesResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListElasticsearchVersionsRequest&, const Model::ListElasticsearchVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListElasticsearchVersionsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListPackagesForDomainRequest&, const Model::ListPackagesForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagesForDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListVpcEndpointAccessRequest&, const Model::ListVpcEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListVpcEndpointsRequest&, const Model::ListVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::ListVpcEndpointsForDomainRequest&, const Model::ListVpcEndpointsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcEndpointsForDomainResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::PurchaseReservedElasticsearchInstanceOfferingRequest&, const Model::PurchaseReservedElasticsearchInstanceOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedElasticsearchInstanceOfferingResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::RejectInboundCrossClusterSearchConnectionRequest&, const Model::RejectInboundCrossClusterSearchConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInboundCrossClusterSearchConnectionResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::RevokeVpcEndpointAccessRequest&, const Model::RevokeVpcEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeVpcEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::StartElasticsearchServiceSoftwareUpdateRequest&, const Model::StartElasticsearchServiceSoftwareUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartElasticsearchServiceSoftwareUpdateResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::UpdateElasticsearchDomainConfigRequest&, const Model::UpdateElasticsearchDomainConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateElasticsearchDomainConfigResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::UpdatePackageRequest&, const Model::UpdatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePackageResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::UpdateVpcEndpointRequest&, const Model::UpdateVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const ElasticsearchServiceClient*, const Model::UpgradeElasticsearchDomainRequest&, const Model::UpgradeElasticsearchDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradeElasticsearchDomainResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ElasticsearchService
} // namespace Aws
