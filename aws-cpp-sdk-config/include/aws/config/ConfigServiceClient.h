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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/config/model/DeleteEvaluationResultsResult.h>
#include <aws/config/model/DeliverConfigSnapshotResult.h>
#include <aws/config/model/DescribeComplianceByConfigRuleResult.h>
#include <aws/config/model/DescribeComplianceByResourceResult.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusResult.h>
#include <aws/config/model/DescribeConfigRulesResult.h>
#include <aws/config/model/DescribeConfigurationRecorderStatusResult.h>
#include <aws/config/model/DescribeConfigurationRecordersResult.h>
#include <aws/config/model/DescribeDeliveryChannelStatusResult.h>
#include <aws/config/model/DescribeDeliveryChannelsResult.h>
#include <aws/config/model/GetComplianceDetailsByConfigRuleResult.h>
#include <aws/config/model/GetComplianceDetailsByResourceResult.h>
#include <aws/config/model/GetComplianceSummaryByConfigRuleResult.h>
#include <aws/config/model/GetComplianceSummaryByResourceTypeResult.h>
#include <aws/config/model/GetResourceConfigHistoryResult.h>
#include <aws/config/model/ListDiscoveredResourcesResult.h>
#include <aws/config/model/PutEvaluationsResult.h>
#include <aws/config/model/StartConfigRulesEvaluationResult.h>
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

namespace ConfigService
{

namespace Model
{
        class DeleteConfigRuleRequest;
        class DeleteConfigurationRecorderRequest;
        class DeleteDeliveryChannelRequest;
        class DeleteEvaluationResultsRequest;
        class DeliverConfigSnapshotRequest;
        class DescribeComplianceByConfigRuleRequest;
        class DescribeComplianceByResourceRequest;
        class DescribeConfigRuleEvaluationStatusRequest;
        class DescribeConfigRulesRequest;
        class DescribeConfigurationRecorderStatusRequest;
        class DescribeConfigurationRecordersRequest;
        class DescribeDeliveryChannelStatusRequest;
        class DescribeDeliveryChannelsRequest;
        class GetComplianceDetailsByConfigRuleRequest;
        class GetComplianceDetailsByResourceRequest;
        class GetComplianceSummaryByResourceTypeRequest;
        class GetResourceConfigHistoryRequest;
        class ListDiscoveredResourcesRequest;
        class PutConfigRuleRequest;
        class PutConfigurationRecorderRequest;
        class PutDeliveryChannelRequest;
        class PutEvaluationsRequest;
        class StartConfigRulesEvaluationRequest;
        class StartConfigurationRecorderRequest;
        class StopConfigurationRecorderRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteConfigRuleOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteConfigurationRecorderOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteDeliveryChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteEvaluationResultsResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteEvaluationResultsOutcome;
        typedef Aws::Utils::Outcome<DeliverConfigSnapshotResult, Aws::Client::AWSError<ConfigServiceErrors>> DeliverConfigSnapshotOutcome;
        typedef Aws::Utils::Outcome<DescribeComplianceByConfigRuleResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeComplianceByConfigRuleOutcome;
        typedef Aws::Utils::Outcome<DescribeComplianceByResourceResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeComplianceByResourceOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigRuleEvaluationStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigRuleEvaluationStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigRulesResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigRulesOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationRecorderStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigurationRecorderStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationRecordersResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigurationRecordersOutcome;
        typedef Aws::Utils::Outcome<DescribeDeliveryChannelStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeDeliveryChannelStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeDeliveryChannelsResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeDeliveryChannelsOutcome;
        typedef Aws::Utils::Outcome<GetComplianceDetailsByConfigRuleResult, Aws::Client::AWSError<ConfigServiceErrors>> GetComplianceDetailsByConfigRuleOutcome;
        typedef Aws::Utils::Outcome<GetComplianceDetailsByResourceResult, Aws::Client::AWSError<ConfigServiceErrors>> GetComplianceDetailsByResourceOutcome;
        typedef Aws::Utils::Outcome<GetComplianceSummaryByConfigRuleResult, Aws::Client::AWSError<ConfigServiceErrors>> GetComplianceSummaryByConfigRuleOutcome;
        typedef Aws::Utils::Outcome<GetComplianceSummaryByResourceTypeResult, Aws::Client::AWSError<ConfigServiceErrors>> GetComplianceSummaryByResourceTypeOutcome;
        typedef Aws::Utils::Outcome<GetResourceConfigHistoryResult, Aws::Client::AWSError<ConfigServiceErrors>> GetResourceConfigHistoryOutcome;
        typedef Aws::Utils::Outcome<ListDiscoveredResourcesResult, Aws::Client::AWSError<ConfigServiceErrors>> ListDiscoveredResourcesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ConfigServiceErrors>> PutConfigRuleOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ConfigServiceErrors>> PutConfigurationRecorderOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ConfigServiceErrors>> PutDeliveryChannelOutcome;
        typedef Aws::Utils::Outcome<PutEvaluationsResult, Aws::Client::AWSError<ConfigServiceErrors>> PutEvaluationsOutcome;
        typedef Aws::Utils::Outcome<StartConfigRulesEvaluationResult, Aws::Client::AWSError<ConfigServiceErrors>> StartConfigRulesEvaluationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ConfigServiceErrors>> StartConfigurationRecorderOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<ConfigServiceErrors>> StopConfigurationRecorderOutcome;

