/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/eventbridge/EventBridgeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/eventbridge/EventBridgeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EventBridgeClient header */
#include <aws/eventbridge/model/CancelReplayResult.h>
#include <aws/eventbridge/model/CreateApiDestinationResult.h>
#include <aws/eventbridge/model/CreateArchiveResult.h>
#include <aws/eventbridge/model/CreateConnectionResult.h>
#include <aws/eventbridge/model/CreateEndpointResult.h>
#include <aws/eventbridge/model/CreateEventBusResult.h>
#include <aws/eventbridge/model/CreatePartnerEventSourceResult.h>
#include <aws/eventbridge/model/DeauthorizeConnectionResult.h>
#include <aws/eventbridge/model/DeleteApiDestinationResult.h>
#include <aws/eventbridge/model/DeleteArchiveResult.h>
#include <aws/eventbridge/model/DeleteConnectionResult.h>
#include <aws/eventbridge/model/DeleteEndpointResult.h>
#include <aws/eventbridge/model/DescribeApiDestinationResult.h>
#include <aws/eventbridge/model/DescribeArchiveResult.h>
#include <aws/eventbridge/model/DescribeConnectionResult.h>
#include <aws/eventbridge/model/DescribeEndpointResult.h>
#include <aws/eventbridge/model/DescribeEventBusResult.h>
#include <aws/eventbridge/model/DescribeEventSourceResult.h>
#include <aws/eventbridge/model/DescribePartnerEventSourceResult.h>
#include <aws/eventbridge/model/DescribeReplayResult.h>
#include <aws/eventbridge/model/DescribeRuleResult.h>
#include <aws/eventbridge/model/ListApiDestinationsResult.h>
#include <aws/eventbridge/model/ListArchivesResult.h>
#include <aws/eventbridge/model/ListConnectionsResult.h>
#include <aws/eventbridge/model/ListEndpointsResult.h>
#include <aws/eventbridge/model/ListEventBusesResult.h>
#include <aws/eventbridge/model/ListEventSourcesResult.h>
#include <aws/eventbridge/model/ListPartnerEventSourceAccountsResult.h>
#include <aws/eventbridge/model/ListPartnerEventSourcesResult.h>
#include <aws/eventbridge/model/ListReplaysResult.h>
#include <aws/eventbridge/model/ListRuleNamesByTargetResult.h>
#include <aws/eventbridge/model/ListRulesResult.h>
#include <aws/eventbridge/model/ListTagsForResourceResult.h>
#include <aws/eventbridge/model/ListTargetsByRuleResult.h>
#include <aws/eventbridge/model/PutEventsResult.h>
#include <aws/eventbridge/model/PutPartnerEventsResult.h>
#include <aws/eventbridge/model/PutRuleResult.h>
#include <aws/eventbridge/model/PutTargetsResult.h>
#include <aws/eventbridge/model/RemoveTargetsResult.h>
#include <aws/eventbridge/model/StartReplayResult.h>
#include <aws/eventbridge/model/TagResourceResult.h>
#include <aws/eventbridge/model/TestEventPatternResult.h>
#include <aws/eventbridge/model/UntagResourceResult.h>
#include <aws/eventbridge/model/UpdateApiDestinationResult.h>
#include <aws/eventbridge/model/UpdateArchiveResult.h>
#include <aws/eventbridge/model/UpdateConnectionResult.h>
#include <aws/eventbridge/model/UpdateEndpointResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in EventBridgeClient header */

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

  namespace EventBridge
  {
    using EventBridgeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EventBridgeEndpointProviderBase = Aws::EventBridge::Endpoint::EventBridgeEndpointProviderBase;
    using EventBridgeEndpointProvider = Aws::EventBridge::Endpoint::EventBridgeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EventBridgeClient header */
      class ActivateEventSourceRequest;
      class CancelReplayRequest;
      class CreateApiDestinationRequest;
      class CreateArchiveRequest;
      class CreateConnectionRequest;
      class CreateEndpointRequest;
      class CreateEventBusRequest;
      class CreatePartnerEventSourceRequest;
      class DeactivateEventSourceRequest;
      class DeauthorizeConnectionRequest;
      class DeleteApiDestinationRequest;
      class DeleteArchiveRequest;
      class DeleteConnectionRequest;
      class DeleteEndpointRequest;
      class DeleteEventBusRequest;
      class DeletePartnerEventSourceRequest;
      class DeleteRuleRequest;
      class DescribeApiDestinationRequest;
      class DescribeArchiveRequest;
      class DescribeConnectionRequest;
      class DescribeEndpointRequest;
      class DescribeEventBusRequest;
      class DescribeEventSourceRequest;
      class DescribePartnerEventSourceRequest;
      class DescribeReplayRequest;
      class DescribeRuleRequest;
      class DisableRuleRequest;
      class EnableRuleRequest;
      class ListApiDestinationsRequest;
      class ListArchivesRequest;
      class ListConnectionsRequest;
      class ListEndpointsRequest;
      class ListEventBusesRequest;
      class ListEventSourcesRequest;
      class ListPartnerEventSourceAccountsRequest;
      class ListPartnerEventSourcesRequest;
      class ListReplaysRequest;
      class ListRuleNamesByTargetRequest;
      class ListRulesRequest;
      class ListTagsForResourceRequest;
      class ListTargetsByRuleRequest;
      class PutEventsRequest;
      class PutPartnerEventsRequest;
      class PutPermissionRequest;
      class PutRuleRequest;
      class PutTargetsRequest;
      class RemovePermissionRequest;
      class RemoveTargetsRequest;
      class StartReplayRequest;
      class TagResourceRequest;
      class TestEventPatternRequest;
      class UntagResourceRequest;
      class UpdateApiDestinationRequest;
      class UpdateArchiveRequest;
      class UpdateConnectionRequest;
      class UpdateEndpointRequest;
      /* End of service model forward declarations required in EventBridgeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> ActivateEventSourceOutcome;
      typedef Aws::Utils::Outcome<CancelReplayResult, EventBridgeError> CancelReplayOutcome;
      typedef Aws::Utils::Outcome<CreateApiDestinationResult, EventBridgeError> CreateApiDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateArchiveResult, EventBridgeError> CreateArchiveOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionResult, EventBridgeError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateEndpointResult, EventBridgeError> CreateEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateEventBusResult, EventBridgeError> CreateEventBusOutcome;
      typedef Aws::Utils::Outcome<CreatePartnerEventSourceResult, EventBridgeError> CreatePartnerEventSourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> DeactivateEventSourceOutcome;
      typedef Aws::Utils::Outcome<DeauthorizeConnectionResult, EventBridgeError> DeauthorizeConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteApiDestinationResult, EventBridgeError> DeleteApiDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteArchiveResult, EventBridgeError> DeleteArchiveOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, EventBridgeError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteEndpointResult, EventBridgeError> DeleteEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> DeleteEventBusOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> DeletePartnerEventSourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<DescribeApiDestinationResult, EventBridgeError> DescribeApiDestinationOutcome;
      typedef Aws::Utils::Outcome<DescribeArchiveResult, EventBridgeError> DescribeArchiveOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectionResult, EventBridgeError> DescribeConnectionOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointResult, EventBridgeError> DescribeEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeEventBusResult, EventBridgeError> DescribeEventBusOutcome;
      typedef Aws::Utils::Outcome<DescribeEventSourceResult, EventBridgeError> DescribeEventSourceOutcome;
      typedef Aws::Utils::Outcome<DescribePartnerEventSourceResult, EventBridgeError> DescribePartnerEventSourceOutcome;
      typedef Aws::Utils::Outcome<DescribeReplayResult, EventBridgeError> DescribeReplayOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleResult, EventBridgeError> DescribeRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> DisableRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> EnableRuleOutcome;
      typedef Aws::Utils::Outcome<ListApiDestinationsResult, EventBridgeError> ListApiDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListArchivesResult, EventBridgeError> ListArchivesOutcome;
      typedef Aws::Utils::Outcome<ListConnectionsResult, EventBridgeError> ListConnectionsOutcome;
      typedef Aws::Utils::Outcome<ListEndpointsResult, EventBridgeError> ListEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListEventBusesResult, EventBridgeError> ListEventBusesOutcome;
      typedef Aws::Utils::Outcome<ListEventSourcesResult, EventBridgeError> ListEventSourcesOutcome;
      typedef Aws::Utils::Outcome<ListPartnerEventSourceAccountsResult, EventBridgeError> ListPartnerEventSourceAccountsOutcome;
      typedef Aws::Utils::Outcome<ListPartnerEventSourcesResult, EventBridgeError> ListPartnerEventSourcesOutcome;
      typedef Aws::Utils::Outcome<ListReplaysResult, EventBridgeError> ListReplaysOutcome;
      typedef Aws::Utils::Outcome<ListRuleNamesByTargetResult, EventBridgeError> ListRuleNamesByTargetOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, EventBridgeError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, EventBridgeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTargetsByRuleResult, EventBridgeError> ListTargetsByRuleOutcome;
      typedef Aws::Utils::Outcome<PutEventsResult, EventBridgeError> PutEventsOutcome;
      typedef Aws::Utils::Outcome<PutPartnerEventsResult, EventBridgeError> PutPartnerEventsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> PutPermissionOutcome;
      typedef Aws::Utils::Outcome<PutRuleResult, EventBridgeError> PutRuleOutcome;
      typedef Aws::Utils::Outcome<PutTargetsResult, EventBridgeError> PutTargetsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EventBridgeError> RemovePermissionOutcome;
      typedef Aws::Utils::Outcome<RemoveTargetsResult, EventBridgeError> RemoveTargetsOutcome;
      typedef Aws::Utils::Outcome<StartReplayResult, EventBridgeError> StartReplayOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, EventBridgeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestEventPatternResult, EventBridgeError> TestEventPatternOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, EventBridgeError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApiDestinationResult, EventBridgeError> UpdateApiDestinationOutcome;
      typedef Aws::Utils::Outcome<UpdateArchiveResult, EventBridgeError> UpdateArchiveOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionResult, EventBridgeError> UpdateConnectionOutcome;
      typedef Aws::Utils::Outcome<UpdateEndpointResult, EventBridgeError> UpdateEndpointOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateEventSourceOutcome> ActivateEventSourceOutcomeCallable;
      typedef std::future<CancelReplayOutcome> CancelReplayOutcomeCallable;
      typedef std::future<CreateApiDestinationOutcome> CreateApiDestinationOutcomeCallable;
      typedef std::future<CreateArchiveOutcome> CreateArchiveOutcomeCallable;
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
      typedef std::future<CreateEventBusOutcome> CreateEventBusOutcomeCallable;
      typedef std::future<CreatePartnerEventSourceOutcome> CreatePartnerEventSourceOutcomeCallable;
      typedef std::future<DeactivateEventSourceOutcome> DeactivateEventSourceOutcomeCallable;
      typedef std::future<DeauthorizeConnectionOutcome> DeauthorizeConnectionOutcomeCallable;
      typedef std::future<DeleteApiDestinationOutcome> DeleteApiDestinationOutcomeCallable;
      typedef std::future<DeleteArchiveOutcome> DeleteArchiveOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
      typedef std::future<DeleteEventBusOutcome> DeleteEventBusOutcomeCallable;
      typedef std::future<DeletePartnerEventSourceOutcome> DeletePartnerEventSourceOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<DescribeApiDestinationOutcome> DescribeApiDestinationOutcomeCallable;
      typedef std::future<DescribeArchiveOutcome> DescribeArchiveOutcomeCallable;
      typedef std::future<DescribeConnectionOutcome> DescribeConnectionOutcomeCallable;
      typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
      typedef std::future<DescribeEventBusOutcome> DescribeEventBusOutcomeCallable;
      typedef std::future<DescribeEventSourceOutcome> DescribeEventSourceOutcomeCallable;
      typedef std::future<DescribePartnerEventSourceOutcome> DescribePartnerEventSourceOutcomeCallable;
      typedef std::future<DescribeReplayOutcome> DescribeReplayOutcomeCallable;
      typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
      typedef std::future<DisableRuleOutcome> DisableRuleOutcomeCallable;
      typedef std::future<EnableRuleOutcome> EnableRuleOutcomeCallable;
      typedef std::future<ListApiDestinationsOutcome> ListApiDestinationsOutcomeCallable;
      typedef std::future<ListArchivesOutcome> ListArchivesOutcomeCallable;
      typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
      typedef std::future<ListEndpointsOutcome> ListEndpointsOutcomeCallable;
      typedef std::future<ListEventBusesOutcome> ListEventBusesOutcomeCallable;
      typedef std::future<ListEventSourcesOutcome> ListEventSourcesOutcomeCallable;
      typedef std::future<ListPartnerEventSourceAccountsOutcome> ListPartnerEventSourceAccountsOutcomeCallable;
      typedef std::future<ListPartnerEventSourcesOutcome> ListPartnerEventSourcesOutcomeCallable;
      typedef std::future<ListReplaysOutcome> ListReplaysOutcomeCallable;
      typedef std::future<ListRuleNamesByTargetOutcome> ListRuleNamesByTargetOutcomeCallable;
      typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTargetsByRuleOutcome> ListTargetsByRuleOutcomeCallable;
      typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
      typedef std::future<PutPartnerEventsOutcome> PutPartnerEventsOutcomeCallable;
      typedef std::future<PutPermissionOutcome> PutPermissionOutcomeCallable;
      typedef std::future<PutRuleOutcome> PutRuleOutcomeCallable;
      typedef std::future<PutTargetsOutcome> PutTargetsOutcomeCallable;
      typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
      typedef std::future<RemoveTargetsOutcome> RemoveTargetsOutcomeCallable;
      typedef std::future<StartReplayOutcome> StartReplayOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestEventPatternOutcome> TestEventPatternOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApiDestinationOutcome> UpdateApiDestinationOutcomeCallable;
      typedef std::future<UpdateArchiveOutcome> UpdateArchiveOutcomeCallable;
      typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
      typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EventBridgeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EventBridgeClient*, const Model::ActivateEventSourceRequest&, const Model::ActivateEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CancelReplayRequest&, const Model::CancelReplayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelReplayResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CreateApiDestinationRequest&, const Model::CreateApiDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiDestinationResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CreateArchiveRequest&, const Model::CreateArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateArchiveResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CreateEventBusRequest&, const Model::CreateEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventBusResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CreatePartnerEventSourceRequest&, const Model::CreatePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeactivateEventSourceRequest&, const Model::DeactivateEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeauthorizeConnectionRequest&, const Model::DeauthorizeConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeauthorizeConnectionResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeleteApiDestinationRequest&, const Model::DeleteApiDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiDestinationResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeleteArchiveRequest&, const Model::DeleteArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteArchiveResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeleteEventBusRequest&, const Model::DeleteEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventBusResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeletePartnerEventSourceRequest&, const Model::DeletePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeApiDestinationRequest&, const Model::DescribeApiDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApiDestinationResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeArchiveRequest&, const Model::DescribeArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeArchiveResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeConnectionRequest&, const Model::DescribeConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeEventBusRequest&, const Model::DescribeEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventBusResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeEventSourceRequest&, const Model::DescribeEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribePartnerEventSourceRequest&, const Model::DescribePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeReplayRequest&, const Model::DescribeReplayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplayResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeRuleRequest&, const Model::DescribeRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DisableRuleRequest&, const Model::DisableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::EnableRuleRequest&, const Model::EnableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListApiDestinationsRequest&, const Model::ListApiDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApiDestinationsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListArchivesRequest&, const Model::ListArchivesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArchivesResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListEndpointsRequest&, const Model::ListEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListEventBusesRequest&, const Model::ListEventBusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventBusesResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListEventSourcesRequest&, const Model::ListEventSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventSourcesResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListPartnerEventSourceAccountsRequest&, const Model::ListPartnerEventSourceAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnerEventSourceAccountsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListPartnerEventSourcesRequest&, const Model::ListPartnerEventSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnerEventSourcesResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListReplaysRequest&, const Model::ListReplaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReplaysResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListRuleNamesByTargetRequest&, const Model::ListRuleNamesByTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleNamesByTargetResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListTargetsByRuleRequest&, const Model::ListTargetsByRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsByRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::PutPartnerEventsRequest&, const Model::PutPartnerEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPartnerEventsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::PutPermissionRequest&, const Model::PutPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::PutRuleRequest&, const Model::PutRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::PutTargetsRequest&, const Model::PutTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTargetsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::RemoveTargetsRequest&, const Model::RemoveTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTargetsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::StartReplayRequest&, const Model::StartReplayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplayResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::TestEventPatternRequest&, const Model::TestEventPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestEventPatternResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::UpdateApiDestinationRequest&, const Model::UpdateApiDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiDestinationResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::UpdateArchiveRequest&, const Model::UpdateArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateArchiveResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EventBridge
} // namespace Aws
