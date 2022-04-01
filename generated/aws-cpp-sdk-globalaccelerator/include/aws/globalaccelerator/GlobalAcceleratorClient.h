/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/globalaccelerator/model/AddCustomRoutingEndpointsResult.h>
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

namespace GlobalAccelerator
{

namespace Model
{
        class AddCustomRoutingEndpointsRequest;
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

        typedef Aws::Utils::Outcome<AddCustomRoutingEndpointsResult, GlobalAcceleratorError> AddCustomRoutingEndpointsOutcome;
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

        typedef std::future<AddCustomRoutingEndpointsOutcome> AddCustomRoutingEndpointsOutcomeCallable;
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
} // namespace Model

  class GlobalAcceleratorClient;

    typedef std::function<void(const GlobalAcceleratorClient*, const Model::AddCustomRoutingEndpointsRequest&, const Model::AddCustomRoutingEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCustomRoutingEndpointsResponseReceivedHandler;
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

  /**
   * <fullname>AWS Global Accelerator</fullname> <p>This is the <i>AWS Global
   * Accelerator API Reference</i>. This guide is for developers who need detailed
   * information about AWS Global Accelerator API actions, data types, and errors.
   * For more information about Global Accelerator features, see the <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/Welcome.html">AWS
   * Global Accelerator Developer Guide</a>.</p> <p>AWS Global Accelerator is a
   * service in which you create <i>accelerators</i> to improve the performance of
   * your applications for local and global users. Depending on the type of
   * accelerator you choose, you can gain additional benefits. </p> <ul> <li> <p>By
   * using a standard accelerator, you can improve availability of your internet
   * applications that are used by a global audience. With a standard accelerator,
   * Global Accelerator directs traffic to optimal endpoints over the AWS global
   * network. </p> </li> <li> <p>For other scenarios, you might choose a custom
   * routing accelerator. With a custom routing accelerator, you can use application
   * logic to directly map one or more users to a specific endpoint among many
   * endpoints.</p> </li> </ul>  <p>Global Accelerator is a global service
   * that supports endpoints in multiple AWS Regions but you must specify the US West
   * (Oregon) Region to create or update accelerators.</p>  <p>By
   * default, Global Accelerator provides you with two static IP addresses that you
   * associate with your accelerator. With a standard accelerator, instead of using
   * the IP addresses that Global Accelerator provides, you can configure these entry
   * points to be IPv4 addresses from your own IP address ranges that you bring to
   * Global Accelerator. The static IP addresses are anycast from the AWS edge
   * network. For a standard accelerator, they distribute incoming application
   * traffic across multiple endpoint resources in multiple AWS Regions, which
   * increases the availability of your applications. Endpoints for standard
   * accelerators can be Network Load Balancers, Application Load Balancers, Amazon
   * EC2 instances, or Elastic IP addresses that are located in one AWS Region or
   * multiple Regions. For custom routing accelerators, you map traffic that arrives
   * to the static IP addresses to specific Amazon EC2 servers in endpoints that are
   * virtual private cloud (VPC) subnets.</p>  <p>The static IP addresses
   * remain assigned to your accelerator for as long as it exists, even if you
   * disable the accelerator and it no longer accepts or routes traffic. However,
   * when you <i>delete</i> an accelerator, you lose the static IP addresses that are
   * assigned to it, so you can no longer route traffic by using them. You can use
   * IAM policies like tag-based permissions with Global Accelerator to limit the
   * users who have permissions to delete an accelerator. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/access-control-manage-access-tag-policies.html">Tag-based
   * policies</a>.</p>  <p>For standard accelerators, Global Accelerator
   * uses the AWS global network to route traffic to the optimal regional endpoint
   * based on health, client location, and policies that you configure. The service
   * reacts instantly to changes in health or configuration to ensure that internet
   * traffic from clients is always directed to healthy endpoints.</p> <p>For a list
   * of the AWS Regions where Global Accelerator and other services are currently
   * supported, see the <a
   * href="https://docs.aws.amazon.com/about-aws/global-infrastructure/regional-product-services/">AWS
   * Region Table</a>.</p> <p>AWS Global Accelerator includes the following
   * components:</p> <dl> <dt>Static IP addresses</dt> <dd> <p>Global Accelerator
   * provides you with a set of two static IP addresses that are anycast from the AWS
   * edge network. If you bring your own IP address range to AWS (BYOIP) to use with
   * a standard accelerator, you can instead assign IP addresses from your own pool
   * to use with your accelerator. For more information, see <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">
   * Bring your own IP addresses (BYOIP) in AWS Global Accelerator</a>.</p> <p>The IP
   * addresses serve as single fixed entry points for your clients. If you already
   * have Elastic Load Balancing load balancers, Amazon EC2 instances, or Elastic IP
   * address resources set up for your applications, you can easily add those to a
   * standard accelerator in Global Accelerator. This allows Global Accelerator to
   * use static IP addresses to access the resources.</p> <p>The static IP addresses
   * remain assigned to your accelerator for as long as it exists, even if you
   * disable the accelerator and it no longer accepts or routes traffic. However,
   * when you <i>delete</i> an accelerator, you lose the static IP addresses that are
   * assigned to it, so you can no longer route traffic by using them. You can use
   * IAM policies like tag-based permissions with Global Accelerator to delete an
   * accelerator. For more information, see <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/access-control-manage-access-tag-policies.html">Tag-based
   * policies</a>.</p> </dd> <dt>Accelerator</dt> <dd> <p>An accelerator directs
   * traffic to endpoints over the AWS global network to improve the performance of
   * your internet applications. Each accelerator includes one or more listeners.</p>
   * <p>There are two types of accelerators:</p> <ul> <li> <p>A <i>standard</i>
   * accelerator directs traffic to the optimal AWS endpoint based on several
   * factors, including the user’s location, the health of the endpoint, and the
   * endpoint weights that you configure. This improves the availability and
   * performance of your applications. Endpoints can be Network Load Balancers,
   * Application Load Balancers, Amazon EC2 instances, or Elastic IP addresses.</p>
   * </li> <li> <p>A <i>custom routing</i> accelerator directs traffic to one of
   * possibly thousands of Amazon EC2 instances running in a single or multiple
   * virtual private clouds (VPCs). With custom routing, listener ports are mapped to
   * statically associate port ranges with VPC subnets, which allows Global
   * Accelerator to determine an EC2 instance IP address at the time of connection.
   * By default, all port mapping destinations in a VPC subnet can't receive traffic.
   * You can choose to configure all destinations in the subnet to receive traffic,
   * or to specify individual port mappings that can receive traffic.</p> </li> </ul>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/introduction-accelerator-types.html">Types
   * of accelerators</a>.</p> </dd> <dt>DNS name</dt> <dd> <p>Global Accelerator
   * assigns each accelerator a default Domain Name System (DNS) name, similar to
   * <code>a1234567890abcdef.awsglobalaccelerator.com</code>, that points to the
   * static IP addresses that Global Accelerator assigns to you or that you choose
   * from your own IP address range. Depending on the use case, you can use your
   * accelerator's static IP addresses or DNS name to route traffic to your
   * accelerator, or set up DNS records to route traffic using your own custom domain
   * name.</p> </dd> <dt>Network zone</dt> <dd> <p>A network zone services the static
   * IP addresses for your accelerator from a unique IP subnet. Similar to an AWS
   * Availability Zone, a network zone is an isolated unit with its own set of
   * physical infrastructure. When you configure an accelerator, by default, Global
   * Accelerator allocates two IPv4 addresses for it. If one IP address from a
   * network zone becomes unavailable due to IP address blocking by certain client
   * networks, or network disruptions, then client applications can retry on the
   * healthy static IP address from the other isolated network zone.</p> </dd>
   * <dt>Listener</dt> <dd> <p>A listener processes inbound connections from clients
   * to Global Accelerator, based on the port (or port range) and protocol (or
   * protocols) that you configure. A listener can be configured for TCP, UDP, or
   * both TCP and UDP protocols. Each listener has one or more endpoint groups
   * associated with it, and traffic is forwarded to endpoints in one of the groups.
   * You associate endpoint groups with listeners by specifying the Regions that you
   * want to distribute traffic to. With a standard accelerator, traffic is
   * distributed to optimal endpoints within the endpoint groups associated with a
   * listener.</p> </dd> <dt>Endpoint group</dt> <dd> <p>Each endpoint group is
   * associated with a specific AWS Region. Endpoint groups include one or more
   * endpoints in the Region. With a standard accelerator, you can increase or reduce
   * the percentage of traffic that would be otherwise directed to an endpoint group
   * by adjusting a setting called a <i>traffic dial</i>. The traffic dial lets you
   * easily do performance testing or blue/green deployment testing, for example, for
   * new releases across different AWS Regions. </p> </dd> <dt>Endpoint</dt> <dd>
   * <p>An endpoint is a resource that Global Accelerator directs traffic to.</p>
   * <p>Endpoints for standard accelerators can be Network Load Balancers,
   * Application Load Balancers, Amazon EC2 instances, or Elastic IP addresses. An
   * Application Load Balancer endpoint can be internet-facing or internal. Traffic
   * for standard accelerators is routed to endpoints based on the health of the
   * endpoint along with configuration options that you choose, such as endpoint
   * weights. For each endpoint, you can configure weights, which are numbers that
   * you can use to specify the proportion of traffic to route to each one. This can
   * be useful, for example, to do performance testing within a Region.</p>
   * <p>Endpoints for custom routing accelerators are virtual private cloud (VPC)
   * subnets with one or many EC2 instances.</p> </dd> </dl>
   */
  class AWS_GLOBALACCELERATOR_API GlobalAcceleratorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlobalAcceleratorClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlobalAcceleratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GlobalAcceleratorClient();


        /**
         * <p>Associate a virtual private cloud (VPC) subnet endpoint with your custom
         * routing accelerator.</p> <p>The listener port range must be large enough to
         * support the number of IP addresses that can be specified in your subnet. The
         * number of ports required is: subnet size times the number of ports per
         * destination EC2 instances. For example, a subnet defined as /24 requires a
         * listener port range of at least 255 ports. </p> <p>Note: You must have enough
         * remaining listener ports available to map to the subnet ports, or the call will
         * fail with a LimitExceededException.</p> <p>By default, all destinations in a
         * subnet in a custom routing accelerator cannot receive traffic. To enable all
         * destinations to receive traffic, or to specify individual port mappings that can
         * receive traffic, see the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
         * AllowCustomRoutingTraffic</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AddCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::AddCustomRoutingEndpointsOutcome AddCustomRoutingEndpoints(const Model::AddCustomRoutingEndpointsRequest& request) const;

        /**
         * <p>Associate a virtual private cloud (VPC) subnet endpoint with your custom
         * routing accelerator.</p> <p>The listener port range must be large enough to
         * support the number of IP addresses that can be specified in your subnet. The
         * number of ports required is: subnet size times the number of ports per
         * destination EC2 instances. For example, a subnet defined as /24 requires a
         * listener port range of at least 255 ports. </p> <p>Note: You must have enough
         * remaining listener ports available to map to the subnet ports, or the call will
         * fail with a LimitExceededException.</p> <p>By default, all destinations in a
         * subnet in a custom routing accelerator cannot receive traffic. To enable all
         * destinations to receive traffic, or to specify individual port mappings that can
         * receive traffic, see the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
         * AllowCustomRoutingTraffic</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AddCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddCustomRoutingEndpointsOutcomeCallable AddCustomRoutingEndpointsCallable(const Model::AddCustomRoutingEndpointsRequest& request) const;

        /**
         * <p>Associate a virtual private cloud (VPC) subnet endpoint with your custom
         * routing accelerator.</p> <p>The listener port range must be large enough to
         * support the number of IP addresses that can be specified in your subnet. The
         * number of ports required is: subnet size times the number of ports per
         * destination EC2 instances. For example, a subnet defined as /24 requires a
         * listener port range of at least 255 ports. </p> <p>Note: You must have enough
         * remaining listener ports available to map to the subnet ports, or the call will
         * fail with a LimitExceededException.</p> <p>By default, all destinations in a
         * subnet in a custom routing accelerator cannot receive traffic. To enable all
         * destinations to receive traffic, or to specify individual port mappings that can
         * receive traffic, see the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
         * AllowCustomRoutingTraffic</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AddCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddCustomRoutingEndpointsAsync(const Model::AddCustomRoutingEndpointsRequest& request, const AddCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Advertises an IPv4 address range that is provisioned for use with your AWS
         * resources through bring your own IP addresses (BYOIP). It can take a few minutes
         * before traffic to the specified addresses starts routing to AWS because of
         * propagation delays. </p> <p>To stop advertising the BYOIP address range, use <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">
         * WithdrawByoipCidr</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AdvertiseByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::AdvertiseByoipCidrOutcome AdvertiseByoipCidr(const Model::AdvertiseByoipCidrRequest& request) const;

        /**
         * <p>Advertises an IPv4 address range that is provisioned for use with your AWS
         * resources through bring your own IP addresses (BYOIP). It can take a few minutes
         * before traffic to the specified addresses starts routing to AWS because of
         * propagation delays. </p> <p>To stop advertising the BYOIP address range, use <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">
         * WithdrawByoipCidr</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AdvertiseByoipCidr">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdvertiseByoipCidrOutcomeCallable AdvertiseByoipCidrCallable(const Model::AdvertiseByoipCidrRequest& request) const;

        /**
         * <p>Advertises an IPv4 address range that is provisioned for use with your AWS
         * resources through bring your own IP addresses (BYOIP). It can take a few minutes
         * before traffic to the specified addresses starts routing to AWS because of
         * propagation delays. </p> <p>To stop advertising the BYOIP address range, use <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">
         * WithdrawByoipCidr</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AdvertiseByoipCidr">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdvertiseByoipCidrAsync(const Model::AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the Amazon EC2 instance (destination) IP addresses and ports for a
         * VPC subnet endpoint that can receive traffic for a custom routing accelerator.
         * You can allow traffic to all destinations in the subnet endpoint, or allow
         * traffic to a specified list of destination IP addresses and ports in the subnet.
         * Note that you cannot specify IP addresses or ports outside of the range that you
         * configured for the endpoint group.</p> <p>After you make changes, you can verify
         * that the updates are complete by checking the status of your accelerator: the
         * status changes from IN_PROGRESS to DEPLOYED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AllowCustomRoutingTraffic">AWS
         * API Reference</a></p>
         */
        virtual Model::AllowCustomRoutingTrafficOutcome AllowCustomRoutingTraffic(const Model::AllowCustomRoutingTrafficRequest& request) const;

        /**
         * <p>Specify the Amazon EC2 instance (destination) IP addresses and ports for a
         * VPC subnet endpoint that can receive traffic for a custom routing accelerator.
         * You can allow traffic to all destinations in the subnet endpoint, or allow
         * traffic to a specified list of destination IP addresses and ports in the subnet.
         * Note that you cannot specify IP addresses or ports outside of the range that you
         * configured for the endpoint group.</p> <p>After you make changes, you can verify
         * that the updates are complete by checking the status of your accelerator: the
         * status changes from IN_PROGRESS to DEPLOYED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AllowCustomRoutingTraffic">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllowCustomRoutingTrafficOutcomeCallable AllowCustomRoutingTrafficCallable(const Model::AllowCustomRoutingTrafficRequest& request) const;

        /**
         * <p>Specify the Amazon EC2 instance (destination) IP addresses and ports for a
         * VPC subnet endpoint that can receive traffic for a custom routing accelerator.
         * You can allow traffic to all destinations in the subnet endpoint, or allow
         * traffic to a specified list of destination IP addresses and ports in the subnet.
         * Note that you cannot specify IP addresses or ports outside of the range that you
         * configured for the endpoint group.</p> <p>After you make changes, you can verify
         * that the updates are complete by checking the status of your accelerator: the
         * status changes from IN_PROGRESS to DEPLOYED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AllowCustomRoutingTraffic">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllowCustomRoutingTrafficAsync(const Model::AllowCustomRoutingTrafficRequest& request, const AllowCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an accelerator. An accelerator includes one or more listeners that
         * process inbound connections and direct traffic to one or more endpoint groups,
         * each of which includes endpoints, such as Network Load Balancers. </p>
         *  <p>Global Accelerator is a global service that supports endpoints in
         * multiple AWS Regions but you must specify the US West (Oregon) Region to create
         * or update accelerators.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAcceleratorOutcome CreateAccelerator(const Model::CreateAcceleratorRequest& request) const;

        /**
         * <p>Create an accelerator. An accelerator includes one or more listeners that
         * process inbound connections and direct traffic to one or more endpoint groups,
         * each of which includes endpoints, such as Network Load Balancers. </p>
         *  <p>Global Accelerator is a global service that supports endpoints in
         * multiple AWS Regions but you must specify the US West (Oregon) Region to create
         * or update accelerators.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAcceleratorOutcomeCallable CreateAcceleratorCallable(const Model::CreateAcceleratorRequest& request) const;

        /**
         * <p>Create an accelerator. An accelerator includes one or more listeners that
         * process inbound connections and direct traffic to one or more endpoint groups,
         * each of which includes endpoints, such as Network Load Balancers. </p>
         *  <p>Global Accelerator is a global service that supports endpoints in
         * multiple AWS Regions but you must specify the US West (Oregon) Region to create
         * or update accelerators.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAcceleratorAsync(const Model::CreateAcceleratorRequest& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a custom routing accelerator. A custom routing accelerator directs
         * traffic to one of possibly thousands of Amazon EC2 instance destinations running
         * in a single or multiple virtual private clouds (VPC) subnet endpoints.</p> <p>Be
         * aware that, by default, all destination EC2 instances in a VPC subnet endpoint
         * cannot receive traffic. To enable all destinations to receive traffic, or to
         * specify individual port mappings that can receive traffic, see the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
         * AllowCustomRoutingTraffic</a> operation.</p>  <p>Global Accelerator
         * is a global service that supports endpoints in multiple AWS Regions but you must
         * specify the US West (Oregon) Region to create or update accelerators.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingAcceleratorOutcome CreateCustomRoutingAccelerator(const Model::CreateCustomRoutingAcceleratorRequest& request) const;

        /**
         * <p>Create a custom routing accelerator. A custom routing accelerator directs
         * traffic to one of possibly thousands of Amazon EC2 instance destinations running
         * in a single or multiple virtual private clouds (VPC) subnet endpoints.</p> <p>Be
         * aware that, by default, all destination EC2 instances in a VPC subnet endpoint
         * cannot receive traffic. To enable all destinations to receive traffic, or to
         * specify individual port mappings that can receive traffic, see the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
         * AllowCustomRoutingTraffic</a> operation.</p>  <p>Global Accelerator
         * is a global service that supports endpoints in multiple AWS Regions but you must
         * specify the US West (Oregon) Region to create or update accelerators.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomRoutingAcceleratorOutcomeCallable CreateCustomRoutingAcceleratorCallable(const Model::CreateCustomRoutingAcceleratorRequest& request) const;

        /**
         * <p>Create a custom routing accelerator. A custom routing accelerator directs
         * traffic to one of possibly thousands of Amazon EC2 instance destinations running
         * in a single or multiple virtual private clouds (VPC) subnet endpoints.</p> <p>Be
         * aware that, by default, all destination EC2 instances in a VPC subnet endpoint
         * cannot receive traffic. To enable all destinations to receive traffic, or to
         * specify individual port mappings that can receive traffic, see the <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/API_AllowCustomRoutingTraffic.html">
         * AllowCustomRoutingTraffic</a> operation.</p>  <p>Global Accelerator
         * is a global service that supports endpoints in multiple AWS Regions but you must
         * specify the US West (Oregon) Region to create or update accelerators.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomRoutingAcceleratorAsync(const Model::CreateCustomRoutingAcceleratorRequest& request, const CreateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an endpoint group for the specified listener for a custom routing
         * accelerator. An endpoint group is a collection of endpoints in one AWS Region.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingEndpointGroupOutcome CreateCustomRoutingEndpointGroup(const Model::CreateCustomRoutingEndpointGroupRequest& request) const;

        /**
         * <p>Create an endpoint group for the specified listener for a custom routing
         * accelerator. An endpoint group is a collection of endpoints in one AWS Region.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomRoutingEndpointGroupOutcomeCallable CreateCustomRoutingEndpointGroupCallable(const Model::CreateCustomRoutingEndpointGroupRequest& request) const;

        /**
         * <p>Create an endpoint group for the specified listener for a custom routing
         * accelerator. An endpoint group is a collection of endpoints in one AWS Region.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomRoutingEndpointGroupAsync(const Model::CreateCustomRoutingEndpointGroupRequest& request, const CreateCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a listener to process inbound connections from clients to a custom
         * routing accelerator. Connections arrive to assigned static IP addresses on the
         * port range that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomRoutingListenerOutcome CreateCustomRoutingListener(const Model::CreateCustomRoutingListenerRequest& request) const;

        /**
         * <p>Create a listener to process inbound connections from clients to a custom
         * routing accelerator. Connections arrive to assigned static IP addresses on the
         * port range that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomRoutingListenerOutcomeCallable CreateCustomRoutingListenerCallable(const Model::CreateCustomRoutingListenerRequest& request) const;

        /**
         * <p>Create a listener to process inbound connections from clients to a custom
         * routing accelerator. Connections arrive to assigned static IP addresses on the
         * port range that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateCustomRoutingListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomRoutingListenerAsync(const Model::CreateCustomRoutingListenerRequest& request, const CreateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an endpoint group for the specified listener. An endpoint group is a
         * collection of endpoints in one AWS Region. A resource must be valid and active
         * when you add it as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointGroupOutcome CreateEndpointGroup(const Model::CreateEndpointGroupRequest& request) const;

        /**
         * <p>Create an endpoint group for the specified listener. An endpoint group is a
         * collection of endpoints in one AWS Region. A resource must be valid and active
         * when you add it as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointGroupOutcomeCallable CreateEndpointGroupCallable(const Model::CreateEndpointGroupRequest& request) const;

        /**
         * <p>Create an endpoint group for the specified listener. An endpoint group is a
         * collection of endpoints in one AWS Region. A resource must be valid and active
         * when you add it as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointGroupAsync(const Model::CreateEndpointGroupRequest& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a listener to process inbound connections from clients to an
         * accelerator. Connections arrive to assigned static IP addresses on a port, port
         * range, or list of port ranges that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListenerOutcome CreateListener(const Model::CreateListenerRequest& request) const;

        /**
         * <p>Create a listener to process inbound connections from clients to an
         * accelerator. Connections arrive to assigned static IP addresses on a port, port
         * range, or list of port ranges that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request) const;

        /**
         * <p>Create a listener to process inbound connections from clients to an
         * accelerator. Connections arrive to assigned static IP addresses on a port, port
         * range, or list of port ranges that you specify. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CreateListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an accelerator. Before you can delete an accelerator, you must disable
         * it and remove all dependent resources (listeners and endpoint groups). To
         * disable the accelerator, update the accelerator to set <code>Enabled</code> to
         * false.</p>  <p>When you create an accelerator, by default, Global
         * Accelerator provides you with a set of two static IP addresses. Alternatively,
         * you can bring your own IP address ranges to Global Accelerator and assign IP
         * addresses from those ranges. </p> <p>The IP addresses are assigned to your
         * accelerator for as long as it exists, even if you disable the accelerator and it
         * no longer accepts or routes traffic. However, when you <i>delete</i> an
         * accelerator, you lose the static IP addresses that are assigned to the
         * accelerator, so you can no longer route traffic by using them. As a best
         * practice, ensure that you have permissions in place to avoid inadvertently
         * deleting accelerators. You can use IAM policies with Global Accelerator to limit
         * the users who have permissions to delete an accelerator. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Authentication
         * and Access Control</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAcceleratorOutcome DeleteAccelerator(const Model::DeleteAcceleratorRequest& request) const;

        /**
         * <p>Delete an accelerator. Before you can delete an accelerator, you must disable
         * it and remove all dependent resources (listeners and endpoint groups). To
         * disable the accelerator, update the accelerator to set <code>Enabled</code> to
         * false.</p>  <p>When you create an accelerator, by default, Global
         * Accelerator provides you with a set of two static IP addresses. Alternatively,
         * you can bring your own IP address ranges to Global Accelerator and assign IP
         * addresses from those ranges. </p> <p>The IP addresses are assigned to your
         * accelerator for as long as it exists, even if you disable the accelerator and it
         * no longer accepts or routes traffic. However, when you <i>delete</i> an
         * accelerator, you lose the static IP addresses that are assigned to the
         * accelerator, so you can no longer route traffic by using them. As a best
         * practice, ensure that you have permissions in place to avoid inadvertently
         * deleting accelerators. You can use IAM policies with Global Accelerator to limit
         * the users who have permissions to delete an accelerator. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Authentication
         * and Access Control</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAcceleratorOutcomeCallable DeleteAcceleratorCallable(const Model::DeleteAcceleratorRequest& request) const;

        /**
         * <p>Delete an accelerator. Before you can delete an accelerator, you must disable
         * it and remove all dependent resources (listeners and endpoint groups). To
         * disable the accelerator, update the accelerator to set <code>Enabled</code> to
         * false.</p>  <p>When you create an accelerator, by default, Global
         * Accelerator provides you with a set of two static IP addresses. Alternatively,
         * you can bring your own IP address ranges to Global Accelerator and assign IP
         * addresses from those ranges. </p> <p>The IP addresses are assigned to your
         * accelerator for as long as it exists, even if you disable the accelerator and it
         * no longer accepts or routes traffic. However, when you <i>delete</i> an
         * accelerator, you lose the static IP addresses that are assigned to the
         * accelerator, so you can no longer route traffic by using them. As a best
         * practice, ensure that you have permissions in place to avoid inadvertently
         * deleting accelerators. You can use IAM policies with Global Accelerator to limit
         * the users who have permissions to delete an accelerator. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Authentication
         * and Access Control</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAcceleratorAsync(const Model::DeleteAcceleratorRequest& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a custom routing accelerator. Before you can delete an accelerator,
         * you must disable it and remove all dependent resources (listeners and endpoint
         * groups). To disable the accelerator, update the accelerator to set
         * <code>Enabled</code> to false.</p>  <p>When you create a custom
         * routing accelerator, by default, Global Accelerator provides you with a set of
         * two static IP addresses. </p> <p>The IP addresses are assigned to your
         * accelerator for as long as it exists, even if you disable the accelerator and it
         * no longer accepts or routes traffic. However, when you <i>delete</i> an
         * accelerator, you lose the static IP addresses that are assigned to the
         * accelerator, so you can no longer route traffic by using them. As a best
         * practice, ensure that you have permissions in place to avoid inadvertently
         * deleting accelerators. You can use IAM policies with Global Accelerator to limit
         * the users who have permissions to delete an accelerator. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Authentication
         * and Access Control</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomRoutingAcceleratorOutcome DeleteCustomRoutingAccelerator(const Model::DeleteCustomRoutingAcceleratorRequest& request) const;

        /**
         * <p>Delete a custom routing accelerator. Before you can delete an accelerator,
         * you must disable it and remove all dependent resources (listeners and endpoint
         * groups). To disable the accelerator, update the accelerator to set
         * <code>Enabled</code> to false.</p>  <p>When you create a custom
         * routing accelerator, by default, Global Accelerator provides you with a set of
         * two static IP addresses. </p> <p>The IP addresses are assigned to your
         * accelerator for as long as it exists, even if you disable the accelerator and it
         * no longer accepts or routes traffic. However, when you <i>delete</i> an
         * accelerator, you lose the static IP addresses that are assigned to the
         * accelerator, so you can no longer route traffic by using them. As a best
         * practice, ensure that you have permissions in place to avoid inadvertently
         * deleting accelerators. You can use IAM policies with Global Accelerator to limit
         * the users who have permissions to delete an accelerator. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Authentication
         * and Access Control</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomRoutingAcceleratorOutcomeCallable DeleteCustomRoutingAcceleratorCallable(const Model::DeleteCustomRoutingAcceleratorRequest& request) const;

        /**
         * <p>Delete a custom routing accelerator. Before you can delete an accelerator,
         * you must disable it and remove all dependent resources (listeners and endpoint
         * groups). To disable the accelerator, update the accelerator to set
         * <code>Enabled</code> to false.</p>  <p>When you create a custom
         * routing accelerator, by default, Global Accelerator provides you with a set of
         * two static IP addresses. </p> <p>The IP addresses are assigned to your
         * accelerator for as long as it exists, even if you disable the accelerator and it
         * no longer accepts or routes traffic. However, when you <i>delete</i> an
         * accelerator, you lose the static IP addresses that are assigned to the
         * accelerator, so you can no longer route traffic by using them. As a best
         * practice, ensure that you have permissions in place to avoid inadvertently
         * deleting accelerators. You can use IAM policies with Global Accelerator to limit
         * the users who have permissions to delete an accelerator. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/auth-and-access-control.html">Authentication
         * and Access Control</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomRoutingAcceleratorAsync(const Model::DeleteCustomRoutingAcceleratorRequest& request, const DeleteCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an endpoint group from a listener for a custom routing
         * accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomRoutingEndpointGroupOutcome DeleteCustomRoutingEndpointGroup(const Model::DeleteCustomRoutingEndpointGroupRequest& request) const;

        /**
         * <p>Delete an endpoint group from a listener for a custom routing
         * accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomRoutingEndpointGroupOutcomeCallable DeleteCustomRoutingEndpointGroupCallable(const Model::DeleteCustomRoutingEndpointGroupRequest& request) const;

        /**
         * <p>Delete an endpoint group from a listener for a custom routing
         * accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomRoutingEndpointGroupAsync(const Model::DeleteCustomRoutingEndpointGroupRequest& request, const DeleteCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a listener for a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomRoutingListenerOutcome DeleteCustomRoutingListener(const Model::DeleteCustomRoutingListenerRequest& request) const;

        /**
         * <p>Delete a listener for a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomRoutingListenerOutcomeCallable DeleteCustomRoutingListenerCallable(const Model::DeleteCustomRoutingListenerRequest& request) const;

        /**
         * <p>Delete a listener for a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteCustomRoutingListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomRoutingListenerAsync(const Model::DeleteCustomRoutingListenerRequest& request, const DeleteCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an endpoint group from a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointGroupOutcome DeleteEndpointGroup(const Model::DeleteEndpointGroupRequest& request) const;

        /**
         * <p>Delete an endpoint group from a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointGroupOutcomeCallable DeleteEndpointGroupCallable(const Model::DeleteEndpointGroupRequest& request) const;

        /**
         * <p>Delete an endpoint group from a listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointGroupAsync(const Model::DeleteEndpointGroupRequest& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a listener from an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest& request) const;

        /**
         * <p>Delete a listener from an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request) const;

        /**
         * <p>Delete a listener from an accelerator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeleteListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the Amazon EC2 instance (destination) IP addresses and ports for a
         * VPC subnet endpoint that cannot receive traffic for a custom routing
         * accelerator. You can deny traffic to all destinations in the VPC endpoint, or
         * deny traffic to a specified list of destination IP addresses and ports. Note
         * that you cannot specify IP addresses or ports outside of the range that you
         * configured for the endpoint group.</p> <p>After you make changes, you can verify
         * that the updates are complete by checking the status of your accelerator: the
         * status changes from IN_PROGRESS to DEPLOYED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DenyCustomRoutingTraffic">AWS
         * API Reference</a></p>
         */
        virtual Model::DenyCustomRoutingTrafficOutcome DenyCustomRoutingTraffic(const Model::DenyCustomRoutingTrafficRequest& request) const;

        /**
         * <p>Specify the Amazon EC2 instance (destination) IP addresses and ports for a
         * VPC subnet endpoint that cannot receive traffic for a custom routing
         * accelerator. You can deny traffic to all destinations in the VPC endpoint, or
         * deny traffic to a specified list of destination IP addresses and ports. Note
         * that you cannot specify IP addresses or ports outside of the range that you
         * configured for the endpoint group.</p> <p>After you make changes, you can verify
         * that the updates are complete by checking the status of your accelerator: the
         * status changes from IN_PROGRESS to DEPLOYED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DenyCustomRoutingTraffic">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DenyCustomRoutingTrafficOutcomeCallable DenyCustomRoutingTrafficCallable(const Model::DenyCustomRoutingTrafficRequest& request) const;

        /**
         * <p>Specify the Amazon EC2 instance (destination) IP addresses and ports for a
         * VPC subnet endpoint that cannot receive traffic for a custom routing
         * accelerator. You can deny traffic to all destinations in the VPC endpoint, or
         * deny traffic to a specified list of destination IP addresses and ports. Note
         * that you cannot specify IP addresses or ports outside of the range that you
         * configured for the endpoint group.</p> <p>After you make changes, you can verify
         * that the updates are complete by checking the status of your accelerator: the
         * status changes from IN_PROGRESS to DEPLOYED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DenyCustomRoutingTraffic">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DenyCustomRoutingTrafficAsync(const Model::DenyCustomRoutingTrafficRequest& request, const DenyCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Releases the specified address range that you provisioned to use with your
         * AWS resources through bring your own IP addresses (BYOIP) and deletes the
         * corresponding address pool. </p> <p>Before you can release an address range, you
         * must stop advertising it by using <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">WithdrawByoipCidr</a>
         * and you must not have any accelerators that are using static IP addresses
         * allocated from its address range. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeprovisionByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprovisionByoipCidrOutcome DeprovisionByoipCidr(const Model::DeprovisionByoipCidrRequest& request) const;

        /**
         * <p>Releases the specified address range that you provisioned to use with your
         * AWS resources through bring your own IP addresses (BYOIP) and deletes the
         * corresponding address pool. </p> <p>Before you can release an address range, you
         * must stop advertising it by using <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">WithdrawByoipCidr</a>
         * and you must not have any accelerators that are using static IP addresses
         * allocated from its address range. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeprovisionByoipCidr">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprovisionByoipCidrOutcomeCallable DeprovisionByoipCidrCallable(const Model::DeprovisionByoipCidrRequest& request) const;

        /**
         * <p>Releases the specified address range that you provisioned to use with your
         * AWS resources through bring your own IP addresses (BYOIP) and deletes the
         * corresponding address pool. </p> <p>Before you can release an address range, you
         * must stop advertising it by using <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/WithdrawByoipCidr.html">WithdrawByoipCidr</a>
         * and you must not have any accelerators that are using static IP addresses
         * allocated from its address range. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DeprovisionByoipCidr">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprovisionByoipCidrAsync(const Model::DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorOutcome DescribeAccelerator(const Model::DescribeAcceleratorRequest& request) const;

        /**
         * <p>Describe an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAcceleratorOutcomeCallable DescribeAcceleratorCallable(const Model::DescribeAcceleratorRequest& request) const;

        /**
         * <p>Describe an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAcceleratorAsync(const Model::DescribeAcceleratorRequest& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe the attributes of an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorAttributesOutcome DescribeAcceleratorAttributes(const Model::DescribeAcceleratorAttributesRequest& request) const;

        /**
         * <p>Describe the attributes of an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAcceleratorAttributesOutcomeCallable DescribeAcceleratorAttributesCallable(const Model::DescribeAcceleratorAttributesRequest& request) const;

        /**
         * <p>Describe the attributes of an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAcceleratorAttributesAsync(const Model::DescribeAcceleratorAttributesRequest& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingAcceleratorOutcome DescribeCustomRoutingAccelerator(const Model::DescribeCustomRoutingAcceleratorRequest& request) const;

        /**
         * <p>Describe a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomRoutingAcceleratorOutcomeCallable DescribeCustomRoutingAcceleratorCallable(const Model::DescribeCustomRoutingAcceleratorRequest& request) const;

        /**
         * <p>Describe a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomRoutingAcceleratorAsync(const Model::DescribeCustomRoutingAcceleratorRequest& request, const DescribeCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe the attributes of a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingAcceleratorAttributesOutcome DescribeCustomRoutingAcceleratorAttributes(const Model::DescribeCustomRoutingAcceleratorAttributesRequest& request) const;

        /**
         * <p>Describe the attributes of a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomRoutingAcceleratorAttributesOutcomeCallable DescribeCustomRoutingAcceleratorAttributesCallable(const Model::DescribeCustomRoutingAcceleratorAttributesRequest& request) const;

        /**
         * <p>Describe the attributes of a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomRoutingAcceleratorAttributesAsync(const Model::DescribeCustomRoutingAcceleratorAttributesRequest& request, const DescribeCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an endpoint group for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingEndpointGroupOutcome DescribeCustomRoutingEndpointGroup(const Model::DescribeCustomRoutingEndpointGroupRequest& request) const;

        /**
         * <p>Describe an endpoint group for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomRoutingEndpointGroupOutcomeCallable DescribeCustomRoutingEndpointGroupCallable(const Model::DescribeCustomRoutingEndpointGroupRequest& request) const;

        /**
         * <p>Describe an endpoint group for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomRoutingEndpointGroupAsync(const Model::DescribeCustomRoutingEndpointGroupRequest& request, const DescribeCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The description of a listener for a custom routing accelerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomRoutingListenerOutcome DescribeCustomRoutingListener(const Model::DescribeCustomRoutingListenerRequest& request) const;

        /**
         * <p>The description of a listener for a custom routing accelerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomRoutingListenerOutcomeCallable DescribeCustomRoutingListenerCallable(const Model::DescribeCustomRoutingListenerRequest& request) const;

        /**
         * <p>The description of a listener for a custom routing accelerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeCustomRoutingListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomRoutingListenerAsync(const Model::DescribeCustomRoutingListenerRequest& request, const DescribeCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an endpoint group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointGroupOutcome DescribeEndpointGroup(const Model::DescribeEndpointGroupRequest& request) const;

        /**
         * <p>Describe an endpoint group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointGroupOutcomeCallable DescribeEndpointGroupCallable(const Model::DescribeEndpointGroupRequest& request) const;

        /**
         * <p>Describe an endpoint group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointGroupAsync(const Model::DescribeEndpointGroupRequest& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenerOutcome DescribeListener(const Model::DescribeListenerRequest& request) const;

        /**
         * <p>Describe a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeListenerOutcomeCallable DescribeListenerCallable(const Model::DescribeListenerRequest& request) const;

        /**
         * <p>Describe a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DescribeListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeListenerAsync(const Model::DescribeListenerRequest& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the accelerators for an AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAcceleratorsOutcome ListAccelerators(const Model::ListAcceleratorsRequest& request) const;

        /**
         * <p>List the accelerators for an AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListAccelerators">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAcceleratorsOutcomeCallable ListAcceleratorsCallable(const Model::ListAcceleratorsRequest& request) const;

        /**
         * <p>List the accelerators for an AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListAccelerators">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAcceleratorsAsync(const Model::ListAcceleratorsRequest& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IP address ranges that were specified in calls to <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/ProvisionByoipCidr.html">ProvisionByoipCidr</a>,
         * including the current state and a history of state changes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListByoipCidrs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListByoipCidrsOutcome ListByoipCidrs(const Model::ListByoipCidrsRequest& request) const;

        /**
         * <p>Lists the IP address ranges that were specified in calls to <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/ProvisionByoipCidr.html">ProvisionByoipCidr</a>,
         * including the current state and a history of state changes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListByoipCidrs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListByoipCidrsOutcomeCallable ListByoipCidrsCallable(const Model::ListByoipCidrsRequest& request) const;

        /**
         * <p>Lists the IP address ranges that were specified in calls to <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/ProvisionByoipCidr.html">ProvisionByoipCidr</a>,
         * including the current state and a history of state changes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListByoipCidrs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListByoipCidrsAsync(const Model::ListByoipCidrsRequest& request, const ListByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the custom routing accelerators for an AWS account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingAcceleratorsOutcome ListCustomRoutingAccelerators(const Model::ListCustomRoutingAcceleratorsRequest& request) const;

        /**
         * <p>List the custom routing accelerators for an AWS account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingAccelerators">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomRoutingAcceleratorsOutcomeCallable ListCustomRoutingAcceleratorsCallable(const Model::ListCustomRoutingAcceleratorsRequest& request) const;

        /**
         * <p>List the custom routing accelerators for an AWS account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingAccelerators">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomRoutingAcceleratorsAsync(const Model::ListCustomRoutingAcceleratorsRequest& request, const ListCustomRoutingAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the endpoint groups that are associated with a listener for a custom
         * routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingEndpointGroupsOutcome ListCustomRoutingEndpointGroups(const Model::ListCustomRoutingEndpointGroupsRequest& request) const;

        /**
         * <p>List the endpoint groups that are associated with a listener for a custom
         * routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingEndpointGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomRoutingEndpointGroupsOutcomeCallable ListCustomRoutingEndpointGroupsCallable(const Model::ListCustomRoutingEndpointGroupsRequest& request) const;

        /**
         * <p>List the endpoint groups that are associated with a listener for a custom
         * routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingEndpointGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomRoutingEndpointGroupsAsync(const Model::ListCustomRoutingEndpointGroupsRequest& request, const ListCustomRoutingEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the listeners for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingListenersOutcome ListCustomRoutingListeners(const Model::ListCustomRoutingListenersRequest& request) const;

        /**
         * <p>List the listeners for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingListeners">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomRoutingListenersOutcomeCallable ListCustomRoutingListenersCallable(const Model::ListCustomRoutingListenersRequest& request) const;

        /**
         * <p>List the listeners for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingListeners">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomRoutingListenersAsync(const Model::ListCustomRoutingListenersRequest& request, const ListCustomRoutingListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a complete mapping from the public accelerator IP address and port
         * to destination EC2 instance IP addresses and ports in the virtual public cloud
         * (VPC) subnet endpoint for a custom routing accelerator. For each subnet endpoint
         * that you add, Global Accelerator creates a new static port mapping for the
         * accelerator. The port mappings don't change after Global Accelerator generates
         * them, so you can retrieve and cache the full mapping on your servers. </p> <p>If
         * you remove a subnet from your accelerator, Global Accelerator removes (reclaims)
         * the port mappings. If you add a subnet to your accelerator, Global Accelerator
         * creates new port mappings (the existing ones don't change). If you add or remove
         * EC2 instances in your subnet, the port mappings don't change, because the
         * mappings are created when you add the subnet to Global Accelerator.</p> <p>The
         * mappings also include a flag for each destination denoting which destination IP
         * addresses and ports are allowed or denied traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingPortMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingPortMappingsOutcome ListCustomRoutingPortMappings(const Model::ListCustomRoutingPortMappingsRequest& request) const;

        /**
         * <p>Provides a complete mapping from the public accelerator IP address and port
         * to destination EC2 instance IP addresses and ports in the virtual public cloud
         * (VPC) subnet endpoint for a custom routing accelerator. For each subnet endpoint
         * that you add, Global Accelerator creates a new static port mapping for the
         * accelerator. The port mappings don't change after Global Accelerator generates
         * them, so you can retrieve and cache the full mapping on your servers. </p> <p>If
         * you remove a subnet from your accelerator, Global Accelerator removes (reclaims)
         * the port mappings. If you add a subnet to your accelerator, Global Accelerator
         * creates new port mappings (the existing ones don't change). If you add or remove
         * EC2 instances in your subnet, the port mappings don't change, because the
         * mappings are created when you add the subnet to Global Accelerator.</p> <p>The
         * mappings also include a flag for each destination denoting which destination IP
         * addresses and ports are allowed or denied traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingPortMappings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomRoutingPortMappingsOutcomeCallable ListCustomRoutingPortMappingsCallable(const Model::ListCustomRoutingPortMappingsRequest& request) const;

        /**
         * <p>Provides a complete mapping from the public accelerator IP address and port
         * to destination EC2 instance IP addresses and ports in the virtual public cloud
         * (VPC) subnet endpoint for a custom routing accelerator. For each subnet endpoint
         * that you add, Global Accelerator creates a new static port mapping for the
         * accelerator. The port mappings don't change after Global Accelerator generates
         * them, so you can retrieve and cache the full mapping on your servers. </p> <p>If
         * you remove a subnet from your accelerator, Global Accelerator removes (reclaims)
         * the port mappings. If you add a subnet to your accelerator, Global Accelerator
         * creates new port mappings (the existing ones don't change). If you add or remove
         * EC2 instances in your subnet, the port mappings don't change, because the
         * mappings are created when you add the subnet to Global Accelerator.</p> <p>The
         * mappings also include a flag for each destination denoting which destination IP
         * addresses and ports are allowed or denied traffic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingPortMappings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomRoutingPortMappingsAsync(const Model::ListCustomRoutingPortMappingsRequest& request, const ListCustomRoutingPortMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the port mappings for a specific EC2 instance (destination) in a VPC
         * subnet endpoint. The response is the mappings for one destination IP address.
         * This is useful when your subnet endpoint has mappings that span multiple custom
         * routing accelerators in your account, or for scenarios where you only want to
         * list the port mappings for a specific destination instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingPortMappingsByDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomRoutingPortMappingsByDestinationOutcome ListCustomRoutingPortMappingsByDestination(const Model::ListCustomRoutingPortMappingsByDestinationRequest& request) const;

        /**
         * <p>List the port mappings for a specific EC2 instance (destination) in a VPC
         * subnet endpoint. The response is the mappings for one destination IP address.
         * This is useful when your subnet endpoint has mappings that span multiple custom
         * routing accelerators in your account, or for scenarios where you only want to
         * list the port mappings for a specific destination instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingPortMappingsByDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomRoutingPortMappingsByDestinationOutcomeCallable ListCustomRoutingPortMappingsByDestinationCallable(const Model::ListCustomRoutingPortMappingsByDestinationRequest& request) const;

        /**
         * <p>List the port mappings for a specific EC2 instance (destination) in a VPC
         * subnet endpoint. The response is the mappings for one destination IP address.
         * This is useful when your subnet endpoint has mappings that span multiple custom
         * routing accelerators in your account, or for scenarios where you only want to
         * list the port mappings for a specific destination instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListCustomRoutingPortMappingsByDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomRoutingPortMappingsByDestinationAsync(const Model::ListCustomRoutingPortMappingsByDestinationRequest& request, const ListCustomRoutingPortMappingsByDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the endpoint groups that are associated with a listener. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointGroupsOutcome ListEndpointGroups(const Model::ListEndpointGroupsRequest& request) const;

        /**
         * <p>List the endpoint groups that are associated with a listener. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListEndpointGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointGroupsOutcomeCallable ListEndpointGroupsCallable(const Model::ListEndpointGroupsRequest& request) const;

        /**
         * <p>List the endpoint groups that are associated with a listener. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListEndpointGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointGroupsAsync(const Model::ListEndpointGroupsRequest& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the listeners for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListListenersOutcome ListListeners(const Model::ListListenersRequest& request) const;

        /**
         * <p>List the listeners for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListListeners">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListListenersOutcomeCallable ListListenersCallable(const Model::ListListenersRequest& request) const;

        /**
         * <p>List the listeners for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListListeners">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListListenersAsync(const Model::ListListenersRequest& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all tags for an accelerator. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags for an accelerator. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags for an accelerator. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions an IP address range to use with your AWS resources through bring
         * your own IP addresses (BYOIP) and creates a corresponding address pool. After
         * the address range is provisioned, it is ready to be advertised using <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/AdvertiseByoipCidr.html">
         * AdvertiseByoipCidr</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ProvisionByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionByoipCidrOutcome ProvisionByoipCidr(const Model::ProvisionByoipCidrRequest& request) const;

        /**
         * <p>Provisions an IP address range to use with your AWS resources through bring
         * your own IP addresses (BYOIP) and creates a corresponding address pool. After
         * the address range is provisioned, it is ready to be advertised using <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/AdvertiseByoipCidr.html">
         * AdvertiseByoipCidr</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ProvisionByoipCidr">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionByoipCidrOutcomeCallable ProvisionByoipCidrCallable(const Model::ProvisionByoipCidrRequest& request) const;

        /**
         * <p>Provisions an IP address range to use with your AWS resources through bring
         * your own IP addresses (BYOIP) and creates a corresponding address pool. After
         * the address range is provisioned, it is ready to be advertised using <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/api/AdvertiseByoipCidr.html">
         * AdvertiseByoipCidr</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ProvisionByoipCidr">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionByoipCidrAsync(const Model::ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove endpoints from a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/RemoveCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveCustomRoutingEndpointsOutcome RemoveCustomRoutingEndpoints(const Model::RemoveCustomRoutingEndpointsRequest& request) const;

        /**
         * <p>Remove endpoints from a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/RemoveCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveCustomRoutingEndpointsOutcomeCallable RemoveCustomRoutingEndpointsCallable(const Model::RemoveCustomRoutingEndpointsRequest& request) const;

        /**
         * <p>Remove endpoints from a custom routing accelerator.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/RemoveCustomRoutingEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveCustomRoutingEndpointsAsync(const Model::RemoveCustomRoutingEndpointsRequest& request, const RemoveCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add tags to an accelerator resource. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add tags to an accelerator resource. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add tags to an accelerator resource. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags from a Global Accelerator resource. When you specify a tag key,
         * the action removes both that key and its associated value. The operation
         * succeeds even if you attempt to remove tags from an accelerator that was already
         * removed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove tags from a Global Accelerator resource. When you specify a tag key,
         * the action removes both that key and its associated value. The operation
         * succeeds even if you attempt to remove tags from an accelerator that was already
         * removed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove tags from a Global Accelerator resource. When you specify a tag key,
         * the action removes both that key and its associated value. The operation
         * succeeds even if you attempt to remove tags from an accelerator that was already
         * removed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
         * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an accelerator. </p>  <p>Global Accelerator is a global
         * service that supports endpoints in multiple AWS Regions but you must specify the
         * US West (Oregon) Region to create or update accelerators.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAcceleratorOutcome UpdateAccelerator(const Model::UpdateAcceleratorRequest& request) const;

        /**
         * <p>Update an accelerator. </p>  <p>Global Accelerator is a global
         * service that supports endpoints in multiple AWS Regions but you must specify the
         * US West (Oregon) Region to create or update accelerators.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAcceleratorOutcomeCallable UpdateAcceleratorCallable(const Model::UpdateAcceleratorRequest& request) const;

        /**
         * <p>Update an accelerator. </p>  <p>Global Accelerator is a global
         * service that supports endpoints in multiple AWS Regions but you must specify the
         * US West (Oregon) Region to create or update accelerators.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAcceleratorAsync(const Model::UpdateAcceleratorRequest& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the attributes for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAcceleratorAttributesOutcome UpdateAcceleratorAttributes(const Model::UpdateAcceleratorAttributesRequest& request) const;

        /**
         * <p>Update the attributes for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAcceleratorAttributesOutcomeCallable UpdateAcceleratorAttributesCallable(const Model::UpdateAcceleratorAttributesRequest& request) const;

        /**
         * <p>Update the attributes for an accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAcceleratorAttributesAsync(const Model::UpdateAcceleratorAttributesRequest& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingAcceleratorOutcome UpdateCustomRoutingAccelerator(const Model::UpdateCustomRoutingAcceleratorRequest& request) const;

        /**
         * <p>Update a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomRoutingAcceleratorOutcomeCallable UpdateCustomRoutingAcceleratorCallable(const Model::UpdateCustomRoutingAcceleratorRequest& request) const;

        /**
         * <p>Update a custom routing accelerator. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAccelerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomRoutingAcceleratorAsync(const Model::UpdateCustomRoutingAcceleratorRequest& request, const UpdateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the attributes for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingAcceleratorAttributesOutcome UpdateCustomRoutingAcceleratorAttributes(const Model::UpdateCustomRoutingAcceleratorAttributesRequest& request) const;

        /**
         * <p>Update the attributes for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomRoutingAcceleratorAttributesOutcomeCallable UpdateCustomRoutingAcceleratorAttributesCallable(const Model::UpdateCustomRoutingAcceleratorAttributesRequest& request) const;

        /**
         * <p>Update the attributes for a custom routing accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingAcceleratorAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomRoutingAcceleratorAttributesAsync(const Model::UpdateCustomRoutingAcceleratorAttributesRequest& request, const UpdateCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a listener for a custom routing accelerator. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingListener">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomRoutingListenerOutcome UpdateCustomRoutingListener(const Model::UpdateCustomRoutingListenerRequest& request) const;

        /**
         * <p>Update a listener for a custom routing accelerator. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomRoutingListenerOutcomeCallable UpdateCustomRoutingListenerCallable(const Model::UpdateCustomRoutingListenerRequest& request) const;

        /**
         * <p>Update a listener for a custom routing accelerator. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateCustomRoutingListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomRoutingListenerAsync(const Model::UpdateCustomRoutingListenerRequest& request, const UpdateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an endpoint group. A resource must be valid and active when you add it
         * as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointGroupOutcome UpdateEndpointGroup(const Model::UpdateEndpointGroupRequest& request) const;

        /**
         * <p>Update an endpoint group. A resource must be valid and active when you add it
         * as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointGroupOutcomeCallable UpdateEndpointGroupCallable(const Model::UpdateEndpointGroupRequest& request) const;

        /**
         * <p>Update an endpoint group. A resource must be valid and active when you add it
         * as an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointGroupAsync(const Model::UpdateEndpointGroupRequest& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateListenerOutcome UpdateListener(const Model::UpdateListenerRequest& request) const;

        /**
         * <p>Update a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateListenerOutcomeCallable UpdateListenerCallable(const Model::UpdateListenerRequest& request) const;

        /**
         * <p>Update a listener. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/UpdateListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateListenerAsync(const Model::UpdateListenerRequest& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops advertising an address range that is provisioned as an address pool.
         * You can perform this operation at most once every 10 seconds, even if you
         * specify different address ranges each time.</p> <p>It can take a few minutes
         * before traffic to the specified addresses stops routing to AWS because of
         * propagation delays.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/WithdrawByoipCidr">AWS
         * API Reference</a></p>
         */
        virtual Model::WithdrawByoipCidrOutcome WithdrawByoipCidr(const Model::WithdrawByoipCidrRequest& request) const;

        /**
         * <p>Stops advertising an address range that is provisioned as an address pool.
         * You can perform this operation at most once every 10 seconds, even if you
         * specify different address ranges each time.</p> <p>It can take a few minutes
         * before traffic to the specified addresses stops routing to AWS because of
         * propagation delays.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/WithdrawByoipCidr">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::WithdrawByoipCidrOutcomeCallable WithdrawByoipCidrCallable(const Model::WithdrawByoipCidrRequest& request) const;

        /**
         * <p>Stops advertising an address range that is provisioned as an address pool.
         * You can perform this operation at most once every 10 seconds, even if you
         * specify different address ranges each time.</p> <p>It can take a few minutes
         * before traffic to the specified addresses stops routing to AWS because of
         * propagation delays.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
         * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/WithdrawByoipCidr">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void WithdrawByoipCidrAsync(const Model::WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddCustomRoutingEndpointsAsyncHelper(const Model::AddCustomRoutingEndpointsRequest& request, const AddCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdvertiseByoipCidrAsyncHelper(const Model::AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllowCustomRoutingTrafficAsyncHelper(const Model::AllowCustomRoutingTrafficRequest& request, const AllowCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAcceleratorAsyncHelper(const Model::CreateAcceleratorRequest& request, const CreateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomRoutingAcceleratorAsyncHelper(const Model::CreateCustomRoutingAcceleratorRequest& request, const CreateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomRoutingEndpointGroupAsyncHelper(const Model::CreateCustomRoutingEndpointGroupRequest& request, const CreateCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomRoutingListenerAsyncHelper(const Model::CreateCustomRoutingListenerRequest& request, const CreateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointGroupAsyncHelper(const Model::CreateEndpointGroupRequest& request, const CreateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateListenerAsyncHelper(const Model::CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAcceleratorAsyncHelper(const Model::DeleteAcceleratorRequest& request, const DeleteAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomRoutingAcceleratorAsyncHelper(const Model::DeleteCustomRoutingAcceleratorRequest& request, const DeleteCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomRoutingEndpointGroupAsyncHelper(const Model::DeleteCustomRoutingEndpointGroupRequest& request, const DeleteCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomRoutingListenerAsyncHelper(const Model::DeleteCustomRoutingListenerRequest& request, const DeleteCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointGroupAsyncHelper(const Model::DeleteEndpointGroupRequest& request, const DeleteEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteListenerAsyncHelper(const Model::DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DenyCustomRoutingTrafficAsyncHelper(const Model::DenyCustomRoutingTrafficRequest& request, const DenyCustomRoutingTrafficResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeprovisionByoipCidrAsyncHelper(const Model::DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAcceleratorAsyncHelper(const Model::DescribeAcceleratorRequest& request, const DescribeAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAcceleratorAttributesAsyncHelper(const Model::DescribeAcceleratorAttributesRequest& request, const DescribeAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCustomRoutingAcceleratorAsyncHelper(const Model::DescribeCustomRoutingAcceleratorRequest& request, const DescribeCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCustomRoutingAcceleratorAttributesAsyncHelper(const Model::DescribeCustomRoutingAcceleratorAttributesRequest& request, const DescribeCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCustomRoutingEndpointGroupAsyncHelper(const Model::DescribeCustomRoutingEndpointGroupRequest& request, const DescribeCustomRoutingEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCustomRoutingListenerAsyncHelper(const Model::DescribeCustomRoutingListenerRequest& request, const DescribeCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointGroupAsyncHelper(const Model::DescribeEndpointGroupRequest& request, const DescribeEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeListenerAsyncHelper(const Model::DescribeListenerRequest& request, const DescribeListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAcceleratorsAsyncHelper(const Model::ListAcceleratorsRequest& request, const ListAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListByoipCidrsAsyncHelper(const Model::ListByoipCidrsRequest& request, const ListByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCustomRoutingAcceleratorsAsyncHelper(const Model::ListCustomRoutingAcceleratorsRequest& request, const ListCustomRoutingAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCustomRoutingEndpointGroupsAsyncHelper(const Model::ListCustomRoutingEndpointGroupsRequest& request, const ListCustomRoutingEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCustomRoutingListenersAsyncHelper(const Model::ListCustomRoutingListenersRequest& request, const ListCustomRoutingListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCustomRoutingPortMappingsAsyncHelper(const Model::ListCustomRoutingPortMappingsRequest& request, const ListCustomRoutingPortMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCustomRoutingPortMappingsByDestinationAsyncHelper(const Model::ListCustomRoutingPortMappingsByDestinationRequest& request, const ListCustomRoutingPortMappingsByDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointGroupsAsyncHelper(const Model::ListEndpointGroupsRequest& request, const ListEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListListenersAsyncHelper(const Model::ListListenersRequest& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ProvisionByoipCidrAsyncHelper(const Model::ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveCustomRoutingEndpointsAsyncHelper(const Model::RemoveCustomRoutingEndpointsRequest& request, const RemoveCustomRoutingEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAcceleratorAsyncHelper(const Model::UpdateAcceleratorRequest& request, const UpdateAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAcceleratorAttributesAsyncHelper(const Model::UpdateAcceleratorAttributesRequest& request, const UpdateAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCustomRoutingAcceleratorAsyncHelper(const Model::UpdateCustomRoutingAcceleratorRequest& request, const UpdateCustomRoutingAcceleratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCustomRoutingAcceleratorAttributesAsyncHelper(const Model::UpdateCustomRoutingAcceleratorAttributesRequest& request, const UpdateCustomRoutingAcceleratorAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCustomRoutingListenerAsyncHelper(const Model::UpdateCustomRoutingListenerRequest& request, const UpdateCustomRoutingListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointGroupAsyncHelper(const Model::UpdateEndpointGroupRequest& request, const UpdateEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateListenerAsyncHelper(const Model::UpdateListenerRequest& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void WithdrawByoipCidrAsyncHelper(const Model::WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GlobalAccelerator
} // namespace Aws