        typedef std::future<DeleteConfigRuleOutcome> DeleteConfigRuleOutcomeCallable;
        typedef std::future<DeleteConfigurationRecorderOutcome> DeleteConfigurationRecorderOutcomeCallable;
        typedef std::future<DeleteDeliveryChannelOutcome> DeleteDeliveryChannelOutcomeCallable;
        typedef std::future<DeleteEvaluationResultsOutcome> DeleteEvaluationResultsOutcomeCallable;
        typedef std::future<DeliverConfigSnapshotOutcome> DeliverConfigSnapshotOutcomeCallable;
        typedef std::future<DescribeComplianceByConfigRuleOutcome> DescribeComplianceByConfigRuleOutcomeCallable;
        typedef std::future<DescribeComplianceByResourceOutcome> DescribeComplianceByResourceOutcomeCallable;
        typedef std::future<DescribeConfigRuleEvaluationStatusOutcome> DescribeConfigRuleEvaluationStatusOutcomeCallable;
        typedef std::future<DescribeConfigRulesOutcome> DescribeConfigRulesOutcomeCallable;
        typedef std::future<DescribeConfigurationRecorderStatusOutcome> DescribeConfigurationRecorderStatusOutcomeCallable;
        typedef std::future<DescribeConfigurationRecordersOutcome> DescribeConfigurationRecordersOutcomeCallable;
        typedef std::future<DescribeDeliveryChannelStatusOutcome> DescribeDeliveryChannelStatusOutcomeCallable;
        typedef std::future<DescribeDeliveryChannelsOutcome> DescribeDeliveryChannelsOutcomeCallable;
        typedef std::future<GetComplianceDetailsByConfigRuleOutcome> GetComplianceDetailsByConfigRuleOutcomeCallable;
        typedef std::future<GetComplianceDetailsByResourceOutcome> GetComplianceDetailsByResourceOutcomeCallable;
        typedef std::future<GetComplianceSummaryByConfigRuleOutcome> GetComplianceSummaryByConfigRuleOutcomeCallable;
        typedef std::future<GetComplianceSummaryByResourceTypeOutcome> GetComplianceSummaryByResourceTypeOutcomeCallable;
        typedef std::future<GetResourceConfigHistoryOutcome> GetResourceConfigHistoryOutcomeCallable;
        typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
        typedef std::future<PutConfigRuleOutcome> PutConfigRuleOutcomeCallable;
        typedef std::future<PutConfigurationRecorderOutcome> PutConfigurationRecorderOutcomeCallable;
        typedef std::future<PutDeliveryChannelOutcome> PutDeliveryChannelOutcomeCallable;
        typedef std::future<PutEvaluationsOutcome> PutEvaluationsOutcomeCallable;
        typedef std::future<StartConfigRulesEvaluationOutcome> StartConfigRulesEvaluationOutcomeCallable;
        typedef std::future<StartConfigurationRecorderOutcome> StartConfigurationRecorderOutcomeCallable;
        typedef std::future<StopConfigurationRecorderOutcome> StopConfigurationRecorderOutcomeCallable;
} // namespace Model

  class ConfigServiceClient;

    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConfigRuleRequest&, const Model::DeleteConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConfigurationRecorderRequest&, const Model::DeleteConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteDeliveryChannelRequest&, const Model::DeleteDeliveryChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliveryChannelResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteEvaluationResultsRequest&, const Model::DeleteEvaluationResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEvaluationResultsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeliverConfigSnapshotRequest&, const Model::DeliverConfigSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeliverConfigSnapshotResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeComplianceByConfigRuleRequest&, const Model::DescribeComplianceByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComplianceByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeComplianceByResourceRequest&, const Model::DescribeComplianceByResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComplianceByResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigRuleEvaluationStatusRequest&, const Model::DescribeConfigRuleEvaluationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigRuleEvaluationStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigRulesRequest&, const Model::DescribeConfigRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigRulesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationRecorderStatusRequest&, const Model::DescribeConfigurationRecorderStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRecorderStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationRecordersRequest&, const Model::DescribeConfigurationRecordersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRecordersResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeDeliveryChannelStatusRequest&, const Model::DescribeDeliveryChannelStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryChannelStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeDeliveryChannelsRequest&, const Model::DescribeDeliveryChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryChannelsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceDetailsByConfigRuleRequest&, const Model::GetComplianceDetailsByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailsByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceDetailsByResourceRequest&, const Model::GetComplianceDetailsByResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailsByResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceSummaryByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceSummaryByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceSummaryByResourceTypeRequest&, const Model::GetComplianceSummaryByResourceTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceSummaryByResourceTypeResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetResourceConfigHistoryRequest&, const Model::GetResourceConfigHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceConfigHistoryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListDiscoveredResourcesRequest&, const Model::ListDiscoveredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDiscoveredResourcesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConfigRuleRequest&, const Model::PutConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConfigurationRecorderRequest&, const Model::PutConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutDeliveryChannelRequest&, const Model::PutDeliveryChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliveryChannelResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutEvaluationsRequest&, const Model::PutEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEvaluationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartConfigRulesEvaluationRequest&, const Model::StartConfigRulesEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigRulesEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartConfigurationRecorderRequest&, const Model::StartConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StopConfigurationRecorderRequest&, const Model::StopConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopConfigurationRecorderResponseReceivedHandler;

  /**
   * <fullname>AWS Config</fullname> <p>AWS Config provides a way to keep track of
   * the configurations of all the AWS resources associated with your AWS account.
   * You can use AWS Config to get the current and historical configurations of each
   * AWS resource and also to get information about the relationship between the
   * resources. An AWS resource can be an Amazon Compute Cloud (Amazon EC2) instance,
   * an Elastic Block Store (EBS) volume, an Elastic network Interface (ENI), or a
   * security group. For a complete list of resources currently supported by AWS
   * Config, see <a
   * href="http://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
   * AWS Resources</a>.</p> <p>You can access and manage AWS Config through the AWS
   * Management Console, the AWS Command Line Interface (AWS CLI), the AWS Config
   * API, or the AWS SDKs for AWS Config</p> <p>This reference guide contains
   * documentation for the AWS Config API and the AWS CLI commands that you can use
   * to manage AWS Config.</p> <p>The AWS Config API uses the Signature Version 4
   * protocol for signing requests. For more information about how to sign a request
   * with this protocol, see <a
   * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a>.</p> <p>For detailed information about AWS Config
   * features and their associated actions or commands, as well as how to work with
   * AWS Management Console, see <a
   * href="http://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What
   * Is AWS Config?</a> in the <i>AWS Config Developer Guide</i>.</p>
   */
  class AWS_CONFIGSERVICE_API ConfigServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConfigServiceClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~ConfigServiceClient();

        /**
         * <p>Deletes the specified AWS Config rule and all of its evaluation results.</p>
         * <p>AWS Config sets the state of a rule to <code>DELETING</code> until the
         * deletion is complete. You cannot update a rule while it is in this state. If you
         * make a <code>PutConfigRule</code> or <code>DeleteConfigRule</code> request for
         * the rule, you will receive a <code>ResourceInUseException</code>.</p> <p>You can
         * check the state of a rule by using the <code>DescribeConfigRules</code>
         * request.</p>
         */
        virtual Model::DeleteConfigRuleOutcome DeleteConfigRule(const Model::DeleteConfigRuleRequest& request) const;

