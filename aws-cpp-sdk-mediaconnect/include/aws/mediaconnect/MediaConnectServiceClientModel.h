/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediaconnect/MediaConnectErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediaconnect/MediaConnectEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaConnectClient header */
#include <aws/mediaconnect/model/AddFlowMediaStreamsResult.h>
#include <aws/mediaconnect/model/AddFlowOutputsResult.h>
#include <aws/mediaconnect/model/AddFlowSourcesResult.h>
#include <aws/mediaconnect/model/AddFlowVpcInterfacesResult.h>
#include <aws/mediaconnect/model/CreateFlowResult.h>
#include <aws/mediaconnect/model/DeleteFlowResult.h>
#include <aws/mediaconnect/model/DescribeFlowResult.h>
#include <aws/mediaconnect/model/DescribeOfferingResult.h>
#include <aws/mediaconnect/model/DescribeReservationResult.h>
#include <aws/mediaconnect/model/GrantFlowEntitlementsResult.h>
#include <aws/mediaconnect/model/ListEntitlementsResult.h>
#include <aws/mediaconnect/model/ListFlowsResult.h>
#include <aws/mediaconnect/model/ListOfferingsResult.h>
#include <aws/mediaconnect/model/ListReservationsResult.h>
#include <aws/mediaconnect/model/ListTagsForResourceResult.h>
#include <aws/mediaconnect/model/PurchaseOfferingResult.h>
#include <aws/mediaconnect/model/RemoveFlowMediaStreamResult.h>
#include <aws/mediaconnect/model/RemoveFlowOutputResult.h>
#include <aws/mediaconnect/model/RemoveFlowSourceResult.h>
#include <aws/mediaconnect/model/RemoveFlowVpcInterfaceResult.h>
#include <aws/mediaconnect/model/RevokeFlowEntitlementResult.h>
#include <aws/mediaconnect/model/StartFlowResult.h>
#include <aws/mediaconnect/model/StopFlowResult.h>
#include <aws/mediaconnect/model/UpdateFlowResult.h>
#include <aws/mediaconnect/model/UpdateFlowEntitlementResult.h>
#include <aws/mediaconnect/model/UpdateFlowMediaStreamResult.h>
#include <aws/mediaconnect/model/UpdateFlowOutputResult.h>
#include <aws/mediaconnect/model/UpdateFlowSourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MediaConnectClient header */

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

  namespace MediaConnect
  {
    using MediaConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaConnectEndpointProviderBase = Aws::MediaConnect::Endpoint::MediaConnectEndpointProviderBase;
    using MediaConnectEndpointProvider = Aws::MediaConnect::Endpoint::MediaConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaConnectClient header */
      class AddFlowMediaStreamsRequest;
      class AddFlowOutputsRequest;
      class AddFlowSourcesRequest;
      class AddFlowVpcInterfacesRequest;
      class CreateFlowRequest;
      class DeleteFlowRequest;
      class DescribeFlowRequest;
      class DescribeOfferingRequest;
      class DescribeReservationRequest;
      class GrantFlowEntitlementsRequest;
      class ListEntitlementsRequest;
      class ListFlowsRequest;
      class ListOfferingsRequest;
      class ListReservationsRequest;
      class ListTagsForResourceRequest;
      class PurchaseOfferingRequest;
      class RemoveFlowMediaStreamRequest;
      class RemoveFlowOutputRequest;
      class RemoveFlowSourceRequest;
      class RemoveFlowVpcInterfaceRequest;
      class RevokeFlowEntitlementRequest;
      class StartFlowRequest;
      class StopFlowRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateFlowRequest;
      class UpdateFlowEntitlementRequest;
      class UpdateFlowMediaStreamRequest;
      class UpdateFlowOutputRequest;
      class UpdateFlowSourceRequest;
      /* End of service model forward declarations required in MediaConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddFlowMediaStreamsResult, MediaConnectError> AddFlowMediaStreamsOutcome;
      typedef Aws::Utils::Outcome<AddFlowOutputsResult, MediaConnectError> AddFlowOutputsOutcome;
      typedef Aws::Utils::Outcome<AddFlowSourcesResult, MediaConnectError> AddFlowSourcesOutcome;
      typedef Aws::Utils::Outcome<AddFlowVpcInterfacesResult, MediaConnectError> AddFlowVpcInterfacesOutcome;
      typedef Aws::Utils::Outcome<CreateFlowResult, MediaConnectError> CreateFlowOutcome;
      typedef Aws::Utils::Outcome<DeleteFlowResult, MediaConnectError> DeleteFlowOutcome;
      typedef Aws::Utils::Outcome<DescribeFlowResult, MediaConnectError> DescribeFlowOutcome;
      typedef Aws::Utils::Outcome<DescribeOfferingResult, MediaConnectError> DescribeOfferingOutcome;
      typedef Aws::Utils::Outcome<DescribeReservationResult, MediaConnectError> DescribeReservationOutcome;
      typedef Aws::Utils::Outcome<GrantFlowEntitlementsResult, MediaConnectError> GrantFlowEntitlementsOutcome;
      typedef Aws::Utils::Outcome<ListEntitlementsResult, MediaConnectError> ListEntitlementsOutcome;
      typedef Aws::Utils::Outcome<ListFlowsResult, MediaConnectError> ListFlowsOutcome;
      typedef Aws::Utils::Outcome<ListOfferingsResult, MediaConnectError> ListOfferingsOutcome;
      typedef Aws::Utils::Outcome<ListReservationsResult, MediaConnectError> ListReservationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaConnectError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PurchaseOfferingResult, MediaConnectError> PurchaseOfferingOutcome;
      typedef Aws::Utils::Outcome<RemoveFlowMediaStreamResult, MediaConnectError> RemoveFlowMediaStreamOutcome;
      typedef Aws::Utils::Outcome<RemoveFlowOutputResult, MediaConnectError> RemoveFlowOutputOutcome;
      typedef Aws::Utils::Outcome<RemoveFlowSourceResult, MediaConnectError> RemoveFlowSourceOutcome;
      typedef Aws::Utils::Outcome<RemoveFlowVpcInterfaceResult, MediaConnectError> RemoveFlowVpcInterfaceOutcome;
      typedef Aws::Utils::Outcome<RevokeFlowEntitlementResult, MediaConnectError> RevokeFlowEntitlementOutcome;
      typedef Aws::Utils::Outcome<StartFlowResult, MediaConnectError> StartFlowOutcome;
      typedef Aws::Utils::Outcome<StopFlowResult, MediaConnectError> StopFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaConnectError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaConnectError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowResult, MediaConnectError> UpdateFlowOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowEntitlementResult, MediaConnectError> UpdateFlowEntitlementOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowMediaStreamResult, MediaConnectError> UpdateFlowMediaStreamOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowOutputResult, MediaConnectError> UpdateFlowOutputOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowSourceResult, MediaConnectError> UpdateFlowSourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddFlowMediaStreamsOutcome> AddFlowMediaStreamsOutcomeCallable;
      typedef std::future<AddFlowOutputsOutcome> AddFlowOutputsOutcomeCallable;
      typedef std::future<AddFlowSourcesOutcome> AddFlowSourcesOutcomeCallable;
      typedef std::future<AddFlowVpcInterfacesOutcome> AddFlowVpcInterfacesOutcomeCallable;
      typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
      typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
      typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
      typedef std::future<DescribeOfferingOutcome> DescribeOfferingOutcomeCallable;
      typedef std::future<DescribeReservationOutcome> DescribeReservationOutcomeCallable;
      typedef std::future<GrantFlowEntitlementsOutcome> GrantFlowEntitlementsOutcomeCallable;
      typedef std::future<ListEntitlementsOutcome> ListEntitlementsOutcomeCallable;
      typedef std::future<ListFlowsOutcome> ListFlowsOutcomeCallable;
      typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
      typedef std::future<ListReservationsOutcome> ListReservationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
      typedef std::future<RemoveFlowMediaStreamOutcome> RemoveFlowMediaStreamOutcomeCallable;
      typedef std::future<RemoveFlowOutputOutcome> RemoveFlowOutputOutcomeCallable;
      typedef std::future<RemoveFlowSourceOutcome> RemoveFlowSourceOutcomeCallable;
      typedef std::future<RemoveFlowVpcInterfaceOutcome> RemoveFlowVpcInterfaceOutcomeCallable;
      typedef std::future<RevokeFlowEntitlementOutcome> RevokeFlowEntitlementOutcomeCallable;
      typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
      typedef std::future<StopFlowOutcome> StopFlowOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateFlowOutcome> UpdateFlowOutcomeCallable;
      typedef std::future<UpdateFlowEntitlementOutcome> UpdateFlowEntitlementOutcomeCallable;
      typedef std::future<UpdateFlowMediaStreamOutcome> UpdateFlowMediaStreamOutcomeCallable;
      typedef std::future<UpdateFlowOutputOutcome> UpdateFlowOutputOutcomeCallable;
      typedef std::future<UpdateFlowSourceOutcome> UpdateFlowSourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowMediaStreamsRequest&, const Model::AddFlowMediaStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowMediaStreamsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowOutputsRequest&, const Model::AddFlowOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowOutputsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowSourcesRequest&, const Model::AddFlowSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowSourcesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowVpcInterfacesRequest&, const Model::AddFlowVpcInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowVpcInterfacesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::CreateFlowRequest&, const Model::CreateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DeleteFlowRequest&, const Model::DeleteFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeFlowRequest&, const Model::DescribeFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeOfferingRequest&, const Model::DescribeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeReservationRequest&, const Model::DescribeReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservationResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::GrantFlowEntitlementsRequest&, const Model::GrantFlowEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GrantFlowEntitlementsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListEntitlementsRequest&, const Model::ListEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitlementsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListFlowsRequest&, const Model::ListFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListReservationsRequest&, const Model::ListReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReservationsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowMediaStreamRequest&, const Model::RemoveFlowMediaStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowMediaStreamResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowOutputRequest&, const Model::RemoveFlowOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowOutputResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowSourceRequest&, const Model::RemoveFlowSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowSourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowVpcInterfaceRequest&, const Model::RemoveFlowVpcInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowVpcInterfaceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RevokeFlowEntitlementRequest&, const Model::RevokeFlowEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeFlowEntitlementResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::StartFlowRequest&, const Model::StartFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::StopFlowRequest&, const Model::StopFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowRequest&, const Model::UpdateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowEntitlementRequest&, const Model::UpdateFlowEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowEntitlementResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowMediaStreamRequest&, const Model::UpdateFlowMediaStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowMediaStreamResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowOutputRequest&, const Model::UpdateFlowOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowOutputResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowSourceRequest&, const Model::UpdateFlowSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowSourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaConnect
} // namespace Aws
