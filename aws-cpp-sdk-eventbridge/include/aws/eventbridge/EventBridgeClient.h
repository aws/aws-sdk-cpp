/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eventbridge/model/CreateEventBusResult.h>
#include <aws/eventbridge/model/CreatePartnerEventSourceResult.h>
#include <aws/eventbridge/model/DescribeEventBusResult.h>
#include <aws/eventbridge/model/DescribeEventSourceResult.h>
#include <aws/eventbridge/model/DescribePartnerEventSourceResult.h>
#include <aws/eventbridge/model/DescribeRuleResult.h>
#include <aws/eventbridge/model/ListEventBusesResult.h>
#include <aws/eventbridge/model/ListEventSourcesResult.h>
#include <aws/eventbridge/model/ListPartnerEventSourceAccountsResult.h>
#include <aws/eventbridge/model/ListPartnerEventSourcesResult.h>
#include <aws/eventbridge/model/ListRuleNamesByTargetResult.h>
#include <aws/eventbridge/model/ListRulesResult.h>
#include <aws/eventbridge/model/ListTagsForResourceResult.h>
#include <aws/eventbridge/model/ListTargetsByRuleResult.h>
#include <aws/eventbridge/model/PutEventsResult.h>
#include <aws/eventbridge/model/PutPartnerEventsResult.h>
#include <aws/eventbridge/model/PutRuleResult.h>
#include <aws/eventbridge/model/PutTargetsResult.h>
#include <aws/eventbridge/model/RemoveTargetsResult.h>
#include <aws/eventbridge/model/TagResourceResult.h>
#include <aws/eventbridge/model/TestEventPatternResult.h>
#include <aws/eventbridge/model/UntagResourceResult.h>
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

namespace EventBridge
{

namespace Model
{
        class ActivateEventSourceRequest;
        class CreateEventBusRequest;
        class CreatePartnerEventSourceRequest;
        class DeactivateEventSourceRequest;
        class DeleteEventBusRequest;
        class DeletePartnerEventSourceRequest;
        class DeleteRuleRequest;
        class DescribeEventBusRequest;
        class DescribeEventSourceRequest;
        class DescribePartnerEventSourceRequest;
        class DescribeRuleRequest;
        class DisableRuleRequest;
        class EnableRuleRequest;
        class ListEventBusesRequest;
        class ListEventSourcesRequest;
        class ListPartnerEventSourceAccountsRequest;
        class ListPartnerEventSourcesRequest;
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
        class TagResourceRequest;
        class TestEventPatternRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> ActivateEventSourceOutcome;
        typedef Aws::Utils::Outcome<CreateEventBusResult, Aws::Client::AWSError<EventBridgeErrors>> CreateEventBusOutcome;
        typedef Aws::Utils::Outcome<CreatePartnerEventSourceResult, Aws::Client::AWSError<EventBridgeErrors>> CreatePartnerEventSourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> DeactivateEventSourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> DeleteEventBusOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> DeletePartnerEventSourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> DeleteRuleOutcome;
        typedef Aws::Utils::Outcome<DescribeEventBusResult, Aws::Client::AWSError<EventBridgeErrors>> DescribeEventBusOutcome;
        typedef Aws::Utils::Outcome<DescribeEventSourceResult, Aws::Client::AWSError<EventBridgeErrors>> DescribeEventSourceOutcome;
        typedef Aws::Utils::Outcome<DescribePartnerEventSourceResult, Aws::Client::AWSError<EventBridgeErrors>> DescribePartnerEventSourceOutcome;
        typedef Aws::Utils::Outcome<DescribeRuleResult, Aws::Client::AWSError<EventBridgeErrors>> DescribeRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> DisableRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> EnableRuleOutcome;
        typedef Aws::Utils::Outcome<ListEventBusesResult, Aws::Client::AWSError<EventBridgeErrors>> ListEventBusesOutcome;
        typedef Aws::Utils::Outcome<ListEventSourcesResult, Aws::Client::AWSError<EventBridgeErrors>> ListEventSourcesOutcome;
        typedef Aws::Utils::Outcome<ListPartnerEventSourceAccountsResult, Aws::Client::AWSError<EventBridgeErrors>> ListPartnerEventSourceAccountsOutcome;
        typedef Aws::Utils::Outcome<ListPartnerEventSourcesResult, Aws::Client::AWSError<EventBridgeErrors>> ListPartnerEventSourcesOutcome;
        typedef Aws::Utils::Outcome<ListRuleNamesByTargetResult, Aws::Client::AWSError<EventBridgeErrors>> ListRuleNamesByTargetOutcome;
        typedef Aws::Utils::Outcome<ListRulesResult, Aws::Client::AWSError<EventBridgeErrors>> ListRulesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<EventBridgeErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTargetsByRuleResult, Aws::Client::AWSError<EventBridgeErrors>> ListTargetsByRuleOutcome;
        typedef Aws::Utils::Outcome<PutEventsResult, Aws::Client::AWSError<EventBridgeErrors>> PutEventsOutcome;
        typedef Aws::Utils::Outcome<PutPartnerEventsResult, Aws::Client::AWSError<EventBridgeErrors>> PutPartnerEventsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> PutPermissionOutcome;
        typedef Aws::Utils::Outcome<PutRuleResult, Aws::Client::AWSError<EventBridgeErrors>> PutRuleOutcome;
        typedef Aws::Utils::Outcome<PutTargetsResult, Aws::Client::AWSError<EventBridgeErrors>> PutTargetsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EventBridgeErrors>> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<RemoveTargetsResult, Aws::Client::AWSError<EventBridgeErrors>> RemoveTargetsOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<EventBridgeErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestEventPatternResult, Aws::Client::AWSError<EventBridgeErrors>> TestEventPatternOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<EventBridgeErrors>> UntagResourceOutcome;

        typedef std::future<ActivateEventSourceOutcome> ActivateEventSourceOutcomeCallable;
        typedef std::future<CreateEventBusOutcome> CreateEventBusOutcomeCallable;
        typedef std::future<CreatePartnerEventSourceOutcome> CreatePartnerEventSourceOutcomeCallable;
        typedef std::future<DeactivateEventSourceOutcome> DeactivateEventSourceOutcomeCallable;
        typedef std::future<DeleteEventBusOutcome> DeleteEventBusOutcomeCallable;
        typedef std::future<DeletePartnerEventSourceOutcome> DeletePartnerEventSourceOutcomeCallable;
        typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
        typedef std::future<DescribeEventBusOutcome> DescribeEventBusOutcomeCallable;
        typedef std::future<DescribeEventSourceOutcome> DescribeEventSourceOutcomeCallable;
        typedef std::future<DescribePartnerEventSourceOutcome> DescribePartnerEventSourceOutcomeCallable;
        typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
        typedef std::future<DisableRuleOutcome> DisableRuleOutcomeCallable;
        typedef std::future<EnableRuleOutcome> EnableRuleOutcomeCallable;
        typedef std::future<ListEventBusesOutcome> ListEventBusesOutcomeCallable;
        typedef std::future<ListEventSourcesOutcome> ListEventSourcesOutcomeCallable;
        typedef std::future<ListPartnerEventSourceAccountsOutcome> ListPartnerEventSourceAccountsOutcomeCallable;
        typedef std::future<ListPartnerEventSourcesOutcome> ListPartnerEventSourcesOutcomeCallable;
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
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestEventPatternOutcome> TestEventPatternOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class EventBridgeClient;

