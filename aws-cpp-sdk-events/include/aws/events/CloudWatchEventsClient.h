/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

namespace CloudWatchEvents
{

namespace Model
{
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
} // namespace Model

  class CloudWatchEventsClient;

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

  /**
   * <p>Amazon EventBridge helps you to respond to state changes in your Amazon Web
   * Services resources. When your resources change state, they automatically send
   * events to an event stream. You can create rules that match selected events in
   * the stream and route them to targets to take action. You can also use rules to
   * take action on a predetermined schedule. For example, you can configure rules
   * to:</p> <ul> <li> <p>Automatically invoke an Lambda function to update DNS
   * entries when an event notifies you that Amazon EC2 instance enters the running
   * state.</p> </li> <li> <p>Direct specific API records from CloudTrail to an
   * Amazon Kinesis data stream for detailed analysis of potential security or
   * availability risks.</p> </li> <li> <p>Periodically invoke a built-in target to
   * create a snapshot of an Amazon EBS volume.</p> </li> </ul> <p>For more
   * information about the features of Amazon EventBridge, see the <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide">Amazon
   * EventBridge User Guide</a>.</p>
   */
  class AWS_CLOUDWATCHEVENTS_API CloudWatchEventsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEventsClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudWatchEventsClient();


        /**
         * <p>Activates a partner event source that has been deactivated. Once activated,
         * your matching event bus will start receiving events from the event
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ActivateEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateEventSourceOutcome ActivateEventSource(const Model::ActivateEventSourceRequest& request) const;

        /**
         * A Callable wrapper for ActivateEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateEventSourceOutcomeCallable ActivateEventSourceCallable(const Model::ActivateEventSourceRequest& request) const;

        /**
         * An Async wrapper for ActivateEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateEventSourceAsync(const Model::ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified replay.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CancelReplay">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelReplayOutcome CancelReplay(const Model::CancelReplayRequest& request) const;

        /**
         * A Callable wrapper for CancelReplay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelReplayOutcomeCallable CancelReplayCallable(const Model::CancelReplayRequest& request) const;

        /**
         * An Async wrapper for CancelReplay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelReplayAsync(const Model::CancelReplayRequest& request, const CancelReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an API destination, which is an HTTP invocation endpoint configured
         * as a target for events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateApiDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiDestinationOutcome CreateApiDestination(const Model::CreateApiDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateApiDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApiDestinationOutcomeCallable CreateApiDestinationCallable(const Model::CreateApiDestinationRequest& request) const;

        /**
         * An Async wrapper for CreateApiDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApiDestinationAsync(const Model::CreateApiDestinationRequest& request, const CreateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an archive of events with the specified settings. When you create an
         * archive, incoming events might not immediately start being sent to the archive.
         * Allow a short period of time for changes to take effect. If you do not specify a
         * pattern to filter events sent to the archive, all events are sent to the archive
         * except replayed events. Replayed events are not sent to an
         * archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateArchiveOutcome CreateArchive(const Model::CreateArchiveRequest& request) const;

        /**
         * A Callable wrapper for CreateArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateArchiveOutcomeCallable CreateArchiveCallable(const Model::CreateArchiveRequest& request) const;

        /**
         * An Async wrapper for CreateArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateArchiveAsync(const Model::CreateArchiveRequest& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a connection. A connection defines the authorization type and
         * credentials to use for authorization with an API destination HTTP
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new event bus within your account. This can be a custom event bus
         * which you can use to receive events from your custom applications and services,
         * or it can be a partner event bus which can be matched to a partner event
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventBusOutcome CreateEventBus(const Model::CreateEventBusRequest& request) const;

        /**
         * A Callable wrapper for CreateEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventBusOutcomeCallable CreateEventBusCallable(const Model::CreateEventBusRequest& request) const;

        /**
         * An Async wrapper for CreateEventBus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventBusAsync(const Model::CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Called by an SaaS partner to create a partner event source. This operation is
         * not used by Amazon Web Services customers.</p> <p>Each partner event source can
         * be used by one Amazon Web Services account to create a matching partner event
         * bus in that Amazon Web Services account. A SaaS partner must create one partner
         * event source for each Amazon Web Services account that wants to receive those
         * event types. </p> <p>A partner event source creates events based on resources
         * within the SaaS partner's service or application.</p> <p>An Amazon Web Services
         * account that creates a partner event bus that matches the partner event source
         * can use that event bus to receive events from the partner, and then process them
         * using Amazon Web Services Events rules and targets.</p> <p>Partner event source
         * names follow this format:</p> <p> <code>
         * <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i> </code> </p> <p>
         * <i>partner_name</i> is determined during partner registration and identifies the
         * partner to Amazon Web Services customers. <i>event_namespace</i> is determined
         * by the partner and is a way for the partner to categorize their events.
         * <i>event_name</i> is determined by the partner, and should uniquely identify an
         * event-generating resource within the partner system. The combination of
         * <i>event_namespace</i> and <i>event_name</i> should help Amazon Web Services
         * customers decide whether to create an event bus to receive these
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreatePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartnerEventSourceOutcome CreatePartnerEventSource(const Model::CreatePartnerEventSourceRequest& request) const;

        /**
         * A Callable wrapper for CreatePartnerEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePartnerEventSourceOutcomeCallable CreatePartnerEventSourceCallable(const Model::CreatePartnerEventSourceRequest& request) const;

        /**
         * An Async wrapper for CreatePartnerEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePartnerEventSourceAsync(const Model::CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use this operation to temporarily stop receiving events from the
         * specified partner event source. The matching event bus is not deleted. </p>
         * <p>When you deactivate a partner event source, the source goes into PENDING
         * state. If it remains in PENDING state for more than two weeks, it is
         * deleted.</p> <p>To activate a deactivated partner event source, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_ActivateEventSource.html">ActivateEventSource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeactivateEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateEventSourceOutcome DeactivateEventSource(const Model::DeactivateEventSourceRequest& request) const;

        /**
         * A Callable wrapper for DeactivateEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateEventSourceOutcomeCallable DeactivateEventSourceCallable(const Model::DeactivateEventSourceRequest& request) const;

        /**
         * An Async wrapper for DeactivateEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateEventSourceAsync(const Model::DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes all authorization parameters from the connection. This lets you
         * remove the secret from the connection so you can reuse it without having to
         * create a new connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeauthorizeConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeauthorizeConnectionOutcome DeauthorizeConnection(const Model::DeauthorizeConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeauthorizeConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeauthorizeConnectionOutcomeCallable DeauthorizeConnectionCallable(const Model::DeauthorizeConnectionRequest& request) const;

        /**
         * An Async wrapper for DeauthorizeConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeauthorizeConnectionAsync(const Model::DeauthorizeConnectionRequest& request, const DeauthorizeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified API destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteApiDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiDestinationOutcome DeleteApiDestination(const Model::DeleteApiDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApiDestinationOutcomeCallable DeleteApiDestinationCallable(const Model::DeleteApiDestinationRequest& request) const;

        /**
         * An Async wrapper for DeleteApiDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApiDestinationAsync(const Model::DeleteApiDestinationRequest& request, const DeleteApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArchiveOutcome DeleteArchive(const Model::DeleteArchiveRequest& request) const;

        /**
         * A Callable wrapper for DeleteArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteArchiveOutcomeCallable DeleteArchiveCallable(const Model::DeleteArchiveRequest& request) const;

        /**
         * An Async wrapper for DeleteArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteArchiveAsync(const Model::DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified custom event bus or partner event bus. All rules
         * associated with this event bus need to be deleted. You can't delete your
         * account's default event bus.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventBusOutcome DeleteEventBus(const Model::DeleteEventBusRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventBusOutcomeCallable DeleteEventBusCallable(const Model::DeleteEventBusRequest& request) const;

        /**
         * An Async wrapper for DeleteEventBus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventBusAsync(const Model::DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation is used by SaaS partners to delete a partner event source.
         * This operation is not used by Amazon Web Services customers.</p> <p>When you
         * delete an event source, the status of the corresponding partner event bus in the
         * Amazon Web Services customer account becomes DELETED.</p> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeletePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartnerEventSourceOutcome DeletePartnerEventSource(const Model::DeletePartnerEventSourceRequest& request) const;

        /**
         * A Callable wrapper for DeletePartnerEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePartnerEventSourceOutcomeCallable DeletePartnerEventSourceCallable(const Model::DeletePartnerEventSourceRequest& request) const;

        /**
         * An Async wrapper for DeletePartnerEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePartnerEventSourceAsync(const Model::DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified rule.</p> <p>Before you can delete the rule, you must
         * remove all targets, using <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemoveTargets.html">RemoveTargets</a>.</p>
         * <p>When you delete a rule, incoming events might continue to match to the
         * deleted rule. Allow a short period of time for changes to take effect.</p> <p>If
         * you call delete rule multiple times for the same rule, all calls will succeed.
         * When you call delete rule for a non-existent custom eventbus,
         * <code>ResourceNotFoundException</code> is returned.</p> <p>Managed rules are
         * rules created and managed by another Amazon Web Services service on your behalf.
         * These rules are created by those other Amazon Web Services services to support
         * functionality in those services. You can delete these rules using the
         * <code>Force</code> option, but you should do so only if you are sure the other
         * service is not still using that rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about an API destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeApiDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApiDestinationOutcome DescribeApiDestination(const Model::DescribeApiDestinationRequest& request) const;

        /**
         * A Callable wrapper for DescribeApiDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApiDestinationOutcomeCallable DescribeApiDestinationCallable(const Model::DescribeApiDestinationRequest& request) const;

        /**
         * An Async wrapper for DescribeApiDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApiDestinationAsync(const Model::DescribeApiDestinationRequest& request, const DescribeApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about an archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeArchiveOutcome DescribeArchive(const Model::DescribeArchiveRequest& request) const;

        /**
         * A Callable wrapper for DescribeArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeArchiveOutcomeCallable DescribeArchiveCallable(const Model::DescribeArchiveRequest& request) const;

        /**
         * An Async wrapper for DescribeArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeArchiveAsync(const Model::DescribeArchiveRequest& request, const DescribeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about a connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionOutcome DescribeConnection(const Model::DescribeConnectionRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionOutcomeCallable DescribeConnectionCallable(const Model::DescribeConnectionRequest& request) const;

        /**
         * An Async wrapper for DescribeConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionAsync(const Model::DescribeConnectionRequest& request, const DescribeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays details about an event bus in your account. This can include the
         * external Amazon Web Services accounts that are permitted to write events to your
         * default event bus, and the associated policy. For custom event buses and partner
         * event buses, it displays the name, ARN, policy, state, and creation time.</p>
         * <p> To enable your account to receive events from other accounts on its default
         * event bus, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutPermission.html">PutPermission</a>.</p>
         * <p>For more information about partner event buses, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateEventBus.html">CreateEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventBusOutcome DescribeEventBus(const Model::DescribeEventBusRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventBusOutcomeCallable DescribeEventBusCallable(const Model::DescribeEventBusRequest& request) const;

        /**
         * An Async wrapper for DescribeEventBus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventBusAsync(const Model::DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation lists details about a partner event source that is shared with
         * your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSourceOutcome DescribeEventSource(const Model::DescribeEventSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSourceOutcomeCallable DescribeEventSourceCallable(const Model::DescribeEventSourceRequest& request) const;

        /**
         * An Async wrapper for DescribeEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSourceAsync(const Model::DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An SaaS partner can use this operation to list details about a partner event
         * source that they have created. Amazon Web Services customers do not use this
         * operation. Instead, Amazon Web Services customers can use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_DescribeEventSource.html">DescribeEventSource</a>
         * to see details about a partner event source that is shared with
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePartnerEventSourceOutcome DescribePartnerEventSource(const Model::DescribePartnerEventSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribePartnerEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePartnerEventSourceOutcomeCallable DescribePartnerEventSourceCallable(const Model::DescribePartnerEventSourceRequest& request) const;

        /**
         * An Async wrapper for DescribePartnerEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePartnerEventSourceAsync(const Model::DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about a replay. Use <code>DescribeReplay</code> to
         * determine the progress of a running replay. A replay processes events to replay
         * based on the time in the event, and replays them using 1 minute intervals. If
         * you use <code>StartReplay</code> and specify an <code>EventStartTime</code> and
         * an <code>EventEndTime</code> that covers a 20 minute time range, the events are
         * replayed from the first minute of that 20 minute range first. Then the events
         * from the second minute are replayed. You can use <code>DescribeReplay</code> to
         * determine the progress of a replay. The value returned for
         * <code>EventLastReplayedTime</code> indicates the time within the specified time
         * range associated with the last event replayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeReplay">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplayOutcome DescribeReplay(const Model::DescribeReplayRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplayOutcomeCallable DescribeReplayCallable(const Model::DescribeReplayRequest& request) const;

        /**
         * An Async wrapper for DescribeReplay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplayAsync(const Model::DescribeReplayRequest& request, const DescribeReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified rule.</p> <p>DescribeRule does not list the targets
         * of a rule. To see the targets associated with a rule, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_ListTargetsByRule.html">ListTargetsByRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request) const;

        /**
         * An Async wrapper for DescribeRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified rule. A disabled rule won't match any events, and
         * won't self-trigger if it has a schedule expression.</p> <p>When you disable a
         * rule, incoming events might continue to match to the disabled rule. Allow a
         * short period of time for changes to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DisableRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableRuleOutcome DisableRule(const Model::DisableRuleRequest& request) const;

        /**
         * A Callable wrapper for DisableRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableRuleOutcomeCallable DisableRuleCallable(const Model::DisableRuleRequest& request) const;

        /**
         * An Async wrapper for DisableRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableRuleAsync(const Model::DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified rule. If the rule does not exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Allow a short period of time for changes
         * to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EnableRule">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableRuleOutcome EnableRule(const Model::EnableRuleRequest& request) const;

        /**
         * A Callable wrapper for EnableRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableRuleOutcomeCallable EnableRuleCallable(const Model::EnableRuleRequest& request) const;

        /**
         * An Async wrapper for EnableRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableRuleAsync(const Model::EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of API destination in the account in the current
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListApiDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApiDestinationsOutcome ListApiDestinations(const Model::ListApiDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListApiDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApiDestinationsOutcomeCallable ListApiDestinationsCallable(const Model::ListApiDestinationsRequest& request) const;

        /**
         * An Async wrapper for ListApiDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApiDestinationsAsync(const Model::ListApiDestinationsRequest& request, const ListApiDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your archives. You can either list all the archives or you can provide
         * a prefix to match to the archive names. Filter parameters are
         * exclusive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListArchives">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArchivesOutcome ListArchives(const Model::ListArchivesRequest& request) const;

        /**
         * A Callable wrapper for ListArchives that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListArchivesOutcomeCallable ListArchivesCallable(const Model::ListArchivesRequest& request) const;

        /**
         * An Async wrapper for ListArchives that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListArchivesAsync(const Model::ListArchivesRequest& request, const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of connections from the account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const Model::ListConnectionsRequest& request) const;

        /**
         * An Async wrapper for ListConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectionsAsync(const Model::ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the event buses in your account, including the default event bus,
         * custom event buses, and partner event buses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListEventBuses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventBusesOutcome ListEventBuses(const Model::ListEventBusesRequest& request) const;

        /**
         * A Callable wrapper for ListEventBuses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventBusesOutcomeCallable ListEventBusesCallable(const Model::ListEventBusesRequest& request) const;

        /**
         * An Async wrapper for ListEventBuses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventBusesAsync(const Model::ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use this to see all the partner event sources that have been shared
         * with your Amazon Web Services account. For more information about partner event
         * sources, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateEventBus.html">CreateEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListEventSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventSourcesOutcome ListEventSources(const Model::ListEventSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListEventSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventSourcesOutcomeCallable ListEventSourcesCallable(const Model::ListEventSourcesRequest& request) const;

        /**
         * An Async wrapper for ListEventSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventSourcesAsync(const Model::ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An SaaS partner can use this operation to display the Amazon Web Services
         * account ID that a particular partner event source name is associated with. This
         * operation is not used by Amazon Web Services customers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListPartnerEventSourceAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerEventSourceAccountsOutcome ListPartnerEventSourceAccounts(const Model::ListPartnerEventSourceAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListPartnerEventSourceAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPartnerEventSourceAccountsOutcomeCallable ListPartnerEventSourceAccountsCallable(const Model::ListPartnerEventSourceAccountsRequest& request) const;

        /**
         * An Async wrapper for ListPartnerEventSourceAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPartnerEventSourceAccountsAsync(const Model::ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An SaaS partner can use this operation to list all the partner event source
         * names that they have created. This operation is not used by Amazon Web Services
         * customers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListPartnerEventSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerEventSourcesOutcome ListPartnerEventSources(const Model::ListPartnerEventSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListPartnerEventSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPartnerEventSourcesOutcomeCallable ListPartnerEventSourcesCallable(const Model::ListPartnerEventSourcesRequest& request) const;

        /**
         * An Async wrapper for ListPartnerEventSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPartnerEventSourcesAsync(const Model::ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your replays. You can either list all the replays or you can provide a
         * prefix to match to the replay names. Filter parameters are
         * exclusive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListReplays">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReplaysOutcome ListReplays(const Model::ListReplaysRequest& request) const;

        /**
         * A Callable wrapper for ListReplays that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReplaysOutcomeCallable ListReplaysCallable(const Model::ListReplaysRequest& request) const;

        /**
         * An Async wrapper for ListReplays that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReplaysAsync(const Model::ListReplaysRequest& request, const ListReplaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the rules for the specified target. You can see which of the rules in
         * Amazon EventBridge can invoke a specific target in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRuleNamesByTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleNamesByTargetOutcome ListRuleNamesByTarget(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * A Callable wrapper for ListRuleNamesByTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleNamesByTargetOutcomeCallable ListRuleNamesByTargetCallable(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * An Async wrapper for ListRuleNamesByTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleNamesByTargetAsync(const Model::ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your Amazon EventBridge rules. You can either list all the rules or you
         * can provide a prefix to match to the rule names.</p> <p>ListRules does not list
         * the targets of a rule. To see the targets associated with a rule, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_ListTargetsByRule.html">ListTargetsByRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request) const;

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with an EventBridge resource. In EventBridge,
         * rules and event buses can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the targets assigned to the specified rule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTargetsByRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsByRuleOutcome ListTargetsByRule(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * A Callable wrapper for ListTargetsByRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsByRuleOutcomeCallable ListTargetsByRuleCallable(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * An Async wrapper for ListTargetsByRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsByRuleAsync(const Model::ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends custom events to Amazon EventBridge so that they can be matched to
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * A Callable wrapper for PutEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * An Async wrapper for PutEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is used by SaaS partners to write events to a customer's partner event
         * bus. Amazon Web Services customers do not use this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutPartnerEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPartnerEventsOutcome PutPartnerEvents(const Model::PutPartnerEventsRequest& request) const;

        /**
         * A Callable wrapper for PutPartnerEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPartnerEventsOutcomeCallable PutPartnerEventsCallable(const Model::PutPartnerEventsRequest& request) const;

        /**
         * An Async wrapper for PutPartnerEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPartnerEventsAsync(const Model::PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Running <code>PutPermission</code> permits the specified Amazon Web Services
         * account or Amazon Web Services organization to put events to the specified
         * <i>event bus</i>. Amazon EventBridge (CloudWatch Events) rules in your account
         * are triggered by these events arriving to an event bus in your account. </p>
         * <p>For another account to send events to your account, that external account
         * must have an EventBridge rule with your account's event bus as a target.</p>
         * <p>To enable multiple Amazon Web Services accounts to put events to your event
         * bus, run <code>PutPermission</code> once for each of these accounts. Or, if all
         * the accounts are members of the same Amazon Web Services organization, you can
         * run <code>PutPermission</code> once specifying <code>Principal</code> as "*" and
         * specifying the Amazon Web Services organization ID in <code>Condition</code>, to
         * grant permissions to all accounts in that organization.</p> <p>If you grant
         * permissions using an organization, then accounts in that organization must
         * specify a <code>RoleArn</code> with proper permissions when they use
         * <code>PutTarget</code> to add your account's event bus as a target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between Amazon Web Services Accounts</a> in the <i>Amazon
         * EventBridge User Guide</i>.</p> <p>The permission policy on the event bus cannot
         * exceed 10 KB in size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionOutcome PutPermission(const Model::PutPermissionRequest& request) const;

        /**
         * A Callable wrapper for PutPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionOutcomeCallable PutPermissionCallable(const Model::PutPermissionRequest& request) const;

        /**
         * An Async wrapper for PutPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionAsync(const Model::PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the specified rule. Rules are enabled by default, or based
         * on value of the state. You can disable a rule using <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_DisableRule.html">DisableRule</a>.</p>
         * <p>A single rule watches for events from a single event bus. Events generated by
         * Amazon Web Services services go to your account's default event bus. Events
         * generated by SaaS partner services or applications go to the matching partner
         * event bus. If you have custom applications or services, you can specify whether
         * their events go to your default event bus or a custom event bus that you have
         * created. For more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateEventBus.html">CreateEventBus</a>.</p>
         * <p>If you are updating an existing rule, the rule is replaced with what you
         * specify in this <code>PutRule</code> command. If you omit arguments in
         * <code>PutRule</code>, the old values for those arguments are not kept. Instead,
         * they are replaced with null values.</p> <p>When you create or update a rule,
         * incoming events might not immediately start matching to new or updated rules.
         * Allow a short period of time for changes to take effect.</p> <p>A rule must
         * contain at least an EventPattern or ScheduleExpression. Rules with EventPatterns
         * are triggered when a matching event is observed. Rules with ScheduleExpressions
         * self-trigger based on the given schedule. A rule can have both an EventPattern
         * and a ScheduleExpression, in which case the rule triggers on matching events as
         * well as on a schedule.</p> <p>When you initially create a rule, you can
         * optionally assign one or more tags to the rule. Tags can help you organize and
         * categorize your resources. You can also use them to scope user permissions, by
         * granting a user permission to access or change only rules with certain tag
         * values. To use the <code>PutRule</code> operation and assign tags, you must have
         * both the <code>events:PutRule</code> and <code>events:TagResource</code>
         * permissions.</p> <p>If you are updating an existing rule, any tags you specify
         * in the <code>PutRule</code> operation are ignored. To update the tags of an
         * existing rule, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_TagResource.html">TagResource</a>
         * and <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p>
         * <p>Most services in Amazon Web Services treat : or / as the same character in
         * Amazon Resource Names (ARNs). However, EventBridge uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event you want to
         * match.</p> <p>In EventBridge, it is possible to create rules that lead to
         * infinite loops, where a rule is fired repeatedly. For example, a rule might
         * detect that ACLs have changed on an S3 bucket, and trigger software to change
         * them to the desired state. If the rule is not written carefully, the subsequent
         * change to the ACLs fires the rule again, creating an infinite loop.</p> <p>To
         * prevent this, write the rules so that the triggered actions do not re-fire the
         * same rule. For example, your rule could fire only if ACLs are found to be in a
         * bad state, instead of after any change. </p> <p>An infinite loop can quickly
         * cause higher than expected charges. We recommend that you use budgeting, which
         * alerts you when charges exceed your specified limit. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing
         * Your Costs with Budgets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutRule">AWS API
         * Reference</a></p>
         */
        virtual Model::PutRuleOutcome PutRule(const Model::PutRuleRequest& request) const;

