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
   * <zonbook> <simpara>Amazon CloudWatch Events helps you to respond to state
   * changes in your AWS resources. When your resources change state, they
   * automatically send events into an event stream. You can create rules that match
   * selected events in the stream and route them to targets to take action. You can
   * also use rules to take action on a pre-determined schedule. For example, you can
   * configure rules to:</simpara> <itemizedlist> <listitem> <simpara>Automatically
   * invoke an AWS Lambda function to update DNS entries when an event notifies you
   * that Amazon EC2 instance enters the running state.</simpara> </listitem>
   * <listitem> <simpara>Direct specific API records from CloudTrail to an Amazon
   * Kinesis stream for detailed analysis of potential security or availability
   * risks.</simpara> </listitem> <listitem> <simpara>Periodically invoke a built-in
   * target to create a snapshot of an Amazon EBS volume.</simpara> </listitem>
   * </itemizedlist> <simpara>For more information about the features of Amazon
   * CloudWatch Events, see the <ulink type="documentation"
   * url="AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
   * Guide</ulink>.</simpara> </zonbook> <xhtml> <p>Amazon CloudWatch Events helps
   * you to respond to state changes in your AWS resources. When your resources
   * change state, they automatically send events into an event stream. You can
   * create rules that match selected events in the stream and route them to targets
   * to take action. You can also use rules to take action on a pre-determined
   * schedule. For example, you can configure rules to:</p> <ul> <li>
   * <p>Automatically invoke an AWS Lambda function to update DNS entries when an
   * event notifies you that Amazon EC2 instance enters the running state.</p> </li>
   * <li> <p>Direct specific API records from CloudTrail to an Amazon Kinesis stream
   * for detailed analysis of potential security or availability risks.</p> </li>
   * <li> <p>Periodically invoke a built-in target to create a snapshot of an Amazon
   * EBS volume.</p> </li> </ul> <p>For more information about the features of Amazon
   * CloudWatch Events, see the <a
   * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon
   * CloudWatch Events User Guide</a>.</p> </xhtml>
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
         * <zonbook> <simpara>Deletes the specified rule.</simpara> <simpara>You must
         * remove all targets from a rule using <xref linkend="RemoveTargets"></xref>
         * before you can delete the rule.</simpara> <simpara>When you delete a rule,
         * incoming events might continue to match to the deleted rule. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Deletes the specified rule.</p> <p>You must remove all targets from a rule
         * using <a>RemoveTargets</a> before you can delete the rule.</p> <p>When you
         * delete a rule, incoming events might continue to match to the deleted rule.
         * Please allow a short period of time for changes to take effect.</p> </xhtml>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Deletes the specified rule.</simpara> <simpara>You must
         * remove all targets from a rule using <xref linkend="RemoveTargets"></xref>
         * before you can delete the rule.</simpara> <simpara>When you delete a rule,
         * incoming events might continue to match to the deleted rule. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Deletes the specified rule.</p> <p>You must remove all targets from a rule
         * using <a>RemoveTargets</a> before you can delete the rule.</p> <p>When you
         * delete a rule, incoming events might continue to match to the deleted rule.
         * Please allow a short period of time for changes to take effect.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Deletes the specified rule.</simpara> <simpara>You must
         * remove all targets from a rule using <xref linkend="RemoveTargets"></xref>
         * before you can delete the rule.</simpara> <simpara>When you delete a rule,
         * incoming events might continue to match to the deleted rule. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Deletes the specified rule.</p> <p>You must remove all targets from a rule
         * using <a>RemoveTargets</a> before you can delete the rule.</p> <p>When you
         * delete a rule, incoming events might continue to match to the deleted rule.
         * Please allow a short period of time for changes to take effect.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Describes the specified rule.</simpara> </zonbook> <xhtml>
         * <p>Describes the specified rule.</p> </xhtml>
         */
        virtual Model::DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Describes the specified rule.</simpara> </zonbook> <xhtml>
         * <p>Describes the specified rule.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Describes the specified rule.</simpara> </zonbook> <xhtml>
         * <p>Describes the specified rule.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Disables the specified rule. A disabled rule won't match any
         * events, and won't self-trigger if it has a schedule expression.</simpara>
         * <simpara>When you disable a rule, incoming events might continue to match to the
         * disabled rule. Please allow a short period of time for changes to take
         * effect.</simpara> </zonbook> <xhtml> <p>Disables the specified rule. A disabled
         * rule won't match any events, and won't self-trigger if it has a schedule
         * expression.</p> <p>When you disable a rule, incoming events might continue to
         * match to the disabled rule. Please allow a short period of time for changes to
         * take effect.</p> </xhtml>
         */
        virtual Model::DisableRuleOutcome DisableRule(const Model::DisableRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Disables the specified rule. A disabled rule won't match any
         * events, and won't self-trigger if it has a schedule expression.</simpara>
         * <simpara>When you disable a rule, incoming events might continue to match to the
         * disabled rule. Please allow a short period of time for changes to take
         * effect.</simpara> </zonbook> <xhtml> <p>Disables the specified rule. A disabled
         * rule won't match any events, and won't self-trigger if it has a schedule
         * expression.</p> <p>When you disable a rule, incoming events might continue to
         * match to the disabled rule. Please allow a short period of time for changes to
         * take effect.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableRuleOutcomeCallable DisableRuleCallable(const Model::DisableRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Disables the specified rule. A disabled rule won't match any
         * events, and won't self-trigger if it has a schedule expression.</simpara>
         * <simpara>When you disable a rule, incoming events might continue to match to the
         * disabled rule. Please allow a short period of time for changes to take
         * effect.</simpara> </zonbook> <xhtml> <p>Disables the specified rule. A disabled
         * rule won't match any events, and won't self-trigger if it has a schedule
         * expression.</p> <p>When you disable a rule, incoming events might continue to
         * match to the disabled rule. Please allow a short period of time for changes to
         * take effect.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableRuleAsync(const Model::DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Enables the specified rule. If the rule does not exist, the
         * operation fails.</simpara> <simpara>When you enable a rule, incoming events
         * might not immediately start matching to a newly enabled rule. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Enables the specified rule. If the rule does not exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Please allow a short period of time for
         * changes to take effect.</p> </xhtml>
         */
        virtual Model::EnableRuleOutcome EnableRule(const Model::EnableRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Enables the specified rule. If the rule does not exist, the
         * operation fails.</simpara> <simpara>When you enable a rule, incoming events
         * might not immediately start matching to a newly enabled rule. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Enables the specified rule. If the rule does not exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Please allow a short period of time for
         * changes to take effect.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableRuleOutcomeCallable EnableRuleCallable(const Model::EnableRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Enables the specified rule. If the rule does not exist, the
         * operation fails.</simpara> <simpara>When you enable a rule, incoming events
         * might not immediately start matching to a newly enabled rule. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Enables the specified rule. If the rule does not exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Please allow a short period of time for
         * changes to take effect.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableRuleAsync(const Model::EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Lists the rules for the specified target. You can see which
         * of the rules in Amazon CloudWatch Events can invoke a specific target in your
         * account.</simpara> </zonbook> <xhtml> <p>Lists the rules for the specified
         * target. You can see which of the rules in Amazon CloudWatch Events can invoke a
         * specific target in your account.</p> </xhtml>
         */
        virtual Model::ListRuleNamesByTargetOutcome ListRuleNamesByTarget(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * <zonbook> <simpara>Lists the rules for the specified target. You can see which
         * of the rules in Amazon CloudWatch Events can invoke a specific target in your
         * account.</simpara> </zonbook> <xhtml> <p>Lists the rules for the specified
         * target. You can see which of the rules in Amazon CloudWatch Events can invoke a
         * specific target in your account.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleNamesByTargetOutcomeCallable ListRuleNamesByTargetCallable(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * <zonbook> <simpara>Lists the rules for the specified target. You can see which
         * of the rules in Amazon CloudWatch Events can invoke a specific target in your
         * account.</simpara> </zonbook> <xhtml> <p>Lists the rules for the specified
         * target. You can see which of the rules in Amazon CloudWatch Events can invoke a
         * specific target in your account.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleNamesByTargetAsync(const Model::ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Lists your Amazon CloudWatch Events rules. You can either
         * list all the rules or you can provide a prefix to match to the rule
         * names.</simpara> </zonbook> <xhtml> <p>Lists your Amazon CloudWatch Events
         * rules. You can either list all the rules or you can provide a prefix to match to
         * the rule names.</p> </xhtml>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * <zonbook> <simpara>Lists your Amazon CloudWatch Events rules. You can either
         * list all the rules or you can provide a prefix to match to the rule
         * names.</simpara> </zonbook> <xhtml> <p>Lists your Amazon CloudWatch Events
         * rules. You can either list all the rules or you can provide a prefix to match to
         * the rule names.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request) const;

        /**
         * <zonbook> <simpara>Lists your Amazon CloudWatch Events rules. You can either
         * list all the rules or you can provide a prefix to match to the rule
         * names.</simpara> </zonbook> <xhtml> <p>Lists your Amazon CloudWatch Events
         * rules. You can either list all the rules or you can provide a prefix to match to
         * the rule names.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Lists the targets assigned to the specified rule.</simpara>
         * </zonbook> <xhtml> <p>Lists the targets assigned to the specified rule.</p>
         * </xhtml>
         */
        virtual Model::ListTargetsByRuleOutcome ListTargetsByRule(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Lists the targets assigned to the specified rule.</simpara>
         * </zonbook> <xhtml> <p>Lists the targets assigned to the specified rule.</p>
         * </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsByRuleOutcomeCallable ListTargetsByRuleCallable(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Lists the targets assigned to the specified rule.</simpara>
         * </zonbook> <xhtml> <p>Lists the targets assigned to the specified rule.</p>
         * </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsByRuleAsync(const Model::ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Sends custom events to Amazon CloudWatch Events so that they
         * can be matched to rules.</simpara> </zonbook> <xhtml> <p>Sends custom events to
         * Amazon CloudWatch Events so that they can be matched to rules.</p> </xhtml>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * <zonbook> <simpara>Sends custom events to Amazon CloudWatch Events so that they
         * can be matched to rules.</simpara> </zonbook> <xhtml> <p>Sends custom events to
         * Amazon CloudWatch Events so that they can be matched to rules.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * <zonbook> <simpara>Sends custom events to Amazon CloudWatch Events so that they
         * can be matched to rules.</simpara> </zonbook> <xhtml> <p>Sends custom events to
         * Amazon CloudWatch Events so that they can be matched to rules.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Creates or updates the specified rule. Rules are enabled by
         * default, or based on value of the state. You can disable a rule using <xref
         * linkend="DisableRule"></xref>.</simpara> <simpara>When you create or update a
         * rule, incoming events might not immediately start matching to new or updated
         * rules. Please allow a short period of time for changes to take effect.</simpara>
         * <simpara>A rule must contain at least an EventPattern or ScheduleExpression.
         * Rules with EventPatterns are triggered when a matching event is observed. Rules
         * with ScheduleExpressions self-trigger based on the given schedule. A rule can
         * have both an EventPattern and a ScheduleExpression, in which case the rule
         * triggers on matching events as well as on a schedule.</simpara> <simpara>Most
         * services in AWS treat : or / as the same character in Amazon Resource Names
         * (ARNs). However, CloudWatch Events uses an exact match in event patterns and
         * rules. Be sure to use the correct ARN characters when creating event patterns so
         * that they match the ARN syntax in the event you want to match.</simpara>
         * </zonbook> <xhtml> <p>Creates or updates the specified rule. Rules are enabled
         * by default, or based on value of the state. You can disable a rule using
         * <a>DisableRule</a>.</p> <p>When you create or update a rule, incoming events
         * might not immediately start matching to new or updated rules. Please allow a
         * short period of time for changes to take effect.</p> <p>A rule must contain at
         * least an EventPattern or ScheduleExpression. Rules with EventPatterns are
         * triggered when a matching event is observed. Rules with ScheduleExpressions
         * self-trigger based on the given schedule. A rule can have both an EventPattern
         * and a ScheduleExpression, in which case the rule triggers on matching events as
         * well as on a schedule.</p> <p>Most services in AWS treat : or / as the same
         * character in Amazon Resource Names (ARNs). However, CloudWatch Events uses an
         * exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match.</p> </xhtml>
         */
        virtual Model::PutRuleOutcome PutRule(const Model::PutRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Creates or updates the specified rule. Rules are enabled by
         * default, or based on value of the state. You can disable a rule using <xref
         * linkend="DisableRule"></xref>.</simpara> <simpara>When you create or update a
         * rule, incoming events might not immediately start matching to new or updated
         * rules. Please allow a short period of time for changes to take effect.</simpara>
         * <simpara>A rule must contain at least an EventPattern or ScheduleExpression.
         * Rules with EventPatterns are triggered when a matching event is observed. Rules
         * with ScheduleExpressions self-trigger based on the given schedule. A rule can
         * have both an EventPattern and a ScheduleExpression, in which case the rule
         * triggers on matching events as well as on a schedule.</simpara> <simpara>Most
         * services in AWS treat : or / as the same character in Amazon Resource Names
         * (ARNs). However, CloudWatch Events uses an exact match in event patterns and
         * rules. Be sure to use the correct ARN characters when creating event patterns so
         * that they match the ARN syntax in the event you want to match.</simpara>
         * </zonbook> <xhtml> <p>Creates or updates the specified rule. Rules are enabled
         * by default, or based on value of the state. You can disable a rule using
         * <a>DisableRule</a>.</p> <p>When you create or update a rule, incoming events
         * might not immediately start matching to new or updated rules. Please allow a
         * short period of time for changes to take effect.</p> <p>A rule must contain at
         * least an EventPattern or ScheduleExpression. Rules with EventPatterns are
         * triggered when a matching event is observed. Rules with ScheduleExpressions
         * self-trigger based on the given schedule. A rule can have both an EventPattern
         * and a ScheduleExpression, in which case the rule triggers on matching events as
         * well as on a schedule.</p> <p>Most services in AWS treat : or / as the same
         * character in Amazon Resource Names (ARNs). However, CloudWatch Events uses an
         * exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRuleOutcomeCallable PutRuleCallable(const Model::PutRuleRequest& request) const;

        /**
         * <zonbook> <simpara>Creates or updates the specified rule. Rules are enabled by
         * default, or based on value of the state. You can disable a rule using <xref
         * linkend="DisableRule"></xref>.</simpara> <simpara>When you create or update a
         * rule, incoming events might not immediately start matching to new or updated
         * rules. Please allow a short period of time for changes to take effect.</simpara>
         * <simpara>A rule must contain at least an EventPattern or ScheduleExpression.
         * Rules with EventPatterns are triggered when a matching event is observed. Rules
         * with ScheduleExpressions self-trigger based on the given schedule. A rule can
         * have both an EventPattern and a ScheduleExpression, in which case the rule
         * triggers on matching events as well as on a schedule.</simpara> <simpara>Most
         * services in AWS treat : or / as the same character in Amazon Resource Names
         * (ARNs). However, CloudWatch Events uses an exact match in event patterns and
         * rules. Be sure to use the correct ARN characters when creating event patterns so
         * that they match the ARN syntax in the event you want to match.</simpara>
         * </zonbook> <xhtml> <p>Creates or updates the specified rule. Rules are enabled
         * by default, or based on value of the state. You can disable a rule using
         * <a>DisableRule</a>.</p> <p>When you create or update a rule, incoming events
         * might not immediately start matching to new or updated rules. Please allow a
         * short period of time for changes to take effect.</p> <p>A rule must contain at
         * least an EventPattern or ScheduleExpression. Rules with EventPatterns are
         * triggered when a matching event is observed. Rules with ScheduleExpressions
         * self-trigger based on the given schedule. A rule can have both an EventPattern
         * and a ScheduleExpression, in which case the rule triggers on matching events as
         * well as on a schedule.</p> <p>Most services in AWS treat : or / as the same
         * character in Amazon Resource Names (ARNs). However, CloudWatch Events uses an
         * exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRuleAsync(const Model::PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Adds the specified targets to the specified rule, or updates
         * the targets if they are already associated with the rule.</simpara>
         * <simpara>Targets are the resources that are invoked when a rule is triggered.
         * Example targets include EC2 instances, AWS Lambda functions, Amazon Kinesis
         * streams, Amazon ECS tasks, AWS Step Functions state machines, and built-in
         * targets. Note that creating rules with built-in targets is supported only in the
         * AWS Management Console.</simpara> <simpara>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is an
         * Amazon Kinesis stream, you can optionally specify which shard the event goes to
         * by using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</simpara> <simpara>To be able to make
         * API calls against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Amazon Kinesis
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTarget</code>. For more information, see <ulink type="documentation"
         * url="AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</ulink> in the <emphasis>Amazon CloudWatch Events User
         * Guide</emphasis>.</simpara> <simpara> <emphasis role="bold">Input</emphasis>,
         * <emphasis role="bold">InputPath</emphasis> and <emphasis
         * role="bold">InputTransformer</emphasis> are mutually exclusive and optional
         * parameters of a target. When a rule is triggered due to a matched
         * event:</simpara> <itemizedlist> <listitem> <simpara>If none of the following
         * arguments are specified for a target, then the entire event is passed to the
         * target in JSON form (unless the target is Amazon EC2 Run Command or Amazon ECS
         * task, in which case nothing from the event is passed to the target).</simpara>
         * </listitem> <listitem> <simpara>If <emphasis role="bold">Input</emphasis> is
         * specified in the form of valid JSON, then the matched event is overridden with
         * this constant.</simpara> </listitem> <listitem> <simpara>If <emphasis
         * role="bold">InputPath</emphasis> is specified in the form of JSONPath (for
         * example, <code>$.detail</code>), then only the part of the event specified in
         * the path is passed to the target (for example, only the detail part of the event
         * is passed). </simpara> </listitem> <listitem> <simpara>If <emphasis
         * role="bold">InputTransformer</emphasis> is specified, then one or more specified
         * JSONPaths are extracted from the event and used as values in a template that you
         * specify as the input to the target.</simpara> </listitem> </itemizedlist>
         * <simpara>When you add targets to a rule and the associated rule triggers soon
         * after, new or updated targets might not be immediately invoked. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they are already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered. Example targets include EC2 instances, AWS
         * Lambda functions, Amazon Kinesis streams, Amazon ECS tasks, AWS Step Functions
         * state machines, and built-in targets. Note that creating rules with built-in
         * targets is supported only in the AWS Management Console.</p> <p>For some target
         * types, <code>PutTargets</code> provides target-specific parameters. If the
         * target is an Amazon Kinesis stream, you can optionally specify which shard the
         * event goes to by using the <code>KinesisParameters</code> argument. To invoke a
         * command on multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Amazon Kinesis
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTarget</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
         * <p> <b>Input</b>, <b>InputPath</b> and <b>InputTransformer</b> are mutually
         * exclusive and optional parameters of a target. When a rule is triggered due to a
         * matched event:</p> <ul> <li> <p>If none of the following arguments are specified
         * for a target, then the entire event is passed to the target in JSON form (unless
         * the target is Amazon EC2 Run Command or Amazon ECS task, in which case nothing
         * from the event is passed to the target).</p> </li> <li> <p>If <b>Input</b> is
         * specified in the form of valid JSON, then the matched event is overridden with
         * this constant.</p> </li> <li> <p>If <b>InputPath</b> is specified in the form of
         * JSONPath (for example, <code>$.detail</code>), then only the part of the event
         * specified in the path is passed to the target (for example, only the detail part
         * of the event is passed). </p> </li> <li> <p>If <b>InputTransformer</b> is
         * specified, then one or more specified JSONPaths are extracted from the event and
         * used as values in a template that you specify as the input to the target.</p>
         * </li> </ul> <p>When you add targets to a rule and the associated rule triggers
         * soon after, new or updated targets might not be immediately invoked. Please
         * allow a short period of time for changes to take effect.</p> </xhtml>
         */
        virtual Model::PutTargetsOutcome PutTargets(const Model::PutTargetsRequest& request) const;

        /**
         * <zonbook> <simpara>Adds the specified targets to the specified rule, or updates
         * the targets if they are already associated with the rule.</simpara>
         * <simpara>Targets are the resources that are invoked when a rule is triggered.
         * Example targets include EC2 instances, AWS Lambda functions, Amazon Kinesis
         * streams, Amazon ECS tasks, AWS Step Functions state machines, and built-in
         * targets. Note that creating rules with built-in targets is supported only in the
         * AWS Management Console.</simpara> <simpara>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is an
         * Amazon Kinesis stream, you can optionally specify which shard the event goes to
         * by using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</simpara> <simpara>To be able to make
         * API calls against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Amazon Kinesis
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTarget</code>. For more information, see <ulink type="documentation"
         * url="AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</ulink> in the <emphasis>Amazon CloudWatch Events User
         * Guide</emphasis>.</simpara> <simpara> <emphasis role="bold">Input</emphasis>,
         * <emphasis role="bold">InputPath</emphasis> and <emphasis
         * role="bold">InputTransformer</emphasis> are mutually exclusive and optional
         * parameters of a target. When a rule is triggered due to a matched
         * event:</simpara> <itemizedlist> <listitem> <simpara>If none of the following
         * arguments are specified for a target, then the entire event is passed to the
         * target in JSON form (unless the target is Amazon EC2 Run Command or Amazon ECS
         * task, in which case nothing from the event is passed to the target).</simpara>
         * </listitem> <listitem> <simpara>If <emphasis role="bold">Input</emphasis> is
         * specified in the form of valid JSON, then the matched event is overridden with
         * this constant.</simpara> </listitem> <listitem> <simpara>If <emphasis
         * role="bold">InputPath</emphasis> is specified in the form of JSONPath (for
         * example, <code>$.detail</code>), then only the part of the event specified in
         * the path is passed to the target (for example, only the detail part of the event
         * is passed). </simpara> </listitem> <listitem> <simpara>If <emphasis
         * role="bold">InputTransformer</emphasis> is specified, then one or more specified
         * JSONPaths are extracted from the event and used as values in a template that you
         * specify as the input to the target.</simpara> </listitem> </itemizedlist>
         * <simpara>When you add targets to a rule and the associated rule triggers soon
         * after, new or updated targets might not be immediately invoked. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they are already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered. Example targets include EC2 instances, AWS
         * Lambda functions, Amazon Kinesis streams, Amazon ECS tasks, AWS Step Functions
         * state machines, and built-in targets. Note that creating rules with built-in
         * targets is supported only in the AWS Management Console.</p> <p>For some target
         * types, <code>PutTargets</code> provides target-specific parameters. If the
         * target is an Amazon Kinesis stream, you can optionally specify which shard the
         * event goes to by using the <code>KinesisParameters</code> argument. To invoke a
         * command on multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Amazon Kinesis
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTarget</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
         * <p> <b>Input</b>, <b>InputPath</b> and <b>InputTransformer</b> are mutually
         * exclusive and optional parameters of a target. When a rule is triggered due to a
         * matched event:</p> <ul> <li> <p>If none of the following arguments are specified
         * for a target, then the entire event is passed to the target in JSON form (unless
         * the target is Amazon EC2 Run Command or Amazon ECS task, in which case nothing
         * from the event is passed to the target).</p> </li> <li> <p>If <b>Input</b> is
         * specified in the form of valid JSON, then the matched event is overridden with
         * this constant.</p> </li> <li> <p>If <b>InputPath</b> is specified in the form of
         * JSONPath (for example, <code>$.detail</code>), then only the part of the event
         * specified in the path is passed to the target (for example, only the detail part
         * of the event is passed). </p> </li> <li> <p>If <b>InputTransformer</b> is
         * specified, then one or more specified JSONPaths are extracted from the event and
         * used as values in a template that you specify as the input to the target.</p>
         * </li> </ul> <p>When you add targets to a rule and the associated rule triggers
         * soon after, new or updated targets might not be immediately invoked. Please
         * allow a short period of time for changes to take effect.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutTargetsOutcomeCallable PutTargetsCallable(const Model::PutTargetsRequest& request) const;

        /**
         * <zonbook> <simpara>Adds the specified targets to the specified rule, or updates
         * the targets if they are already associated with the rule.</simpara>
         * <simpara>Targets are the resources that are invoked when a rule is triggered.
         * Example targets include EC2 instances, AWS Lambda functions, Amazon Kinesis
         * streams, Amazon ECS tasks, AWS Step Functions state machines, and built-in
         * targets. Note that creating rules with built-in targets is supported only in the
         * AWS Management Console.</simpara> <simpara>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is an
         * Amazon Kinesis stream, you can optionally specify which shard the event goes to
         * by using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</simpara> <simpara>To be able to make
         * API calls against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Amazon Kinesis
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTarget</code>. For more information, see <ulink type="documentation"
         * url="AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</ulink> in the <emphasis>Amazon CloudWatch Events User
         * Guide</emphasis>.</simpara> <simpara> <emphasis role="bold">Input</emphasis>,
         * <emphasis role="bold">InputPath</emphasis> and <emphasis
         * role="bold">InputTransformer</emphasis> are mutually exclusive and optional
         * parameters of a target. When a rule is triggered due to a matched
         * event:</simpara> <itemizedlist> <listitem> <simpara>If none of the following
         * arguments are specified for a target, then the entire event is passed to the
         * target in JSON form (unless the target is Amazon EC2 Run Command or Amazon ECS
         * task, in which case nothing from the event is passed to the target).</simpara>
         * </listitem> <listitem> <simpara>If <emphasis role="bold">Input</emphasis> is
         * specified in the form of valid JSON, then the matched event is overridden with
         * this constant.</simpara> </listitem> <listitem> <simpara>If <emphasis
         * role="bold">InputPath</emphasis> is specified in the form of JSONPath (for
         * example, <code>$.detail</code>), then only the part of the event specified in
         * the path is passed to the target (for example, only the detail part of the event
         * is passed). </simpara> </listitem> <listitem> <simpara>If <emphasis
         * role="bold">InputTransformer</emphasis> is specified, then one or more specified
         * JSONPaths are extracted from the event and used as values in a template that you
         * specify as the input to the target.</simpara> </listitem> </itemizedlist>
         * <simpara>When you add targets to a rule and the associated rule triggers soon
         * after, new or updated targets might not be immediately invoked. Please allow a
         * short period of time for changes to take effect.</simpara> </zonbook> <xhtml>
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they are already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered. Example targets include EC2 instances, AWS
         * Lambda functions, Amazon Kinesis streams, Amazon ECS tasks, AWS Step Functions
         * state machines, and built-in targets. Note that creating rules with built-in
         * targets is supported only in the AWS Management Console.</p> <p>For some target
         * types, <code>PutTargets</code> provides target-specific parameters. If the
         * target is an Amazon Kinesis stream, you can optionally specify which shard the
         * event goes to by using the <code>KinesisParameters</code> argument. To invoke a
         * command on multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon CloudWatch Events needs the
         * appropriate permissions. For AWS Lambda and Amazon SNS resources, CloudWatch
         * Events relies on resource-based policies. For EC2 instances, Amazon Kinesis
         * streams, and AWS Step Functions state machines, CloudWatch Events relies on IAM
         * roles that you specify in the <code>RoleARN</code> argument in
         * <code>PutTarget</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/auth-and-access-control-cwe.html">Authentication
         * and Access Control</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
         * <p> <b>Input</b>, <b>InputPath</b> and <b>InputTransformer</b> are mutually
         * exclusive and optional parameters of a target. When a rule is triggered due to a
         * matched event:</p> <ul> <li> <p>If none of the following arguments are specified
         * for a target, then the entire event is passed to the target in JSON form (unless
         * the target is Amazon EC2 Run Command or Amazon ECS task, in which case nothing
         * from the event is passed to the target).</p> </li> <li> <p>If <b>Input</b> is
         * specified in the form of valid JSON, then the matched event is overridden with
         * this constant.</p> </li> <li> <p>If <b>InputPath</b> is specified in the form of
         * JSONPath (for example, <code>$.detail</code>), then only the part of the event
         * specified in the path is passed to the target (for example, only the detail part
         * of the event is passed). </p> </li> <li> <p>If <b>InputTransformer</b> is
         * specified, then one or more specified JSONPaths are extracted from the event and
         * used as values in a template that you specify as the input to the target.</p>
         * </li> </ul> <p>When you add targets to a rule and the associated rule triggers
         * soon after, new or updated targets might not be immediately invoked. Please
         * allow a short period of time for changes to take effect.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutTargetsAsync(const Model::PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Removes the specified targets from the specified rule. When
         * the rule is triggered, those targets are no longer be invoked.</simpara>
         * <simpara>When you remove a target, when the associated rule triggers, removed
         * targets might continue to be invoked. Please allow a short period of time for
         * changes to take effect.</simpara> </zonbook> <xhtml> <p>Removes the specified
         * targets from the specified rule. When the rule is triggered, those targets are
         * no longer be invoked.</p> <p>When you remove a target, when the associated rule
         * triggers, removed targets might continue to be invoked. Please allow a short
         * period of time for changes to take effect.</p> </xhtml>
         */
        virtual Model::RemoveTargetsOutcome RemoveTargets(const Model::RemoveTargetsRequest& request) const;

        /**
         * <zonbook> <simpara>Removes the specified targets from the specified rule. When
         * the rule is triggered, those targets are no longer be invoked.</simpara>
         * <simpara>When you remove a target, when the associated rule triggers, removed
         * targets might continue to be invoked. Please allow a short period of time for
         * changes to take effect.</simpara> </zonbook> <xhtml> <p>Removes the specified
         * targets from the specified rule. When the rule is triggered, those targets are
         * no longer be invoked.</p> <p>When you remove a target, when the associated rule
         * triggers, removed targets might continue to be invoked. Please allow a short
         * period of time for changes to take effect.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTargetsOutcomeCallable RemoveTargetsCallable(const Model::RemoveTargetsRequest& request) const;

        /**
         * <zonbook> <simpara>Removes the specified targets from the specified rule. When
         * the rule is triggered, those targets are no longer be invoked.</simpara>
         * <simpara>When you remove a target, when the associated rule triggers, removed
         * targets might continue to be invoked. Please allow a short period of time for
         * changes to take effect.</simpara> </zonbook> <xhtml> <p>Removes the specified
         * targets from the specified rule. When the rule is triggered, those targets are
         * no longer be invoked.</p> <p>When you remove a target, when the associated rule
         * triggers, removed targets might continue to be invoked. Please allow a short
         * period of time for changes to take effect.</p> </xhtml>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTargetsAsync(const Model::RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <zonbook> <simpara>Tests whether the specified event pattern matches the
         * provided event.</simpara> <simpara>Most services in AWS treat : or / as the same
         * character in Amazon Resource Names (ARNs). However, CloudWatch Events uses an
         * exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match.</simpara> </zonbook> <xhtml> <p>Tests whether the
         * specified event pattern matches the provided event.</p> <p>Most services in AWS
         * treat : or / as the same character in Amazon Resource Names (ARNs). However,
         * CloudWatch Events uses an exact match in event patterns and rules. Be sure to
         * use the correct ARN characters when creating event patterns so that they match
         * the ARN syntax in the event you want to match.</p> </xhtml>
         */
        virtual Model::TestEventPatternOutcome TestEventPattern(const Model::TestEventPatternRequest& request) const;

        /**
         * <zonbook> <simpara>Tests whether the specified event pattern matches the
         * provided event.</simpara> <simpara>Most services in AWS treat : or / as the same
         * character in Amazon Resource Names (ARNs). However, CloudWatch Events uses an
         * exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match.</simpara> </zonbook> <xhtml> <p>Tests whether the
         * specified event pattern matches the provided event.</p> <p>Most services in AWS
         * treat : or / as the same character in Amazon Resource Names (ARNs). However,
         * CloudWatch Events uses an exact match in event patterns and rules. Be sure to
         * use the correct ARN characters when creating event patterns so that they match
         * the ARN syntax in the event you want to match.</p> </xhtml>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestEventPatternOutcomeCallable TestEventPatternCallable(const Model::TestEventPatternRequest& request) const;

        /**
         * <zonbook> <simpara>Tests whether the specified event pattern matches the
         * provided event.</simpara> <simpara>Most services in AWS treat : or / as the same
         * character in Amazon Resource Names (ARNs). However, CloudWatch Events uses an
         * exact match in event patterns and rules. Be sure to use the correct ARN
         * characters when creating event patterns so that they match the ARN syntax in the
         * event you want to match.</simpara> </zonbook> <xhtml> <p>Tests whether the
         * specified event pattern matches the provided event.</p> <p>Most services in AWS
         * treat : or / as the same character in Amazon Resource Names (ARNs). However,
         * CloudWatch Events uses an exact match in event patterns and rules. Be sure to
         * use the correct ARN characters when creating event patterns so that they match
         * the ARN syntax in the event you want to match.</p> </xhtml>
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
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatchEvents
} // namespace Aws
