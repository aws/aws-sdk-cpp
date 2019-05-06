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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/events/model/DescribeEventBusResult.h>
#include <aws/events/model/DescribeRuleResult.h>
#include <aws/events/model/ListRuleNamesByTargetResult.h>
#include <aws/events/model/ListRulesResult.h>
#include <aws/events/model/ListTagsForResourceResult.h>
#include <aws/events/model/ListTargetsByRuleResult.h>
#include <aws/events/model/PutEventsResult.h>
#include <aws/events/model/PutRuleResult.h>
#include <aws/events/model/PutTargetsResult.h>
#include <aws/events/model/RemoveTargetsResult.h>
#include <aws/events/model/TagResourceResult.h>
#include <aws/events/model/TestEventPatternResult.h>
#include <aws/events/model/UntagResourceResult.h>
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
        class DeleteRuleRequest;
        class DescribeEventBusRequest;
        class DescribeRuleRequest;
        class DisableRuleRequest;
        class EnableRuleRequest;
        class ListRuleNamesByTargetRequest;
        class ListRulesRequest;
        class ListTagsForResourceRequest;
        class ListTargetsByRuleRequest;
        class PutEventsRequest;
        class PutPermissionRequest;
        class PutRuleRequest;
        class PutTargetsRequest;
        class RemovePermissionRequest;
        class RemoveTargetsRequest;
        class TagResourceRequest;
        class TestEventPatternRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchEventsErrors>> DeleteRuleOutcome;
        typedef Aws::Utils::Outcome<DescribeEventBusResult, Aws::Client::AWSError<CloudWatchEventsErrors>> DescribeEventBusOutcome;
        typedef Aws::Utils::Outcome<DescribeRuleResult, Aws::Client::AWSError<CloudWatchEventsErrors>> DescribeRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchEventsErrors>> DisableRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchEventsErrors>> EnableRuleOutcome;
        typedef Aws::Utils::Outcome<ListRuleNamesByTargetResult, Aws::Client::AWSError<CloudWatchEventsErrors>> ListRuleNamesByTargetOutcome;
        typedef Aws::Utils::Outcome<ListRulesResult, Aws::Client::AWSError<CloudWatchEventsErrors>> ListRulesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<CloudWatchEventsErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTargetsByRuleResult, Aws::Client::AWSError<CloudWatchEventsErrors>> ListTargetsByRuleOutcome;
        typedef Aws::Utils::Outcome<PutEventsResult, Aws::Client::AWSError<CloudWatchEventsErrors>> PutEventsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchEventsErrors>> PutPermissionOutcome;
        typedef Aws::Utils::Outcome<PutRuleResult, Aws::Client::AWSError<CloudWatchEventsErrors>> PutRuleOutcome;
        typedef Aws::Utils::Outcome<PutTargetsResult, Aws::Client::AWSError<CloudWatchEventsErrors>> PutTargetsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchEventsErrors>> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<RemoveTargetsResult, Aws::Client::AWSError<CloudWatchEventsErrors>> RemoveTargetsOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<CloudWatchEventsErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestEventPatternResult, Aws::Client::AWSError<CloudWatchEventsErrors>> TestEventPatternOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<CloudWatchEventsErrors>> UntagResourceOutcome;

        typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
        typedef std::future<DescribeEventBusOutcome> DescribeEventBusOutcomeCallable;
        typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
        typedef std::future<DisableRuleOutcome> DisableRuleOutcomeCallable;
        typedef std::future<EnableRuleOutcome> EnableRuleOutcomeCallable;
        typedef std::future<ListRuleNamesByTargetOutcome> ListRuleNamesByTargetOutcomeCallable;
        typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTargetsByRuleOutcome> ListTargetsByRuleOutcomeCallable;
        typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
        typedef std::future<PutPermissionOutcome> PutPermissionOutcomeCallable;
        typedef std::future<PutRuleOutcome> PutRuleOutcomeCallable;
        typedef std::future<PutTargetsOutcome> PutTargetsOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<RemoveTargetsOutcome> RemoveTargetsOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestEventPatternOutcome> TestEventPatternOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class CloudWatchEventsClient;

    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeEventBusRequest&, const Model::DescribeEventBusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventBusResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeRuleRequest&, const Model::DescribeRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DisableRuleRequest&, const Model::DisableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::EnableRuleRequest&, const Model::EnableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListRuleNamesByTargetRequest&, const Model::ListRuleNamesByTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleNamesByTargetResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListTargetsByRuleRequest&, const Model::ListTargetsByRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsByRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutPermissionRequest&, const Model::PutPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutRuleRequest&, const Model::PutRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutTargetsRequest&, const Model::PutTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTargetsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::RemoveTargetsRequest&, const Model::RemoveTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTargetsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::TestEventPatternRequest&, const Model::TestEventPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestEventPatternResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>Amazon CloudWatch Events helps you to respond to state changes in your AWS
   * resources. When your resources change state, they automatically send events into
   * an event stream. You can create rules that match selected events in the stream
   * and route them to targets to take action. You can also use rules to take action
   * on a predetermined schedule. For example, you can configure rules to:</p> <ul>
   * <li> <p>Automatically invoke an AWS Lambda function to update DNS entries when
   * an event notifies you that Amazon EC2 instance enters the running state.</p>
   * </li> <li> <p>Direct specific API records from AWS CloudTrail to an Amazon
   * Kinesis data stream for detailed analysis of potential security or availability
   * risks.</p> </li> <li> <p>Periodically invoke a built-in target to create a
   * snapshot of an Amazon EBS volume.</p> </li> </ul> <p>For more information about
   * the features of Amazon CloudWatch Events, see the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon
   * CloudWatch Events User Guide</a>.</p>
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
        CloudWatchEventsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudWatchEventsClient();

        inline virtual const char* GetServiceClientName() const override { return "CloudWatch Events"; }


        /**
         * <p>Deletes the specified rule.</p> <p>Before you can delete the rule, you must
         * remove all targets, using <a>RemoveTargets</a>.</p> <p>When you delete a rule,
         * incoming events might continue to match to the deleted rule. Allow a short
         * period of time for changes to take effect.</p> <p>Managed rules are rules
         * created and managed by another AWS service on your behalf. These rules are
         * created by those other AWS services to support functionality in those services.
         * You can delete these rules using the <code>Force</code> option, but you should
         * do so only if you are sure the other service is not still using that
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteRule">AWS
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
         * do so only if you are sure the other service is not still using that
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteRule">AWS
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
         * do so only if you are sure the other service is not still using that
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the external AWS accounts that are permitted to write events to your
         * account using your account's event bus, and the associated policy. To enable
         * your account to receive events from other accounts, use
         * <a>PutPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventBusOutcome DescribeEventBus(const Model::DescribeEventBusRequest& request) const;

        /**
         * <p>Displays the external AWS accounts that are permitted to write events to your
         * account using your account's event bus, and the associated policy. To enable
         * your account to receive events from other accounts, use
         * <a>PutPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeEventBus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventBusOutcomeCallable DescribeEventBusCallable(const Model::DescribeEventBusRequest& request) const;

        /**
         * <p>Displays the external AWS accounts that are permitted to write events to your
         * account using your account's event bus, and the associated policy. To enable
         * your account to receive events from other accounts, use
         * <a>PutPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeEventBus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventBusAsync(const Model::DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified rule.</p> <p>DescribeRule does not list the targets
         * of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest& request) const;

        /**
         * <p>Describes the specified rule.</p> <p>DescribeRule does not list the targets
         * of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request) const;

        /**
         * <p>Describes the specified rule.</p> <p>DescribeRule does not list the targets
         * of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disables the specified rule. A disabled rule won't match any events, and
         * won't self-trigger if it has a schedule expression.</p> <p>When you disable a
         * rule, incoming events might continue to match to the disabled rule. Allow a
         * short period of time for changes to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DisableRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableRuleOutcomeCallable DisableRuleCallable(const Model::DisableRuleRequest& request) const;

        /**
         * <p>Disables the specified rule. A disabled rule won't match any events, and
         * won't self-trigger if it has a schedule expression.</p> <p>When you disable a
         * rule, incoming events might continue to match to the disabled rule. Allow a
         * short period of time for changes to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DisableRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Enables the specified rule. If the rule does not exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Allow a short period of time for changes
         * to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EnableRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableRuleOutcomeCallable EnableRuleCallable(const Model::EnableRuleRequest& request) const;

        /**
         * <p>Enables the specified rule. If the rule does not exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Allow a short period of time for changes
         * to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EnableRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableRuleAsync(const Model::EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the rules for the specified target. You can see which of the rules in
         * Amazon CloudWatch Events can invoke a specific target in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRuleNamesByTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleNamesByTargetOutcome ListRuleNamesByTarget(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * <p>Lists the rules for the specified target. You can see which of the rules in
         * Amazon CloudWatch Events can invoke a specific target in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRuleNamesByTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleNamesByTargetOutcomeCallable ListRuleNamesByTargetCallable(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * <p>Lists the rules for the specified target. You can see which of the rules in
         * Amazon CloudWatch Events can invoke a specific target in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRuleNamesByTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleNamesByTargetAsync(const Model::ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your Amazon CloudWatch Events rules. You can either list all the rules
         * or you can provide a prefix to match to the rule names.</p> <p>ListRules does
         * not list the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * <p>Lists your Amazon CloudWatch Events rules. You can either list all the rules
         * or you can provide a prefix to match to the rule names.</p> <p>ListRules does
         * not list the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request) const;

        /**
         * <p>Lists your Amazon CloudWatch Events rules. You can either list all the rules
         * or you can provide a prefix to match to the rule names.</p> <p>ListRules does
         * not list the targets of a rule. To see the targets associated with a rule, use
         * <a>ListTargetsByRule</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with a CloudWatch Events resource. In CloudWatch
         * Events, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with a CloudWatch Events resource. In CloudWatch
         * Events, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with a CloudWatch Events resource. In CloudWatch
         * Events, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the targets assigned to the specified rule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTargetsByRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsByRuleOutcomeCallable ListTargetsByRuleCallable(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * <p>Lists the targets assigned to the specified rule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTargetsByRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsByRuleAsync(const Model::ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends custom events to Amazon CloudWatch Events so that they can be matched
         * to rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * <p>Sends custom events to Amazon CloudWatch Events so that they can be matched
         * to rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * <p>Sends custom events to Amazon CloudWatch Events so that they can be matched
         * to rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Running <code>PutPermission</code> permits the specified AWS account or AWS
         * organization to put events to your account's default <i>event bus</i>.
         * CloudWatch Events rules in your account are triggered by these events arriving
         * to your default event bus. </p> <p>For another account to send events to your
         * account, that external account must have a CloudWatch Events rule with your
         * account's default event bus as a target.</p> <p>To enable multiple AWS accounts
         * to put events to your default event bus, run <code>PutPermission</code> once for
         * each of these accounts. Or, if all the accounts are members of the same AWS
         * organization, you can run <code>PutPermission</code> once specifying
         * <code>Principal</code> as "*" and specifying the AWS organization ID in
         * <code>Condition</code>, to grant permissions to all accounts in that
         * organization.</p> <p>If you grant permissions using an organization, then
         * accounts in that organization must specify a <code>RoleArn</code> with proper
         * permissions when they use <code>PutTarget</code> to add your account's event bus
         * as a target. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEvents-CrossAccountEventDelivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon CloudWatch Events
         * User Guide</i>.</p> <p>The permission policy on the default event bus cannot
         * exceed 10 KB in size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionOutcome PutPermission(const Model::PutPermissionRequest& request) const;

        /**
         * <p>Running <code>PutPermission</code> permits the specified AWS account or AWS
         * organization to put events to your account's default <i>event bus</i>.
         * CloudWatch Events rules in your account are triggered by these events arriving
         * to your default event bus. </p> <p>For another account to send events to your
         * account, that external account must have a CloudWatch Events rule with your
         * account's default event bus as a target.</p> <p>To enable multiple AWS accounts
         * to put events to your default event bus, run <code>PutPermission</code> once for
         * each of these accounts. Or, if all the accounts are members of the same AWS
         * organization, you can run <code>PutPermission</code> once specifying
         * <code>Principal</code> as "*" and specifying the AWS organization ID in
         * <code>Condition</code>, to grant permissions to all accounts in that
         * organization.</p> <p>If you grant permissions using an organization, then
         * accounts in that organization must specify a <code>RoleArn</code> with proper
         * permissions when they use <code>PutTarget</code> to add your account's event bus
         * as a target. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEvents-CrossAccountEventDelivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon CloudWatch Events
         * User Guide</i>.</p> <p>The permission policy on the default event bus cannot
         * exceed 10 KB in size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionOutcomeCallable PutPermissionCallable(const Model::PutPermissionRequest& request) const;

        /**
         * <p>Running <code>PutPermission</code> permits the specified AWS account or AWS
         * organization to put events to your account's default <i>event bus</i>.
         * CloudWatch Events rules in your account are triggered by these events arriving
         * to your default event bus. </p> <p>For another account to send events to your
         * account, that external account must have a CloudWatch Events rule with your
         * account's default event bus as a target.</p> <p>To enable multiple AWS accounts
         * to put events to your default event bus, run <code>PutPermission</code> once for
         * each of these accounts. Or, if all the accounts are members of the same AWS
         * organization, you can run <code>PutPermission</code> once specifying
         * <code>Principal</code> as "*" and specifying the AWS organization ID in
         * <code>Condition</code>, to grant permissions to all accounts in that
         * organization.</p> <p>If you grant permissions using an organization, then
         * accounts in that organization must specify a <code>RoleArn</code> with proper
         * permissions when they use <code>PutTarget</code> to add your account's event bus
         * as a target. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEvents-CrossAccountEventDelivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon CloudWatch Events
         * User Guide</i>.</p> <p>The permission policy on the default event bus cannot
         * exceed 10 KB in size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionAsync(const Model::PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the specified rule. Rules are enabled by default, or based
         * on value of the state. You can disable a rule using <a>DisableRule</a>.</p>
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
         * existing rule, use <a>TagResource</a> and <a>UntagResource</a>.</p> <p>Most
         * services in AWS treat : or / as the same character in Amazon Resource Names
         * (ARNs). However, CloudWatch Events uses an exact match in event patterns and
         * rules. Be sure to use the correct ARN characters when creating event patterns so
         * that they match the ARN syntax in the event you want to match.</p> <p>In
         * CloudWatch Events, it is possible to create rules that lead to infinite loops,
         * where a rule is fired repeatedly. For example, a rule might detect that ACLs
         * have changed on an S3 bucket, and trigger software to change them to the desired
         * state. If the rule is not written carefully, the subsequent change to the ACLs
         * fires the rule again, creating an infinite loop.</p> <p>To prevent this, write
         * the rules so that the triggered actions do not re-fire the same rule. For
         * example, your rule could fire only if ACLs are found to be in a bad state,
         * instead of after any change. </p> <p>An infinite loop can quickly cause higher
         * than expected charges. We recommend that you use budgeting, which alerts you
         * when charges exceed your specified limit. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing
         * Your Costs with Budgets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutRule">AWS API
         * Reference</a></p>
         */
        virtual Model::PutRuleOutcome PutRule(const Model::PutRuleRequest& request) const;

        /**
         * <p>Creates or updates the specified rule. Rules are enabled by default, or based
         * on value of the state. You can disable a rule using <a>DisableRule</a>.</p>
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
         * existing rule, use <a>TagResource</a> and <a>UntagResource</a>.</p> <p>Most
         * services in AWS treat : or / as the same character in Amazon Resource Names
         * (ARNs). However, CloudWatch Events uses an exact match in event patterns and
         * rules. Be sure to use the correct ARN characters when creating event patterns so
         * that they match the ARN syntax in the event you want to match.</p> <p>In
         * CloudWatch Events, it is possible to create rules that lead to infinite loops,
         * where a rule is fired repeatedly. For example, a rule might detect that ACLs
         * have changed on an S3 bucket, and trigger software to change them to the desired
         * state. If the rule is not written carefully, the subsequent change to the ACLs
         * fires the rule again, creating an infinite loop.</p> <p>To prevent this, write
         * the rules so that the triggered actions do not re-fire the same rule. For
         * example, your rule could fire only if ACLs are found to be in a bad state,
         * instead of after any change. </p> <p>An infinite loop can quickly cause higher
         * than expected charges. We recommend that you use budgeting, which alerts you
         * when charges exceed your specified limit. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing
         * Your Costs with Budgets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutRule">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRuleOutcomeCallable PutRuleCallable(const Model::PutRuleRequest& request) const;

        /**
         * <p>Creates or updates the specified rule. Rules are enabled by default, or based
         * on value of the state. You can disable a rule using <a>DisableRule</a>.</p>
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
         * existing rule, use <a>TagResource</a> and <a>UntagResource</a>.</p> <p>Most
         * services in AWS treat : or / as the same character in Amazon Resource Names
         * (ARNs). However, CloudWatch Events uses an exact match in event patterns and
         * rules. Be sure to use the correct ARN characters when creating event patterns so
         * that they match the ARN syntax in the event you want to match.</p> <p>In
         * CloudWatch Events, it is possible to create rules that lead to infinite loops,
         * where a rule is fired repeatedly. For example, a rule might detect that ACLs
         * have changed on an S3 bucket, and trigger software to change them to the desired
         * state. If the rule is not written carefully, the subsequent change to the ACLs
         * fires the rule again, creating an infinite loop.</p> <p>To prevent this, write
         * the rules so that the triggered actions do not re-fire the same rule. For
         * example, your rule could fire only if ACLs are found to be in a bad state,
         * instead of after any change. </p> <p>An infinite loop can quickly cause higher
         * than expected charges. We recommend that you use budgeting, which alerts you
         * when charges exceed your specified limit. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing
         * Your Costs with Budgets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutRule">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRuleAsync(const Model::PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they are already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered.</p> <p>You can configure the following as
         * targets for CloudWatch Events:</p> <ul> <li> <p>EC2 instances</p> </li> <li>
         * <p>SSM Run Command</p> </li> <li> <p>SSM Automation</p> </li> <li> <p>AWS Lambda
         * functions</p> </li> <li> <p>Data streams in Amazon Kinesis Data Streams</p>
         * </li> <li> <p>Data delivery streams in Amazon Kinesis Data Firehose</p> </li>
         * <li> <p>Amazon ECS tasks</p> </li> <li> <p>AWS Step Functions state machines</p>
         * </li> <li> <p>AWS Batch jobs</p> </li> <li> <p>AWS CodeBuild projects</p> </li>
         * <li> <p>Pipelines in AWS CodePipeline</p> </li> <li> <p>Amazon Inspector
         * assessment templates</p> </li> <li> <p>Amazon SNS topics</p> </li> <li>
         * <p>Amazon SQS queues, including FIFO queues</p> </li> <li> <p>The default event
         * bus of another AWS account</p> </li> </ul> <p>Creating rules with built-in
         * targets is supported only in the AWS Management Console. The built-in targets
         * are <code>EC2 CreateSnapshot API call</code>, <code>EC2 RebootInstances API
         * call</code>, <code>EC2 StopInstances API call</code>, and <code>EC2
         * TerminateInstances API call</code>. </p> <p>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is a
         * Kinesis data stream, you can optionally specify which shard the event goes to by
         * using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Kinesis data
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTargets</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
         * <p>If another AWS account is in the same region and has granted you permission
         * (using <code>PutPermission</code>), you can send events to that account. Set
         * that account's event bus as a target of the rules in your account. To send the
         * matched events to the other account, specify that account's event bus as the
         * <code>Arn</code> value when you run <code>PutTargets</code>. If your account
         * sends events to another account, your account is charged for each sent event.
         * Each event sent to another account is charged as a custom event. The account
         * receiving the event is not charged. For more information, see <a
         * href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> <p>If you are setting the event bus of another account as the
         * target, and that account granted permission to your account through an
         * organization instead of directly by the account ID, then you must specify a
         * <code>RoleArn</code> with proper permissions in the <code>Target</code>
         * structure. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEvents-CrossAccountEventDelivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon CloudWatch Events
         * User Guide</i>.</p> <p>For more information about enabling cross-account events,
         * see <a>PutPermission</a>.</p> <p> <b>Input</b>, <b>InputPath</b>, and
         * <b>InputTransformer</b> are mutually exclusive and optional parameters of a
         * target. When a rule is triggered due to a matched event:</p> <ul> <li> <p>If
         * none of the following arguments are specified for a target, then the entire
         * event is passed to the target in JSON format (unless the target is Amazon EC2
         * Run Command or Amazon ECS task, in which case nothing from the event is passed
         * to the target).</p> </li> <li> <p>If <b>Input</b> is specified in the form of
         * valid JSON, then the matched event is overridden with this constant.</p> </li>
         * <li> <p>If <b>InputPath</b> is specified in the form of JSONPath (for example,
         * <code>$.detail</code>), then only the part of the event specified in the path is
         * passed to the target (for example, only the detail part of the event is
         * passed).</p> </li> <li> <p>If <b>InputTransformer</b> is specified, then one or
         * more specified JSONPaths are extracted from the event and used as values in a
         * template that you specify as the input to the target.</p> </li> </ul> <p>When
         * you specify <code>InputPath</code> or <code>InputTransformer</code>, you must
         * use JSON dot notation, not bracket notation.</p> <p>When you add targets to a
         * rule and the associated rule triggers soon after, new or updated targets might
         * not be immediately invoked. Allow a short period of time for changes to take
         * effect.</p> <p>This action can partially fail if too many requests are made at
         * the same time. If that happens, <code>FailedEntryCount</code> is non-zero in the
         * response and each entry in <code>FailedEntries</code> provides the ID of the
         * failed target and the error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTargetsOutcome PutTargets(const Model::PutTargetsRequest& request) const;

        /**
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they are already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered.</p> <p>You can configure the following as
         * targets for CloudWatch Events:</p> <ul> <li> <p>EC2 instances</p> </li> <li>
         * <p>SSM Run Command</p> </li> <li> <p>SSM Automation</p> </li> <li> <p>AWS Lambda
         * functions</p> </li> <li> <p>Data streams in Amazon Kinesis Data Streams</p>
         * </li> <li> <p>Data delivery streams in Amazon Kinesis Data Firehose</p> </li>
         * <li> <p>Amazon ECS tasks</p> </li> <li> <p>AWS Step Functions state machines</p>
         * </li> <li> <p>AWS Batch jobs</p> </li> <li> <p>AWS CodeBuild projects</p> </li>
         * <li> <p>Pipelines in AWS CodePipeline</p> </li> <li> <p>Amazon Inspector
         * assessment templates</p> </li> <li> <p>Amazon SNS topics</p> </li> <li>
         * <p>Amazon SQS queues, including FIFO queues</p> </li> <li> <p>The default event
         * bus of another AWS account</p> </li> </ul> <p>Creating rules with built-in
         * targets is supported only in the AWS Management Console. The built-in targets
         * are <code>EC2 CreateSnapshot API call</code>, <code>EC2 RebootInstances API
         * call</code>, <code>EC2 StopInstances API call</code>, and <code>EC2
         * TerminateInstances API call</code>. </p> <p>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is a
         * Kinesis data stream, you can optionally specify which shard the event goes to by
         * using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Kinesis data
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTargets</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
         * <p>If another AWS account is in the same region and has granted you permission
         * (using <code>PutPermission</code>), you can send events to that account. Set
         * that account's event bus as a target of the rules in your account. To send the
         * matched events to the other account, specify that account's event bus as the
         * <code>Arn</code> value when you run <code>PutTargets</code>. If your account
         * sends events to another account, your account is charged for each sent event.
         * Each event sent to another account is charged as a custom event. The account
         * receiving the event is not charged. For more information, see <a
         * href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> <p>If you are setting the event bus of another account as the
         * target, and that account granted permission to your account through an
         * organization instead of directly by the account ID, then you must specify a
         * <code>RoleArn</code> with proper permissions in the <code>Target</code>
         * structure. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEvents-CrossAccountEventDelivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon CloudWatch Events
         * User Guide</i>.</p> <p>For more information about enabling cross-account events,
         * see <a>PutPermission</a>.</p> <p> <b>Input</b>, <b>InputPath</b>, and
         * <b>InputTransformer</b> are mutually exclusive and optional parameters of a
         * target. When a rule is triggered due to a matched event:</p> <ul> <li> <p>If
         * none of the following arguments are specified for a target, then the entire
         * event is passed to the target in JSON format (unless the target is Amazon EC2
         * Run Command or Amazon ECS task, in which case nothing from the event is passed
         * to the target).</p> </li> <li> <p>If <b>Input</b> is specified in the form of
         * valid JSON, then the matched event is overridden with this constant.</p> </li>
         * <li> <p>If <b>InputPath</b> is specified in the form of JSONPath (for example,
         * <code>$.detail</code>), then only the part of the event specified in the path is
         * passed to the target (for example, only the detail part of the event is
         * passed).</p> </li> <li> <p>If <b>InputTransformer</b> is specified, then one or
         * more specified JSONPaths are extracted from the event and used as values in a
         * template that you specify as the input to the target.</p> </li> </ul> <p>When
         * you specify <code>InputPath</code> or <code>InputTransformer</code>, you must
         * use JSON dot notation, not bracket notation.</p> <p>When you add targets to a
         * rule and the associated rule triggers soon after, new or updated targets might
         * not be immediately invoked. Allow a short period of time for changes to take
         * effect.</p> <p>This action can partially fail if too many requests are made at
         * the same time. If that happens, <code>FailedEntryCount</code> is non-zero in the
         * response and each entry in <code>FailedEntries</code> provides the ID of the
         * failed target and the error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutTargetsOutcomeCallable PutTargetsCallable(const Model::PutTargetsRequest& request) const;

        /**
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they are already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered.</p> <p>You can configure the following as
         * targets for CloudWatch Events:</p> <ul> <li> <p>EC2 instances</p> </li> <li>
         * <p>SSM Run Command</p> </li> <li> <p>SSM Automation</p> </li> <li> <p>AWS Lambda
         * functions</p> </li> <li> <p>Data streams in Amazon Kinesis Data Streams</p>
         * </li> <li> <p>Data delivery streams in Amazon Kinesis Data Firehose</p> </li>
         * <li> <p>Amazon ECS tasks</p> </li> <li> <p>AWS Step Functions state machines</p>
         * </li> <li> <p>AWS Batch jobs</p> </li> <li> <p>AWS CodeBuild projects</p> </li>
         * <li> <p>Pipelines in AWS CodePipeline</p> </li> <li> <p>Amazon Inspector
         * assessment templates</p> </li> <li> <p>Amazon SNS topics</p> </li> <li>
         * <p>Amazon SQS queues, including FIFO queues</p> </li> <li> <p>The default event
         * bus of another AWS account</p> </li> </ul> <p>Creating rules with built-in
         * targets is supported only in the AWS Management Console. The built-in targets
         * are <code>EC2 CreateSnapshot API call</code>, <code>EC2 RebootInstances API
         * call</code>, <code>EC2 StopInstances API call</code>, and <code>EC2
         * TerminateInstances API call</code>. </p> <p>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is a
         * Kinesis data stream, you can optionally specify which shard the event goes to by
         * using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Kinesis data
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTargets</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
         * <p>If another AWS account is in the same region and has granted you permission
         * (using <code>PutPermission</code>), you can send events to that account. Set
         * that account's event bus as a target of the rules in your account. To send the
         * matched events to the other account, specify that account's event bus as the
         * <code>Arn</code> value when you run <code>PutTargets</code>. If your account
         * sends events to another account, your account is charged for each sent event.
         * Each event sent to another account is charged as a custom event. The account
         * receiving the event is not charged. For more information, see <a
         * href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> <p>If you are setting the event bus of another account as the
         * target, and that account granted permission to your account through an
         * organization instead of directly by the account ID, then you must specify a
         * <code>RoleArn</code> with proper permissions in the <code>Target</code>
         * structure. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/CloudWatchEvents-CrossAccountEventDelivery.html">Sending
         * and Receiving Events Between AWS Accounts</a> in the <i>Amazon CloudWatch Events
         * User Guide</i>.</p> <p>For more information about enabling cross-account events,
         * see <a>PutPermission</a>.</p> <p> <b>Input</b>, <b>InputPath</b>, and
         * <b>InputTransformer</b> are mutually exclusive and optional parameters of a
         * target. When a rule is triggered due to a matched event:</p> <ul> <li> <p>If
         * none of the following arguments are specified for a target, then the entire
         * event is passed to the target in JSON format (unless the target is Amazon EC2
         * Run Command or Amazon ECS task, in which case nothing from the event is passed
         * to the target).</p> </li> <li> <p>If <b>Input</b> is specified in the form of
         * valid JSON, then the matched event is overridden with this constant.</p> </li>
         * <li> <p>If <b>InputPath</b> is specified in the form of JSONPath (for example,
         * <code>$.detail</code>), then only the part of the event specified in the path is
         * passed to the target (for example, only the detail part of the event is
         * passed).</p> </li> <li> <p>If <b>InputTransformer</b> is specified, then one or
         * more specified JSONPaths are extracted from the event and used as values in a
         * template that you specify as the input to the target.</p> </li> </ul> <p>When
         * you specify <code>InputPath</code> or <code>InputTransformer</code>, you must
         * use JSON dot notation, not bracket notation.</p> <p>When you add targets to a
         * rule and the associated rule triggers soon after, new or updated targets might
         * not be immediately invoked. Allow a short period of time for changes to take
         * effect.</p> <p>This action can partially fail if too many requests are made at
         * the same time. If that happens, <code>FailedEntryCount</code> is non-zero in the
         * response and each entry in <code>FailedEntries</code> provides the ID of the
         * failed target and the error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutTargetsAsync(const Model::PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes the permission of another AWS account to be able to put events to
         * your default event bus. Specify the account to revoke by the
         * <code>StatementId</code> value that you associated with the account when you
         * granted it permission with <code>PutPermission</code>. You can find the
         * <code>StatementId</code> by using <a>DescribeEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Revokes the permission of another AWS account to be able to put events to
         * your default event bus. Specify the account to revoke by the
         * <code>StatementId</code> value that you associated with the account when you
         * granted it permission with <code>PutPermission</code>. You can find the
         * <code>StatementId</code> by using <a>DescribeEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemovePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Revokes the permission of another AWS account to be able to put events to
         * your default event bus. Specify the account to revoke by the
         * <code>StatementId</code> value that you associated with the account when you
         * granted it permission with <code>PutPermission</code>. You can find the
         * <code>StatementId</code> by using <a>DescribeEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemovePermission">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemoveTargets">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemoveTargets">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemoveTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTargetsAsync(const Model::RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch Events
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions by granting a user permission to access or
         * change only resources with certain tag values. In CloudWatch Events, rules can
         * be tagged.</p> <p>Tags don't have any semantic meaning to AWS and are
         * interpreted strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a rule that already has tags. If you
         * specify a new tag key for the rule, this tag is appended to the list of tags
         * associated with the rule. If you specify a tag key that is already associated
         * with the rule, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch Events
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions by granting a user permission to access or
         * change only resources with certain tag values. In CloudWatch Events, rules can
         * be tagged.</p> <p>Tags don't have any semantic meaning to AWS and are
         * interpreted strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a rule that already has tags. If you
         * specify a new tag key for the rule, this tag is appended to the list of tags
         * associated with the rule. If you specify a tag key that is already associated
         * with the rule, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch Events
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions by granting a user permission to access or
         * change only resources with certain tag values. In CloudWatch Events, rules can
         * be tagged.</p> <p>Tags don't have any semantic meaning to AWS and are
         * interpreted strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a rule that already has tags. If you
         * specify a new tag key for the rule, this tag is appended to the list of tags
         * associated with the rule. If you specify a tag key that is already associated
         * with the rule, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests whether the specified event pattern matches the provided event.</p>
         * <p>Most services in AWS treat : or / as the same character in Amazon Resource
         * Names (ARNs). However, CloudWatch Events uses an exact match in event patterns
         * and rules. Be sure to use the correct ARN characters when creating event
         * patterns so that they match the ARN syntax in the event you want to
         * match.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TestEventPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::TestEventPatternOutcome TestEventPattern(const Model::TestEventPatternRequest& request) const;

        /**
         * <p>Tests whether the specified event pattern matches the provided event.</p>
         * <p>Most services in AWS treat : or / as the same character in Amazon Resource
         * Names (ARNs). However, CloudWatch Events uses an exact match in event patterns
         * and rules. Be sure to use the correct ARN characters when creating event
         * patterns so that they match the ARN syntax in the event you want to
         * match.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TestEventPattern">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestEventPatternOutcomeCallable TestEventPatternCallable(const Model::TestEventPatternRequest& request) const;

        /**
         * <p>Tests whether the specified event pattern matches the provided event.</p>
         * <p>Most services in AWS treat : or / as the same character in Amazon Resource
         * Names (ARNs). However, CloudWatch Events uses an exact match in event patterns
         * and rules. Be sure to use the correct ARN characters when creating event
         * patterns so that they match the ARN syntax in the event you want to
         * match.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TestEventPattern">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestEventPatternAsync(const Model::TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified CloudWatch Events resource. In
         * CloudWatch Events, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified CloudWatch Events resource. In
         * CloudWatch Events, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified CloudWatch Events resource. In
         * CloudWatch Events, rules can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteRuleAsyncHelper(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventBusAsyncHelper(const Model::DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuleAsyncHelper(const Model::DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableRuleAsyncHelper(const Model::DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableRuleAsyncHelper(const Model::EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRuleNamesByTargetAsyncHelper(const Model::ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRulesAsyncHelper(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTargetsByRuleAsyncHelper(const Model::ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventsAsyncHelper(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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

} // namespace CloudWatchEvents
} // namespace Aws
