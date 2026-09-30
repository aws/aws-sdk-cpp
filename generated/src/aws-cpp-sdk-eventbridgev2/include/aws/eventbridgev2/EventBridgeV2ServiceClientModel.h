/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2EndpointProvider.h>
#include <aws/eventbridgev2/EventBridgeV2Errors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in EventBridgeV2Client header */
#include <aws/eventbridgev2/model/CreateEventBusResult.h>
#include <aws/eventbridgev2/model/CreateEventSourceResult.h>
#include <aws/eventbridgev2/model/CreateSubscriberResult.h>
#include <aws/eventbridgev2/model/DeleteEventBusResult.h>
#include <aws/eventbridgev2/model/DeleteEventSourceResult.h>
#include <aws/eventbridgev2/model/DeleteResourcePolicyResult.h>
#include <aws/eventbridgev2/model/DeleteSubscriberResult.h>
#include <aws/eventbridgev2/model/DescribeEventBusResult.h>
#include <aws/eventbridgev2/model/DescribeEventSourceResult.h>
#include <aws/eventbridgev2/model/DescribeSubscriberResult.h>
#include <aws/eventbridgev2/model/GetResourcePolicyResult.h>
#include <aws/eventbridgev2/model/ListEventBusesRequest.h>
#include <aws/eventbridgev2/model/ListEventBusesResult.h>
#include <aws/eventbridgev2/model/ListEventSourcesRequest.h>
#include <aws/eventbridgev2/model/ListEventSourcesResult.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesResult.h>
#include <aws/eventbridgev2/model/ListSubscribersRequest.h>
#include <aws/eventbridgev2/model/ListSubscribersResult.h>
#include <aws/eventbridgev2/model/ListTagsForResourceResult.h>
#include <aws/eventbridgev2/model/PutEventsResult.h>
#include <aws/eventbridgev2/model/PutRawEventsResult.h>
#include <aws/eventbridgev2/model/PutResourcePolicyResult.h>
#include <aws/eventbridgev2/model/RevokeResourceResult.h>
#include <aws/eventbridgev2/model/TagResourceResult.h>
#include <aws/eventbridgev2/model/UntagResourceResult.h>
#include <aws/eventbridgev2/model/UpdateEventBusResult.h>
#include <aws/eventbridgev2/model/UpdateEventSourceResult.h>
#include <aws/eventbridgev2/model/UpdateSubscriberResult.h>
/* End of service model headers required in EventBridgeV2Client header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace EventBridgeV2 {
using EventBridgeV2EndpointProviderBase = Aws::EventBridgeV2::Endpoint::EventBridgeV2EndpointProviderBase;
using EventBridgeV2EndpointProvider = Aws::EventBridgeV2::Endpoint::EventBridgeV2EndpointProvider;

namespace Model {
/* Service model forward declarations required in EventBridgeV2Client header */
class CreateEventBusRequest;
class CreateEventSourceRequest;
class CreateSubscriberRequest;
class DeleteEventBusRequest;
class DeleteEventSourceRequest;
class DeleteResourcePolicyRequest;
class DeleteSubscriberRequest;
class DescribeEventBusRequest;
class DescribeEventSourceRequest;
class DescribeSubscriberRequest;
class GetResourcePolicyRequest;
class ListEventBusesRequest;
class ListEventSourcesRequest;
class ListResourcePoliciesRequest;
class ListSubscribersRequest;
class ListTagsForResourceRequest;
class PutEventsRequest;
class PutRawEventsRequest;
class PutResourcePolicyRequest;
class RevokeResourceRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateEventBusRequest;
class UpdateEventSourceRequest;
class UpdateSubscriberRequest;
/* End of service model forward declarations required in EventBridgeV2Client header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateEventBusResult, EventBridgeV2Error> CreateEventBusOutcome;
typedef Aws::Utils::Outcome<CreateEventSourceResult, EventBridgeV2Error> CreateEventSourceOutcome;
typedef Aws::Utils::Outcome<CreateSubscriberResult, EventBridgeV2Error> CreateSubscriberOutcome;
typedef Aws::Utils::Outcome<DeleteEventBusResult, EventBridgeV2Error> DeleteEventBusOutcome;
typedef Aws::Utils::Outcome<DeleteEventSourceResult, EventBridgeV2Error> DeleteEventSourceOutcome;
typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, EventBridgeV2Error> DeleteResourcePolicyOutcome;
typedef Aws::Utils::Outcome<DeleteSubscriberResult, EventBridgeV2Error> DeleteSubscriberOutcome;
typedef Aws::Utils::Outcome<DescribeEventBusResult, EventBridgeV2Error> DescribeEventBusOutcome;
typedef Aws::Utils::Outcome<DescribeEventSourceResult, EventBridgeV2Error> DescribeEventSourceOutcome;
typedef Aws::Utils::Outcome<DescribeSubscriberResult, EventBridgeV2Error> DescribeSubscriberOutcome;
typedef Aws::Utils::Outcome<GetResourcePolicyResult, EventBridgeV2Error> GetResourcePolicyOutcome;
typedef Aws::Utils::Outcome<ListEventBusesResult, EventBridgeV2Error> ListEventBusesOutcome;
typedef Aws::Utils::Outcome<ListEventSourcesResult, EventBridgeV2Error> ListEventSourcesOutcome;
typedef Aws::Utils::Outcome<ListResourcePoliciesResult, EventBridgeV2Error> ListResourcePoliciesOutcome;
typedef Aws::Utils::Outcome<ListSubscribersResult, EventBridgeV2Error> ListSubscribersOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, EventBridgeV2Error> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<PutEventsResult, EventBridgeV2Error> PutEventsOutcome;
typedef Aws::Utils::Outcome<PutRawEventsResult, EventBridgeV2Error> PutRawEventsOutcome;
typedef Aws::Utils::Outcome<PutResourcePolicyResult, EventBridgeV2Error> PutResourcePolicyOutcome;
typedef Aws::Utils::Outcome<RevokeResourceResult, EventBridgeV2Error> RevokeResourceOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, EventBridgeV2Error> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, EventBridgeV2Error> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateEventBusResult, EventBridgeV2Error> UpdateEventBusOutcome;
typedef Aws::Utils::Outcome<UpdateEventSourceResult, EventBridgeV2Error> UpdateEventSourceOutcome;
typedef Aws::Utils::Outcome<UpdateSubscriberResult, EventBridgeV2Error> UpdateSubscriberOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateEventBusOutcome> CreateEventBusOutcomeCallable;
typedef std::future<CreateEventSourceOutcome> CreateEventSourceOutcomeCallable;
typedef std::future<CreateSubscriberOutcome> CreateSubscriberOutcomeCallable;
typedef std::future<DeleteEventBusOutcome> DeleteEventBusOutcomeCallable;
typedef std::future<DeleteEventSourceOutcome> DeleteEventSourceOutcomeCallable;
typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
typedef std::future<DeleteSubscriberOutcome> DeleteSubscriberOutcomeCallable;
typedef std::future<DescribeEventBusOutcome> DescribeEventBusOutcomeCallable;
typedef std::future<DescribeEventSourceOutcome> DescribeEventSourceOutcomeCallable;
typedef std::future<DescribeSubscriberOutcome> DescribeSubscriberOutcomeCallable;
typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
typedef std::future<ListEventBusesOutcome> ListEventBusesOutcomeCallable;
typedef std::future<ListEventSourcesOutcome> ListEventSourcesOutcomeCallable;
typedef std::future<ListResourcePoliciesOutcome> ListResourcePoliciesOutcomeCallable;
typedef std::future<ListSubscribersOutcome> ListSubscribersOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
typedef std::future<PutRawEventsOutcome> PutRawEventsOutcomeCallable;
typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
typedef std::future<RevokeResourceOutcome> RevokeResourceOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateEventBusOutcome> UpdateEventBusOutcomeCallable;
typedef std::future<UpdateEventSourceOutcome> UpdateEventSourceOutcomeCallable;
typedef std::future<UpdateSubscriberOutcome> UpdateSubscriberOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class EventBridgeV2Client;

/* Service model async handlers definitions */
typedef std::function<void(const EventBridgeV2Client*, const Model::CreateEventBusRequest&, const Model::CreateEventBusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEventBusResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::CreateEventSourceRequest&, const Model::CreateEventSourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEventSourceResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::CreateSubscriberRequest&, const Model::CreateSubscriberOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSubscriberResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::DeleteEventBusRequest&, const Model::DeleteEventBusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEventBusResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::DeleteEventSourceRequest&, const Model::DeleteEventSourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEventSourceResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteResourcePolicyResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::DeleteSubscriberRequest&, const Model::DeleteSubscriberOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteSubscriberResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::DescribeEventBusRequest&, const Model::DescribeEventBusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEventBusResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::DescribeEventSourceRequest&, const Model::DescribeEventSourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeEventSourceResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::DescribeSubscriberRequest&, const Model::DescribeSubscriberOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeSubscriberResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourcePolicyResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::ListEventBusesRequest&, const Model::ListEventBusesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEventBusesResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::ListEventSourcesRequest&, const Model::ListEventSourcesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEventSourcesResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::ListResourcePoliciesRequest&, const Model::ListResourcePoliciesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListResourcePoliciesResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::ListSubscribersRequest&, const Model::ListSubscribersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSubscribersResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutEventsResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::PutRawEventsRequest&, const Model::PutRawEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutRawEventsResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutResourcePolicyResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::RevokeResourceRequest&, const Model::RevokeResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RevokeResourceResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::UpdateEventBusRequest&, const Model::UpdateEventBusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateEventBusResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::UpdateEventSourceRequest&, const Model::UpdateEventSourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateEventSourceResponseReceivedHandler;
typedef std::function<void(const EventBridgeV2Client*, const Model::UpdateSubscriberRequest&, const Model::UpdateSubscriberOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateSubscriberResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace EventBridgeV2
}  // namespace Aws
