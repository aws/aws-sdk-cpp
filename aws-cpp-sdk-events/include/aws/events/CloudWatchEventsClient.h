/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/model/DescribeRuleResult.h>
#include <aws/events/model/ListRuleNamesByTargetResult.h>
#include <aws/events/model/ListRulesResult.h>
#include <aws/events/model/ListTargetsByRuleResult.h>
#include <aws/events/model/PutEventsResult.h>
#include <aws/events/model/PutRuleResult.h>
#include <aws/events/model/PutTargetsResult.h>
#include <aws/events/model/RemoveTargetsResult.h>
#include <aws/events/model/TestEventPatternResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class DescribeRuleRequest;
        class DisableRuleRequest;
        class EnableRuleRequest;
        class ListRuleNamesByTargetRequest;
        class ListRulesRequest;
        class ListTargetsByRuleRequest;
        class PutEventsRequest;
        class PutRuleRequest;
        class PutTargetsRequest;
        class RemoveTargetsRequest;
        class TestEventPatternRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchEventsErrors>> DeleteRuleOutcome;
        typedef Aws::Utils::Outcome<DescribeRuleResult, Aws::Client::AWSError<CloudWatchEventsErrors>> DescribeRuleOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchEventsErrors>> DisableRuleOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchEventsErrors>> EnableRuleOutcome;
        typedef Aws::Utils::Outcome<ListRuleNamesByTargetResult, Aws::Client::AWSError<CloudWatchEventsErrors>> ListRuleNamesByTargetOutcome;
        typedef Aws::Utils::Outcome<ListRulesResult, Aws::Client::AWSError<CloudWatchEventsErrors>> ListRulesOutcome;
        typedef Aws::Utils::Outcome<ListTargetsByRuleResult, Aws::Client::AWSError<CloudWatchEventsErrors>> ListTargetsByRuleOutcome;
        typedef Aws::Utils::Outcome<PutEventsResult, Aws::Client::AWSError<CloudWatchEventsErrors>> PutEventsOutcome;
        typedef Aws::Utils::Outcome<PutRuleResult, Aws::Client::AWSError<CloudWatchEventsErrors>> PutRuleOutcome;
        typedef Aws::Utils::Outcome<PutTargetsResult, Aws::Client::AWSError<CloudWatchEventsErrors>> PutTargetsOutcome;
        typedef Aws::Utils::Outcome<RemoveTargetsResult, Aws::Client::AWSError<CloudWatchEventsErrors>> RemoveTargetsOutcome;
        typedef Aws::Utils::Outcome<TestEventPatternResult, Aws::Client::AWSError<CloudWatchEventsErrors>> TestEventPatternOutcome;

        typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
        typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
        typedef std::future<DisableRuleOutcome> DisableRuleOutcomeCallable;
        typedef std::future<EnableRuleOutcome> EnableRuleOutcomeCallable;
        typedef std::future<ListRuleNamesByTargetOutcome> ListRuleNamesByTargetOutcomeCallable;
        typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
        typedef std::future<ListTargetsByRuleOutcome> ListTargetsByRuleOutcomeCallable;
        typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
        typedef std::future<PutRuleOutcome> PutRuleOutcomeCallable;
        typedef std::future<PutTargetsOutcome> PutTargetsOutcomeCallable;
        typedef std::future<RemoveTargetsOutcome> RemoveTargetsOutcomeCallable;
        typedef std::future<TestEventPatternOutcome> TestEventPatternOutcomeCallable;
} // namespace Model

  class CloudWatchEventsClient;

    typedef std::function<void(const CloudWatchEventsClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DescribeRuleRequest&, const Model::DescribeRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::DisableRuleRequest&, const Model::DisableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::EnableRuleRequest&, const Model::EnableRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListRuleNamesByTargetRequest&, const Model::ListRuleNamesByTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleNamesByTargetResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::ListTargetsByRuleRequest&, const Model::ListTargetsByRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsByRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutRuleRequest&, const Model::PutRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::PutTargetsRequest&, const Model::PutTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTargetsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::RemoveTargetsRequest&, const Model::RemoveTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTargetsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEventsClient*, const Model::TestEventPatternRequest&, const Model::TestEventPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestEventPatternResponseReceivedHandler;

  /**
   * <p>Amazon CloudWatch Events helps you to respond to state changes in your AWS
   * resources. When your resources change state they automatically send events into
   * an event stream. You can create rules that match selected events in the stream
   * and route them to targets to take action. You can also use rules to take action
   * on a pre-determined schedule. For example, you can configure rules to: </p> <ul>
   * <li>Automatically invoke an AWS Lambda function to update DNS entries when an
   * event notifies you that Amazon EC2 instance enters the running state.</li>
   * <li>Direct specific API records from CloudTrail to an Amazon Kinesis stream for
   * detailed analysis of potential security or availability risks.</li>
   * <li>Periodically invoke a built-in target to create a snapshot of an Amazon EBS
   * volume.</li> </ul> <p> For more information about Amazon CloudWatch Events
   * features, see the <a
   * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide">Amazon
   * CloudWatch Developer Guide</a>. </p>
   */
  class AWS_CLOUDWATCHEVENTS_API CloudWatchEventsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEventsClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEventsClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchEventsClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CloudWatchEventsClient();

        /**
         * <p>Deletes a rule. You must remove all targets from a rule using
         * <a>RemoveTargets</a> before you can delete the rule.</p> <p> <b>Note:</b> When
         * you delete a rule, incoming events might still continue to match to the deleted
         * rule. Please allow a short period of time for changes to take effect. </p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Deletes a rule. You must remove all targets from a rule using
         * <a>RemoveTargets</a> before you can delete the rule.</p> <p> <b>Note:</b> When
         * you delete a rule, incoming events might still continue to match to the deleted
         * rule. Please allow a short period of time for changes to take effect. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Deletes a rule. You must remove all targets from a rule using
         * <a>RemoveTargets</a> before you can delete the rule.</p> <p> <b>Note:</b> When
         * you delete a rule, incoming events might still continue to match to the deleted
         * rule. Please allow a short period of time for changes to take effect. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of the specified rule.</p>
         */
        virtual Model::DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest& request) const;

        /**
         * <p>Describes the details of the specified rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request) const;

        /**
         * <p>Describes the details of the specified rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a rule. A disabled rule won't match any events, and won't
         * self-trigger if it has a schedule expression.</p> <p> <b>Note:</b> When you
         * disable a rule, incoming events might still continue to match to the disabled
         * rule. Please allow a short period of time for changes to take effect. </p>
         */
        virtual Model::DisableRuleOutcome DisableRule(const Model::DisableRuleRequest& request) const;

        /**
         * <p>Disables a rule. A disabled rule won't match any events, and won't
         * self-trigger if it has a schedule expression.</p> <p> <b>Note:</b> When you
         * disable a rule, incoming events might still continue to match to the disabled
         * rule. Please allow a short period of time for changes to take effect. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableRuleOutcomeCallable DisableRuleCallable(const Model::DisableRuleRequest& request) const;

        /**
         * <p>Disables a rule. A disabled rule won't match any events, and won't
         * self-trigger if it has a schedule expression.</p> <p> <b>Note:</b> When you
         * disable a rule, incoming events might still continue to match to the disabled
         * rule. Please allow a short period of time for changes to take effect. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableRuleAsync(const Model::DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a rule. If the rule does not exist, the operation fails.</p> <p>
         * <b>Note:</b> When you enable a rule, incoming events might not immediately start
         * matching to a newly enabled rule. Please allow a short period of time for
         * changes to take effect. </p>
         */
        virtual Model::EnableRuleOutcome EnableRule(const Model::EnableRuleRequest& request) const;

        /**
         * <p>Enables a rule. If the rule does not exist, the operation fails.</p> <p>
         * <b>Note:</b> When you enable a rule, incoming events might not immediately start
         * matching to a newly enabled rule. Please allow a short period of time for
         * changes to take effect. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableRuleOutcomeCallable EnableRuleCallable(const Model::EnableRuleRequest& request) const;

        /**
         * <p>Enables a rule. If the rule does not exist, the operation fails.</p> <p>
         * <b>Note:</b> When you enable a rule, incoming events might not immediately start
         * matching to a newly enabled rule. Please allow a short period of time for
         * changes to take effect. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableRuleAsync(const Model::EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the rules that the given target is put to. You can see
         * which of the rules in Amazon CloudWatch Events can invoke a specific target in
         * your account. If you have more rules in your account than the given limit, the
         * results will be paginated. In that case, use the next token returned in the
         * response and repeat ListRulesByTarget until the NextToken in the response is
         * returned as null.</p>
         */
        virtual Model::ListRuleNamesByTargetOutcome ListRuleNamesByTarget(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * <p>Lists the names of the rules that the given target is put to. You can see
         * which of the rules in Amazon CloudWatch Events can invoke a specific target in
         * your account. If you have more rules in your account than the given limit, the
         * results will be paginated. In that case, use the next token returned in the
         * response and repeat ListRulesByTarget until the NextToken in the response is
         * returned as null.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleNamesByTargetOutcomeCallable ListRuleNamesByTargetCallable(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * <p>Lists the names of the rules that the given target is put to. You can see
         * which of the rules in Amazon CloudWatch Events can invoke a specific target in
         * your account. If you have more rules in your account than the given limit, the
         * results will be paginated. In that case, use the next token returned in the
         * response and repeat ListRulesByTarget until the NextToken in the response is
         * returned as null.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleNamesByTargetAsync(const Model::ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon CloudWatch Events rules in your account. You can either list
         * all the rules or you can provide a prefix to match to the rule names. If you
         * have more rules in your account than the given limit, the results will be
         * paginated. In that case, use the next token returned in the response and repeat
         * ListRules until the NextToken in the response is returned as null.</p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * <p>Lists the Amazon CloudWatch Events rules in your account. You can either list
         * all the rules or you can provide a prefix to match to the rule names. If you
         * have more rules in your account than the given limit, the results will be
         * paginated. In that case, use the next token returned in the response and repeat
         * ListRules until the NextToken in the response is returned as null.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request) const;

        /**
         * <p>Lists the Amazon CloudWatch Events rules in your account. You can either list
         * all the rules or you can provide a prefix to match to the rule names. If you
         * have more rules in your account than the given limit, the results will be
         * paginated. In that case, use the next token returned in the response and repeat
         * ListRules until the NextToken in the response is returned as null.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists of targets assigned to the rule.</p>
         */
        virtual Model::ListTargetsByRuleOutcome ListTargetsByRule(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * <p>Lists of targets assigned to the rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsByRuleOutcomeCallable ListTargetsByRuleCallable(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * <p>Lists of targets assigned to the rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsByRuleAsync(const Model::ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends custom events to Amazon CloudWatch Events so that they can be matched
         * to rules.</p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * <p>Sends custom events to Amazon CloudWatch Events so that they can be matched
         * to rules.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * <p>Sends custom events to Amazon CloudWatch Events so that they can be matched
         * to rules.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a rule. Rules are enabled by default, or based on value of
         * the State parameter. You can disable a rule using <a>DisableRule</a>.</p> <p>
         * <b>Note:</b> When you create or update a rule, incoming events might not
         * immediately start matching to new or updated rules. Please allow a short period
         * of time for changes to take effect.</p> <p>A rule must contain at least an
         * EventPattern or ScheduleExpression. Rules with EventPatterns are triggered when
         * a matching event is observed. Rules with ScheduleExpressions self-trigger based
         * on the given schedule. A rule can have both an EventPattern and a
         * ScheduleExpression, in which case the rule will trigger on matching events as
         * well as on a schedule.</p> <p> <b>Note:</b> Most services in AWS treat : or / as
         * the same character in Amazon Resource Names (ARNs). However, CloudWatch Events
         * uses an exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match. </p>
         */
        virtual Model::PutRuleOutcome PutRule(const Model::PutRuleRequest& request) const;

        /**
         * <p>Creates or updates a rule. Rules are enabled by default, or based on value of
         * the State parameter. You can disable a rule using <a>DisableRule</a>.</p> <p>
         * <b>Note:</b> When you create or update a rule, incoming events might not
         * immediately start matching to new or updated rules. Please allow a short period
         * of time for changes to take effect.</p> <p>A rule must contain at least an
         * EventPattern or ScheduleExpression. Rules with EventPatterns are triggered when
         * a matching event is observed. Rules with ScheduleExpressions self-trigger based
         * on the given schedule. A rule can have both an EventPattern and a
         * ScheduleExpression, in which case the rule will trigger on matching events as
         * well as on a schedule.</p> <p> <b>Note:</b> Most services in AWS treat : or / as
         * the same character in Amazon Resource Names (ARNs). However, CloudWatch Events
         * uses an exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRuleOutcomeCallable PutRuleCallable(const Model::PutRuleRequest& request) const;

        /**
         * <p>Creates or updates a rule. Rules are enabled by default, or based on value of
         * the State parameter. You can disable a rule using <a>DisableRule</a>.</p> <p>
         * <b>Note:</b> When you create or update a rule, incoming events might not
         * immediately start matching to new or updated rules. Please allow a short period
         * of time for changes to take effect.</p> <p>A rule must contain at least an
         * EventPattern or ScheduleExpression. Rules with EventPatterns are triggered when
         * a matching event is observed. Rules with ScheduleExpressions self-trigger based
         * on the given schedule. A rule can have both an EventPattern and a
         * ScheduleExpression, in which case the rule will trigger on matching events as
         * well as on a schedule.</p> <p> <b>Note:</b> Most services in AWS treat : or / as
         * the same character in Amazon Resource Names (ARNs). However, CloudWatch Events
         * uses an exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRuleAsync(const Model::PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds target(s) to a rule. Targets are the resources that can be invoked when
         * a rule is triggered. For example, AWS Lambda functions, Amazon Kinesis streams,
         * and built-in targets. Updates the target(s) if they are already associated with
         * the role. In other words, if there is already a target with the given target ID,
         * then the target associated with that ID is updated.</p> <p>In order to be able
         * to make API calls against the resources you own, Amazon CloudWatch Events needs
         * the appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For Amazon Kinesis streams, CloudWatch
         * Events relies on IAM roles. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/EventsTargetPermissions.html">Permissions
         * for Sending Events to Targets</a> in the <b><i>Amazon CloudWatch Developer
         * Guide</i></b>.</p> <p><b>Input</b> and <b>InputPath</b> are mutually-exclusive
         * and optional parameters of a target. When a rule is triggered due to a matched
         * event, if for a target:</p> <ul> <li>Neither <b>Input</b> nor <b>InputPath</b>
         * is specified, then the entire event is passed to the target in JSON form.</li>
         * <li> <b>InputPath</b> is specified in the form of JSONPath (e.g.
         * <b>$.detail</b>), then only the part of the event specified in the path is
         * passed to the target (e.g. only the detail part of the event is passed). </li>
         * <li> <b>Input</b> is specified in the form of a valid JSON, then the matched
         * event is overridden with this constant.</li> </ul> <p> <b>Note:</b> When you add
         * targets to a rule, when the associated rule triggers, new or updated targets
         * might not be immediately invoked. Please allow a short period of time for
         * changes to take effect. </p>
         */
        virtual Model::PutTargetsOutcome PutTargets(const Model::PutTargetsRequest& request) const;

        /**
         * <p>Adds target(s) to a rule. Targets are the resources that can be invoked when
         * a rule is triggered. For example, AWS Lambda functions, Amazon Kinesis streams,
         * and built-in targets. Updates the target(s) if they are already associated with
         * the role. In other words, if there is already a target with the given target ID,
         * then the target associated with that ID is updated.</p> <p>In order to be able
         * to make API calls against the resources you own, Amazon CloudWatch Events needs
         * the appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For Amazon Kinesis streams, CloudWatch
         * Events relies on IAM roles. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/EventsTargetPermissions.html">Permissions
         * for Sending Events to Targets</a> in the <b><i>Amazon CloudWatch Developer
         * Guide</i></b>.</p> <p><b>Input</b> and <b>InputPath</b> are mutually-exclusive
         * and optional parameters of a target. When a rule is triggered due to a matched
         * event, if for a target:</p> <ul> <li>Neither <b>Input</b> nor <b>InputPath</b>
         * is specified, then the entire event is passed to the target in JSON form.</li>
         * <li> <b>InputPath</b> is specified in the form of JSONPath (e.g.
         * <b>$.detail</b>), then only the part of the event specified in the path is
         * passed to the target (e.g. only the detail part of the event is passed). </li>
         * <li> <b>Input</b> is specified in the form of a valid JSON, then the matched
         * event is overridden with this constant.</li> </ul> <p> <b>Note:</b> When you add
         * targets to a rule, when the associated rule triggers, new or updated targets
         * might not be immediately invoked. Please allow a short period of time for
         * changes to take effect. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutTargetsOutcomeCallable PutTargetsCallable(const Model::PutTargetsRequest& request) const;

        /**
         * <p>Adds target(s) to a rule. Targets are the resources that can be invoked when
         * a rule is triggered. For example, AWS Lambda functions, Amazon Kinesis streams,
         * and built-in targets. Updates the target(s) if they are already associated with
         * the role. In other words, if there is already a target with the given target ID,
         * then the target associated with that ID is updated.</p> <p>In order to be able
         * to make API calls against the resources you own, Amazon CloudWatch Events needs
         * the appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For Amazon Kinesis streams, CloudWatch
         * Events relies on IAM roles. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/EventsTargetPermissions.html">Permissions
         * for Sending Events to Targets</a> in the <b><i>Amazon CloudWatch Developer
         * Guide</i></b>.</p> <p><b>Input</b> and <b>InputPath</b> are mutually-exclusive
         * and optional parameters of a target. When a rule is triggered due to a matched
         * event, if for a target:</p> <ul> <li>Neither <b>Input</b> nor <b>InputPath</b>
         * is specified, then the entire event is passed to the target in JSON form.</li>
         * <li> <b>InputPath</b> is specified in the form of JSONPath (e.g.
         * <b>$.detail</b>), then only the part of the event specified in the path is
         * passed to the target (e.g. only the detail part of the event is passed). </li>
         * <li> <b>Input</b> is specified in the form of a valid JSON, then the matched
         * event is overridden with this constant.</li> </ul> <p> <b>Note:</b> When you add
         * targets to a rule, when the associated rule triggers, new or updated targets
         * might not be immediately invoked. Please allow a short period of time for
         * changes to take effect. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutTargetsAsync(const Model::PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes target(s) from a rule so that when the rule is triggered, those
         * targets will no longer be invoked.</p> <p> <b>Note:</b> When you remove a
         * target, when the associated rule triggers, removed targets might still continue
         * to be invoked. Please allow a short period of time for changes to take effect.
         * </p>
         */
        virtual Model::RemoveTargetsOutcome RemoveTargets(const Model::RemoveTargetsRequest& request) const;

        /**
         * <p>Removes target(s) from a rule so that when the rule is triggered, those
         * targets will no longer be invoked.</p> <p> <b>Note:</b> When you remove a
         * target, when the associated rule triggers, removed targets might still continue
         * to be invoked. Please allow a short period of time for changes to take effect.
         * </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTargetsOutcomeCallable RemoveTargetsCallable(const Model::RemoveTargetsRequest& request) const;

        /**
         * <p>Removes target(s) from a rule so that when the rule is triggered, those
         * targets will no longer be invoked.</p> <p> <b>Note:</b> When you remove a
         * target, when the associated rule triggers, removed targets might still continue
         * to be invoked. Please allow a short period of time for changes to take effect.
         * </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTargetsAsync(const Model::RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests whether an event pattern matches the provided event.</p> <p>
         * <b>Note:</b> Most services in AWS treat : or / as the same character in Amazon
         * Resource Names (ARNs). However, CloudWatch Events uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event you want to match.
         * </p>
         */
        virtual Model::TestEventPatternOutcome TestEventPattern(const Model::TestEventPatternRequest& request) const;

        /**
         * <p>Tests whether an event pattern matches the provided event.</p> <p>
         * <b>Note:</b> Most services in AWS treat : or / as the same character in Amazon
         * Resource Names (ARNs). However, CloudWatch Events uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event you want to match.
         * </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestEventPatternOutcomeCallable TestEventPatternCallable(const Model::TestEventPatternRequest& request) const;

        /**
         * <p>Tests whether an event pattern matches the provided event.</p> <p>
         * <b>Note:</b> Most services in AWS treat : or / as the same character in Amazon
         * Resource Names (ARNs). However, CloudWatch Events uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event you want to match.
         * </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestEventPatternAsync(const Model::TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void DeleteRuleAsyncHelper(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuleAsyncHelper(const Model::DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableRuleAsyncHelper(const Model::DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableRuleAsyncHelper(const Model::EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRuleNamesByTargetAsyncHelper(const Model::ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRulesAsyncHelper(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTargetsByRuleAsyncHelper(const Model::ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventsAsyncHelper(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRuleAsyncHelper(const Model::PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutTargetsAsyncHelper(const Model::PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTargetsAsyncHelper(const Model::RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestEventPatternAsyncHelper(const Model::TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatchEvents
} // namespace Aws
