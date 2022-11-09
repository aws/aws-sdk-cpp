/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/globalaccelerator/GlobalAcceleratorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/globalaccelerator/GlobalAcceleratorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GlobalAcceleratorClient header */
#include <aws/globalaccelerator/model/AddCustomRoutingEndpointsResult.h>
#include <aws/globalaccelerator/model/AddEndpointsResult.h>
#include <aws/globalaccelerator/model/AdvertiseByoipCidrResult.h>
#include <aws/globalaccelerator/model/CreateAcceleratorResult.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingAcceleratorResult.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingEndpointGroupResult.h>
#include <aws/globalaccelerator/model/CreateCustomRoutingListenerResult.h>
#include <aws/globalaccelerator/model/CreateEndpointGroupResult.h>
#include <aws/globalaccelerator/model/CreateListenerResult.h>
#include <aws/globalaccelerator/model/DeprovisionByoipCidrResult.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorResult.h>
#include <aws/globalaccelerator/model/DescribeAcceleratorAttributesResult.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingAcceleratorResult.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingAcceleratorAttributesResult.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingEndpointGroupResult.h>
#include <aws/globalaccelerator/model/DescribeCustomRoutingListenerResult.h>
#include <aws/globalaccelerator/model/DescribeEndpointGroupResult.h>
#include <aws/globalaccelerator/model/DescribeListenerResult.h>
#include <aws/globalaccelerator/model/ListAcceleratorsResult.h>
#include <aws/globalaccelerator/model/ListByoipCidrsResult.h>
#include <aws/globalaccelerator/model/ListCustomRoutingAcceleratorsResult.h>
#include <aws/globalaccelerator/model/ListCustomRoutingEndpointGroupsResult.h>
#include <aws/globalaccelerator/model/ListCustomRoutingListenersResult.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsResult.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsByDestinationResult.h>
#include <aws/globalaccelerator/model/ListEndpointGroupsResult.h>
#include <aws/globalaccelerator/model/ListListenersResult.h>
#include <aws/globalaccelerator/model/ListTagsForResourceResult.h>
#include <aws/globalaccelerator/model/ProvisionByoipCidrResult.h>
#include <aws/globalaccelerator/model/TagResourceResult.h>
#include <aws/globalaccelerator/model/UntagResourceResult.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorResult.h>
#include <aws/globalaccelerator/model/UpdateAcceleratorAttributesResult.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingAcceleratorResult.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingAcceleratorAttributesResult.h>
#include <aws/globalaccelerator/model/UpdateCustomRoutingListenerResult.h>
#include <aws/globalaccelerator/model/UpdateEndpointGroupResult.h>
#include <aws/globalaccelerator/model/UpdateListenerResult.h>
#include <aws/globalaccelerator/model/WithdrawByoipCidrResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in GlobalAcceleratorClient header */

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

  namespace GlobalAccelerator
  {
    using GlobalAcceleratorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GlobalAcceleratorEndpointProviderBase = Aws::GlobalAccelerator::Endpoint::GlobalAcceleratorEndpointProviderBase;
    using GlobalAcceleratorEndpointProvider = Aws::GlobalAccelerator::Endpoint::GlobalAcceleratorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GlobalAcceleratorClient header */
      class AddCustomRoutingEndpointsRequest;
      class AddEndpointsRequest;
      class AdvertiseByoipCidrRequest;
      class AllowCustomRoutingTrafficRequest;
      class CreateAcceleratorRequest;
      class CreateCustomRoutingAcceleratorRequest;
      class CreateCustomRoutingEndpointGroupRequest;
      class CreateCustomRoutingListenerRequest;
      class CreateEndpointGroupRequest;
      class CreateListenerRequest;
      class DeleteAcceleratorRequest;
      class DeleteCustomRoutingAcceleratorRequest;
      class DeleteCustomRoutingEndpointGroupRequest;
      class DeleteCustomRoutingListenerRequest;
      class DeleteEndpointGroupRequest;
      class DeleteListenerRequest;
      class DenyCustomRoutingTrafficRequest;
      class DeprovisionByoipCidrRequest;
      class DescribeAcceleratorRequest;
      class DescribeAcceleratorAttributesRequest;
      class DescribeCustomRoutingAcceleratorRequest;
      class DescribeCustomRoutingAcceleratorAttributesRequest;
      class DescribeCustomRoutingEndpointGroupRequest;
      class DescribeCustomRoutingListenerRequest;
      class DescribeEndpointGroupRequest;
      class DescribeListenerRequest;
      class ListAcceleratorsRequest;
      class ListByoipCidrsRequest;
      class ListCustomRoutingAcceleratorsRequest;
      class ListCustomRoutingEndpointGroupsRequest;
      class ListCustomRoutingListenersRequest;
      class ListCustomRoutingPortMappingsRequest;
      class ListCustomRoutingPortMappingsByDestinationRequest;
      class ListEndpointGroupsRequest;
      class ListListenersRequest;
      class ListTagsForResourceRequest;
      class ProvisionByoipCidrRequest;
      class RemoveCustomRoutingEndpointsRequest;
      class RemoveEndpointsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAcceleratorRequest;
      class UpdateAcceleratorAttributesRequest;
      class UpdateCustomRoutingAcceleratorRequest;
      class UpdateCustomRoutingAcceleratorAttributesRequest;
      class UpdateCustomRoutingListenerRequest;
      class UpdateEndpointGroupRequest;
      class UpdateListenerRequest;
      class WithdrawByoipCidrRequest;
      /* End of service model forward declarations required in GlobalAcceleratorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddCustomRoutingEndpointsResult, GlobalAcceleratorError> AddCustomRoutingEndpointsOutcome;
      typedef Aws::Utils::Outcome<AddEndpointsResult, GlobalAcceleratorError> AddEndpointsOutcome;
      typedef Aws::Utils::Outcome<AdvertiseByoipCidrResult, GlobalAcceleratorError> AdvertiseByoipCidrOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> AllowCustomRoutingTrafficOutcome;
      typedef Aws::Utils::Outcome<CreateAcceleratorResult, GlobalAcceleratorError> CreateAcceleratorOutcome;
      typedef Aws::Utils::Outcome<CreateCustomRoutingAcceleratorResult, GlobalAcceleratorError> CreateCustomRoutingAcceleratorOutcome;
      typedef Aws::Utils::Outcome<CreateCustomRoutingEndpointGroupResult, GlobalAcceleratorError> CreateCustomRoutingEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<CreateCustomRoutingListenerResult, GlobalAcceleratorError> CreateCustomRoutingListenerOutcome;
      typedef Aws::Utils::Outcome<CreateEndpointGroupResult, GlobalAcceleratorError> CreateEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<CreateListenerResult, GlobalAcceleratorError> CreateListenerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> DeleteAcceleratorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> DeleteCustomRoutingAcceleratorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> DeleteCustomRoutingEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> DeleteCustomRoutingListenerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> DeleteEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> DeleteListenerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> DenyCustomRoutingTrafficOutcome;
      typedef Aws::Utils::Outcome<DeprovisionByoipCidrResult, GlobalAcceleratorError> DeprovisionByoipCidrOutcome;
      typedef Aws::Utils::Outcome<DescribeAcceleratorResult, GlobalAcceleratorError> DescribeAcceleratorOutcome;
      typedef Aws::Utils::Outcome<DescribeAcceleratorAttributesResult, GlobalAcceleratorError> DescribeAcceleratorAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomRoutingAcceleratorResult, GlobalAcceleratorError> DescribeCustomRoutingAcceleratorOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomRoutingAcceleratorAttributesResult, GlobalAcceleratorError> DescribeCustomRoutingAcceleratorAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomRoutingEndpointGroupResult, GlobalAcceleratorError> DescribeCustomRoutingEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomRoutingListenerResult, GlobalAcceleratorError> DescribeCustomRoutingListenerOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointGroupResult, GlobalAcceleratorError> DescribeEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeListenerResult, GlobalAcceleratorError> DescribeListenerOutcome;
      typedef Aws::Utils::Outcome<ListAcceleratorsResult, GlobalAcceleratorError> ListAcceleratorsOutcome;
      typedef Aws::Utils::Outcome<ListByoipCidrsResult, GlobalAcceleratorError> ListByoipCidrsOutcome;
      typedef Aws::Utils::Outcome<ListCustomRoutingAcceleratorsResult, GlobalAcceleratorError> ListCustomRoutingAcceleratorsOutcome;
      typedef Aws::Utils::Outcome<ListCustomRoutingEndpointGroupsResult, GlobalAcceleratorError> ListCustomRoutingEndpointGroupsOutcome;
      typedef Aws::Utils::Outcome<ListCustomRoutingListenersResult, GlobalAcceleratorError> ListCustomRoutingListenersOutcome;
      typedef Aws::Utils::Outcome<ListCustomRoutingPortMappingsResult, GlobalAcceleratorError> ListCustomRoutingPortMappingsOutcome;
      typedef Aws::Utils::Outcome<ListCustomRoutingPortMappingsByDestinationResult, GlobalAcceleratorError> ListCustomRoutingPortMappingsByDestinationOutcome;
      typedef Aws::Utils::Outcome<ListEndpointGroupsResult, GlobalAcceleratorError> ListEndpointGroupsOutcome;
      typedef Aws::Utils::Outcome<ListListenersResult, GlobalAcceleratorError> ListListenersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, GlobalAcceleratorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ProvisionByoipCidrResult, GlobalAcceleratorError> ProvisionByoipCidrOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> RemoveCustomRoutingEndpointsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GlobalAcceleratorError> RemoveEndpointsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, GlobalAcceleratorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, GlobalAcceleratorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAcceleratorResult, GlobalAcceleratorError> UpdateAcceleratorOutcome;
      typedef Aws::Utils::Outcome<UpdateAcceleratorAttributesResult, GlobalAcceleratorError> UpdateAcceleratorAttributesOutcome;
      typedef Aws::Utils::Outcome<UpdateCustomRoutingAcceleratorResult, GlobalAcceleratorError> UpdateCustomRoutingAcceleratorOutcome;
      typedef Aws::Utils::Outcome<UpdateCustomRoutingAcceleratorAttributesResult, GlobalAcceleratorError> UpdateCustomRoutingAcceleratorAttributesOutcome;
      typedef Aws::Utils::Outcome<UpdateCustomRoutingListenerResult, GlobalAcceleratorError> UpdateCustomRoutingListenerOutcome;
      typedef Aws::Utils::Outcome<UpdateEndpointGroupResult, GlobalAcceleratorError> UpdateEndpointGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateListenerResult, GlobalAcceleratorError> UpdateListenerOutcome;
      typedef Aws::Utils::Outcome<WithdrawByoipCidrResult, GlobalAcceleratorError> WithdrawByoipCidrOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddCustomRoutingEndpointsOutcome> AddCustomRoutingEndpointsOutcomeCallable;
      typedef std::future<AddEndpointsOutcome> AddEndpointsOutcomeCallable;
      typedef std::future<AdvertiseByoipCidrOutcome> AdvertiseByoipCidrOutcomeCallable;
      typedef std::future<AllowCustomRoutingTrafficOutcome> AllowCustomRoutingTrafficOutcomeCallable;
      typedef std::future<CreateAcceleratorOutcome> CreateAcceleratorOutcomeCallable;
      typedef std::future<CreateCustomRoutingAcceleratorOutcome> CreateCustomRoutingAcceleratorOutcomeCallable;
      typedef std::future<CreateCustomRoutingEndpointGroupOutcome> CreateCustomRoutingEndpointGroupOutcomeCallable;
      typedef std::future<CreateCustomRoutingListenerOutcome> CreateCustomRoutingListenerOutcomeCallable;
      typedef std::future<CreateEndpointGroupOutcome> CreateEndpointGroupOutcomeCallable;
      typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
      typedef std::future<DeleteAcceleratorOutcome> DeleteAcceleratorOutcomeCallable;
      typedef std::future<DeleteCustomRoutingAcceleratorOutcome> DeleteCustomRoutingAcceleratorOutcomeCallable;
      typedef std::future<DeleteCustomRoutingEndpointGroupOutcome> DeleteCustomRoutingEndpointGroupOutcomeCallable;
      typedef std::future<DeleteCustomRoutingListenerOutcome> DeleteCustomRoutingListenerOutcomeCallable;
      typedef std::future<DeleteEndpointGroupOutcome> DeleteEndpointGroupOutcomeCallable;
      typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
      typedef std::future<DenyCustomRoutingTrafficOutcome> DenyCustomRoutingTrafficOutcomeCallable;
      typedef std::future<DeprovisionByoipCidrOutcome> DeprovisionByoipCidrOutcomeCallable;
      typedef std::future<DescribeAcceleratorOutcome> DescribeAcceleratorOutcomeCallable;
      typedef std::future<DescribeAcceleratorAttributesOutcome> DescribeAcceleratorAttributesOutcomeCallable;
      typedef std::future<DescribeCustomRoutingAcceleratorOutcome> DescribeCustomRoutingAcceleratorOutcomeCallable;
      typedef std::future<DescribeCustomRoutingAcceleratorAttributesOutcome> DescribeCustomRoutingAcceleratorAttributesOutcomeCallable;
      typedef std::future<DescribeCustomRoutingEndpointGroupOutcome> DescribeCustomRoutingEndpointGroupOutcomeCallable;
      typedef std::future<DescribeCustomRoutingListenerOutcome> DescribeCustomRoutingListenerOutcomeCallable;
      typedef std::future<DescribeEndpointGroupOutcome> DescribeEndpointGroupOutcomeCallable;
      typedef std::future<DescribeListenerOutcome> DescribeListenerOutcomeCallable;
      typedef std::future<ListAcceleratorsOutcome> ListAcceleratorsOutcomeCallable;
      typedef std::future<ListByoipCidrsOutcome> ListByoipCidrsOutcomeCallable;
      typedef std::future<ListCustomRoutingAcceleratorsOutcome> ListCustomRoutingAcceleratorsOutcomeCallable;
      typedef std::future<ListCustomRoutingEndpointGroupsOutcome> ListCustomRoutingEndpointGroupsOutcomeCallable;
      typedef std::future<ListCustomRoutingListenersOutcome> ListCustomRoutingListenersOutcomeCallable;
      typedef std::future<ListCustomRoutingPortMappingsOutcome> ListCustomRoutingPortMappingsOutcomeCallable;
      typedef std::future<ListCustomRoutingPortMappingsByDestinationOutcome> ListCustomRoutingPortMappingsByDestinationOutcomeCallable;
      typedef std::future<ListEndpointGroupsOutcome> ListEndpointGroupsOutcomeCallable;
      typedef std::future<ListListenersOutcome> ListListenersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ProvisionByoipCidrOutcome> ProvisionByoipCidrOutcomeCallable;
      typedef std::future<RemoveCustomRoutingEndpointsOutcome> RemoveCustomRoutingEndpointsOutcomeCallable;
      typedef std::future<RemoveEndpointsOutcome> RemoveEndpointsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAcceleratorOutcome> UpdateAcceleratorOutcomeCallable;
      typedef std::future<UpdateAcceleratorAttributesOutcome> UpdateAcceleratorAttributesOutcomeCallable;
      typedef std::future<UpdateCustomRoutingAcceleratorOutcome> UpdateCustomRoutingAcceleratorOutcomeCallable;
      typedef std::future<UpdateCustomRoutingAcceleratorAttributesOutcome> UpdateCustomRoutingAcceleratorAttributesOutcomeCallable;
      typedef std::future<UpdateCustomRoutingListenerOutcome> UpdateCustomRoutingListenerOutcomeCallable;
      typedef std::future<UpdateEndpointGroupOutcome> UpdateEndpointGroupOutcomeCallable;
      typedef std::future<UpdateListenerOutcome> UpdateListenerOutcomeCallable;
      typedef std::future<WithdrawByoipCidrOutcome> WithdrawByoipCidrOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GlobalAcceleratorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::AddCustomRoutingEndpointsRequest&, const Model::AddCustomRoutingEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCustomRoutingEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::AddEndpointsRequest&, const Model::AddEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::AdvertiseByoipCidrRequest&, const Model::AdvertiseByoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdvertiseByoipCidrResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::AllowCustomRoutingTrafficRequest&, const Model::AllowCustomRoutingTrafficOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllowCustomRoutingTrafficResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateAcceleratorRequest&, const Model::CreateAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateCustomRoutingAcceleratorRequest&, const Model::CreateCustomRoutingAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomRoutingAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateCustomRoutingEndpointGroupRequest&, const Model::CreateCustomRoutingEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomRoutingEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateCustomRoutingListenerRequest&, const Model::CreateCustomRoutingListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomRoutingListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateEndpointGroupRequest&, const Model::CreateEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::CreateListenerRequest&, const Model::CreateListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteAcceleratorRequest&, const Model::DeleteAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteCustomRoutingAcceleratorRequest&, const Model::DeleteCustomRoutingAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomRoutingAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteCustomRoutingEndpointGroupRequest&, const Model::DeleteCustomRoutingEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomRoutingEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteCustomRoutingListenerRequest&, const Model::DeleteCustomRoutingListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomRoutingListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteEndpointGroupRequest&, const Model::DeleteEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeleteListenerRequest&, const Model::DeleteListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DenyCustomRoutingTrafficRequest&, const Model::DenyCustomRoutingTrafficOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DenyCustomRoutingTrafficResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DeprovisionByoipCidrRequest&, const Model::DeprovisionByoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprovisionByoipCidrResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeAcceleratorRequest&, const Model::DescribeAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeAcceleratorAttributesRequest&, const Model::DescribeAcceleratorAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAcceleratorAttributesResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeCustomRoutingAcceleratorRequest&, const Model::DescribeCustomRoutingAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomRoutingAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeCustomRoutingAcceleratorAttributesRequest&, const Model::DescribeCustomRoutingAcceleratorAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomRoutingAcceleratorAttributesResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeCustomRoutingEndpointGroupRequest&, const Model::DescribeCustomRoutingEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomRoutingEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeCustomRoutingListenerRequest&, const Model::DescribeCustomRoutingListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomRoutingListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeEndpointGroupRequest&, const Model::DescribeEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::DescribeListenerRequest&, const Model::DescribeListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListAcceleratorsRequest&, const Model::ListAcceleratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAcceleratorsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListByoipCidrsRequest&, const Model::ListByoipCidrsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListByoipCidrsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListCustomRoutingAcceleratorsRequest&, const Model::ListCustomRoutingAcceleratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomRoutingAcceleratorsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListCustomRoutingEndpointGroupsRequest&, const Model::ListCustomRoutingEndpointGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomRoutingEndpointGroupsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListCustomRoutingListenersRequest&, const Model::ListCustomRoutingListenersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomRoutingListenersResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListCustomRoutingPortMappingsRequest&, const Model::ListCustomRoutingPortMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomRoutingPortMappingsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListCustomRoutingPortMappingsByDestinationRequest&, const Model::ListCustomRoutingPortMappingsByDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomRoutingPortMappingsByDestinationResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListEndpointGroupsRequest&, const Model::ListEndpointGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointGroupsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListListenersRequest&, const Model::ListListenersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListListenersResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::ProvisionByoipCidrRequest&, const Model::ProvisionByoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionByoipCidrResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::RemoveCustomRoutingEndpointsRequest&, const Model::RemoveCustomRoutingEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveCustomRoutingEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::RemoveEndpointsRequest&, const Model::RemoveEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateAcceleratorRequest&, const Model::UpdateAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateAcceleratorAttributesRequest&, const Model::UpdateAcceleratorAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAcceleratorAttributesResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateCustomRoutingAcceleratorRequest&, const Model::UpdateCustomRoutingAcceleratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomRoutingAcceleratorResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateCustomRoutingAcceleratorAttributesRequest&, const Model::UpdateCustomRoutingAcceleratorAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomRoutingAcceleratorAttributesResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateCustomRoutingListenerRequest&, const Model::UpdateCustomRoutingListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomRoutingListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateEndpointGroupRequest&, const Model::UpdateEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::UpdateListenerRequest&, const Model::UpdateListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateListenerResponseReceivedHandler;
    typedef std::function<void(const GlobalAcceleratorClient*, const Model::WithdrawByoipCidrRequest&, const Model::WithdrawByoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > WithdrawByoipCidrResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GlobalAccelerator
} // namespace Aws