    typedef std::function<void(const EventBridgeClient*, const Model::ActivateEventSourceRequest&, const Model::ActivateEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CreateEventBusRequest&, const Model::CreateEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventBusResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::CreatePartnerEventSourceRequest&, const Model::CreatePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeactivateEventSourceRequest&, const Model::DeactivateEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeleteEventBusRequest&, const Model::DeleteEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventBusResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeletePartnerEventSourceRequest&, const Model::DeletePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeEventBusRequest&, const Model::DescribeEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventBusResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeEventSourceRequest&, const Model::DescribeEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribePartnerEventSourceRequest&, const Model::DescribePartnerEventSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePartnerEventSourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DescribeRuleRequest&, const Model::DescribeRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::DisableRuleRequest&, const Model::DisableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::EnableRuleRequest&, const Model::EnableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRuleResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListEventBusesRequest&, const Model::ListEventBusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventBusesResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListEventSourcesRequest&, const Model::ListEventSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventSourcesResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListPartnerEventSourceAccountsRequest&, const Model::ListPartnerEventSourceAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnerEventSourceAccountsResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::ListPartnerEventSourcesRequest&, const Model::ListPartnerEventSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnerEventSourcesResponseReceivedHandler;
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
    typedef std::function<void(const EventBridgeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::TestEventPatternRequest&, const Model::TestEventPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestEventPatternResponseReceivedHandler;
    typedef std::function<void(const EventBridgeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>Amazon EventBridge helps you to respond to state changes in your AWS
   * resources. When your resources change state, they automatically send events into
   * an event stream. You can create rules that match selected events in the stream
   * and route them to targets to take action. You can also use rules to take action
   * on a predetermined schedule. For example, you can configure rules to:</p> <ul>
   * <li> <p>Automatically invoke an AWS Lambda function to update DNS entries when
   * an event notifies you that Amazon EC2 instance enters the running state</p>
   * </li> <li> <p>Direct specific API records from AWS CloudTrail to an Amazon
   * Kinesis data stream for detailed analysis of potential security or availability
   * risks</p> </li> <li> <p>Periodically invoke a built-in target to create a
   * snapshot of an Amazon EBS volume</p> </li> </ul> <p>For more information about
   * the features of Amazon EventBridge, see the <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/">Amazon
   * EventBridge User Guide</a>.</p>
   */
  class AWS_EVENTBRIDGE_API EventBridgeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EventBridgeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EventBridgeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EventBridgeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~EventBridgeClient();

        inline virtual const char* GetServiceClientName() const override { return "EventBridge"; }


        /**
         * <p>Activates a partner event source that has been deactivated. Once activated,
         * your matching event bus will start receiving events from the event source.</p>
         * <note> <p>This operation is performed by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ActivateEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateEventSourceOutcome ActivateEventSource(const Model::ActivateEventSourceRequest& request) const;

        /**
         * <p>Activates a partner event source that has been deactivated. Once activated,
         * your matching event bus will start receiving events from the event source.</p>
         * <note> <p>This operation is performed by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ActivateEventSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateEventSourceOutcomeCallable ActivateEventSourceCallable(const Model::ActivateEventSourceRequest& request) const;

        /**
         * <p>Activates a partner event source that has been deactivated. Once activated,
         * your matching event bus will start receiving events from the event source.</p>
         * <note> <p>This operation is performed by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ActivateEventSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateEventSourceAsync(const Model::ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new event bus within your account. This can be a custom event bus
         * which you can use to receive events from your own custom applications and
         * services, or it can be a partner event bus which can be matched to a partner
         * event source.</p> <note> <p>This operation is used by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreateEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventBusOutcome CreateEventBus(const Model::CreateEventBusRequest& request) const;

        /**
         * <p>Creates a new event bus within your account. This can be a custom event bus
         * which you can use to receive events from your own custom applications and
         * services, or it can be a partner event bus which can be matched to a partner
         * event source.</p> <note> <p>This operation is used by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreateEventBus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventBusOutcomeCallable CreateEventBusCallable(const Model::CreateEventBusRequest& request) const;

        /**
         * <p>Creates a new event bus within your account. This can be a custom event bus
         * which you can use to receive events from your own custom applications and
         * services, or it can be a partner event bus which can be matched to a partner
         * event source.</p> <note> <p>This operation is used by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreateEventBus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventBusAsync(const Model::CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Called by an SaaS partner to create a partner event source.</p> <note>
         * <p>This operation is not used by AWS customers.</p> </note> <p>Each partner
         * event source can be used by one AWS account to create a matching partner event
         * bus in that AWS account. A SaaS partner must create one partner event source for
         * each AWS account that wants to receive those event types. </p> <p>A partner
         * event source creates events based on resources in the SaaS partner's service or
         * application.</p> <p>An AWS account that creates a partner event bus that matches
         * the partner event source can use that event bus to receive events from the
         * partner, and then process them using AWS Events rules and targets.</p>
         * <p>Partner event source names follow this format:</p> <p>
         * <code>aws.partner/<i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
         * </code> </p> <ul> <li> <p> <i>partner_name</i> is determined during partner
         * registration and identifies the partner to AWS customers.</p> </li> <li> <p>For
         * <i>event_namespace</i>, we recommend that partners use a string that identifies
         * the AWS customer within the partner's system. This should not be the customer's
         * AWS account ID.</p> </li> <li> <p> <i>event_name</i> is determined by the
         * partner, and should uniquely identify an event-generating resource within the
         * partner system. This should help AWS customers decide whether to create an event
         * bus to receive these events.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreatePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartnerEventSourceOutcome CreatePartnerEventSource(const Model::CreatePartnerEventSourceRequest& request) const;

        /**
         * <p>Called by an SaaS partner to create a partner event source.</p> <note>
         * <p>This operation is not used by AWS customers.</p> </note> <p>Each partner
         * event source can be used by one AWS account to create a matching partner event
         * bus in that AWS account. A SaaS partner must create one partner event source for
         * each AWS account that wants to receive those event types. </p> <p>A partner
         * event source creates events based on resources in the SaaS partner's service or
         * application.</p> <p>An AWS account that creates a partner event bus that matches
         * the partner event source can use that event bus to receive events from the
         * partner, and then process them using AWS Events rules and targets.</p>
         * <p>Partner event source names follow this format:</p> <p>
         * <code>aws.partner/<i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
         * </code> </p> <ul> <li> <p> <i>partner_name</i> is determined during partner
         * registration and identifies the partner to AWS customers.</p> </li> <li> <p>For
         * <i>event_namespace</i>, we recommend that partners use a string that identifies
         * the AWS customer within the partner's system. This should not be the customer's
         * AWS account ID.</p> </li> <li> <p> <i>event_name</i> is determined by the
         * partner, and should uniquely identify an event-generating resource within the
         * partner system. This should help AWS customers decide whether to create an event
         * bus to receive these events.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreatePartnerEventSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePartnerEventSourceOutcomeCallable CreatePartnerEventSourceCallable(const Model::CreatePartnerEventSourceRequest& request) const;

        /**
         * <p>Called by an SaaS partner to create a partner event source.</p> <note>
         * <p>This operation is not used by AWS customers.</p> </note> <p>Each partner
         * event source can be used by one AWS account to create a matching partner event
         * bus in that AWS account. A SaaS partner must create one partner event source for
         * each AWS account that wants to receive those event types. </p> <p>A partner
         * event source creates events based on resources in the SaaS partner's service or
         * application.</p> <p>An AWS account that creates a partner event bus that matches
         * the partner event source can use that event bus to receive events from the
         * partner, and then process them using AWS Events rules and targets.</p>
         * <p>Partner event source names follow this format:</p> <p>
         * <code>aws.partner/<i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i>
         * </code> </p> <ul> <li> <p> <i>partner_name</i> is determined during partner
         * registration and identifies the partner to AWS customers.</p> </li> <li> <p>For
         * <i>event_namespace</i>, we recommend that partners use a string that identifies
         * the AWS customer within the partner's system. This should not be the customer's
         * AWS account ID.</p> </li> <li> <p> <i>event_name</i> is determined by the
         * partner, and should uniquely identify an event-generating resource within the
         * partner system. This should help AWS customers decide whether to create an event
         * bus to receive these events.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreatePartnerEventSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePartnerEventSourceAsync(const Model::CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An AWS customer uses this operation to temporarily stop receiving events from
         * the specified partner event source. The matching event bus isn't deleted. </p>
         * <p>When you deactivate a partner event source, the source goes into
         * <code>PENDING</code> state. If it remains in <code>PENDING</code> state for more
         * than two weeks, it's deleted.</p> <p>To activate a deactivated partner event
         * source, use <a>ActivateEventSource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeactivateEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateEventSourceOutcome DeactivateEventSource(const Model::DeactivateEventSourceRequest& request) const;

        /**
         * <p>An AWS customer uses this operation to temporarily stop receiving events from
         * the specified partner event source. The matching event bus isn't deleted. </p>
         * <p>When you deactivate a partner event source, the source goes into
         * <code>PENDING</code> state. If it remains in <code>PENDING</code> state for more
         * than two weeks, it's deleted.</p> <p>To activate a deactivated partner event
         * source, use <a>ActivateEventSource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeactivateEventSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateEventSourceOutcomeCallable DeactivateEventSourceCallable(const Model::DeactivateEventSourceRequest& request) const;

        /**
         * <p>An AWS customer uses this operation to temporarily stop receiving events from
         * the specified partner event source. The matching event bus isn't deleted. </p>
         * <p>When you deactivate a partner event source, the source goes into
         * <code>PENDING</code> state. If it remains in <code>PENDING</code> state for more
         * than two weeks, it's deleted.</p> <p>To activate a deactivated partner event
         * source, use <a>ActivateEventSource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeactivateEventSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateEventSourceAsync(const Model::DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified custom event bus or partner event bus. All rules
         * associated with this event bus are also deleted. You can't delete your account's
         * default event bus.</p> <note> <p>This operation is performed by AWS customers,
         * not by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeleteEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventBusOutcome DeleteEventBus(const Model::DeleteEventBusRequest& request) const;

        /**
         * <p>Deletes the specified custom event bus or partner event bus. All rules
         * associated with this event bus are also deleted. You can't delete your account's
         * default event bus.</p> <note> <p>This operation is performed by AWS customers,
         * not by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeleteEventBus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventBusOutcomeCallable DeleteEventBusCallable(const Model::DeleteEventBusRequest& request) const;

        /**
         * <p>Deletes the specified custom event bus or partner event bus. All rules
         * associated with this event bus are also deleted. You can't delete your account's
         * default event bus.</p> <note> <p>This operation is performed by AWS customers,
         * not by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeleteEventBus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventBusAsync(const Model::DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation is used by SaaS partners to delete a partner event source. AWS
         * customers don't use this operation.</p> <p>When you delete an event source, the
         * status of the corresponding partner event bus in the AWS customer account
         * becomes <code>DELETED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeletePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartnerEventSourceOutcome DeletePartnerEventSource(const Model::DeletePartnerEventSourceRequest& request) const;

        /**
         * <p>This operation is used by SaaS partners to delete a partner event source. AWS
         * customers don't use this operation.</p> <p>When you delete an event source, the
         * status of the corresponding partner event bus in the AWS customer account
         * becomes <code>DELETED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeletePartnerEventSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePartnerEventSourceOutcomeCallable DeletePartnerEventSourceCallable(const Model::DeletePartnerEventSourceRequest& request) const;

        /**
         * <p>This operation is used by SaaS partners to delete a partner event source. AWS
         * customers don't use this operation.</p> <p>When you delete an event source, the
         * status of the corresponding partner event bus in the AWS customer account
         * becomes <code>DELETED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeletePartnerEventSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePartnerEventSourceAsync(const Model::DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified rule.</p> <p>Before you can delete the rule, you must
         * remove all targets, using <a>RemoveTargets</a>.</p> <p>When you delete a rule,
         * incoming events might continue to match to the deleted rule. Allow a short
         * period of time for changes to take effect.</p> <p>Managed rules are rules
         * created and managed by another AWS service on your behalf. These rules are
         * created by those other AWS services to support functionality in those services.
         * You can delete these rules using the <code>Force</code> option, but you should
         * do so only if you're sure that the other service isn't still using that
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Deletes the specified rule.</p> <p>Before you can delete the rule, you must
         * remove all targets, using <a>RemoveTargets</a>.</p> <p>When you delete a rule,
         * incoming events might continue to match to the deleted rule. Allow a short
         * period of time for changes to take effect.</p> <p>Managed rules are rules
         * created and managed by another AWS service on your behalf. These rules are
         * created by those other AWS services to support functionality in those services.
         * You can delete these rules using the <code>Force</code> option, but you should
         * do so only if you're sure that the other service isn't still using that
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeleteRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Deletes the specified rule.</p> <p>Before you can delete the rule, you must
         * remove all targets, using <a>RemoveTargets</a>.</p> <p>When you delete a rule,
         * incoming events might continue to match to the deleted rule. Allow a short
         * period of time for changes to take effect.</p> <p>Managed rules are rules
         * created and managed by another AWS service on your behalf. These rules are
         * created by those other AWS services to support functionality in those services.
         * You can delete these rules using the <code>Force</code> option, but you should
         * do so only if you're sure that the other service isn't still using that
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DeleteRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays details about an event bus in your account. This can include the
         * external AWS accounts that are permitted to write events to your default event
         * bus, and the associated policy. For custom event buses and partner event buses,
         * it displays the name, ARN, policy, state, and creation time.</p> <p> To enable
         * your account to receive events from other accounts on its default event bus, use
         * <a>PutPermission</a>.</p> <p>For more information about partner event buses, see
         * <a>CreateEventBus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventBusOutcome DescribeEventBus(const Model::DescribeEventBusRequest& request) const;

        /**
         * <p>Displays details about an event bus in your account. This can include the
         * external AWS accounts that are permitted to write events to your default event
         * bus, and the associated policy. For custom event buses and partner event buses,
         * it displays the name, ARN, policy, state, and creation time.</p> <p> To enable
         * your account to receive events from other accounts on its default event bus, use
         * <a>PutPermission</a>.</p> <p>For more information about partner event buses, see
         * <a>CreateEventBus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeEventBus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventBusOutcomeCallable DescribeEventBusCallable(const Model::DescribeEventBusRequest& request) const;

        /**
         * <p>Displays details about an event bus in your account. This can include the
         * external AWS accounts that are permitted to write events to your default event
         * bus, and the associated policy. For custom event buses and partner event buses,
         * it displays the name, ARN, policy, state, and creation time.</p> <p> To enable
         * your account to receive events from other accounts on its default event bus, use
         * <a>PutPermission</a>.</p> <p>For more information about partner event buses, see
         * <a>CreateEventBus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeEventBus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventBusAsync(const Model::DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation lists details about a partner event source that is shared with
         * your account.</p> <note> <p>This operation is run by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSourceOutcome DescribeEventSource(const Model::DescribeEventSourceRequest& request) const;

        /**
         * <p>This operation lists details about a partner event source that is shared with
         * your account.</p> <note> <p>This operation is run by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeEventSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSourceOutcomeCallable DescribeEventSourceCallable(const Model::DescribeEventSourceRequest& request) const;

        /**
         * <p>This operation lists details about a partner event source that is shared with
         * your account.</p> <note> <p>This operation is run by AWS customers, not by SaaS
         * partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeEventSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSourceAsync(const Model::DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An SaaS partner can use this operation to list details about a partner event
         * source that they have created.</p> <note> <p>AWS customers do not use this
         * operation. Instead, AWS customers can use <a>DescribeEventSource</a> to see
         * details about a partner event source that is shared with them.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePartnerEventSourceOutcome DescribePartnerEventSource(const Model::DescribePartnerEventSourceRequest& request) const;

        /**
         * <p>An SaaS partner can use this operation to list details about a partner event
         * source that they have created.</p> <note> <p>AWS customers do not use this
         * operation. Instead, AWS customers can use <a>DescribeEventSource</a> to see
         * details about a partner event source that is shared with them.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribePartnerEventSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePartnerEventSourceOutcomeCallable DescribePartnerEventSourceCallable(const Model::DescribePartnerEventSourceRequest& request) const;

        /**
         * <p>An SaaS partner can use this operation to list details about a partner event
         * source that they have created.</p> <note> <p>AWS customers do not use this
         * operation. Instead, AWS customers can use <a>DescribeEventSource</a> to see
         * details about a partner event source that is shared with them.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribePartnerEventSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePartnerEventSourceAsync(const Model::DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified rule.</p> <p> <code>DescribeRule</code> doesn't list
         * the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest& request) const;

        /**
         * <p>Describes the specified rule.</p> <p> <code>DescribeRule</code> doesn't list
         * the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request) const;

        /**
         * <p>Describes the specified rule.</p> <p> <code>DescribeRule</code> doesn't list
         * the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified rule. A disabled rule won't match any events and won't
         * self-trigger if it has a schedule expression.</p> <p>When you disable a rule,
         * incoming events might continue to match to the disabled rule. Allow a short
         * period of time for changes to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DisableRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableRuleOutcome DisableRule(const Model::DisableRuleRequest& request) const;

        /**
         * <p>Disables the specified rule. A disabled rule won't match any events and won't
         * self-trigger if it has a schedule expression.</p> <p>When you disable a rule,
         * incoming events might continue to match to the disabled rule. Allow a short
         * period of time for changes to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DisableRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableRuleOutcomeCallable DisableRuleCallable(const Model::DisableRuleRequest& request) const;

        /**
         * <p>Disables the specified rule. A disabled rule won't match any events and won't
         * self-trigger if it has a schedule expression.</p> <p>When you disable a rule,
         * incoming events might continue to match to the disabled rule. Allow a short
         * period of time for changes to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DisableRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableRuleAsync(const Model::DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified rule. If the rule doesn't exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Allow a short period of time for changes
         * to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/EnableRule">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableRuleOutcome EnableRule(const Model::EnableRuleRequest& request) const;

        /**
         * <p>Enables the specified rule. If the rule doesn't exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Allow a short period of time for changes
         * to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/EnableRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableRuleOutcomeCallable EnableRuleCallable(const Model::EnableRuleRequest& request) const;

        /**
         * <p>Enables the specified rule. If the rule doesn't exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Allow a short period of time for changes
         * to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/EnableRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableRuleAsync(const Model::EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the event buses in your account, including the default event bus,
         * custom event buses, and partner event buses.</p> <note> <p>This operation is run
         * by AWS customers, not by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListEventBuses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventBusesOutcome ListEventBuses(const Model::ListEventBusesRequest& request) const;

        /**
         * <p>Lists all the event buses in your account, including the default event bus,
         * custom event buses, and partner event buses.</p> <note> <p>This operation is run
         * by AWS customers, not by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListEventBuses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventBusesOutcomeCallable ListEventBusesCallable(const Model::ListEventBusesRequest& request) const;

        /**
         * <p>Lists all the event buses in your account, including the default event bus,
         * custom event buses, and partner event buses.</p> <note> <p>This operation is run
         * by AWS customers, not by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListEventBuses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventBusesAsync(const Model::ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use this to see all the partner event sources that have been shared
         * with your AWS account. For more information about partner event sources, see
         * <a>CreateEventBus</a>.</p> <note> <p>This operation is run by AWS customers, not
         * by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListEventSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventSourcesOutcome ListEventSources(const Model::ListEventSourcesRequest& request) const;

        /**
         * <p>You can use this to see all the partner event sources that have been shared
         * with your AWS account. For more information about partner event sources, see
         * <a>CreateEventBus</a>.</p> <note> <p>This operation is run by AWS customers, not
         * by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListEventSources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventSourcesOutcomeCallable ListEventSourcesCallable(const Model::ListEventSourcesRequest& request) const;

        /**
         * <p>You can use this to see all the partner event sources that have been shared
         * with your AWS account. For more information about partner event sources, see
         * <a>CreateEventBus</a>.</p> <note> <p>This operation is run by AWS customers, not
         * by SaaS partners.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListEventSources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventSourcesAsync(const Model::ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An SaaS partner can use this operation to display the AWS account ID that a
         * particular partner event source name is associated with.</p> <note> <p>This
         * operation is used by SaaS partners, not by AWS customers.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListPartnerEventSourceAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerEventSourceAccountsOutcome ListPartnerEventSourceAccounts(const Model::ListPartnerEventSourceAccountsRequest& request) const;

        /**
         * <p>An SaaS partner can use this operation to display the AWS account ID that a
         * particular partner event source name is associated with.</p> <note> <p>This
         * operation is used by SaaS partners, not by AWS customers.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListPartnerEventSourceAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPartnerEventSourceAccountsOutcomeCallable ListPartnerEventSourceAccountsCallable(const Model::ListPartnerEventSourceAccountsRequest& request) const;

        /**
         * <p>An SaaS partner can use this operation to display the AWS account ID that a
         * particular partner event source name is associated with.</p> <note> <p>This
         * operation is used by SaaS partners, not by AWS customers.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListPartnerEventSourceAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPartnerEventSourceAccountsAsync(const Model::ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An SaaS partner can use this operation to list all the partner event source
         * names that they have created.</p> <note> <p>This operation is not used by AWS
         * customers.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListPartnerEventSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerEventSourcesOutcome ListPartnerEventSources(const Model::ListPartnerEventSourcesRequest& request) const;

        /**
         * <p>An SaaS partner can use this operation to list all the partner event source
         * names that they have created.</p> <note> <p>This operation is not used by AWS
         * customers.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListPartnerEventSources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPartnerEventSourcesOutcomeCallable ListPartnerEventSourcesCallable(const Model::ListPartnerEventSourcesRequest& request) const;

        /**
         * <p>An SaaS partner can use this operation to list all the partner event source
         * names that they have created.</p> <note> <p>This operation is not used by AWS
         * customers.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListPartnerEventSources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPartnerEventSourcesAsync(const Model::ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the rules for the specified target. You can see which rules can invoke
         * a specific target in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListRuleNamesByTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleNamesByTargetOutcome ListRuleNamesByTarget(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * <p>Lists the rules for the specified target. You can see which rules can invoke
         * a specific target in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListRuleNamesByTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleNamesByTargetOutcomeCallable ListRuleNamesByTargetCallable(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * <p>Lists the rules for the specified target. You can see which rules can invoke
         * a specific target in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListRuleNamesByTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleNamesByTargetAsync(const Model::ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your EventBridge rules. You can either list all the rules or provide a
         * prefix to match to the rule names.</p> <p> <code>ListRules</code> doesn't list
         * the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * <p>Lists your EventBridge rules. You can either list all the rules or provide a
         * prefix to match to the rule names.</p> <p> <code>ListRules</code> doesn't list
         * the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request) const;

        /**
         * <p>Lists your EventBridge rules. You can either list all the rules or provide a
         * prefix to match to the rule names.</p> <p> <code>ListRules</code> doesn't list
         * the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with an EventBridge resource. In EventBridge,
         * rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with an EventBridge resource. In EventBridge,
         * rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with an EventBridge resource. In EventBridge,
         * rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the targets assigned to the specified rule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListTargetsByRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsByRuleOutcome ListTargetsByRule(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * <p>Lists the targets assigned to the specified rule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListTargetsByRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsByRuleOutcomeCallable ListTargetsByRuleCallable(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * <p>Lists the targets assigned to the specified rule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ListTargetsByRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsByRuleAsync(const Model::ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends custom events to EventBridge so that they can be matched to rules.
         * These events can be from your custom applications and services.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * <p>Sends custom events to EventBridge so that they can be matched to rules.
         * These events can be from your custom applications and services.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * <p>Sends custom events to EventBridge so that they can be matched to rules.
         * These events can be from your custom applications and services.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is used by SaaS partners to write events to a customer's partner event
         * bus.</p> <note> <p>AWS customers do not use this operation. Instead, AWS
         * customers can use <a>PutEvents</a> to write custom events from their own
         * applications to an event bus.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutPartnerEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPartnerEventsOutcome PutPartnerEvents(const Model::PutPartnerEventsRequest& request) const;

        /**
         * <p>This is used by SaaS partners to write events to a customer's partner event
         * bus.</p> <note> <p>AWS customers do not use this operation. Instead, AWS
         * customers can use <a>PutEvents</a> to write custom events from their own
         * applications to an event bus.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutPartnerEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPartnerEventsOutcomeCallable PutPartnerEventsCallable(const Model::PutPartnerEventsRequest& request) const;

        /**
         * <p>This is used by SaaS partners to write events to a customer's partner event
         * bus.</p> <note> <p>AWS customers do not use this operation. Instead, AWS
         * customers can use <a>PutEvents</a> to write custom events from their own
         * applications to an event bus.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutPartnerEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPartnerEventsAsync(const Model::PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Running <code>PutPermission</code> permits the specified AWS account or AWS
         * organization to put events to the specified <i>event bus</i>. Rules in your
         * account are triggered by these events arriving to an event bus in your account.
         * </p> <p>For another account to send events to your account, that external
         * account must have a rule with your account's event bus as a target.</p> <p>To
         * enable multiple AWS accounts to put events to an event bus, run
         * <code>PutPermission</code> once for each of these accounts. Or, if all the
         * accounts are members of the same AWS organization, you can run
         * <code>PutPermission</code> once specifying <code>Principal</code> as "*" and
         * specifying the AWS organization ID in <code>Condition</code>, to grant
         * permissions to all accounts in that organization.</p> <p>If you grant
         * permissions using an organization, then accounts in that organization must
         * specify a <code>RoleArn</code> with proper permissions when they use
         * <code>PutTarget</code> to add your account's event bus as a target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
         * Guide</i>.</p> <p>The permission policy on an event bus can't exceed 10 KB in
         * size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionOutcome PutPermission(const Model::PutPermissionRequest& request) const;

        /**
         * <p>Running <code>PutPermission</code> permits the specified AWS account or AWS
         * organization to put events to the specified <i>event bus</i>. Rules in your
         * account are triggered by these events arriving to an event bus in your account.
         * </p> <p>For another account to send events to your account, that external
         * account must have a rule with your account's event bus as a target.</p> <p>To
         * enable multiple AWS accounts to put events to an event bus, run
         * <code>PutPermission</code> once for each of these accounts. Or, if all the
         * accounts are members of the same AWS organization, you can run
         * <code>PutPermission</code> once specifying <code>Principal</code> as "*" and
         * specifying the AWS organization ID in <code>Condition</code>, to grant
         * permissions to all accounts in that organization.</p> <p>If you grant
         * permissions using an organization, then accounts in that organization must
         * specify a <code>RoleArn</code> with proper permissions when they use
         * <code>PutTarget</code> to add your account's event bus as a target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
         * Guide</i>.</p> <p>The permission policy on an event bus can't exceed 10 KB in
         * size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionOutcomeCallable PutPermissionCallable(const Model::PutPermissionRequest& request) const;

        /**
         * <p>Running <code>PutPermission</code> permits the specified AWS account or AWS
         * organization to put events to the specified <i>event bus</i>. Rules in your
         * account are triggered by these events arriving to an event bus in your account.
         * </p> <p>For another account to send events to your account, that external
         * account must have a rule with your account's event bus as a target.</p> <p>To
         * enable multiple AWS accounts to put events to an event bus, run
         * <code>PutPermission</code> once for each of these accounts. Or, if all the
         * accounts are members of the same AWS organization, you can run
         * <code>PutPermission</code> once specifying <code>Principal</code> as "*" and
         * specifying the AWS organization ID in <code>Condition</code>, to grant
         * permissions to all accounts in that organization.</p> <p>If you grant
         * permissions using an organization, then accounts in that organization must
         * specify a <code>RoleArn</code> with proper permissions when they use
         * <code>PutTarget</code> to add your account's event bus as a target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
         * Guide</i>.</p> <p>The permission policy on an event bus can't exceed 10 KB in
         * size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionAsync(const Model::PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the specified rule. Rules are enabled by default or based
         * on value of the state. You can disable a rule using <a>DisableRule</a>.</p> <p>A
         * single rule watches for events from a single event bus. Events generated by AWS
         * services go to your account's default event bus. Events generated by SaaS
         * partner services or applications go to the matching partner event bus. If you
         * have custom applications or services, you can specify whether their events go to
         * your default event bus or a custom event bus that you have created. For more
         * information, see <a>CreateEventBus</a>.</p> <p>If you're updating an existing
         * rule, the rule is replaced with what you specify in this <code>PutRule</code>
         * command. If you omit arguments in <code>PutRule</code>, the old values for those
         * arguments aren't kept. Instead, they're replaced with null values.</p> <p>When
         * you create or update a rule, incoming events might not immediately start
         * matching to new or updated rules. Allow a short period of time for changes to
         * take effect.</p> <p>A rule must contain at least an <code>EventPattern</code> or
         * <code>ScheduleExpression</code>. Rules with <code>EventPatterns</code> are
         * triggered when a matching event is observed. Rules with
         * <code>ScheduleExpressions</code> self-trigger based on the given schedule. A
         * rule can have both an <code>EventPattern</code> and a
         * <code>ScheduleExpression</code>, in which case the rule triggers on matching
         * events as well as on a schedule.</p> <p>When you initially create a rule, you
         * can optionally assign one or more tags to the rule. Tags can help you organize
         * and categorize your resources. You can also use them to scope user permissions,
         * by granting a user permission to access or change only rules with certain tag
         * values. To use the <code>PutRule</code> operation and assign tags, you must have
         * both the <code>events:PutRule</code> and <code>events:TagResource</code>
         * permissions.</p> <p>If you are updating an existing rule, any tags you specify
         * in the <code>PutRule</code> operation are ignored. To update the tags of an
         * existing rule, use <a>TagResource</a> and <a>UntagResource</a>.</p> <p>Most
         * services in AWS treat <code>:</code> or <code>/</code> as the same character in
         * Amazon Resource Names (ARNs). However, EventBridge uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event that you want to
         * match.</p> <p>In EventBridge, you could create rules that lead to infinite
         * loops, where a rule is fired repeatedly. For example, a rule might detect that
         * ACLs have changed on an S3 bucket, and trigger software to change them to the
         * desired state. If you don't write the rule carefully, the subsequent change to
         * the ACLs fires the rule again, creating an infinite loop.</p> <p>To prevent
         * this, write the rules so that the triggered actions don't refire the same rule.
         * For example, your rule could fire only if ACLs are found to be in a bad state,
         * instead of after any change. </p> <p>An infinite loop can quickly cause higher
         * than expected charges. We recommend that you use budgeting, which alerts you
         * when charges exceed your specified limit. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing
         * Your Costs with Budgets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRuleOutcome PutRule(const Model::PutRuleRequest& request) const;

        /**
         * <p>Creates or updates the specified rule. Rules are enabled by default or based
         * on value of the state. You can disable a rule using <a>DisableRule</a>.</p> <p>A
         * single rule watches for events from a single event bus. Events generated by AWS
         * services go to your account's default event bus. Events generated by SaaS
         * partner services or applications go to the matching partner event bus. If you
         * have custom applications or services, you can specify whether their events go to
         * your default event bus or a custom event bus that you have created. For more
         * information, see <a>CreateEventBus</a>.</p> <p>If you're updating an existing
         * rule, the rule is replaced with what you specify in this <code>PutRule</code>
         * command. If you omit arguments in <code>PutRule</code>, the old values for those
         * arguments aren't kept. Instead, they're replaced with null values.</p> <p>When
         * you create or update a rule, incoming events might not immediately start
         * matching to new or updated rules. Allow a short period of time for changes to
         * take effect.</p> <p>A rule must contain at least an <code>EventPattern</code> or
         * <code>ScheduleExpression</code>. Rules with <code>EventPatterns</code> are
         * triggered when a matching event is observed. Rules with
         * <code>ScheduleExpressions</code> self-trigger based on the given schedule. A
         * rule can have both an <code>EventPattern</code> and a
         * <code>ScheduleExpression</code>, in which case the rule triggers on matching
         * events as well as on a schedule.</p> <p>When you initially create a rule, you
         * can optionally assign one or more tags to the rule. Tags can help you organize
         * and categorize your resources. You can also use them to scope user permissions,
         * by granting a user permission to access or change only rules with certain tag
         * values. To use the <code>PutRule</code> operation and assign tags, you must have
         * both the <code>events:PutRule</code> and <code>events:TagResource</code>
         * permissions.</p> <p>If you are updating an existing rule, any tags you specify
         * in the <code>PutRule</code> operation are ignored. To update the tags of an
         * existing rule, use <a>TagResource</a> and <a>UntagResource</a>.</p> <p>Most
         * services in AWS treat <code>:</code> or <code>/</code> as the same character in
         * Amazon Resource Names (ARNs). However, EventBridge uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event that you want to
         * match.</p> <p>In EventBridge, you could create rules that lead to infinite
         * loops, where a rule is fired repeatedly. For example, a rule might detect that
         * ACLs have changed on an S3 bucket, and trigger software to change them to the
         * desired state. If you don't write the rule carefully, the subsequent change to
         * the ACLs fires the rule again, creating an infinite loop.</p> <p>To prevent
         * this, write the rules so that the triggered actions don't refire the same rule.
         * For example, your rule could fire only if ACLs are found to be in a bad state,
         * instead of after any change. </p> <p>An infinite loop can quickly cause higher
         * than expected charges. We recommend that you use budgeting, which alerts you
         * when charges exceed your specified limit. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing
         * Your Costs with Budgets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRuleOutcomeCallable PutRuleCallable(const Model::PutRuleRequest& request) const;

        /**
         * <p>Creates or updates the specified rule. Rules are enabled by default or based
         * on value of the state. You can disable a rule using <a>DisableRule</a>.</p> <p>A
         * single rule watches for events from a single event bus. Events generated by AWS
         * services go to your account's default event bus. Events generated by SaaS
         * partner services or applications go to the matching partner event bus. If you
         * have custom applications or services, you can specify whether their events go to
         * your default event bus or a custom event bus that you have created. For more
         * information, see <a>CreateEventBus</a>.</p> <p>If you're updating an existing
         * rule, the rule is replaced with what you specify in this <code>PutRule</code>
         * command. If you omit arguments in <code>PutRule</code>, the old values for those
         * arguments aren't kept. Instead, they're replaced with null values.</p> <p>When
         * you create or update a rule, incoming events might not immediately start
         * matching to new or updated rules. Allow a short period of time for changes to
         * take effect.</p> <p>A rule must contain at least an <code>EventPattern</code> or
         * <code>ScheduleExpression</code>. Rules with <code>EventPatterns</code> are
         * triggered when a matching event is observed. Rules with
         * <code>ScheduleExpressions</code> self-trigger based on the given schedule. A
         * rule can have both an <code>EventPattern</code> and a
         * <code>ScheduleExpression</code>, in which case the rule triggers on matching
         * events as well as on a schedule.</p> <p>When you initially create a rule, you
         * can optionally assign one or more tags to the rule. Tags can help you organize
         * and categorize your resources. You can also use them to scope user permissions,
         * by granting a user permission to access or change only rules with certain tag
         * values. To use the <code>PutRule</code> operation and assign tags, you must have
         * both the <code>events:PutRule</code> and <code>events:TagResource</code>
         * permissions.</p> <p>If you are updating an existing rule, any tags you specify
         * in the <code>PutRule</code> operation are ignored. To update the tags of an
         * existing rule, use <a>TagResource</a> and <a>UntagResource</a>.</p> <p>Most
         * services in AWS treat <code>:</code> or <code>/</code> as the same character in
         * Amazon Resource Names (ARNs). However, EventBridge uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event that you want to
         * match.</p> <p>In EventBridge, you could create rules that lead to infinite
         * loops, where a rule is fired repeatedly. For example, a rule might detect that
         * ACLs have changed on an S3 bucket, and trigger software to change them to the
         * desired state. If you don't write the rule carefully, the subsequent change to
         * the ACLs fires the rule again, creating an infinite loop.</p> <p>To prevent
         * this, write the rules so that the triggered actions don't refire the same rule.
         * For example, your rule could fire only if ACLs are found to be in a bad state,
         * instead of after any change. </p> <p>An infinite loop can quickly cause higher
         * than expected charges. We recommend that you use budgeting, which alerts you
         * when charges exceed your specified limit. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing
         * Your Costs with Budgets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRuleAsync(const Model::PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they're already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered.</p> <p>You can configure the following as
         * targets in EventBridge:</p> <ul> <li> <p>EC2 instances</p> </li> <li> <p>SSM Run
         * Command</p> </li> <li> <p>SSM Automation</p> </li> <li> <p>AWS Lambda
         * functions</p> </li> <li> <p>Data streams in Amazon Kinesis Data Streams</p>
         * </li> <li> <p>Data delivery streams in Amazon Kinesis Data Firehose</p> </li>
         * <li> <p>Amazon ECS tasks</p> </li> <li> <p>AWS Step Functions state machines</p>
         * </li> <li> <p>AWS Batch jobs</p> </li> <li> <p>AWS CodeBuild projects</p> </li>
         * <li> <p>Pipelines in AWS CodePipeline</p> </li> <li> <p>Amazon Inspector
         * assessment templates</p> </li> <li> <p>Amazon SNS topics</p> </li> <li>
         * <p>Amazon SQS queues, including FIFO queues</p> </li> <li> <p>The default event
         * bus of another AWS account</p> </li> </ul> <p>Creating rules with built-in
         * targets is supported only on the AWS Management Console. The built-in targets
         * are <code>EC2 CreateSnapshot API call</code>, <code>EC2 RebootInstances API
         * call</code>, <code>EC2 StopInstances API call</code>, and <code>EC2
         * TerminateInstances API call</code>. </p> <p>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is a
         * Kinesis data stream, you can optionally specify which shard the event goes to by
         * using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon EventBridge needs the appropriate
         * permissions. For AWS Lambda and Amazon SNS resources, EventBridge relies on
         * resource-based policies. For EC2 instances, Kinesis data streams, and AWS Step
         * Functions state machines, EventBridge relies on IAM roles that you specify in
         * the <code>RoleARN</code> argument in <code>PutTargets</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/auth-and-access-control-eventbridge.html">Authentication
         * and Access Control</a> in the <i>Amazon EventBridge User Guide</i>.</p> <p>If
         * another AWS account is in the same Region and has granted you permission (using
         * <code>PutPermission</code>), you can send events to that account. Set that
         * account's event bus as a target of the rules in your account. To send the
         * matched events to the other account, specify that account's event bus as the
         * <code>Arn</code> value when you run <code>PutTargets</code>. If your account
         * sends events to another account, your account is charged for each sent event.
         * Each event sent to another account is charged as a custom event. The account
         * receiving the event isn't charged. For more information, see <a
         * href="https://aws.amazon.com/eventbridge/pricing/">Amazon EventBridge
         * Pricing</a>.</p> <p>If you're setting an event bus in another account as the
         * target and that account granted permission to your account through an
         * organization instead of directly by the account ID, you must specify a
         * <code>RoleArn</code> with proper permissions in the <code>Target</code>
         * structure. For more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
         * Guide</i>.</p> <p>For more information about enabling cross-account events, see
         * <a>PutPermission</a>.</p> <p> <code>Input</code>, <code>InputPath</code>, and
         * <code>InputTransformer</code> are mutually exclusive and optional parameters of
         * a target. When a rule is triggered due to a matched event:</p> <ul> <li> <p>If
         * none of the following arguments are specified for a target, the entire event is
         * passed to the target in JSON format (unless the target is Amazon EC2 Run Command
         * or Amazon ECS task, in which case nothing from the event is passed to the
         * target).</p> </li> <li> <p>If <code>Input</code> is specified in the form of
         * valid JSON, then the matched event is overridden with this constant.</p> </li>
         * <li> <p>If <code>InputPath</code> is specified in the form of JSONPath (for
         * example, <code>$.detail</code>), only the part of the event specified in the
         * path is passed to the target (for example, only the detail part of the event is
         * passed).</p> </li> <li> <p>If <code>InputTransformer</code> is specified, one or
         * more specified JSONPaths are extracted from the event and used as values in a
         * template that you specify as the input to the target.</p> </li> </ul> <p>When
         * you specify <code>InputPath</code> or <code>InputTransformer</code>, you must
         * use JSON dot notation, not bracket notation.</p> <p>When you add targets to a
         * rule and the associated rule triggers soon after, new or updated targets might
         * not be immediately invoked. Allow a short period of time for changes to take
         * effect.</p> <p>This action can partially fail if too many requests are made at
         * the same time. If that happens, <code>FailedEntryCount</code> is nonzero in the
         * response, and each entry in <code>FailedEntries</code> provides the ID of the
         * failed target and the error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTargetsOutcome PutTargets(const Model::PutTargetsRequest& request) const;

        /**
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they're already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered.</p> <p>You can configure the following as
         * targets in EventBridge:</p> <ul> <li> <p>EC2 instances</p> </li> <li> <p>SSM Run
         * Command</p> </li> <li> <p>SSM Automation</p> </li> <li> <p>AWS Lambda
         * functions</p> </li> <li> <p>Data streams in Amazon Kinesis Data Streams</p>
         * </li> <li> <p>Data delivery streams in Amazon Kinesis Data Firehose</p> </li>
         * <li> <p>Amazon ECS tasks</p> </li> <li> <p>AWS Step Functions state machines</p>
         * </li> <li> <p>AWS Batch jobs</p> </li> <li> <p>AWS CodeBuild projects</p> </li>
         * <li> <p>Pipelines in AWS CodePipeline</p> </li> <li> <p>Amazon Inspector
         * assessment templates</p> </li> <li> <p>Amazon SNS topics</p> </li> <li>
         * <p>Amazon SQS queues, including FIFO queues</p> </li> <li> <p>The default event
         * bus of another AWS account</p> </li> </ul> <p>Creating rules with built-in
         * targets is supported only on the AWS Management Console. The built-in targets
         * are <code>EC2 CreateSnapshot API call</code>, <code>EC2 RebootInstances API
         * call</code>, <code>EC2 StopInstances API call</code>, and <code>EC2
         * TerminateInstances API call</code>. </p> <p>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is a
         * Kinesis data stream, you can optionally specify which shard the event goes to by
         * using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon EventBridge needs the appropriate
         * permissions. For AWS Lambda and Amazon SNS resources, EventBridge relies on
         * resource-based policies. For EC2 instances, Kinesis data streams, and AWS Step
         * Functions state machines, EventBridge relies on IAM roles that you specify in
         * the <code>RoleARN</code> argument in <code>PutTargets</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/auth-and-access-control-eventbridge.html">Authentication
         * and Access Control</a> in the <i>Amazon EventBridge User Guide</i>.</p> <p>If
         * another AWS account is in the same Region and has granted you permission (using
         * <code>PutPermission</code>), you can send events to that account. Set that
         * account's event bus as a target of the rules in your account. To send the
         * matched events to the other account, specify that account's event bus as the
         * <code>Arn</code> value when you run <code>PutTargets</code>. If your account
         * sends events to another account, your account is charged for each sent event.
         * Each event sent to another account is charged as a custom event. The account
         * receiving the event isn't charged. For more information, see <a
         * href="https://aws.amazon.com/eventbridge/pricing/">Amazon EventBridge
         * Pricing</a>.</p> <p>If you're setting an event bus in another account as the
         * target and that account granted permission to your account through an
         * organization instead of directly by the account ID, you must specify a
         * <code>RoleArn</code> with proper permissions in the <code>Target</code>
         * structure. For more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
         * Guide</i>.</p> <p>For more information about enabling cross-account events, see
         * <a>PutPermission</a>.</p> <p> <code>Input</code>, <code>InputPath</code>, and
         * <code>InputTransformer</code> are mutually exclusive and optional parameters of
         * a target. When a rule is triggered due to a matched event:</p> <ul> <li> <p>If
         * none of the following arguments are specified for a target, the entire event is
         * passed to the target in JSON format (unless the target is Amazon EC2 Run Command
         * or Amazon ECS task, in which case nothing from the event is passed to the
         * target).</p> </li> <li> <p>If <code>Input</code> is specified in the form of
         * valid JSON, then the matched event is overridden with this constant.</p> </li>
         * <li> <p>If <code>InputPath</code> is specified in the form of JSONPath (for
         * example, <code>$.detail</code>), only the part of the event specified in the
         * path is passed to the target (for example, only the detail part of the event is
         * passed).</p> </li> <li> <p>If <code>InputTransformer</code> is specified, one or
         * more specified JSONPaths are extracted from the event and used as values in a
         * template that you specify as the input to the target.</p> </li> </ul> <p>When
         * you specify <code>InputPath</code> or <code>InputTransformer</code>, you must
         * use JSON dot notation, not bracket notation.</p> <p>When you add targets to a
         * rule and the associated rule triggers soon after, new or updated targets might
         * not be immediately invoked. Allow a short period of time for changes to take
         * effect.</p> <p>This action can partially fail if too many requests are made at
         * the same time. If that happens, <code>FailedEntryCount</code> is nonzero in the
         * response, and each entry in <code>FailedEntries</code> provides the ID of the
         * failed target and the error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutTargetsOutcomeCallable PutTargetsCallable(const Model::PutTargetsRequest& request) const;

        /**
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they're already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered.</p> <p>You can configure the following as
         * targets in EventBridge:</p> <ul> <li> <p>EC2 instances</p> </li> <li> <p>SSM Run
         * Command</p> </li> <li> <p>SSM Automation</p> </li> <li> <p>AWS Lambda
         * functions</p> </li> <li> <p>Data streams in Amazon Kinesis Data Streams</p>
         * </li> <li> <p>Data delivery streams in Amazon Kinesis Data Firehose</p> </li>
         * <li> <p>Amazon ECS tasks</p> </li> <li> <p>AWS Step Functions state machines</p>
         * </li> <li> <p>AWS Batch jobs</p> </li> <li> <p>AWS CodeBuild projects</p> </li>
         * <li> <p>Pipelines in AWS CodePipeline</p> </li> <li> <p>Amazon Inspector
         * assessment templates</p> </li> <li> <p>Amazon SNS topics</p> </li> <li>
         * <p>Amazon SQS queues, including FIFO queues</p> </li> <li> <p>The default event
         * bus of another AWS account</p> </li> </ul> <p>Creating rules with built-in
         * targets is supported only on the AWS Management Console. The built-in targets
         * are <code>EC2 CreateSnapshot API call</code>, <code>EC2 RebootInstances API
         * call</code>, <code>EC2 StopInstances API call</code>, and <code>EC2
         * TerminateInstances API call</code>. </p> <p>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is a
         * Kinesis data stream, you can optionally specify which shard the event goes to by
         * using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon EventBridge needs the appropriate
         * permissions. For AWS Lambda and Amazon SNS resources, EventBridge relies on
         * resource-based policies. For EC2 instances, Kinesis data streams, and AWS Step
         * Functions state machines, EventBridge relies on IAM roles that you specify in
         * the <code>RoleARN</code> argument in <code>PutTargets</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/auth-and-access-control-eventbridge.html">Authentication
         * and Access Control</a> in the <i>Amazon EventBridge User Guide</i>.</p> <p>If
         * another AWS account is in the same Region and has granted you permission (using
         * <code>PutPermission</code>), you can send events to that account. Set that
         * account's event bus as a target of the rules in your account. To send the
         * matched events to the other account, specify that account's event bus as the
         * <code>Arn</code> value when you run <code>PutTargets</code>. If your account
         * sends events to another account, your account is charged for each sent event.
         * Each event sent to another account is charged as a custom event. The account
         * receiving the event isn't charged. For more information, see <a
         * href="https://aws.amazon.com/eventbridge/pricing/">Amazon EventBridge
         * Pricing</a>.</p> <p>If you're setting an event bus in another account as the
         * target and that account granted permission to your account through an
         * organization instead of directly by the account ID, you must specify a
         * <code>RoleArn</code> with proper permissions in the <code>Target</code>
         * structure. For more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
         * Guide</i>.</p> <p>For more information about enabling cross-account events, see
         * <a>PutPermission</a>.</p> <p> <code>Input</code>, <code>InputPath</code>, and
         * <code>InputTransformer</code> are mutually exclusive and optional parameters of
         * a target. When a rule is triggered due to a matched event:</p> <ul> <li> <p>If
         * none of the following arguments are specified for a target, the entire event is
         * passed to the target in JSON format (unless the target is Amazon EC2 Run Command
         * or Amazon ECS task, in which case nothing from the event is passed to the
         * target).</p> </li> <li> <p>If <code>Input</code> is specified in the form of
         * valid JSON, then the matched event is overridden with this constant.</p> </li>
         * <li> <p>If <code>InputPath</code> is specified in the form of JSONPath (for
         * example, <code>$.detail</code>), only the part of the event specified in the
         * path is passed to the target (for example, only the detail part of the event is
         * passed).</p> </li> <li> <p>If <code>InputTransformer</code> is specified, one or
         * more specified JSONPaths are extracted from the event and used as values in a
         * template that you specify as the input to the target.</p> </li> </ul> <p>When
         * you specify <code>InputPath</code> or <code>InputTransformer</code>, you must
         * use JSON dot notation, not bracket notation.</p> <p>When you add targets to a
         * rule and the associated rule triggers soon after, new or updated targets might
         * not be immediately invoked. Allow a short period of time for changes to take
         * effect.</p> <p>This action can partially fail if too many requests are made at
         * the same time. If that happens, <code>FailedEntryCount</code> is nonzero in the
         * response, and each entry in <code>FailedEntries</code> provides the ID of the
         * failed target and the error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutTargetsAsync(const Model::PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes the permission of another AWS account to be able to put events to the
         * specified event bus. Specify the account to revoke by the
         * <code>StatementId</code> value that you associated with the account when you
         * granted it permission with <code>PutPermission</code>. You can find the
         * <code>StatementId</code> by using <a>DescribeEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Revokes the permission of another AWS account to be able to put events to the
         * specified event bus. Specify the account to revoke by the
         * <code>StatementId</code> value that you associated with the account when you
         * granted it permission with <code>PutPermission</code>. You can find the
         * <code>StatementId</code> by using <a>DescribeEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RemovePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Revokes the permission of another AWS account to be able to put events to the
         * specified event bus. Specify the account to revoke by the
         * <code>StatementId</code> value that you associated with the account when you
         * granted it permission with <code>PutPermission</code>. You can find the
         * <code>StatementId</code> by using <a>DescribeEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RemovePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RemoveTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTargetsOutcome RemoveTargets(const Model::RemoveTargetsRequest& request) const;

        /**
         * <p>Removes the specified targets from the specified rule. When the rule is
         * triggered, those targets are no longer be invoked.</p> <p>When you remove a
         * target, when the associated rule triggers, removed targets might continue to be
         * invoked. Allow a short period of time for changes to take effect.</p> <p>This
         * action can partially fail if too many requests are made at the same time. If
         * that happens, <code>FailedEntryCount</code> is non-zero in the response and each
         * entry in <code>FailedEntries</code> provides the ID of the failed target and the
         * error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RemoveTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTargetsOutcomeCallable RemoveTargetsCallable(const Model::RemoveTargetsRequest& request) const;

        /**
         * <p>Removes the specified targets from the specified rule. When the rule is
         * triggered, those targets are no longer be invoked.</p> <p>When you remove a
         * target, when the associated rule triggers, removed targets might continue to be
         * invoked. Allow a short period of time for changes to take effect.</p> <p>This
         * action can partially fail if too many requests are made at the same time. If
         * that happens, <code>FailedEntryCount</code> is non-zero in the response and each
         * entry in <code>FailedEntries</code> provides the ID of the failed target and the
         * error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RemoveTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTargetsAsync(const Model::RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified EventBridge
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions by granting a user permission to access or
         * change only resources with certain tag values. In EventBridge, rules can be
         * tagged.</p> <p>Tags don't have any semantic meaning to AWS and are interpreted
         * strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a rule that already has tags. If you
         * specify a new tag key for the rule, this tag is appended to the list of tags
         * associated with the rule. If you specify a tag key that is already associated
         * with the rule, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified EventBridge
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions by granting a user permission to access or
         * change only resources with certain tag values. In EventBridge, rules can be
         * tagged.</p> <p>Tags don't have any semantic meaning to AWS and are interpreted
         * strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a rule that already has tags. If you
         * specify a new tag key for the rule, this tag is appended to the list of tags
         * associated with the rule. If you specify a tag key that is already associated
         * with the rule, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified EventBridge
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions by granting a user permission to access or
         * change only resources with certain tag values. In EventBridge, rules can be
         * tagged.</p> <p>Tags don't have any semantic meaning to AWS and are interpreted
         * strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a rule that already has tags. If you
         * specify a new tag key for the rule, this tag is appended to the list of tags
         * associated with the rule. If you specify a tag key that is already associated
         * with the rule, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests whether the specified event pattern matches the provided event.</p>
         * <p>Most services in AWS treat <code>:</code> or <code>/</code> as the same
         * character in Amazon Resource Names (ARNs). However, EventBridge uses an exact
         * match in event patterns and rules. Be sure to use the correct ARN characters
         * when creating event patterns so that they match the ARN syntax in the event that
         * you want to match.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/TestEventPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::TestEventPatternOutcome TestEventPattern(const Model::TestEventPatternRequest& request) const;

        /**
         * <p>Tests whether the specified event pattern matches the provided event.</p>
         * <p>Most services in AWS treat <code>:</code> or <code>/</code> as the same
         * character in Amazon Resource Names (ARNs). However, EventBridge uses an exact
         * match in event patterns and rules. Be sure to use the correct ARN characters
         * when creating event patterns so that they match the ARN syntax in the event that
         * you want to match.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/TestEventPattern">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestEventPatternOutcomeCallable TestEventPatternCallable(const Model::TestEventPatternRequest& request) const;

        /**
         * <p>Tests whether the specified event pattern matches the provided event.</p>
         * <p>Most services in AWS treat <code>:</code> or <code>/</code> as the same
         * character in Amazon Resource Names (ARNs). However, EventBridge uses an exact
         * match in event patterns and rules. Be sure to use the correct ARN characters
         * when creating event patterns so that they match the ARN syntax in the event that
         * you want to match.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/TestEventPattern">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestEventPatternAsync(const Model::TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified EventBridge resource. In
         * EventBridge, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified EventBridge resource. In
         * EventBridge, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified EventBridge resource. In
         * EventBridge, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ActivateEventSourceAsyncHelper(const Model::ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventBusAsyncHelper(const Model::CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePartnerEventSourceAsyncHelper(const Model::CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeactivateEventSourceAsyncHelper(const Model::DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventBusAsyncHelper(const Model::DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePartnerEventSourceAsyncHelper(const Model::DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRuleAsyncHelper(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventBusAsyncHelper(const Model::DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventSourceAsyncHelper(const Model::DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePartnerEventSourceAsyncHelper(const Model::DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuleAsyncHelper(const Model::DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableRuleAsyncHelper(const Model::DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableRuleAsyncHelper(const Model::EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventBusesAsyncHelper(const Model::ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventSourcesAsyncHelper(const Model::ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPartnerEventSourceAccountsAsyncHelper(const Model::ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPartnerEventSourcesAsyncHelper(const Model::ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRuleNamesByTargetAsyncHelper(const Model::ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRulesAsyncHelper(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTargetsByRuleAsyncHelper(const Model::ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventsAsyncHelper(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPartnerEventsAsyncHelper(const Model::PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPermissionAsyncHelper(const Model::PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRuleAsyncHelper(const Model::PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutTargetsAsyncHelper(const Model::PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTargetsAsyncHelper(const Model::RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestEventPatternAsyncHelper(const Model::TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EventBridge
} // namespace Aws
