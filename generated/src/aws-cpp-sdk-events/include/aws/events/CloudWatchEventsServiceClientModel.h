/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/events/CloudWatchEventsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/events/CloudWatchEventsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudWatchEventsClient header */
#include <aws/events/model/CancelReplayResult.h>
#include <aws/events/model/CreateApiDestinationResult.h>
#include <aws/events/model/CreateArchiveResult.h>
#include <aws/events/model/CreateConnectionResult.h>
#include <aws/events/model/CreateEventBusResult.h>
#include <aws/events/model/CreatePartnerEventSourceResult.h>
#include <aws/events/model/DeauthorizeConnectionResult.h>
#include <aws/events/model/DeleteApiDestinationResult.h>
#include <aws/events/model/DeleteArchiveResult.h>
#include <aws/events/model/DeleteConnectionResult.h>
#include <aws/events/model/DescribeApiDestinationResult.h>
#include <aws/events/model/DescribeArchiveResult.h>
#include <aws/events/model/DescribeConnectionResult.h>
#include <aws/events/model/DescribeEventBusResult.h>
#include <aws/events/model/DescribeEventSourceResult.h>
#include <aws/events/model/DescribePartnerEventSourceResult.h>
#include <aws/events/model/DescribeReplayResult.h>
#include <aws/events/model/DescribeRuleResult.h>
#include <aws/events/model/ListApiDestinationsResult.h>
#include <aws/events/model/ListArchivesResult.h>
#include <aws/events/model/ListConnectionsResult.h>
#include <aws/events/model/ListEventBusesResult.h>
#include <aws/events/model/ListEventSourcesResult.h>
#include <aws/events/model/ListPartnerEventSourceAccountsResult.h>
#include <aws/events/model/ListPartnerEventSourcesResult.h>
#include <aws/events/model/ListReplaysResult.h>
#include <aws/events/model/ListRuleNamesByTargetResult.h>
#include <aws/events/model/ListRulesResult.h>
#include <aws/events/model/ListTagsForResourceResult.h>
#include <aws/events/model/ListTargetsByRuleResult.h>
#include <aws/events/model/PutEventsResult.h>
#include <aws/events/model/PutPartnerEventsResult.h>
#include <aws/events/model/PutRuleResult.h>
#include <aws/events/model/PutTargetsResult.h>
#include <aws/events/model/RemoveTargetsResult.h>
#include <aws/events/model/StartReplayResult.h>
#include <aws/events/model/TagResourceResult.h>
#include <aws/events/model/TestEventPatternResult.h>
#include <aws/events/model/UntagResourceResult.h>
#include <aws/events/model/UpdateApiDestinationResult.h>
#include <aws/events/model/UpdateArchiveResult.h>
#include <aws/events/model/UpdateConnectionResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CloudWatchEventsClient header */

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

  namespace CloudWatchEvents
  {
    using CloudWatchEventsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudWatchEventsEndpointProviderBase = Aws::CloudWatchEvents::Endpoint::CloudWatchEventsEndpointProviderBase;
    using CloudWatchEventsEndpointProvider = Aws::CloudWatchEvents::Endpoint::CloudWatchEventsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudWatchEventsClient header */
      class ActivateEventSourceRequest;
      class CancelReplayRequest;
      class CreateApiDestinationRequest;
      class CreateArchiveRequest;
      class CreateConnectionRequest;
      class CreateEventBusRequest;
      class CreatePartnerEventSourceRequest;
      class DeactivateEventSourceRequest;
      class DeauthorizeConnectionRequest;
      class DeleteApiDestinationRequest;
      class DeleteArchiveRequest;
      class DeleteConnectionRequest;
      class DeleteEventBusRequest;
      class DeletePartnerEventSourceRequest;
      class DeleteRuleRequest;
      class DescribeApiDestinationRequest;
      class DescribeArchiveRequest;
      class DescribeConnectionRequest;
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
      /* End of service model forward declarations required in CloudWatchEventsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> ActivateEventSourceOutcome;
      typedef Aws::Utils::Outcome<CancelReplayResult, CloudWatchEventsError> CancelReplayOutcome;
      typedef Aws::Utils::Outcome<CreateApiDestinationResult, CloudWatchEventsError> CreateApiDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateArchiveResult, CloudWatchEventsError> CreateArchiveOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionResult, CloudWatchEventsError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateEventBusResult, CloudWatchEventsError> CreateEventBusOutcome;
      typedef Aws::Utils::Outcome<CreatePartnerEventSourceResult, CloudWatchEventsError> CreatePartnerEventSourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> DeactivateEventSourceOutcome;
      typedef Aws::Utils::Outcome<DeauthorizeConnectionResult, CloudWatchEventsError> DeauthorizeConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteApiDestinationResult, CloudWatchEventsError> DeleteApiDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteArchiveResult, CloudWatchEventsError> DeleteArchiveOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, CloudWatchEventsError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> DeleteEventBusOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> DeletePartnerEventSourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<DescribeApiDestinationResult, CloudWatchEventsError> DescribeApiDestinationOutcome;
      typedef Aws::Utils::Outcome<DescribeArchiveResult, CloudWatchEventsError> DescribeArchiveOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectionResult, CloudWatchEventsError> DescribeConnectionOutcome;
      typedef Aws::Utils::Outcome<DescribeEventBusResult, CloudWatchEventsError> DescribeEventBusOutcome;
      typedef Aws::Utils::Outcome<DescribeEventSourceResult, CloudWatchEventsError> DescribeEventSourceOutcome;
      typedef Aws::Utils::Outcome<DescribePartnerEventSourceResult, CloudWatchEventsError> DescribePartnerEventSourceOutcome;
      typedef Aws::Utils::Outcome<DescribeReplayResult, CloudWatchEventsError> DescribeReplayOutcome;
      typedef Aws::Utils::Outcome<DescribeRuleResult, CloudWatchEventsError> DescribeRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> DisableRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> EnableRuleOutcome;
      typedef Aws::Utils::Outcome<ListApiDestinationsResult, CloudWatchEventsError> ListApiDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListArchivesResult, CloudWatchEventsError> ListArchivesOutcome;
      typedef Aws::Utils::Outcome<ListConnectionsResult, CloudWatchEventsError> ListConnectionsOutcome;
      typedef Aws::Utils::Outcome<ListEventBusesResult, CloudWatchEventsError> ListEventBusesOutcome;
      typedef Aws::Utils::Outcome<ListEventSourcesResult, CloudWatchEventsError> ListEventSourcesOutcome;
      typedef Aws::Utils::Outcome<ListPartnerEventSourceAccountsResult, CloudWatchEventsError> ListPartnerEventSourceAccountsOutcome;
      typedef Aws::Utils::Outcome<ListPartnerEventSourcesResult, CloudWatchEventsError> ListPartnerEventSourcesOutcome;
      typedef Aws::Utils::Outcome<ListReplaysResult, CloudWatchEventsError> ListReplaysOutcome;
      typedef Aws::Utils::Outcome<ListRuleNamesByTargetResult, CloudWatchEventsError> ListRuleNamesByTargetOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, CloudWatchEventsError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudWatchEventsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTargetsByRuleResult, CloudWatchEventsError> ListTargetsByRuleOutcome;
      typedef Aws::Utils::Outcome<PutEventsResult, CloudWatchEventsError> PutEventsOutcome;
      typedef Aws::Utils::Outcome<PutPartnerEventsResult, CloudWatchEventsError> PutPartnerEventsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> PutPermissionOutcome;
      typedef Aws::Utils::Outcome<PutRuleResult, CloudWatchEventsError> PutRuleOutcome;
      typedef Aws::Utils::Outcome<PutTargetsResult, CloudWatchEventsError> PutTargetsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchEventsError> RemovePermissionOutcome;
      typedef Aws::Utils::Outcome<RemoveTargetsResult, CloudWatchEventsError> RemoveTargetsOutcome;
      typedef Aws::Utils::Outcome<StartReplayResult, CloudWatchEventsError> StartReplayOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CloudWatchEventsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestEventPatternResult, CloudWatchEventsError> TestEventPatternOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CloudWatchEventsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApiDestinationResult, CloudWatchEventsError> UpdateApiDestinationOutcome;
      typedef Aws::Utils::Outcome<UpdateArchiveResult, CloudWatchEventsError> UpdateArchiveOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionResult, CloudWatchEventsError> UpdateConnectionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateEventSourceOutcome> ActivateEventSourceOutcomeCallable;
      typedef std::future<CancelReplayOutcome> CancelReplayOutcomeCallable;
      typedef std::future<CreateApiDestinationOutcome> CreateApiDestinationOutcomeCallable;
      typedef std::future<CreateArchiveOutcome> CreateArchiveOutcomeCallable;
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateEventBusOutcome> CreateEventBusOutcomeCallable;
      typedef std::future<CreatePartnerEventSourceOutcome> CreatePartnerEventSourceOutcomeCallable;
      typedef std::future<DeactivateEventSourceOutcome> DeactivateEventSourceOutcomeCallable;
      typedef std::future<DeauthorizeConnectionOutcome> DeauthorizeConnectionOutcomeCallable;
      typedef std::future<DeleteApiDestinationOutcome> DeleteApiDestinationOutcomeCallable;
      typedef std::future<DeleteArchiveOutcome> DeleteArchiveOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteEventBusOutcome> DeleteEventBusOutcomeCallable;
      typedef std::future<DeletePartnerEventSourceOutcome> DeletePartnerEventSourceOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<DescribeApiDestinationOutcome> DescribeApiDestinationOutcomeCallable;
      typedef std::future<DescribeArchiveOutcome> DescribeArchiveOutcomeCallable;
      typedef std::future<DescribeConnectionOutcome> DescribeConnectionOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudWatchEventsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ActivateEventSourceRequest&, const Model::ActivateEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateEventSourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::CancelReplayRequest&, const Model::CancelReplayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelReplayResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::CreateApiDestinationRequest&, const Model::CreateApiDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::CreateArchiveRequest&, const Model::CreateArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateArchiveResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::CreateEventBusRequest&, const Model::CreateEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventBusResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::CreatePartnerEventSourceRequest&, const Model::CreatePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeactivateEventSourceRequest&, const Model::DeactivateEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateEventSourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeauthorizeConnectionRequest&, const Model::DeauthorizeConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeauthorizeConnectionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeleteApiDestinationRequest&, const Model::DeleteApiDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeleteArchiveRequest&, const Model::DeleteArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteArchiveResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeleteEventBusRequest&, const Model::DeleteEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventBusResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeletePartnerEventSourceRequest&, const Model::DeletePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeApiDestinationRequest&, const Model::DescribeApiDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApiDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeArchiveRequest&, const Model::DescribeArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeArchiveResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeConnectionRequest&, const Model::DescribeConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeEventBusRequest&, const Model::DescribeEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventBusResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeEventSourceRequest&, const Model::DescribeEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribePartnerEventSourceRequest&, const Model::DescribePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeReplayRequest&, const Model::DescribeReplayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplayResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeRuleRequest&, const Model::DescribeRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DisableRuleRequest&, const Model::DisableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::EnableRuleRequest&, const Model::EnableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListApiDestinationsRequest&, const Model::ListApiDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApiDestinationsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListArchivesRequest&, const Model::ListArchivesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArchivesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListEventBusesRequest&, const Model::ListEventBusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventBusesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListEventSourcesRequest&, const Model::ListEventSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventSourcesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListPartnerEventSourceAccountsRequest&, const Model::ListPartnerEventSourceAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnerEventSourceAccountsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListPartnerEventSourcesRequest&, const Model::ListPartnerEventSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnerEventSourcesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListReplaysRequest&, const Model::ListReplaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReplaysResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListRuleNamesByTargetRequest&, const Model::ListRuleNamesByTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleNamesByTargetResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListTargetsByRuleRequest&, const Model::ListTargetsByRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsByRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutPartnerEventsRequest&, const Model::PutPartnerEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPartnerEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutPermissionRequest&, const Model::PutPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutRuleRequest&, const Model::PutRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutTargetsRequest&, const Model::PutTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTargetsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::RemoveTargetsRequest&, const Model::RemoveTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTargetsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::StartReplayRequest&, const Model::StartReplayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplayResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::TestEventPatternRequest&, const Model::TestEventPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestEventPatternResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::UpdateApiDestinationRequest&, const Model::UpdateApiDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::UpdateArchiveRequest&, const Model::UpdateArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateArchiveResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudWatchEvents
} // namespace Aws