        /**
         * <p>Deletes the specified AWS Config rule and all of its evaluation results.</p>
         * <p>AWS Config sets the state of a rule to <code>DELETING</code> until the
         * deletion is complete. You cannot update a rule while it is in this state. If you
         * make a <code>PutConfigRule</code> or <code>DeleteConfigRule</code> request for
         * the rule, you will receive a <code>ResourceInUseException</code>.</p> <p>You can
         * check the state of a rule by using the <code>DescribeConfigRules</code>
         * request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigRuleOutcomeCallable DeleteConfigRuleCallable(const Model::DeleteConfigRuleRequest& request) const;

        /**
         * <p>Deletes the specified AWS Config rule and all of its evaluation results.</p>
         * <p>AWS Config sets the state of a rule to <code>DELETING</code> until the
         * deletion is complete. You cannot update a rule while it is in this state. If you
         * make a <code>PutConfigRule</code> or <code>DeleteConfigRule</code> request for
         * the rule, you will receive a <code>ResourceInUseException</code>.</p> <p>You can
         * check the state of a rule by using the <code>DescribeConfigRules</code>
         * request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigRuleAsync(const Model::DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the configuration recorder.</p> <p>After the configuration recorder
         * is deleted, AWS Config will not record resource configuration changes until you
         * create a new configuration recorder.</p> <p>This action does not delete the
         * configuration information that was previously recorded. You will be able to
         * access the previously recorded information by using the
         * <code>GetResourceConfigHistory</code> action, but you will not be able to access
         * this information in the AWS Config console until you create a new configuration
         * recorder.</p>
         */
        virtual Model::DeleteConfigurationRecorderOutcome DeleteConfigurationRecorder(const Model::DeleteConfigurationRecorderRequest& request) const;

        /**
         * <p>Deletes the configuration recorder.</p> <p>After the configuration recorder
         * is deleted, AWS Config will not record resource configuration changes until you
         * create a new configuration recorder.</p> <p>This action does not delete the
         * configuration information that was previously recorded. You will be able to
         * access the previously recorded information by using the
         * <code>GetResourceConfigHistory</code> action, but you will not be able to access
         * this information in the AWS Config console until you create a new configuration
         * recorder.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationRecorderOutcomeCallable DeleteConfigurationRecorderCallable(const Model::DeleteConfigurationRecorderRequest& request) const;

        /**
         * <p>Deletes the configuration recorder.</p> <p>After the configuration recorder
         * is deleted, AWS Config will not record resource configuration changes until you
         * create a new configuration recorder.</p> <p>This action does not delete the
         * configuration information that was previously recorded. You will be able to
         * access the previously recorded information by using the
         * <code>GetResourceConfigHistory</code> action, but you will not be able to access
         * this information in the AWS Config console until you create a new configuration
         * recorder.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationRecorderAsync(const Model::DeleteConfigurationRecorderRequest& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the delivery channel.</p> <p>Before you can delete the delivery
         * channel, you must stop the configuration recorder by using the
         * <a>StopConfigurationRecorder</a> action.</p>
         */
        virtual Model::DeleteDeliveryChannelOutcome DeleteDeliveryChannel(const Model::DeleteDeliveryChannelRequest& request) const;

        /**
         * <p>Deletes the delivery channel.</p> <p>Before you can delete the delivery
         * channel, you must stop the configuration recorder by using the
         * <a>StopConfigurationRecorder</a> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeliveryChannelOutcomeCallable DeleteDeliveryChannelCallable(const Model::DeleteDeliveryChannelRequest& request) const;

        /**
         * <p>Deletes the delivery channel.</p> <p>Before you can delete the delivery
         * channel, you must stop the configuration recorder by using the
         * <a>StopConfigurationRecorder</a> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeliveryChannelAsync(const Model::DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the evaluation results for the specified Config rule. You can specify
         * one Config rule per request. After you delete the evaluation results, you can
         * call the <a>StartConfigRulesEvaluation</a> API to start evaluating your AWS
         * resources against the rule.</p>
         */
        virtual Model::DeleteEvaluationResultsOutcome DeleteEvaluationResults(const Model::DeleteEvaluationResultsRequest& request) const;

        /**
         * <p>Deletes the evaluation results for the specified Config rule. You can specify
         * one Config rule per request. After you delete the evaluation results, you can
         * call the <a>StartConfigRulesEvaluation</a> API to start evaluating your AWS
         * resources against the rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEvaluationResultsOutcomeCallable DeleteEvaluationResultsCallable(const Model::DeleteEvaluationResultsRequest& request) const;

        /**
         * <p>Deletes the evaluation results for the specified Config rule. You can specify
         * one Config rule per request. After you delete the evaluation results, you can
         * call the <a>StartConfigRulesEvaluation</a> API to start evaluating your AWS
         * resources against the rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEvaluationResultsAsync(const Model::DeleteEvaluationResultsRequest& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the
         * specified delivery channel. After the delivery has started, AWS Config sends
         * following notifications using an Amazon SNS topic that you have specified.</p>
         * <ul> <li> <p>Notification of starting the delivery.</p> </li> <li>
         * <p>Notification of delivery completed, if the delivery was successfully
         * completed.</p> </li> <li> <p>Notification of delivery failure, if the delivery
         * failed to complete.</p> </li> </ul>
         */
        virtual Model::DeliverConfigSnapshotOutcome DeliverConfigSnapshot(const Model::DeliverConfigSnapshotRequest& request) const;

        /**
         * <p>Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the
         * specified delivery channel. After the delivery has started, AWS Config sends
         * following notifications using an Amazon SNS topic that you have specified.</p>
         * <ul> <li> <p>Notification of starting the delivery.</p> </li> <li>
         * <p>Notification of delivery completed, if the delivery was successfully
         * completed.</p> </li> <li> <p>Notification of delivery failure, if the delivery
         * failed to complete.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeliverConfigSnapshotOutcomeCallable DeliverConfigSnapshotCallable(const Model::DeliverConfigSnapshotRequest& request) const;

        /**
         * <p>Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the
         * specified delivery channel. After the delivery has started, AWS Config sends
         * following notifications using an Amazon SNS topic that you have specified.</p>
         * <ul> <li> <p>Notification of starting the delivery.</p> </li> <li>
         * <p>Notification of delivery completed, if the delivery was successfully
         * completed.</p> </li> <li> <p>Notification of delivery failure, if the delivery
         * failed to complete.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeliverConfigSnapshotAsync(const Model::DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Indicates whether the specified AWS Config rules are compliant. If a rule is
         * noncompliant, this action returns the number of AWS resources that do not comply
         * with the rule.</p> <p>A rule is compliant if all of the evaluated resources
         * comply with it, and it is noncompliant if any of these resources do not
         * comply.</p> <p>If AWS Config has no current evaluation results for the rule, it
         * returns <code>INSUFFICIENT_DATA</code>. This result might indicate one of the
         * following conditions:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul>
         */
        virtual Model::DescribeComplianceByConfigRuleOutcome DescribeComplianceByConfigRule(const Model::DescribeComplianceByConfigRuleRequest& request) const;