        /**
         * A Callable wrapper for PutRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRuleOutcomeCallable PutRuleCallable(const Model::PutRuleRequest& request) const;

        /**
         * An Async wrapper for PutRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRuleAsync(const Model::PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they are already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered.</p> <p>You can configure the following as
         * targets for Events:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-api-destinations.html">API
         * destination</a> </p> </li> <li> <p>Amazon API Gateway REST API endpoints</p>
         * </li> <li> <p>API Gateway</p> </li> <li> <p>Batch job queue</p> </li> <li>
         * <p>CloudWatch Logs group</p> </li> <li> <p>CodeBuild project</p> </li> <li>
         * <p>CodePipeline</p> </li> <li> <p>Amazon EC2 <code>CreateSnapshot</code> API
         * call</p> </li> <li> <p>Amazon EC2 <code>RebootInstances</code> API call</p>
         * </li> <li> <p>Amazon EC2 <code>StopInstances</code> API call</p> </li> <li>
         * <p>Amazon EC2 <code>TerminateInstances</code> API call</p> </li> <li> <p>Amazon
         * ECS tasks</p> </li> <li> <p>Event bus in a different Amazon Web Services account
         * or Region.</p> <p>You can use an event bus in the US East (N. Virginia)
         * us-east-1, US West (Oregon) us-west-2, or Europe (Ireland) eu-west-1 Regions as
         * a target for a rule.</p> </li> <li> <p>Firehose delivery stream (Kinesis Data
         * Firehose)</p> </li> <li> <p>Inspector assessment template (Amazon Inspector)</p>
         * </li> <li> <p>Kinesis stream (Kinesis Data Stream)</p> </li> <li> <p>Lambda
         * function</p> </li> <li> <p>Redshift clusters (Data API statement execution)</p>
         * </li> <li> <p>Amazon SNS topic</p> </li> <li> <p>Amazon SQS queues (includes
         * FIFO queues</p> </li> <li> <p>SSM Automation</p> </li> <li> <p>SSM OpsItem</p>
         * </li> <li> <p>SSM Run Command</p> </li> <li> <p>Step Functions state
         * machines</p> </li> </ul> <p>Creating rules with built-in targets is supported
         * only in the Management Console. The built-in targets are <code>EC2
         * CreateSnapshot API call</code>, <code>EC2 RebootInstances API call</code>,
         * <code>EC2 StopInstances API call</code>, and <code>EC2 TerminateInstances API
         * call</code>. </p> <p>For some target types, <code>PutTargets</code> provides
         * target-specific parameters. If the target is a Kinesis data stream, you can
         * optionally specify which shard the event goes to by using the
         * <code>KinesisParameters</code> argument. To invoke a command on multiple EC2
         * instances with one rule, you can use the <code>RunCommandParameters</code>
         * field.</p> <p>To be able to make API calls against the resources that you own,
         * Amazon EventBridge needs the appropriate permissions. For Lambda and Amazon SNS
         * resources, EventBridge relies on resource-based policies. For EC2 instances,
         * Kinesis Data Streams, Step Functions state machines and API Gateway REST APIs,
         * EventBridge relies on IAM roles that you specify in the <code>RoleARN</code>
         * argument in <code>PutTargets</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/auth-and-access-control-eventbridge.html">Authentication
         * and Access Control</a> in the <i>Amazon EventBridge User Guide</i>.</p> <p>If
         * another Amazon Web Services account is in the same region and has granted you
         * permission (using <code>PutPermission</code>), you can send events to that
         * account. Set that account's event bus as a target of the rules in your account.
         * To send the matched events to the other account, specify that account's event
         * bus as the <code>Arn</code> value when you run <code>PutTargets</code>. If your
         * account sends events to another account, your account is charged for each sent
         * event. Each event sent to another account is charged as a custom event. The
         * account receiving the event is not charged. For more information, see <a
         * href="http://aws.amazon.com/eventbridge/pricing/">Amazon EventBridge
         * Pricing</a>.</p>  <p> <code>Input</code>, <code>InputPath</code>, and
         * <code>InputTransformer</code> are not available with <code>PutTarget</code> if
         * the target is an event bus of a different Amazon Web Services account.</p>
         *  <p>If you are setting the event bus of another account as the target,
         * and that account granted permission to your account through an organization
         * instead of directly by the account ID, then you must specify a
         * <code>RoleArn</code> with proper permissions in the <code>Target</code>
         * structure. For more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between Amazon Web Services Accounts</a> in the <i>Amazon
         * EventBridge User Guide</i>.</p> <p>For more information about enabling
         * cross-account events, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutPermission.html">PutPermission</a>.</p>
         * <p> <b>Input</b>, <b>InputPath</b>, and <b>InputTransformer</b> are mutually
         * exclusive and optional parameters of a target. When a rule is triggered due to a
         * matched event:</p> <ul> <li> <p>If none of the following arguments are specified
         * for a target, then the entire event is passed to the target in JSON format
         * (unless the target is Amazon EC2 Run Command or Amazon ECS task, in which case
         * nothing from the event is passed to the target).</p> </li> <li> <p>If
         * <b>Input</b> is specified in the form of valid JSON, then the matched event is
         * overridden with this constant.</p> </li> <li> <p>If <b>InputPath</b> is
         * specified in the form of JSONPath (for example, <code>$.detail</code>), then
         * only the part of the event specified in the path is passed to the target (for
         * example, only the detail part of the event is passed).</p> </li> <li> <p>If
         * <b>InputTransformer</b> is specified, then one or more specified JSONPaths are
         * extracted from the event and used as values in a template that you specify as
         * the input to the target.</p> </li> </ul> <p>When you specify
         * <code>InputPath</code> or <code>InputTransformer</code>, you must use JSON dot
         * notation, not bracket notation.</p> <p>When you add targets to a rule and the
         * associated rule triggers soon after, new or updated targets might not be
         * immediately invoked. Allow a short period of time for changes to take
         * effect.</p> <p>This action can partially fail if too many requests are made at
         * the same time. If that happens, <code>FailedEntryCount</code> is non-zero in the
         * response and each entry in <code>FailedEntries</code> provides the ID of the
         * failed target and the error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTargetsOutcome PutTargets(const Model::PutTargetsRequest& request) const;

        /**
         * A Callable wrapper for PutTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutTargetsOutcomeCallable PutTargetsCallable(const Model::PutTargetsRequest& request) const;

        /**
         * An Async wrapper for PutTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutTargetsAsync(const Model::PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes the permission of another Amazon Web Services account to be able to
         * put events to the specified event bus. Specify the account to revoke by the
         * <code>StatementId</code> value that you associated with the account when you
         * granted it permission with <code>PutPermission</code>. You can find the
         * <code>StatementId</code> by using <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_DescribeEventBus.html">DescribeEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * A Callable wrapper for RemovePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * An Async wrapper for RemovePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified targets from the specified rule. When the rule is
         * triggered, those targets are no longer be invoked.</p> <p>When you remove a
         * target, when the associated rule triggers, removed targets might continue to be
         * invoked. Allow a short period of time for changes to take effect.</p> <p>This
         * action can partially fail if too many requests are made at the same time. If
         * that happens, <code>FailedEntryCount</code> is non-zero in the response and each
         * entry in <code>FailedEntries</code> provides the ID of the failed target and the
         * error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemoveTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTargetsOutcome RemoveTargets(const Model::RemoveTargetsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTargetsOutcomeCallable RemoveTargetsCallable(const Model::RemoveTargetsRequest& request) const;

        /**
         * An Async wrapper for RemoveTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTargetsAsync(const Model::RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified replay. Events are not necessarily replayed in the exact
         * same order that they were added to the archive. A replay processes events to
         * replay based on the time in the event, and replays them using 1 minute
         * intervals. If you specify an <code>EventStartTime</code> and an
         * <code>EventEndTime</code> that covers a 20 minute time range, the events are
         * replayed from the first minute of that 20 minute range first. Then the events
         * from the second minute are replayed. You can use <code>DescribeReplay</code> to
         * determine the progress of a replay. The value returned for
         * <code>EventLastReplayedTime</code> indicates the time within the specified time
         * range associated with the last event replayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/StartReplay">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplayOutcome StartReplay(const Model::StartReplayRequest& request) const;

        /**
         * A Callable wrapper for StartReplay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReplayOutcomeCallable StartReplayCallable(const Model::StartReplayRequest& request) const;

        /**
         * An Async wrapper for StartReplay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReplayAsync(const Model::StartReplayRequest& request, const StartReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified EventBridge
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions by granting a user permission to access or
         * change only resources with certain tag values. In EventBridge, rules and event
         * buses can be tagged.</p> <p>Tags don't have any semantic meaning to Amazon Web
         * Services and are interpreted strictly as strings of characters.</p> <p>You can
         * use the <code>TagResource</code> action with a resource that already has tags.
         * If you specify a new tag key, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests whether the specified event pattern matches the provided event.</p>
         * <p>Most services in Amazon Web Services treat : or / as the same character in
         * Amazon Resource Names (ARNs). However, EventBridge uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event you want to
         * match.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TestEventPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::TestEventPatternOutcome TestEventPattern(const Model::TestEventPatternRequest& request) const;

        /**
         * A Callable wrapper for TestEventPattern that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestEventPatternOutcomeCallable TestEventPatternCallable(const Model::TestEventPatternRequest& request) const;

        /**
         * An Async wrapper for TestEventPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestEventPatternAsync(const Model::TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified EventBridge resource. In Amazon
         * EventBridge (CloudWatch Events), rules and event buses can be
         * tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an API destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateApiDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiDestinationOutcome UpdateApiDestination(const Model::UpdateApiDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApiDestinationOutcomeCallable UpdateApiDestinationCallable(const Model::UpdateApiDestinationRequest& request) const;

        /**
         * An Async wrapper for UpdateApiDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApiDestinationAsync(const Model::UpdateApiDestinationRequest& request, const UpdateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateArchiveOutcome UpdateArchive(const Model::UpdateArchiveRequest& request) const;

        /**
         * A Callable wrapper for UpdateArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateArchiveOutcomeCallable UpdateArchiveCallable(const Model::UpdateArchiveRequest& request) const;

        /**
         * An Async wrapper for UpdateArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateArchiveAsync(const Model::UpdateArchiveRequest& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates settings for a connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const Model::UpdateConnectionRequest& request) const;

        /**
         * An Async wrapper for UpdateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectionAsync(const Model::UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatchEvents
} // namespace Aws