        /**
         * <p>Indicates whether the specified AWS Config rules are compliant. If a rule is
         * noncompliant, this action returns the number of AWS resources that do not comply
         * with the rule.</p> <p>A rule is compliant if all of the evaluated resources
         * comply with it, and it is noncompliant if any of these resources do not
         * comply.</p> <p>If AWS Config has no current evaluation results for the rule, it
         * returns <code>INSUFFICIENT_DATA</code>. This result might indicate one of the
         * following conditions:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComplianceByConfigRuleOutcomeCallable DescribeComplianceByConfigRuleCallable(const Model::DescribeComplianceByConfigRuleRequest& request) const;

        /**
         * <p>Indicates whether the specified AWS Config rules are compliant. If a rule is
         * noncompliant, this action returns the number of AWS resources that do not comply
         * with the rule.</p> <p>A rule is compliant if all of the evaluated resources
         * comply with it, and it is noncompliant if any of these resources do not
         * comply.</p> <p>If AWS Config has no current evaluation results for the rule, it
         * returns <code>INSUFFICIENT_DATA</code>. This result might indicate one of the
         * following conditions:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComplianceByConfigRuleAsync(const Model::DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Indicates whether the specified AWS resources are compliant. If a resource is
         * noncompliant, this action returns the number of AWS Config rules that the
         * resource does not comply with.</p> <p>A resource is compliant if it complies
         * with all the AWS Config rules that evaluate it. It is noncompliant if it does
         * not comply with one or more of these rules.</p> <p>If AWS Config has no current
         * evaluation results for the resource, it returns <code>INSUFFICIENT_DATA</code>.
         * This result might indicate one of the following conditions about the rules that
         * evaluate the resource:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul>
         */
        virtual Model::DescribeComplianceByResourceOutcome DescribeComplianceByResource(const Model::DescribeComplianceByResourceRequest& request) const;

        /**
         * <p>Indicates whether the specified AWS resources are compliant. If a resource is
         * noncompliant, this action returns the number of AWS Config rules that the
         * resource does not comply with.</p> <p>A resource is compliant if it complies
         * with all the AWS Config rules that evaluate it. It is noncompliant if it does
         * not comply with one or more of these rules.</p> <p>If AWS Config has no current
         * evaluation results for the resource, it returns <code>INSUFFICIENT_DATA</code>.
         * This result might indicate one of the following conditions about the rules that
         * evaluate the resource:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComplianceByResourceOutcomeCallable DescribeComplianceByResourceCallable(const Model::DescribeComplianceByResourceRequest& request) const;

        /**
         * <p>Indicates whether the specified AWS resources are compliant. If a resource is
         * noncompliant, this action returns the number of AWS Config rules that the
         * resource does not comply with.</p> <p>A resource is compliant if it complies
         * with all the AWS Config rules that evaluate it. It is noncompliant if it does
         * not comply with one or more of these rules.</p> <p>If AWS Config has no current
         * evaluation results for the resource, it returns <code>INSUFFICIENT_DATA</code>.
         * This result might indicate one of the following conditions about the rules that
         * evaluate the resource:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComplianceByResourceAsync(const Model::DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns status information for each of your AWS managed Config rules. The
         * status includes information such as the last time AWS Config invoked the rule,
         * the last time AWS Config failed to invoke the rule, and the related error for
         * the last failure.</p>
         */
        virtual Model::DescribeConfigRuleEvaluationStatusOutcome DescribeConfigRuleEvaluationStatus(const Model::DescribeConfigRuleEvaluationStatusRequest& request) const;

        /**
         * <p>Returns status information for each of your AWS managed Config rules. The
         * status includes information such as the last time AWS Config invoked the rule,
         * the last time AWS Config failed to invoke the rule, and the related error for
         * the last failure.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigRuleEvaluationStatusOutcomeCallable DescribeConfigRuleEvaluationStatusCallable(const Model::DescribeConfigRuleEvaluationStatusRequest& request) const;

        /**
         * <p>Returns status information for each of your AWS managed Config rules. The
         * status includes information such as the last time AWS Config invoked the rule,
         * the last time AWS Config failed to invoke the rule, and the related error for
         * the last failure.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigRuleEvaluationStatusAsync(const Model::DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about your AWS Config rules.</p>
         */
        virtual Model::DescribeConfigRulesOutcome DescribeConfigRules(const Model::DescribeConfigRulesRequest& request) const;

        /**
         * <p>Returns details about your AWS Config rules.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigRulesOutcomeCallable DescribeConfigRulesCallable(const Model::DescribeConfigRulesRequest& request) const;

        /**
         * <p>Returns details about your AWS Config rules.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigRulesAsync(const Model::DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of the specified configuration recorder. If a
         * configuration recorder is not specified, this action returns the status of all
         * configuration recorder associated with the account.</p> <note> <p>Currently, you
         * can specify only one configuration recorder per region in your account.</p>
         * </note>
         */
        virtual Model::DescribeConfigurationRecorderStatusOutcome DescribeConfigurationRecorderStatus(const Model::DescribeConfigurationRecorderStatusRequest& request) const;

        /**
         * <p>Returns the current status of the specified configuration recorder. If a
         * configuration recorder is not specified, this action returns the status of all
         * configuration recorder associated with the account.</p> <note> <p>Currently, you
         * can specify only one configuration recorder per region in your account.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationRecorderStatusOutcomeCallable DescribeConfigurationRecorderStatusCallable(const Model::DescribeConfigurationRecorderStatusRequest& request) const;

        /**
         * <p>Returns the current status of the specified configuration recorder. If a
         * configuration recorder is not specified, this action returns the status of all
         * configuration recorder associated with the account.</p> <note> <p>Currently, you
         * can specify only one configuration recorder per region in your account.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationRecorderStatusAsync(const Model::DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details for the specified configuration recorders. If the
         * configuration recorder is not specified, this action returns the details for all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note>
         */
        virtual Model::DescribeConfigurationRecordersOutcome DescribeConfigurationRecorders(const Model::DescribeConfigurationRecordersRequest& request) const;

        /**
         * <p>Returns the details for the specified configuration recorders. If the
         * configuration recorder is not specified, this action returns the details for all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationRecordersOutcomeCallable DescribeConfigurationRecordersCallable(const Model::DescribeConfigurationRecordersRequest& request) const;

        /**
         * <p>Returns the details for the specified configuration recorders. If the
         * configuration recorder is not specified, this action returns the details for all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationRecordersAsync(const Model::DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of the specified delivery channel. If a delivery
         * channel is not specified, this action returns the current status of all delivery
         * channels associated with the account.</p> <note> <p>Currently, you can specify
         * only one delivery channel per region in your account.</p> </note>
         */
        virtual Model::DescribeDeliveryChannelStatusOutcome DescribeDeliveryChannelStatus(const Model::DescribeDeliveryChannelStatusRequest& request) const;

        /**
         * <p>Returns the current status of the specified delivery channel. If a delivery
         * channel is not specified, this action returns the current status of all delivery
         * channels associated with the account.</p> <note> <p>Currently, you can specify
         * only one delivery channel per region in your account.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeliveryChannelStatusOutcomeCallable DescribeDeliveryChannelStatusCallable(const Model::DescribeDeliveryChannelStatusRequest& request) const;

        /**
         * <p>Returns the current status of the specified delivery channel. If a delivery
         * channel is not specified, this action returns the current status of all delivery
         * channels associated with the account.</p> <note> <p>Currently, you can specify
         * only one delivery channel per region in your account.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeliveryChannelStatusAsync(const Model::DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about the specified delivery channel. If a delivery channel
         * is not specified, this action returns the details of all delivery channels
         * associated with the account.</p> <note> <p>Currently, you can specify only one
         * delivery channel per region in your account.</p> </note>
         */
        virtual Model::DescribeDeliveryChannelsOutcome DescribeDeliveryChannels(const Model::DescribeDeliveryChannelsRequest& request) const;

        /**
         * <p>Returns details about the specified delivery channel. If a delivery channel
         * is not specified, this action returns the details of all delivery channels
         * associated with the account.</p> <note> <p>Currently, you can specify only one
         * delivery channel per region in your account.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeliveryChannelsOutcomeCallable DescribeDeliveryChannelsCallable(const Model::DescribeDeliveryChannelsRequest& request) const;

        /**
         * <p>Returns details about the specified delivery channel. If a delivery channel
         * is not specified, this action returns the details of all delivery channels
         * associated with the account.</p> <note> <p>Currently, you can specify only one
         * delivery channel per region in your account.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeliveryChannelsAsync(const Model::DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule. The results
         * indicate which AWS resources were evaluated by the rule, when each resource was
         * last evaluated, and whether each resource complies with the rule.</p>
         */
        virtual Model::GetComplianceDetailsByConfigRuleOutcome GetComplianceDetailsByConfigRule(const Model::GetComplianceDetailsByConfigRuleRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule. The results
         * indicate which AWS resources were evaluated by the rule, when each resource was
         * last evaluated, and whether each resource complies with the rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceDetailsByConfigRuleOutcomeCallable GetComplianceDetailsByConfigRuleCallable(const Model::GetComplianceDetailsByConfigRuleRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule. The results
         * indicate which AWS resources were evaluated by the rule, when each resource was
         * last evaluated, and whether each resource complies with the rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceDetailsByConfigRuleAsync(const Model::GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the evaluation results for the specified AWS resource. The results
         * indicate which AWS Config rules were used to evaluate the resource, when each
         * rule was last used, and whether the resource complies with each rule.</p>
         */
        virtual Model::GetComplianceDetailsByResourceOutcome GetComplianceDetailsByResource(const Model::GetComplianceDetailsByResourceRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS resource. The results
         * indicate which AWS Config rules were used to evaluate the resource, when each
         * rule was last used, and whether the resource complies with each rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceDetailsByResourceOutcomeCallable GetComplianceDetailsByResourceCallable(const Model::GetComplianceDetailsByResourceRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS resource. The results
         * indicate which AWS Config rules were used to evaluate the resource, when each
         * rule was last used, and whether the resource complies with each rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceDetailsByResourceAsync(const Model::GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of AWS Config rules that are compliant and noncompliant,
         * up to a maximum of 25 for each.</p>
         */
        virtual Model::GetComplianceSummaryByConfigRuleOutcome GetComplianceSummaryByConfigRule() const;

        /**
         * <p>Returns the number of AWS Config rules that are compliant and noncompliant,
         * up to a maximum of 25 for each.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceSummaryByConfigRuleOutcomeCallable GetComplianceSummaryByConfigRuleCallable() const;

        /**
         * <p>Returns the number of AWS Config rules that are compliant and noncompliant,
         * up to a maximum of 25 for each.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceSummaryByConfigRuleAsync(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Returns the number of resources that are compliant and the number that are
         * noncompliant. You can specify one or more resource types to get these numbers
         * for each resource type. The maximum number returned is 100.</p>
         */
        virtual Model::GetComplianceSummaryByResourceTypeOutcome GetComplianceSummaryByResourceType(const Model::GetComplianceSummaryByResourceTypeRequest& request) const;

        /**
         * <p>Returns the number of resources that are compliant and the number that are
         * noncompliant. You can specify one or more resource types to get these numbers
         * for each resource type. The maximum number returned is 100.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceSummaryByResourceTypeOutcomeCallable GetComplianceSummaryByResourceTypeCallable(const Model::GetComplianceSummaryByResourceTypeRequest& request) const;

        /**
         * <p>Returns the number of resources that are compliant and the number that are
         * noncompliant. You can specify one or more resource types to get these numbers
         * for each resource type. The maximum number returned is 100.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceSummaryByResourceTypeAsync(const Model::GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of configuration items for the specified resource. The list
         * contains details about each state of the resource during the specified time
         * interval.</p> <p>The response is paginated, and by default, AWS Config returns a
         * limit of 10 configuration items per page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string, and to get the next page of results, run the request again and enter
         * this string for the <code>nextToken</code> parameter.</p> <note> <p>Each call to
         * the API is limited to span a duration of seven days. It is likely that the
         * number of records returned is smaller than the specified <code>limit</code>. In
         * such cases, you can make another call, using the <code>nextToken</code>.</p>
         * </note>
         */
        virtual Model::GetResourceConfigHistoryOutcome GetResourceConfigHistory(const Model::GetResourceConfigHistoryRequest& request) const;

        /**
         * <p>Returns a list of configuration items for the specified resource. The list
         * contains details about each state of the resource during the specified time
         * interval.</p> <p>The response is paginated, and by default, AWS Config returns a
         * limit of 10 configuration items per page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string, and to get the next page of results, run the request again and enter
         * this string for the <code>nextToken</code> parameter.</p> <note> <p>Each call to
         * the API is limited to span a duration of seven days. It is likely that the
         * number of records returned is smaller than the specified <code>limit</code>. In
         * such cases, you can make another call, using the <code>nextToken</code>.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceConfigHistoryOutcomeCallable GetResourceConfigHistoryCallable(const Model::GetResourceConfigHistoryRequest& request) const;

        /**
         * <p>Returns a list of configuration items for the specified resource. The list
         * contains details about each state of the resource during the specified time
         * interval.</p> <p>The response is paginated, and by default, AWS Config returns a
         * limit of 10 configuration items per page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string, and to get the next page of results, run the request again and enter
         * this string for the <code>nextToken</code> parameter.</p> <note> <p>Each call to
         * the API is limited to span a duration of seven days. It is likely that the
         * number of records returned is smaller than the specified <code>limit</code>. In
         * such cases, you can make another call, using the <code>nextToken</code>.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceConfigHistoryAsync(const Model::GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers for the
         * resources of that type. A resource identifier includes the resource type, ID,
         * and (if available) the custom resource name. The results consist of resources
         * that AWS Config has discovered, including those that AWS Config is not currently
         * recording. You can narrow the results to include only resources that have
         * specific resource IDs or a resource name.</p> <note> <p>You can specify either
         * resource IDs or a resource name but not both in the same request.</p> </note>
         * <p>The response is paginated, and by default AWS Config lists 100 resource
         * identifiers on each page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string, and to get the next page of results, run the request again and enter
         * this string for the <code>nextToken</code> parameter.</p>
         */
        virtual Model::ListDiscoveredResourcesOutcome ListDiscoveredResources(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers for the
         * resources of that type. A resource identifier includes the resource type, ID,
         * and (if available) the custom resource name. The results consist of resources
         * that AWS Config has discovered, including those that AWS Config is not currently
         * recording. You can narrow the results to include only resources that have
         * specific resource IDs or a resource name.</p> <note> <p>You can specify either
         * resource IDs or a resource name but not both in the same request.</p> </note>
         * <p>The response is paginated, and by default AWS Config lists 100 resource
         * identifiers on each page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string, and to get the next page of results, run the request again and enter
         * this string for the <code>nextToken</code> parameter.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDiscoveredResourcesOutcomeCallable ListDiscoveredResourcesCallable(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers for the
         * resources of that type. A resource identifier includes the resource type, ID,
         * and (if available) the custom resource name. The results consist of resources
         * that AWS Config has discovered, including those that AWS Config is not currently
         * recording. You can narrow the results to include only resources that have
         * specific resource IDs or a resource name.</p> <note> <p>You can specify either
         * resource IDs or a resource name but not both in the same request.</p> </note>
         * <p>The response is paginated, and by default AWS Config lists 100 resource
         * identifiers on each page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string, and to get the next page of results, run the request again and enter
         * this string for the <code>nextToken</code> parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDiscoveredResourcesAsync(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an AWS Config rule for evaluating whether your AWS resources
         * comply with your desired configurations.</p> <p>You can use this action for
         * custom Config rules and AWS managed Config rules. A custom Config rule is a rule
         * that you develop and maintain. An AWS managed Config rule is a customizable,
         * predefined rule that AWS Config provides.</p> <p>If you are adding a new custom
         * Config rule, you must first create the AWS Lambda function that the rule invokes
         * to evaluate your resources. When you use the <code>PutConfigRule</code> action
         * to add the rule to AWS Config, you must specify the Amazon Resource Name (ARN)
         * that AWS Lambda assigns to the function. Specify the ARN for the
         * <code>SourceIdentifier</code> key. This key is part of the <code>Source</code>
         * object, which is part of the <code>ConfigRule</code> object. </p> <p>If you are
         * adding a new AWS managed Config rule, specify the rule's identifier for the
         * <code>SourceIdentifier</code> key. To reference AWS managed Config rule
         * identifiers, see <a
         * href="http://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Using
         * AWS Managed Config Rules</a>.</p> <p>For any new rule that you add, specify the
         * <code>ConfigRuleName</code> in the <code>ConfigRule</code> object. Do not
         * specify the <code>ConfigRuleArn</code> or the <code>ConfigRuleId</code>. These
         * values are generated by AWS Config for new rules.</p> <p>If you are updating a
         * rule that you added previously, you can specify the rule by
         * <code>ConfigRuleName</code>, <code>ConfigRuleId</code>, or
         * <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use
         * in this request.</p> <p>The maximum number of rules that AWS Config supports is
         * 25.</p> <p>For more information about developing and using AWS Config rules, see
         * <a
         * href="http://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
         * AWS Resource Configurations with AWS Config</a> in the <i>AWS Config Developer
         * Guide</i>.</p>
         */
        virtual Model::PutConfigRuleOutcome PutConfigRule(const Model::PutConfigRuleRequest& request) const;

        /**
         * <p>Adds or updates an AWS Config rule for evaluating whether your AWS resources
         * comply with your desired configurations.</p> <p>You can use this action for
         * custom Config rules and AWS managed Config rules. A custom Config rule is a rule
         * that you develop and maintain. An AWS managed Config rule is a customizable,
         * predefined rule that AWS Config provides.</p> <p>If you are adding a new custom
         * Config rule, you must first create the AWS Lambda function that the rule invokes
         * to evaluate your resources. When you use the <code>PutConfigRule</code> action
         * to add the rule to AWS Config, you must specify the Amazon Resource Name (ARN)
         * that AWS Lambda assigns to the function. Specify the ARN for the
         * <code>SourceIdentifier</code> key. This key is part of the <code>Source</code>
         * object, which is part of the <code>ConfigRule</code> object. </p> <p>If you are
         * adding a new AWS managed Config rule, specify the rule's identifier for the
         * <code>SourceIdentifier</code> key. To reference AWS managed Config rule
         * identifiers, see <a
         * href="http://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Using
         * AWS Managed Config Rules</a>.</p> <p>For any new rule that you add, specify the
         * <code>ConfigRuleName</code> in the <code>ConfigRule</code> object. Do not
         * specify the <code>ConfigRuleArn</code> or the <code>ConfigRuleId</code>. These
         * values are generated by AWS Config for new rules.</p> <p>If you are updating a
         * rule that you added previously, you can specify the rule by
         * <code>ConfigRuleName</code>, <code>ConfigRuleId</code>, or
         * <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use
         * in this request.</p> <p>The maximum number of rules that AWS Config supports is
         * 25.</p> <p>For more information about developing and using AWS Config rules, see
         * <a
         * href="http://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
         * AWS Resource Configurations with AWS Config</a> in the <i>AWS Config Developer
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigRuleOutcomeCallable PutConfigRuleCallable(const Model::PutConfigRuleRequest& request) const;

        /**
         * <p>Adds or updates an AWS Config rule for evaluating whether your AWS resources
         * comply with your desired configurations.</p> <p>You can use this action for
         * custom Config rules and AWS managed Config rules. A custom Config rule is a rule
         * that you develop and maintain. An AWS managed Config rule is a customizable,
         * predefined rule that AWS Config provides.</p> <p>If you are adding a new custom
         * Config rule, you must first create the AWS Lambda function that the rule invokes
         * to evaluate your resources. When you use the <code>PutConfigRule</code> action
         * to add the rule to AWS Config, you must specify the Amazon Resource Name (ARN)
         * that AWS Lambda assigns to the function. Specify the ARN for the
         * <code>SourceIdentifier</code> key. This key is part of the <code>Source</code>
         * object, which is part of the <code>ConfigRule</code> object. </p> <p>If you are
         * adding a new AWS managed Config rule, specify the rule's identifier for the
         * <code>SourceIdentifier</code> key. To reference AWS managed Config rule
         * identifiers, see <a
         * href="http://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Using
         * AWS Managed Config Rules</a>.</p> <p>For any new rule that you add, specify the
         * <code>ConfigRuleName</code> in the <code>ConfigRule</code> object. Do not
         * specify the <code>ConfigRuleArn</code> or the <code>ConfigRuleId</code>. These
         * values are generated by AWS Config for new rules.</p> <p>If you are updating a
         * rule that you added previously, you can specify the rule by
         * <code>ConfigRuleName</code>, <code>ConfigRuleId</code>, or
         * <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use
         * in this request.</p> <p>The maximum number of rules that AWS Config supports is
         * 25.</p> <p>For more information about developing and using AWS Config rules, see
         * <a
         * href="http://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
         * AWS Resource Configurations with AWS Config</a> in the <i>AWS Config Developer
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigRuleAsync(const Model::PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new configuration recorder to record the selected resource
         * configurations.</p> <p>You can use this action to change the role
         * <code>roleARN</code> and/or the <code>recordingGroup</code> of an existing
         * recorder. To change the role, call the action on the existing configuration
         * recorder and specify a role.</p> <note> <p>Currently, you can specify only one
         * configuration recorder per region in your account.</p> <p>If
         * <code>ConfigurationRecorder</code> does not have the <b>recordingGroup</b>
         * parameter specified, the default is to record all supported resource types.</p>
         * </note>
         */
        virtual Model::PutConfigurationRecorderOutcome PutConfigurationRecorder(const Model::PutConfigurationRecorderRequest& request) const;

        /**
         * <p>Creates a new configuration recorder to record the selected resource
         * configurations.</p> <p>You can use this action to change the role
         * <code>roleARN</code> and/or the <code>recordingGroup</code> of an existing
         * recorder. To change the role, call the action on the existing configuration
         * recorder and specify a role.</p> <note> <p>Currently, you can specify only one
         * configuration recorder per region in your account.</p> <p>If
         * <code>ConfigurationRecorder</code> does not have the <b>recordingGroup</b>
         * parameter specified, the default is to record all supported resource types.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationRecorderOutcomeCallable PutConfigurationRecorderCallable(const Model::PutConfigurationRecorderRequest& request) const;

        /**
         * <p>Creates a new configuration recorder to record the selected resource
         * configurations.</p> <p>You can use this action to change the role
         * <code>roleARN</code> and/or the <code>recordingGroup</code> of an existing
         * recorder. To change the role, call the action on the existing configuration
         * recorder and specify a role.</p> <note> <p>Currently, you can specify only one
         * configuration recorder per region in your account.</p> <p>If
         * <code>ConfigurationRecorder</code> does not have the <b>recordingGroup</b>
         * parameter specified, the default is to record all supported resource types.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationRecorderAsync(const Model::PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a delivery channel object to deliver configuration information to an
         * Amazon S3 bucket and Amazon SNS topic.</p> <p>Before you can create a delivery
         * channel, you must create a configuration recorder.</p> <p>You can use this
         * action to change the Amazon S3 bucket or an Amazon SNS topic of the existing
         * delivery channel. To change the Amazon S3 bucket or an Amazon SNS topic, call
         * this action and specify the changed values for the S3 bucket and the SNS topic.
         * If you specify a different value for either the S3 bucket or the SNS topic, this
         * action will keep the existing value for the parameter that is not changed.</p>
         * <note> <p>You can have only one delivery channel per region in your account.</p>
         * </note>
         */
        virtual Model::PutDeliveryChannelOutcome PutDeliveryChannel(const Model::PutDeliveryChannelRequest& request) const;

        /**
         * <p>Creates a delivery channel object to deliver configuration information to an
         * Amazon S3 bucket and Amazon SNS topic.</p> <p>Before you can create a delivery
         * channel, you must create a configuration recorder.</p> <p>You can use this
         * action to change the Amazon S3 bucket or an Amazon SNS topic of the existing
         * delivery channel. To change the Amazon S3 bucket or an Amazon SNS topic, call
         * this action and specify the changed values for the S3 bucket and the SNS topic.
         * If you specify a different value for either the S3 bucket or the SNS topic, this
         * action will keep the existing value for the parameter that is not changed.</p>
         * <note> <p>You can have only one delivery channel per region in your account.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDeliveryChannelOutcomeCallable PutDeliveryChannelCallable(const Model::PutDeliveryChannelRequest& request) const;

        /**
         * <p>Creates a delivery channel object to deliver configuration information to an
         * Amazon S3 bucket and Amazon SNS topic.</p> <p>Before you can create a delivery
         * channel, you must create a configuration recorder.</p> <p>You can use this
         * action to change the Amazon S3 bucket or an Amazon SNS topic of the existing
         * delivery channel. To change the Amazon S3 bucket or an Amazon SNS topic, call
         * this action and specify the changed values for the S3 bucket and the SNS topic.
         * If you specify a different value for either the S3 bucket or the SNS topic, this
         * action will keep the existing value for the parameter that is not changed.</p>
         * <note> <p>You can have only one delivery channel per region in your account.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDeliveryChannelAsync(const Model::PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by an AWS Lambda function to deliver evaluation results to AWS Config.
         * This action is required in every AWS Lambda function that is invoked by an AWS
         * Config rule.</p>
         */
        virtual Model::PutEvaluationsOutcome PutEvaluations(const Model::PutEvaluationsRequest& request) const;

        /**
         * <p>Used by an AWS Lambda function to deliver evaluation results to AWS Config.
         * This action is required in every AWS Lambda function that is invoked by an AWS
         * Config rule.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEvaluationsOutcomeCallable PutEvaluationsCallable(const Model::PutEvaluationsRequest& request) const;

        /**
         * <p>Used by an AWS Lambda function to deliver evaluation results to AWS Config.
         * This action is required in every AWS Lambda function that is invoked by an AWS
         * Config rule.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEvaluationsAsync(const Model::PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Evaluates your resources against the specified Config rules. You can specify
         * up to 25 Config rules per request.</p> <p>An existing
         * <a>StartConfigRulesEvaluation</a> call must complete for the specified rules
         * before you can call the API again. If you chose to have AWS Config stream to an
         * Amazon SNS topic, you will receive a <code>ConfigRuleEvaluationStarted</code>
         * notification when the evaluation starts.</p> <note> <p>You don't need to call
         * the <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new
         * rule. When you create a new rule, AWS Config automatically evaluates your
         * resources against the rule. </p> </note> <p>The
         * <code>StartConfigRulesEvaluation</code> API is useful if you want to run
         * on-demand evaluations, such as the following example:</p> <ol> <li> <p>You have
         * a custom rule that evaluates your IAM resources every 24 hours.</p> </li> <li>
         * <p>You update your Lambda function to add additional conditions to your
         * rule.</p> </li> <li> <p>Instead of waiting for the next periodic evaluation, you
         * call the <code>StartConfigRulesEvaluation</code> API.</p> </li> <li> <p>AWS
         * Config invokes your Lambda function and evaluates your IAM resources.</p> </li>
         * <li> <p>Your custom rule will still run periodic evaluations every 24 hours.</p>
         * </li> </ol>
         */
        virtual Model::StartConfigRulesEvaluationOutcome StartConfigRulesEvaluation(const Model::StartConfigRulesEvaluationRequest& request) const;

        /**
         * <p>Evaluates your resources against the specified Config rules. You can specify
         * up to 25 Config rules per request.</p> <p>An existing
         * <a>StartConfigRulesEvaluation</a> call must complete for the specified rules
         * before you can call the API again. If you chose to have AWS Config stream to an
         * Amazon SNS topic, you will receive a <code>ConfigRuleEvaluationStarted</code>
         * notification when the evaluation starts.</p> <note> <p>You don't need to call
         * the <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new
         * rule. When you create a new rule, AWS Config automatically evaluates your
         * resources against the rule. </p> </note> <p>The
         * <code>StartConfigRulesEvaluation</code> API is useful if you want to run
         * on-demand evaluations, such as the following example:</p> <ol> <li> <p>You have
         * a custom rule that evaluates your IAM resources every 24 hours.</p> </li> <li>
         * <p>You update your Lambda function to add additional conditions to your
         * rule.</p> </li> <li> <p>Instead of waiting for the next periodic evaluation, you
         * call the <code>StartConfigRulesEvaluation</code> API.</p> </li> <li> <p>AWS
         * Config invokes your Lambda function and evaluates your IAM resources.</p> </li>
         * <li> <p>Your custom rule will still run periodic evaluations every 24 hours.</p>
         * </li> </ol>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartConfigRulesEvaluationOutcomeCallable StartConfigRulesEvaluationCallable(const Model::StartConfigRulesEvaluationRequest& request) const;

        /**
         * <p>Evaluates your resources against the specified Config rules. You can specify
         * up to 25 Config rules per request.</p> <p>An existing
         * <a>StartConfigRulesEvaluation</a> call must complete for the specified rules
         * before you can call the API again. If you chose to have AWS Config stream to an
         * Amazon SNS topic, you will receive a <code>ConfigRuleEvaluationStarted</code>
         * notification when the evaluation starts.</p> <note> <p>You don't need to call
         * the <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new
         * rule. When you create a new rule, AWS Config automatically evaluates your
         * resources against the rule. </p> </note> <p>The
         * <code>StartConfigRulesEvaluation</code> API is useful if you want to run
         * on-demand evaluations, such as the following example:</p> <ol> <li> <p>You have
         * a custom rule that evaluates your IAM resources every 24 hours.</p> </li> <li>
         * <p>You update your Lambda function to add additional conditions to your
         * rule.</p> </li> <li> <p>Instead of waiting for the next periodic evaluation, you
         * call the <code>StartConfigRulesEvaluation</code> API.</p> </li> <li> <p>AWS
         * Config invokes your Lambda function and evaluates your IAM resources.</p> </li>
         * <li> <p>Your custom rule will still run periodic evaluations every 24 hours.</p>
         * </li> </ol>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartConfigRulesEvaluationAsync(const Model::StartConfigRulesEvaluationRequest& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p> <p>You must have created at least one delivery
         * channel to successfully start the configuration recorder.</p>
         */
        virtual Model::StartConfigurationRecorderOutcome StartConfigurationRecorder(const Model::StartConfigurationRecorderRequest& request) const;

        /**
         * <p>Starts recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p> <p>You must have created at least one delivery
         * channel to successfully start the configuration recorder.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartConfigurationRecorderOutcomeCallable StartConfigurationRecorderCallable(const Model::StartConfigurationRecorderRequest& request) const;

        /**
         * <p>Starts recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p> <p>You must have created at least one delivery
         * channel to successfully start the configuration recorder.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartConfigurationRecorderAsync(const Model::StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p>
         */
        virtual Model::StopConfigurationRecorderOutcome StopConfigurationRecorder(const Model::StopConfigurationRecorderRequest& request) const;

        /**
         * <p>Stops recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopConfigurationRecorderOutcomeCallable StopConfigurationRecorderCallable(const Model::StopConfigurationRecorderRequest& request) const;

        /**
         * <p>Stops recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopConfigurationRecorderAsync(const Model::StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void DeleteConfigRuleAsyncHelper(const Model::DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationRecorderAsyncHelper(const Model::DeleteConfigurationRecorderRequest& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeliveryChannelAsyncHelper(const Model::DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEvaluationResultsAsyncHelper(const Model::DeleteEvaluationResultsRequest& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeliverConfigSnapshotAsyncHelper(const Model::DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComplianceByConfigRuleAsyncHelper(const Model::DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComplianceByResourceAsyncHelper(const Model::DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigRuleEvaluationStatusAsyncHelper(const Model::DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigRulesAsyncHelper(const Model::DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationRecorderStatusAsyncHelper(const Model::DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationRecordersAsyncHelper(const Model::DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeliveryChannelStatusAsyncHelper(const Model::DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeliveryChannelsAsyncHelper(const Model::DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceDetailsByConfigRuleAsyncHelper(const Model::GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceDetailsByResourceAsyncHelper(const Model::GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceSummaryByConfigRuleAsyncHelper(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceSummaryByResourceTypeAsyncHelper(const Model::GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceConfigHistoryAsyncHelper(const Model::GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDiscoveredResourcesAsyncHelper(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigRuleAsyncHelper(const Model::PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigurationRecorderAsyncHelper(const Model::PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDeliveryChannelAsyncHelper(const Model::PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEvaluationsAsyncHelper(const Model::PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartConfigRulesEvaluationAsyncHelper(const Model::StartConfigRulesEvaluationRequest& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartConfigurationRecorderAsyncHelper(const Model::StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopConfigurationRecorderAsyncHelper(const Model::StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ConfigService
} // namespace Aws
