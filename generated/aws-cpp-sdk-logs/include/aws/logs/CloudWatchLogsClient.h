﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/CreateExportTaskResult.h>
#include <aws/logs/model/DeleteQueryDefinitionResult.h>
#include <aws/logs/model/DescribeDestinationsResult.h>
#include <aws/logs/model/DescribeExportTasksResult.h>
#include <aws/logs/model/DescribeLogGroupsResult.h>
#include <aws/logs/model/DescribeLogStreamsResult.h>
#include <aws/logs/model/DescribeMetricFiltersResult.h>
#include <aws/logs/model/DescribeQueriesResult.h>
#include <aws/logs/model/DescribeQueryDefinitionsResult.h>
#include <aws/logs/model/DescribeResourcePoliciesResult.h>
#include <aws/logs/model/DescribeSubscriptionFiltersResult.h>
#include <aws/logs/model/FilterLogEventsResult.h>
#include <aws/logs/model/GetLogEventsResult.h>
#include <aws/logs/model/GetLogGroupFieldsResult.h>
#include <aws/logs/model/GetLogRecordResult.h>
#include <aws/logs/model/GetQueryResultsResult.h>
#include <aws/logs/model/ListTagsLogGroupResult.h>
#include <aws/logs/model/PutDestinationResult.h>
#include <aws/logs/model/PutLogEventsResult.h>
#include <aws/logs/model/PutQueryDefinitionResult.h>
#include <aws/logs/model/PutResourcePolicyResult.h>
#include <aws/logs/model/StartQueryResult.h>
#include <aws/logs/model/StopQueryResult.h>
#include <aws/logs/model/TestMetricFilterResult.h>
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

namespace CloudWatchLogs
{

namespace Model
{
        class AssociateKmsKeyRequest;
        class CancelExportTaskRequest;
        class CreateExportTaskRequest;
        class CreateLogGroupRequest;
        class CreateLogStreamRequest;
        class DeleteDestinationRequest;
        class DeleteLogGroupRequest;
        class DeleteLogStreamRequest;
        class DeleteMetricFilterRequest;
        class DeleteQueryDefinitionRequest;
        class DeleteResourcePolicyRequest;
        class DeleteRetentionPolicyRequest;
        class DeleteSubscriptionFilterRequest;
        class DescribeDestinationsRequest;
        class DescribeExportTasksRequest;
        class DescribeLogGroupsRequest;
        class DescribeLogStreamsRequest;
        class DescribeMetricFiltersRequest;
        class DescribeQueriesRequest;
        class DescribeQueryDefinitionsRequest;
        class DescribeResourcePoliciesRequest;
        class DescribeSubscriptionFiltersRequest;
        class DisassociateKmsKeyRequest;
        class FilterLogEventsRequest;
        class GetLogEventsRequest;
        class GetLogGroupFieldsRequest;
        class GetLogRecordRequest;
        class GetQueryResultsRequest;
        class ListTagsLogGroupRequest;
        class PutDestinationRequest;
        class PutDestinationPolicyRequest;
        class PutLogEventsRequest;
        class PutMetricFilterRequest;
        class PutQueryDefinitionRequest;
        class PutResourcePolicyRequest;
        class PutRetentionPolicyRequest;
        class PutSubscriptionFilterRequest;
        class StartQueryRequest;
        class StopQueryRequest;
        class TagLogGroupRequest;
        class TestMetricFilterRequest;
        class UntagLogGroupRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> AssociateKmsKeyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> CancelExportTaskOutcome;
        typedef Aws::Utils::Outcome<CreateExportTaskResult, CloudWatchLogsError> CreateExportTaskOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> CreateLogGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> CreateLogStreamOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteDestinationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteLogGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteLogStreamOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteMetricFilterOutcome;
        typedef Aws::Utils::Outcome<DeleteQueryDefinitionResult, CloudWatchLogsError> DeleteQueryDefinitionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteRetentionPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteSubscriptionFilterOutcome;
        typedef Aws::Utils::Outcome<DescribeDestinationsResult, CloudWatchLogsError> DescribeDestinationsOutcome;
        typedef Aws::Utils::Outcome<DescribeExportTasksResult, CloudWatchLogsError> DescribeExportTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeLogGroupsResult, CloudWatchLogsError> DescribeLogGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeLogStreamsResult, CloudWatchLogsError> DescribeLogStreamsOutcome;
        typedef Aws::Utils::Outcome<DescribeMetricFiltersResult, CloudWatchLogsError> DescribeMetricFiltersOutcome;
        typedef Aws::Utils::Outcome<DescribeQueriesResult, CloudWatchLogsError> DescribeQueriesOutcome;
        typedef Aws::Utils::Outcome<DescribeQueryDefinitionsResult, CloudWatchLogsError> DescribeQueryDefinitionsOutcome;
        typedef Aws::Utils::Outcome<DescribeResourcePoliciesResult, CloudWatchLogsError> DescribeResourcePoliciesOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscriptionFiltersResult, CloudWatchLogsError> DescribeSubscriptionFiltersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DisassociateKmsKeyOutcome;
        typedef Aws::Utils::Outcome<FilterLogEventsResult, CloudWatchLogsError> FilterLogEventsOutcome;
        typedef Aws::Utils::Outcome<GetLogEventsResult, CloudWatchLogsError> GetLogEventsOutcome;
        typedef Aws::Utils::Outcome<GetLogGroupFieldsResult, CloudWatchLogsError> GetLogGroupFieldsOutcome;
        typedef Aws::Utils::Outcome<GetLogRecordResult, CloudWatchLogsError> GetLogRecordOutcome;
        typedef Aws::Utils::Outcome<GetQueryResultsResult, CloudWatchLogsError> GetQueryResultsOutcome;
        typedef Aws::Utils::Outcome<ListTagsLogGroupResult, CloudWatchLogsError> ListTagsLogGroupOutcome;
        typedef Aws::Utils::Outcome<PutDestinationResult, CloudWatchLogsError> PutDestinationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> PutDestinationPolicyOutcome;
        typedef Aws::Utils::Outcome<PutLogEventsResult, CloudWatchLogsError> PutLogEventsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> PutMetricFilterOutcome;
        typedef Aws::Utils::Outcome<PutQueryDefinitionResult, CloudWatchLogsError> PutQueryDefinitionOutcome;
        typedef Aws::Utils::Outcome<PutResourcePolicyResult, CloudWatchLogsError> PutResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> PutRetentionPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> PutSubscriptionFilterOutcome;
        typedef Aws::Utils::Outcome<StartQueryResult, CloudWatchLogsError> StartQueryOutcome;
        typedef Aws::Utils::Outcome<StopQueryResult, CloudWatchLogsError> StopQueryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> TagLogGroupOutcome;
        typedef Aws::Utils::Outcome<TestMetricFilterResult, CloudWatchLogsError> TestMetricFilterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> UntagLogGroupOutcome;

        typedef std::future<AssociateKmsKeyOutcome> AssociateKmsKeyOutcomeCallable;
        typedef std::future<CancelExportTaskOutcome> CancelExportTaskOutcomeCallable;
        typedef std::future<CreateExportTaskOutcome> CreateExportTaskOutcomeCallable;
        typedef std::future<CreateLogGroupOutcome> CreateLogGroupOutcomeCallable;
        typedef std::future<CreateLogStreamOutcome> CreateLogStreamOutcomeCallable;
        typedef std::future<DeleteDestinationOutcome> DeleteDestinationOutcomeCallable;
        typedef std::future<DeleteLogGroupOutcome> DeleteLogGroupOutcomeCallable;
        typedef std::future<DeleteLogStreamOutcome> DeleteLogStreamOutcomeCallable;
        typedef std::future<DeleteMetricFilterOutcome> DeleteMetricFilterOutcomeCallable;
        typedef std::future<DeleteQueryDefinitionOutcome> DeleteQueryDefinitionOutcomeCallable;
        typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
        typedef std::future<DeleteRetentionPolicyOutcome> DeleteRetentionPolicyOutcomeCallable;
        typedef std::future<DeleteSubscriptionFilterOutcome> DeleteSubscriptionFilterOutcomeCallable;
        typedef std::future<DescribeDestinationsOutcome> DescribeDestinationsOutcomeCallable;
        typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
        typedef std::future<DescribeLogGroupsOutcome> DescribeLogGroupsOutcomeCallable;
        typedef std::future<DescribeLogStreamsOutcome> DescribeLogStreamsOutcomeCallable;
        typedef std::future<DescribeMetricFiltersOutcome> DescribeMetricFiltersOutcomeCallable;
        typedef std::future<DescribeQueriesOutcome> DescribeQueriesOutcomeCallable;
        typedef std::future<DescribeQueryDefinitionsOutcome> DescribeQueryDefinitionsOutcomeCallable;
        typedef std::future<DescribeResourcePoliciesOutcome> DescribeResourcePoliciesOutcomeCallable;
        typedef std::future<DescribeSubscriptionFiltersOutcome> DescribeSubscriptionFiltersOutcomeCallable;
        typedef std::future<DisassociateKmsKeyOutcome> DisassociateKmsKeyOutcomeCallable;
        typedef std::future<FilterLogEventsOutcome> FilterLogEventsOutcomeCallable;
        typedef std::future<GetLogEventsOutcome> GetLogEventsOutcomeCallable;
        typedef std::future<GetLogGroupFieldsOutcome> GetLogGroupFieldsOutcomeCallable;
        typedef std::future<GetLogRecordOutcome> GetLogRecordOutcomeCallable;
        typedef std::future<GetQueryResultsOutcome> GetQueryResultsOutcomeCallable;
        typedef std::future<ListTagsLogGroupOutcome> ListTagsLogGroupOutcomeCallable;
        typedef std::future<PutDestinationOutcome> PutDestinationOutcomeCallable;
        typedef std::future<PutDestinationPolicyOutcome> PutDestinationPolicyOutcomeCallable;
        typedef std::future<PutLogEventsOutcome> PutLogEventsOutcomeCallable;
        typedef std::future<PutMetricFilterOutcome> PutMetricFilterOutcomeCallable;
        typedef std::future<PutQueryDefinitionOutcome> PutQueryDefinitionOutcomeCallable;
        typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
        typedef std::future<PutRetentionPolicyOutcome> PutRetentionPolicyOutcomeCallable;
        typedef std::future<PutSubscriptionFilterOutcome> PutSubscriptionFilterOutcomeCallable;
        typedef std::future<StartQueryOutcome> StartQueryOutcomeCallable;
        typedef std::future<StopQueryOutcome> StopQueryOutcomeCallable;
        typedef std::future<TagLogGroupOutcome> TagLogGroupOutcomeCallable;
        typedef std::future<TestMetricFilterOutcome> TestMetricFilterOutcomeCallable;
        typedef std::future<UntagLogGroupOutcome> UntagLogGroupOutcomeCallable;
} // namespace Model

  class CloudWatchLogsClient;

    typedef std::function<void(const CloudWatchLogsClient*, const Model::AssociateKmsKeyRequest&, const Model::AssociateKmsKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateKmsKeyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CancelExportTaskRequest&, const Model::CancelExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelExportTaskResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateExportTaskRequest&, const Model::CreateExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExportTaskResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateLogGroupRequest&, const Model::CreateLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateLogStreamRequest&, const Model::CreateLogStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteDestinationRequest&, const Model::DeleteDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteLogGroupRequest&, const Model::DeleteLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteLogStreamRequest&, const Model::DeleteLogStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteMetricFilterRequest&, const Model::DeleteMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteQueryDefinitionRequest&, const Model::DeleteQueryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueryDefinitionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteRetentionPolicyRequest&, const Model::DeleteRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteSubscriptionFilterRequest&, const Model::DeleteSubscriptionFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeDestinationsRequest&, const Model::DescribeDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDestinationsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeLogGroupsRequest&, const Model::DescribeLogGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLogGroupsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeLogStreamsRequest&, const Model::DescribeLogStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLogStreamsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeMetricFiltersRequest&, const Model::DescribeMetricFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricFiltersResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeQueriesRequest&, const Model::DescribeQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQueriesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeQueryDefinitionsRequest&, const Model::DescribeQueryDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQueryDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeResourcePoliciesRequest&, const Model::DescribeResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeSubscriptionFiltersRequest&, const Model::DescribeSubscriptionFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscriptionFiltersResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DisassociateKmsKeyRequest&, const Model::DisassociateKmsKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateKmsKeyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::FilterLogEventsRequest&, const Model::FilterLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FilterLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetLogEventsRequest&, const Model::GetLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetLogGroupFieldsRequest&, const Model::GetLogGroupFieldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogGroupFieldsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetLogRecordRequest&, const Model::GetLogRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogRecordResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetQueryResultsRequest&, const Model::GetQueryResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::ListTagsLogGroupRequest&, const Model::ListTagsLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDestinationRequest&, const Model::PutDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDestinationPolicyRequest&, const Model::PutDestinationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDestinationPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutLogEventsRequest&, const Model::PutLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutMetricFilterRequest&, const Model::PutMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutQueryDefinitionRequest&, const Model::PutQueryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutQueryDefinitionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutRetentionPolicyRequest&, const Model::PutRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutSubscriptionFilterRequest&, const Model::PutSubscriptionFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSubscriptionFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::StartQueryRequest&, const Model::StartQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::StopQueryRequest&, const Model::StopQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQueryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::TagLogGroupRequest&, const Model::TagLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::TestMetricFilterRequest&, const Model::TestMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::UntagLogGroupRequest&, const Model::UntagLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagLogGroupResponseReceivedHandler;

  /**
   * <p>You can use Amazon CloudWatch Logs to monitor, store, and access your log
   * files from EC2 instances, CloudTrail, and other sources. You can then retrieve
   * the associated log data from CloudWatch Logs using the CloudWatch console,
   * CloudWatch Logs commands in the Amazon Web Services CLI, CloudWatch Logs API, or
   * CloudWatch Logs SDK.</p> <p>You can use CloudWatch Logs to:</p> <ul> <li> <p>
   * <b>Monitor logs from EC2 instances in real-time</b>: You can use CloudWatch Logs
   * to monitor applications and systems using log data. For example, CloudWatch Logs
   * can track the number of errors that occur in your application logs and send you
   * a notification whenever the rate of errors exceeds a threshold that you specify.
   * CloudWatch Logs uses your log data for monitoring so no code changes are
   * required. For example, you can monitor application logs for specific literal
   * terms (such as "NullReferenceException") or count the number of occurrences of a
   * literal term at a particular position in log data (such as "404" status codes in
   * an Apache access log). When the term you are searching for is found, CloudWatch
   * Logs reports the data to a CloudWatch metric that you specify.</p> </li> <li>
   * <p> <b>Monitor CloudTrail logged events</b>: You can create alarms in CloudWatch
   * and receive notifications of particular API activity as captured by CloudTrail.
   * You can use the notification to perform troubleshooting.</p> </li> <li> <p>
   * <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in
   * highly durable storage. You can change the log retention setting so that any log
   * events older than this setting are automatically deleted. The CloudWatch Logs
   * agent makes it easy to quickly send both rotated and non-rotated log data off of
   * a host and into the log service. You can then access the raw log data when you
   * need it.</p> </li> </ul>
   */
  class AWS_CLOUDWATCHLOGS_API CloudWatchLogsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchLogsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchLogsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchLogsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudWatchLogsClient();


        /**
         * <p>Associates the specified Key Management Service customer master key (CMK)
         * with the specified log group.</p> <p>Associating an KMS CMK with a log group
         * overrides any existing associations between the log group and a CMK. After a CMK
         * is associated with a log group, all newly ingested data for the log group is
         * encrypted using the CMK. This association is stored as long as the data
         * encrypted with the CMK is still within CloudWatch Logs. This enables CloudWatch
         * Logs to decrypt this data whenever it is requested.</p> 
         * <p>CloudWatch Logs supports only symmetric CMKs. Do not use an associate an
         * asymmetric CMK with your log group. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
         * Symmetric and Asymmetric Keys</a>.</p>  <p>It can take up to 5
         * minutes for this operation to take effect.</p> <p>If you attempt to associate a
         * CMK with a log group but the CMK does not exist or the CMK is disabled, you
         * receive an <code>InvalidParameterException</code> error. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/AssociateKmsKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateKmsKeyOutcome AssociateKmsKey(const Model::AssociateKmsKeyRequest& request) const;

        /**
         * <p>Associates the specified Key Management Service customer master key (CMK)
         * with the specified log group.</p> <p>Associating an KMS CMK with a log group
         * overrides any existing associations between the log group and a CMK. After a CMK
         * is associated with a log group, all newly ingested data for the log group is
         * encrypted using the CMK. This association is stored as long as the data
         * encrypted with the CMK is still within CloudWatch Logs. This enables CloudWatch
         * Logs to decrypt this data whenever it is requested.</p> 
         * <p>CloudWatch Logs supports only symmetric CMKs. Do not use an associate an
         * asymmetric CMK with your log group. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
         * Symmetric and Asymmetric Keys</a>.</p>  <p>It can take up to 5
         * minutes for this operation to take effect.</p> <p>If you attempt to associate a
         * CMK with a log group but the CMK does not exist or the CMK is disabled, you
         * receive an <code>InvalidParameterException</code> error. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/AssociateKmsKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateKmsKeyOutcomeCallable AssociateKmsKeyCallable(const Model::AssociateKmsKeyRequest& request) const;

        /**
         * <p>Associates the specified Key Management Service customer master key (CMK)
         * with the specified log group.</p> <p>Associating an KMS CMK with a log group
         * overrides any existing associations between the log group and a CMK. After a CMK
         * is associated with a log group, all newly ingested data for the log group is
         * encrypted using the CMK. This association is stored as long as the data
         * encrypted with the CMK is still within CloudWatch Logs. This enables CloudWatch
         * Logs to decrypt this data whenever it is requested.</p> 
         * <p>CloudWatch Logs supports only symmetric CMKs. Do not use an associate an
         * asymmetric CMK with your log group. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
         * Symmetric and Asymmetric Keys</a>.</p>  <p>It can take up to 5
         * minutes for this operation to take effect.</p> <p>If you attempt to associate a
         * CMK with a log group but the CMK does not exist or the CMK is disabled, you
         * receive an <code>InvalidParameterException</code> error. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/AssociateKmsKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateKmsKeyAsync(const Model::AssociateKmsKeyRequest& request, const AssociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified export task.</p> <p>The task must be in the
         * <code>PENDING</code> or <code>RUNNING</code> state.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CancelExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportTaskOutcome CancelExportTask(const Model::CancelExportTaskRequest& request) const;

        /**
         * <p>Cancels the specified export task.</p> <p>The task must be in the
         * <code>PENDING</code> or <code>RUNNING</code> state.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CancelExportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelExportTaskOutcomeCallable CancelExportTaskCallable(const Model::CancelExportTaskRequest& request) const;

        /**
         * <p>Cancels the specified export task.</p> <p>The task must be in the
         * <code>PENDING</code> or <code>RUNNING</code> state.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CancelExportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelExportTaskAsync(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an export task, which allows you to efficiently export data from a
         * log group to an Amazon S3 bucket. When you perform a
         * <code>CreateExportTask</code> operation, you must use credentials that have
         * permission to write to the S3 bucket that you specify as the destination.</p>
         * <p>This is an asynchronous call. If all the required information is provided,
         * this operation initiates an export task and responds with the ID of the task.
         * After the task has started, you can use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeExportTasks.html">DescribeExportTasks</a>
         * to get the status of the export task. Each account can only have one active
         * (<code>RUNNING</code> or <code>PENDING</code>) export task at a time. To cancel
         * an export task, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CancelExportTask.html">CancelExportTask</a>.</p>
         * <p>You can export logs from multiple log groups or multiple time ranges to the
         * same S3 bucket. To separate out log data for each export task, you can specify a
         * prefix to be used as the Amazon S3 key prefix for all exported objects.</p>
         * <p>Exporting to S3 buckets that are encrypted with AES-256 is supported.
         * Exporting to S3 buckets encrypted with SSE-KMS is not supported. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportTaskOutcome CreateExportTask(const Model::CreateExportTaskRequest& request) const;

        /**
         * <p>Creates an export task, which allows you to efficiently export data from a
         * log group to an Amazon S3 bucket. When you perform a
         * <code>CreateExportTask</code> operation, you must use credentials that have
         * permission to write to the S3 bucket that you specify as the destination.</p>
         * <p>This is an asynchronous call. If all the required information is provided,
         * this operation initiates an export task and responds with the ID of the task.
         * After the task has started, you can use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeExportTasks.html">DescribeExportTasks</a>
         * to get the status of the export task. Each account can only have one active
         * (<code>RUNNING</code> or <code>PENDING</code>) export task at a time. To cancel
         * an export task, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CancelExportTask.html">CancelExportTask</a>.</p>
         * <p>You can export logs from multiple log groups or multiple time ranges to the
         * same S3 bucket. To separate out log data for each export task, you can specify a
         * prefix to be used as the Amazon S3 key prefix for all exported objects.</p>
         * <p>Exporting to S3 buckets that are encrypted with AES-256 is supported.
         * Exporting to S3 buckets encrypted with SSE-KMS is not supported. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateExportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExportTaskOutcomeCallable CreateExportTaskCallable(const Model::CreateExportTaskRequest& request) const;

        /**
         * <p>Creates an export task, which allows you to efficiently export data from a
         * log group to an Amazon S3 bucket. When you perform a
         * <code>CreateExportTask</code> operation, you must use credentials that have
         * permission to write to the S3 bucket that you specify as the destination.</p>
         * <p>This is an asynchronous call. If all the required information is provided,
         * this operation initiates an export task and responds with the ID of the task.
         * After the task has started, you can use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeExportTasks.html">DescribeExportTasks</a>
         * to get the status of the export task. Each account can only have one active
         * (<code>RUNNING</code> or <code>PENDING</code>) export task at a time. To cancel
         * an export task, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CancelExportTask.html">CancelExportTask</a>.</p>
         * <p>You can export logs from multiple log groups or multiple time ranges to the
         * same S3 bucket. To separate out log data for each export task, you can specify a
         * prefix to be used as the Amazon S3 key prefix for all exported objects.</p>
         * <p>Exporting to S3 buckets that are encrypted with AES-256 is supported.
         * Exporting to S3 buckets encrypted with SSE-KMS is not supported. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateExportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExportTaskAsync(const Model::CreateExportTaskRequest& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a log group with the specified name. You can create up to 20,000 log
         * groups per account.</p> <p>You must use the following guidelines when naming a
         * log group:</p> <ul> <li> <p>Log group names must be unique within a region for
         * an Amazon Web Services account.</p> </li> <li> <p>Log group names can be between
         * 1 and 512 characters long.</p> </li> <li> <p>Log group names consist of the
         * following characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/'
         * (forward slash), '.' (period), and '#' (number sign)</p> </li> </ul> <p>When you
         * create a log group, by default the log events in the log group never expire. To
         * set a retention policy so that events expire and are deleted after a specified
         * time, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutRetentionPolicy.html">PutRetentionPolicy</a>.</p>
         * <p>If you associate a Key Management Service customer master key (CMK) with the
         * log group, ingested data is encrypted using the CMK. This association is stored
         * as long as the data encrypted with the CMK is still within CloudWatch Logs. This
         * enables CloudWatch Logs to decrypt this data whenever it is requested.</p> <p>If
         * you attempt to associate a CMK with the log group but the CMK does not exist or
         * the CMK is disabled, you receive an <code>InvalidParameterException</code>
         * error. </p>  <p>CloudWatch Logs supports only symmetric CMKs. Do not
         * associate an asymmetric CMK with your log group. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
         * Symmetric and Asymmetric Keys</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogGroupOutcome CreateLogGroup(const Model::CreateLogGroupRequest& request) const;

        /**
         * <p>Creates a log group with the specified name. You can create up to 20,000 log
         * groups per account.</p> <p>You must use the following guidelines when naming a
         * log group:</p> <ul> <li> <p>Log group names must be unique within a region for
         * an Amazon Web Services account.</p> </li> <li> <p>Log group names can be between
         * 1 and 512 characters long.</p> </li> <li> <p>Log group names consist of the
         * following characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/'
         * (forward slash), '.' (period), and '#' (number sign)</p> </li> </ul> <p>When you
         * create a log group, by default the log events in the log group never expire. To
         * set a retention policy so that events expire and are deleted after a specified
         * time, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutRetentionPolicy.html">PutRetentionPolicy</a>.</p>
         * <p>If you associate a Key Management Service customer master key (CMK) with the
         * log group, ingested data is encrypted using the CMK. This association is stored
         * as long as the data encrypted with the CMK is still within CloudWatch Logs. This
         * enables CloudWatch Logs to decrypt this data whenever it is requested.</p> <p>If
         * you attempt to associate a CMK with the log group but the CMK does not exist or
         * the CMK is disabled, you receive an <code>InvalidParameterException</code>
         * error. </p>  <p>CloudWatch Logs supports only symmetric CMKs. Do not
         * associate an asymmetric CMK with your log group. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
         * Symmetric and Asymmetric Keys</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLogGroupOutcomeCallable CreateLogGroupCallable(const Model::CreateLogGroupRequest& request) const;

        /**
         * <p>Creates a log group with the specified name. You can create up to 20,000 log
         * groups per account.</p> <p>You must use the following guidelines when naming a
         * log group:</p> <ul> <li> <p>Log group names must be unique within a region for
         * an Amazon Web Services account.</p> </li> <li> <p>Log group names can be between
         * 1 and 512 characters long.</p> </li> <li> <p>Log group names consist of the
         * following characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/'
         * (forward slash), '.' (period), and '#' (number sign)</p> </li> </ul> <p>When you
         * create a log group, by default the log events in the log group never expire. To
         * set a retention policy so that events expire and are deleted after a specified
         * time, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutRetentionPolicy.html">PutRetentionPolicy</a>.</p>
         * <p>If you associate a Key Management Service customer master key (CMK) with the
         * log group, ingested data is encrypted using the CMK. This association is stored
         * as long as the data encrypted with the CMK is still within CloudWatch Logs. This
         * enables CloudWatch Logs to decrypt this data whenever it is requested.</p> <p>If
         * you attempt to associate a CMK with the log group but the CMK does not exist or
         * the CMK is disabled, you receive an <code>InvalidParameterException</code>
         * error. </p>  <p>CloudWatch Logs supports only symmetric CMKs. Do not
         * associate an asymmetric CMK with your log group. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
         * Symmetric and Asymmetric Keys</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLogGroupAsync(const Model::CreateLogGroupRequest& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a log stream for the specified log group. A log stream is a sequence
         * of log events that originate from a single source, such as an application
         * instance or a resource that is being monitored.</p> <p>There is no limit on the
         * number of log streams that you can create for a log group. There is a limit of
         * 50 TPS on <code>CreateLogStream</code> operations, after which transactions are
         * throttled.</p> <p>You must use the following guidelines when naming a log
         * stream:</p> <ul> <li> <p>Log stream names must be unique within the log
         * group.</p> </li> <li> <p>Log stream names can be between 1 and 512 characters
         * long.</p> </li> <li> <p>The ':' (colon) and '*' (asterisk) characters are not
         * allowed.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogStreamOutcome CreateLogStream(const Model::CreateLogStreamRequest& request) const;

        /**
         * <p>Creates a log stream for the specified log group. A log stream is a sequence
         * of log events that originate from a single source, such as an application
         * instance or a resource that is being monitored.</p> <p>There is no limit on the
         * number of log streams that you can create for a log group. There is a limit of
         * 50 TPS on <code>CreateLogStream</code> operations, after which transactions are
         * throttled.</p> <p>You must use the following guidelines when naming a log
         * stream:</p> <ul> <li> <p>Log stream names must be unique within the log
         * group.</p> </li> <li> <p>Log stream names can be between 1 and 512 characters
         * long.</p> </li> <li> <p>The ':' (colon) and '*' (asterisk) characters are not
         * allowed.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLogStreamOutcomeCallable CreateLogStreamCallable(const Model::CreateLogStreamRequest& request) const;

        /**
         * <p>Creates a log stream for the specified log group. A log stream is a sequence
         * of log events that originate from a single source, such as an application
         * instance or a resource that is being monitored.</p> <p>There is no limit on the
         * number of log streams that you can create for a log group. There is a limit of
         * 50 TPS on <code>CreateLogStream</code> operations, after which transactions are
         * throttled.</p> <p>You must use the following guidelines when naming a log
         * stream:</p> <ul> <li> <p>Log stream names must be unique within the log
         * group.</p> </li> <li> <p>Log stream names can be between 1 and 512 characters
         * long.</p> </li> <li> <p>The ':' (colon) and '*' (asterisk) characters are not
         * allowed.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLogStreamAsync(const Model::CreateLogStreamRequest& request, const CreateLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified destination, and eventually disables all the
         * subscription filters that publish to it. This operation does not delete the
         * physical resource encapsulated by the destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;

        /**
         * <p>Deletes the specified destination, and eventually disables all the
         * subscription filters that publish to it. This operation does not delete the
         * physical resource encapsulated by the destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDestinationOutcomeCallable DeleteDestinationCallable(const Model::DeleteDestinationRequest& request) const;

        /**
         * <p>Deletes the specified destination, and eventually disables all the
         * subscription filters that publish to it. This operation does not delete the
         * physical resource encapsulated by the destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDestinationAsync(const Model::DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified log group and permanently deletes all the archived log
         * events associated with the log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogGroupOutcome DeleteLogGroup(const Model::DeleteLogGroupRequest& request) const;

        /**
         * <p>Deletes the specified log group and permanently deletes all the archived log
         * events associated with the log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLogGroupOutcomeCallable DeleteLogGroupCallable(const Model::DeleteLogGroupRequest& request) const;

        /**
         * <p>Deletes the specified log group and permanently deletes all the archived log
         * events associated with the log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteLogGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLogGroupAsync(const Model::DeleteLogGroupRequest& request, const DeleteLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified log stream and permanently deletes all the archived log
         * events associated with the log stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteLogStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogStreamOutcome DeleteLogStream(const Model::DeleteLogStreamRequest& request) const;

        /**
         * <p>Deletes the specified log stream and permanently deletes all the archived log
         * events associated with the log stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteLogStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLogStreamOutcomeCallable DeleteLogStreamCallable(const Model::DeleteLogStreamRequest& request) const;

        /**
         * <p>Deletes the specified log stream and permanently deletes all the archived log
         * events associated with the log stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteLogStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLogStreamAsync(const Model::DeleteLogStreamRequest& request, const DeleteLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified metric filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteMetricFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMetricFilterOutcome DeleteMetricFilter(const Model::DeleteMetricFilterRequest& request) const;

        /**
         * <p>Deletes the specified metric filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteMetricFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMetricFilterOutcomeCallable DeleteMetricFilterCallable(const Model::DeleteMetricFilterRequest& request) const;

        /**
         * <p>Deletes the specified metric filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteMetricFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMetricFilterAsync(const Model::DeleteMetricFilterRequest& request, const DeleteMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a saved CloudWatch Logs Insights query definition. A query definition
         * contains details about a saved CloudWatch Logs Insights query.</p> <p>Each
         * <code>DeleteQueryDefinition</code> operation can delete one query
         * definition.</p> <p>You must have the <code>logs:DeleteQueryDefinition</code>
         * permission to be able to perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteQueryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueryDefinitionOutcome DeleteQueryDefinition(const Model::DeleteQueryDefinitionRequest& request) const;

        /**
         * <p>Deletes a saved CloudWatch Logs Insights query definition. A query definition
         * contains details about a saved CloudWatch Logs Insights query.</p> <p>Each
         * <code>DeleteQueryDefinition</code> operation can delete one query
         * definition.</p> <p>You must have the <code>logs:DeleteQueryDefinition</code>
         * permission to be able to perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteQueryDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueryDefinitionOutcomeCallable DeleteQueryDefinitionCallable(const Model::DeleteQueryDefinitionRequest& request) const;

        /**
         * <p>Deletes a saved CloudWatch Logs Insights query definition. A query definition
         * contains details about a saved CloudWatch Logs Insights query.</p> <p>Each
         * <code>DeleteQueryDefinition</code> operation can delete one query
         * definition.</p> <p>You must have the <code>logs:DeleteQueryDefinition</code>
         * permission to be able to perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteQueryDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueryDefinitionAsync(const Model::DeleteQueryDefinitionRequest& request, const DeleteQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resource policy from this account. This revokes the access of the
         * identities in that policy to put log events to this account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Deletes a resource policy from this account. This revokes the access of the
         * identities in that policy to put log events to this account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Deletes a resource policy from this account. This revokes the access of the
         * identities in that policy to put log events to this account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified retention policy.</p> <p>Log events do not expire if
         * they belong to log groups without a retention policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetentionPolicyOutcome DeleteRetentionPolicy(const Model::DeleteRetentionPolicyRequest& request) const;

        /**
         * <p>Deletes the specified retention policy.</p> <p>Log events do not expire if
         * they belong to log groups without a retention policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteRetentionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRetentionPolicyOutcomeCallable DeleteRetentionPolicyCallable(const Model::DeleteRetentionPolicyRequest& request) const;

        /**
         * <p>Deletes the specified retention policy.</p> <p>Log events do not expire if
         * they belong to log groups without a retention policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteRetentionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRetentionPolicyAsync(const Model::DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified subscription filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteSubscriptionFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionFilterOutcome DeleteSubscriptionFilter(const Model::DeleteSubscriptionFilterRequest& request) const;

        /**
         * <p>Deletes the specified subscription filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteSubscriptionFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriptionFilterOutcomeCallable DeleteSubscriptionFilterCallable(const Model::DeleteSubscriptionFilterRequest& request) const;

        /**
         * <p>Deletes the specified subscription filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteSubscriptionFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriptionFilterAsync(const Model::DeleteSubscriptionFilterRequest& request, const DeleteSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all your destinations. The results are ASCII-sorted by destination
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDestinationsOutcome DescribeDestinations(const Model::DescribeDestinationsRequest& request) const;

        /**
         * <p>Lists all your destinations. The results are ASCII-sorted by destination
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeDestinations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDestinationsOutcomeCallable DescribeDestinationsCallable(const Model::DescribeDestinationsRequest& request) const;

        /**
         * <p>Lists all your destinations. The results are ASCII-sorted by destination
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeDestinations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDestinationsAsync(const Model::DescribeDestinationsRequest& request, const DescribeDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the specified export tasks. You can list all your export tasks or
         * filter the results based on task ID or task status.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * <p>Lists the specified export tasks. You can list all your export tasks or
         * filter the results based on task ID or task status.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeExportTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const Model::DescribeExportTasksRequest& request) const;

        /**
         * <p>Lists the specified export tasks. You can list all your export tasks or
         * filter the results based on task ID or task status.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeExportTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportTasksAsync(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the specified log groups. You can list all your log groups or filter
         * the results by prefix. The results are ASCII-sorted by log group name.</p>
         * <p>CloudWatch Logs doesn’t support IAM policies that control access to the
         * <code>DescribeLogGroups</code> action by using the
         * <code>aws:ResourceTag/<i>key-name</i> </code> condition key. Other CloudWatch
         * Logs actions do support the use of the <code>aws:ResourceTag/<i>key-name</i>
         * </code> condition key to control access. For more information about using tags
         * to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
         * access to Amazon Web Services resources using tags</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLogGroupsOutcome DescribeLogGroups(const Model::DescribeLogGroupsRequest& request) const;

        /**
         * <p>Lists the specified log groups. You can list all your log groups or filter
         * the results by prefix. The results are ASCII-sorted by log group name.</p>
         * <p>CloudWatch Logs doesn’t support IAM policies that control access to the
         * <code>DescribeLogGroups</code> action by using the
         * <code>aws:ResourceTag/<i>key-name</i> </code> condition key. Other CloudWatch
         * Logs actions do support the use of the <code>aws:ResourceTag/<i>key-name</i>
         * </code> condition key to control access. For more information about using tags
         * to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
         * access to Amazon Web Services resources using tags</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLogGroupsOutcomeCallable DescribeLogGroupsCallable(const Model::DescribeLogGroupsRequest& request) const;

        /**
         * <p>Lists the specified log groups. You can list all your log groups or filter
         * the results by prefix. The results are ASCII-sorted by log group name.</p>
         * <p>CloudWatch Logs doesn’t support IAM policies that control access to the
         * <code>DescribeLogGroups</code> action by using the
         * <code>aws:ResourceTag/<i>key-name</i> </code> condition key. Other CloudWatch
         * Logs actions do support the use of the <code>aws:ResourceTag/<i>key-name</i>
         * </code> condition key to control access. For more information about using tags
         * to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
         * access to Amazon Web Services resources using tags</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLogGroupsAsync(const Model::DescribeLogGroupsRequest& request, const DescribeLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the log streams for the specified log group. You can list all the log
         * streams or filter the results by prefix. You can also control how the results
         * are ordered.</p> <p>This operation has a limit of five transactions per second,
         * after which transactions are throttled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLogStreamsOutcome DescribeLogStreams(const Model::DescribeLogStreamsRequest& request) const;

        /**
         * <p>Lists the log streams for the specified log group. You can list all the log
         * streams or filter the results by prefix. You can also control how the results
         * are ordered.</p> <p>This operation has a limit of five transactions per second,
         * after which transactions are throttled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogStreams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLogStreamsOutcomeCallable DescribeLogStreamsCallable(const Model::DescribeLogStreamsRequest& request) const;

        /**
         * <p>Lists the log streams for the specified log group. You can list all the log
         * streams or filter the results by prefix. You can also control how the results
         * are ordered.</p> <p>This operation has a limit of five transactions per second,
         * after which transactions are throttled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogStreams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLogStreamsAsync(const Model::DescribeLogStreamsRequest& request, const DescribeLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the specified metric filters. You can list all of the metric filters or
         * filter the results by log name, prefix, metric name, or metric namespace. The
         * results are ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeMetricFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricFiltersOutcome DescribeMetricFilters(const Model::DescribeMetricFiltersRequest& request) const;

        /**
         * <p>Lists the specified metric filters. You can list all of the metric filters or
         * filter the results by log name, prefix, metric name, or metric namespace. The
         * results are ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeMetricFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMetricFiltersOutcomeCallable DescribeMetricFiltersCallable(const Model::DescribeMetricFiltersRequest& request) const;

        /**
         * <p>Lists the specified metric filters. You can list all of the metric filters or
         * filter the results by log name, prefix, metric name, or metric namespace. The
         * results are ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeMetricFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMetricFiltersAsync(const Model::DescribeMetricFiltersRequest& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of CloudWatch Logs Insights queries that are scheduled,
         * executing, or have been executed recently in this account. You can request all
         * queries or limit it to queries of a specific log group or queries with a certain
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueriesOutcome DescribeQueries(const Model::DescribeQueriesRequest& request) const;

        /**
         * <p>Returns a list of CloudWatch Logs Insights queries that are scheduled,
         * executing, or have been executed recently in this account. You can request all
         * queries or limit it to queries of a specific log group or queries with a certain
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeQueries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeQueriesOutcomeCallable DescribeQueriesCallable(const Model::DescribeQueriesRequest& request) const;

        /**
         * <p>Returns a list of CloudWatch Logs Insights queries that are scheduled,
         * executing, or have been executed recently in this account. You can request all
         * queries or limit it to queries of a specific log group or queries with a certain
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeQueries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeQueriesAsync(const Model::DescribeQueriesRequest& request, const DescribeQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns a paginated list of your saved CloudWatch Logs
         * Insights query definitions.</p> <p>You can use the
         * <code>queryDefinitionNamePrefix</code> parameter to limit the results to only
         * the query definitions that have names that start with a certain
         * string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeQueryDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueryDefinitionsOutcome DescribeQueryDefinitions(const Model::DescribeQueryDefinitionsRequest& request) const;

        /**
         * <p>This operation returns a paginated list of your saved CloudWatch Logs
         * Insights query definitions.</p> <p>You can use the
         * <code>queryDefinitionNamePrefix</code> parameter to limit the results to only
         * the query definitions that have names that start with a certain
         * string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeQueryDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeQueryDefinitionsOutcomeCallable DescribeQueryDefinitionsCallable(const Model::DescribeQueryDefinitionsRequest& request) const;

        /**
         * <p>This operation returns a paginated list of your saved CloudWatch Logs
         * Insights query definitions.</p> <p>You can use the
         * <code>queryDefinitionNamePrefix</code> parameter to limit the results to only
         * the query definitions that have names that start with a certain
         * string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeQueryDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeQueryDefinitionsAsync(const Model::DescribeQueryDefinitionsRequest& request, const DescribeQueryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource policies in this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePoliciesOutcome DescribeResourcePolicies(const Model::DescribeResourcePoliciesRequest& request) const;

        /**
         * <p>Lists the resource policies in this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeResourcePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourcePoliciesOutcomeCallable DescribeResourcePoliciesCallable(const Model::DescribeResourcePoliciesRequest& request) const;

        /**
         * <p>Lists the resource policies in this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeResourcePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourcePoliciesAsync(const Model::DescribeResourcePoliciesRequest& request, const DescribeResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the subscription filters for the specified log group. You can list all
         * the subscription filters or filter the results by prefix. The results are
         * ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeSubscriptionFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscriptionFiltersOutcome DescribeSubscriptionFilters(const Model::DescribeSubscriptionFiltersRequest& request) const;

        /**
         * <p>Lists the subscription filters for the specified log group. You can list all
         * the subscription filters or filter the results by prefix. The results are
         * ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeSubscriptionFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscriptionFiltersOutcomeCallable DescribeSubscriptionFiltersCallable(const Model::DescribeSubscriptionFiltersRequest& request) const;

        /**
         * <p>Lists the subscription filters for the specified log group. You can list all
         * the subscription filters or filter the results by prefix. The results are
         * ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeSubscriptionFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscriptionFiltersAsync(const Model::DescribeSubscriptionFiltersRequest& request, const DescribeSubscriptionFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the associated Key Management Service customer master key (CMK)
         * from the specified log group.</p> <p>After the KMS CMK is disassociated from the
         * log group, CloudWatch Logs stops encrypting newly ingested data for the log
         * group. All previously ingested data remains encrypted, and CloudWatch Logs
         * requires permissions for the CMK whenever the encrypted data is requested.</p>
         * <p>Note that it can take up to 5 minutes for this operation to take
         * effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DisassociateKmsKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateKmsKeyOutcome DisassociateKmsKey(const Model::DisassociateKmsKeyRequest& request) const;

        /**
         * <p>Disassociates the associated Key Management Service customer master key (CMK)
         * from the specified log group.</p> <p>After the KMS CMK is disassociated from the
         * log group, CloudWatch Logs stops encrypting newly ingested data for the log
         * group. All previously ingested data remains encrypted, and CloudWatch Logs
         * requires permissions for the CMK whenever the encrypted data is requested.</p>
         * <p>Note that it can take up to 5 minutes for this operation to take
         * effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DisassociateKmsKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateKmsKeyOutcomeCallable DisassociateKmsKeyCallable(const Model::DisassociateKmsKeyRequest& request) const;

        /**
         * <p>Disassociates the associated Key Management Service customer master key (CMK)
         * from the specified log group.</p> <p>After the KMS CMK is disassociated from the
         * log group, CloudWatch Logs stops encrypting newly ingested data for the log
         * group. All previously ingested data remains encrypted, and CloudWatch Logs
         * requires permissions for the CMK whenever the encrypted data is requested.</p>
         * <p>Note that it can take up to 5 minutes for this operation to take
         * effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DisassociateKmsKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateKmsKeyAsync(const Model::DisassociateKmsKeyRequest& request, const DisassociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists log events from the specified log group. You can list all the log
         * events or filter the results using a filter pattern, a time range, and the name
         * of the log stream.</p> <p>By default, this operation returns as many log events
         * as can fit in 1 MB (up to 10,000 log events) or all the events found within the
         * time range that you specify. If the results include a token, then there are more
         * log events available, and you can get additional results by specifying the token
         * in a subsequent call. This operation can return empty results while there are
         * more log events available through the token.</p> <p>The returned log events are
         * sorted by event timestamp, the timestamp when the event was ingested by
         * CloudWatch Logs, and the ID of the <code>PutLogEvents</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/FilterLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::FilterLogEventsOutcome FilterLogEvents(const Model::FilterLogEventsRequest& request) const;

        /**
         * <p>Lists log events from the specified log group. You can list all the log
         * events or filter the results using a filter pattern, a time range, and the name
         * of the log stream.</p> <p>By default, this operation returns as many log events
         * as can fit in 1 MB (up to 10,000 log events) or all the events found within the
         * time range that you specify. If the results include a token, then there are more
         * log events available, and you can get additional results by specifying the token
         * in a subsequent call. This operation can return empty results while there are
         * more log events available through the token.</p> <p>The returned log events are
         * sorted by event timestamp, the timestamp when the event was ingested by
         * CloudWatch Logs, and the ID of the <code>PutLogEvents</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/FilterLogEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FilterLogEventsOutcomeCallable FilterLogEventsCallable(const Model::FilterLogEventsRequest& request) const;

        /**
         * <p>Lists log events from the specified log group. You can list all the log
         * events or filter the results using a filter pattern, a time range, and the name
         * of the log stream.</p> <p>By default, this operation returns as many log events
         * as can fit in 1 MB (up to 10,000 log events) or all the events found within the
         * time range that you specify. If the results include a token, then there are more
         * log events available, and you can get additional results by specifying the token
         * in a subsequent call. This operation can return empty results while there are
         * more log events available through the token.</p> <p>The returned log events are
         * sorted by event timestamp, the timestamp when the event was ingested by
         * CloudWatch Logs, and the ID of the <code>PutLogEvents</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/FilterLogEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FilterLogEventsAsync(const Model::FilterLogEventsRequest& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists log events from the specified log stream. You can list all of the log
         * events or filter using a time range.</p> <p>By default, this operation returns
         * as many log events as can fit in a response size of 1MB (up to 10,000 log
         * events). You can get additional log events by specifying one of the tokens in a
         * subsequent call. This operation can return empty results while there are more
         * log events available through the token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogEventsOutcome GetLogEvents(const Model::GetLogEventsRequest& request) const;

        /**
         * <p>Lists log events from the specified log stream. You can list all of the log
         * events or filter using a time range.</p> <p>By default, this operation returns
         * as many log events as can fit in a response size of 1MB (up to 10,000 log
         * events). You can get additional log events by specifying one of the tokens in a
         * subsequent call. This operation can return empty results while there are more
         * log events available through the token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLogEventsOutcomeCallable GetLogEventsCallable(const Model::GetLogEventsRequest& request) const;

        /**
         * <p>Lists log events from the specified log stream. You can list all of the log
         * events or filter using a time range.</p> <p>By default, this operation returns
         * as many log events as can fit in a response size of 1MB (up to 10,000 log
         * events). You can get additional log events by specifying one of the tokens in a
         * subsequent call. This operation can return empty results while there are more
         * log events available through the token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLogEventsAsync(const Model::GetLogEventsRequest& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the fields that are included in log events in the specified
         * log group, along with the percentage of log events that contain each field. The
         * search is limited to a time period that you specify.</p> <p>In the results,
         * fields that start with @ are fields generated by CloudWatch Logs. For example,
         * <code>@timestamp</code> is the timestamp of each log event. For more information
         * about the fields that are generated by CloudWatch logs, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData-discoverable-fields.html">Supported
         * Logs and Discovered Fields</a>.</p> <p>The response results are sorted by the
         * frequency percentage, starting with the highest percentage.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogGroupFields">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogGroupFieldsOutcome GetLogGroupFields(const Model::GetLogGroupFieldsRequest& request) const;

        /**
         * <p>Returns a list of the fields that are included in log events in the specified
         * log group, along with the percentage of log events that contain each field. The
         * search is limited to a time period that you specify.</p> <p>In the results,
         * fields that start with @ are fields generated by CloudWatch Logs. For example,
         * <code>@timestamp</code> is the timestamp of each log event. For more information
         * about the fields that are generated by CloudWatch logs, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData-discoverable-fields.html">Supported
         * Logs and Discovered Fields</a>.</p> <p>The response results are sorted by the
         * frequency percentage, starting with the highest percentage.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogGroupFields">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLogGroupFieldsOutcomeCallable GetLogGroupFieldsCallable(const Model::GetLogGroupFieldsRequest& request) const;

        /**
         * <p>Returns a list of the fields that are included in log events in the specified
         * log group, along with the percentage of log events that contain each field. The
         * search is limited to a time period that you specify.</p> <p>In the results,
         * fields that start with @ are fields generated by CloudWatch Logs. For example,
         * <code>@timestamp</code> is the timestamp of each log event. For more information
         * about the fields that are generated by CloudWatch logs, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData-discoverable-fields.html">Supported
         * Logs and Discovered Fields</a>.</p> <p>The response results are sorted by the
         * frequency percentage, starting with the highest percentage.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogGroupFields">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLogGroupFieldsAsync(const Model::GetLogGroupFieldsRequest& request, const GetLogGroupFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all of the fields and values of a single log event. All fields are
         * retrieved, even if the original query that produced the
         * <code>logRecordPointer</code> retrieved only a subset of fields. Fields are
         * returned as field name/field value pairs.</p> <p>The full unparsed log event is
         * returned within <code>@message</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogRecordOutcome GetLogRecord(const Model::GetLogRecordRequest& request) const;

        /**
         * <p>Retrieves all of the fields and values of a single log event. All fields are
         * retrieved, even if the original query that produced the
         * <code>logRecordPointer</code> retrieved only a subset of fields. Fields are
         * returned as field name/field value pairs.</p> <p>The full unparsed log event is
         * returned within <code>@message</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogRecord">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLogRecordOutcomeCallable GetLogRecordCallable(const Model::GetLogRecordRequest& request) const;

        /**
         * <p>Retrieves all of the fields and values of a single log event. All fields are
         * retrieved, even if the original query that produced the
         * <code>logRecordPointer</code> retrieved only a subset of fields. Fields are
         * returned as field name/field value pairs.</p> <p>The full unparsed log event is
         * returned within <code>@message</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogRecord">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLogRecordAsync(const Model::GetLogRecordRequest& request, const GetLogRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the results from the specified query.</p> <p>Only the fields
         * requested in the query are returned, along with a <code>@ptr</code> field, which
         * is the identifier for the log record. You can use the value of <code>@ptr</code>
         * in a <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetLogRecord.html">GetLogRecord</a>
         * operation to get the full log record.</p> <p> <code>GetQueryResults</code> does
         * not start a query execution. To run a query, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>.</p>
         * <p>If the value of the <code>Status</code> field in the output is
         * <code>Running</code>, this operation returns only partial results. If you see a
         * value of <code>Scheduled</code> or <code>Running</code> for the status, you can
         * retry the operation later to see the final results. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetQueryResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsOutcome GetQueryResults(const Model::GetQueryResultsRequest& request) const;

        /**
         * <p>Returns the results from the specified query.</p> <p>Only the fields
         * requested in the query are returned, along with a <code>@ptr</code> field, which
         * is the identifier for the log record. You can use the value of <code>@ptr</code>
         * in a <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetLogRecord.html">GetLogRecord</a>
         * operation to get the full log record.</p> <p> <code>GetQueryResults</code> does
         * not start a query execution. To run a query, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>.</p>
         * <p>If the value of the <code>Status</code> field in the output is
         * <code>Running</code>, this operation returns only partial results. If you see a
         * value of <code>Scheduled</code> or <code>Running</code> for the status, you can
         * retry the operation later to see the final results. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetQueryResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryResultsOutcomeCallable GetQueryResultsCallable(const Model::GetQueryResultsRequest& request) const;

        /**
         * <p>Returns the results from the specified query.</p> <p>Only the fields
         * requested in the query are returned, along with a <code>@ptr</code> field, which
         * is the identifier for the log record. You can use the value of <code>@ptr</code>
         * in a <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetLogRecord.html">GetLogRecord</a>
         * operation to get the full log record.</p> <p> <code>GetQueryResults</code> does
         * not start a query execution. To run a query, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>.</p>
         * <p>If the value of the <code>Status</code> field in the output is
         * <code>Running</code>, this operation returns only partial results. If you see a
         * value of <code>Scheduled</code> or <code>Running</code> for the status, you can
         * retry the operation later to see the final results. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetQueryResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryResultsAsync(const Model::GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ListTagsLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsLogGroupOutcome ListTagsLogGroup(const Model::ListTagsLogGroupRequest& request) const;

        /**
         * <p>Lists the tags for the specified log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ListTagsLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsLogGroupOutcomeCallable ListTagsLogGroupCallable(const Model::ListTagsLogGroupRequest& request) const;

        /**
         * <p>Lists the tags for the specified log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ListTagsLogGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsLogGroupAsync(const Model::ListTagsLogGroupRequest& request, const ListTagsLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a destination. This operation is used only to create
         * destinations for cross-account subscriptions.</p> <p>A destination encapsulates
         * a physical resource (such as an Amazon Kinesis stream) and enables you to
         * subscribe to a real-time stream of log events for a different account, ingested
         * using <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>.</p>
         * <p>Through an access policy, a destination controls what is written to it. By
         * default, <code>PutDestination</code> does not set any access policy with the
         * destination, which means a cross-account user cannot call <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutSubscriptionFilter.html">PutSubscriptionFilter</a>
         * against this destination. To enable this, the destination owner must call <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDestinationPolicy.html">PutDestinationPolicy</a>
         * after <code>PutDestination</code>.</p> <p>To perform a
         * <code>PutDestination</code> operation, you must also have the
         * <code>iam:PassRole</code> permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDestinationOutcome PutDestination(const Model::PutDestinationRequest& request) const;

        /**
         * <p>Creates or updates a destination. This operation is used only to create
         * destinations for cross-account subscriptions.</p> <p>A destination encapsulates
         * a physical resource (such as an Amazon Kinesis stream) and enables you to
         * subscribe to a real-time stream of log events for a different account, ingested
         * using <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>.</p>
         * <p>Through an access policy, a destination controls what is written to it. By
         * default, <code>PutDestination</code> does not set any access policy with the
         * destination, which means a cross-account user cannot call <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutSubscriptionFilter.html">PutSubscriptionFilter</a>
         * against this destination. To enable this, the destination owner must call <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDestinationPolicy.html">PutDestinationPolicy</a>
         * after <code>PutDestination</code>.</p> <p>To perform a
         * <code>PutDestination</code> operation, you must also have the
         * <code>iam:PassRole</code> permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDestinationOutcomeCallable PutDestinationCallable(const Model::PutDestinationRequest& request) const;

        /**
         * <p>Creates or updates a destination. This operation is used only to create
         * destinations for cross-account subscriptions.</p> <p>A destination encapsulates
         * a physical resource (such as an Amazon Kinesis stream) and enables you to
         * subscribe to a real-time stream of log events for a different account, ingested
         * using <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>.</p>
         * <p>Through an access policy, a destination controls what is written to it. By
         * default, <code>PutDestination</code> does not set any access policy with the
         * destination, which means a cross-account user cannot call <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutSubscriptionFilter.html">PutSubscriptionFilter</a>
         * against this destination. To enable this, the destination owner must call <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDestinationPolicy.html">PutDestinationPolicy</a>
         * after <code>PutDestination</code>.</p> <p>To perform a
         * <code>PutDestination</code> operation, you must also have the
         * <code>iam:PassRole</code> permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDestinationAsync(const Model::PutDestinationRequest& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an access policy associated with an existing destination.
         * An access policy is an <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM
         * policy document</a> that is used to authorize claims to register a subscription
         * filter against a given destination.</p> <p>If multiple Amazon Web Services
         * accounts are sending logs to this destination, each sender account must be
         * listed separately in the policy. The policy does not support specifying
         * <code>*</code> as the Principal or the use of the
         * <code>aws:PrincipalOrgId</code> global key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestinationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDestinationPolicyOutcome PutDestinationPolicy(const Model::PutDestinationPolicyRequest& request) const;

        /**
         * <p>Creates or updates an access policy associated with an existing destination.
         * An access policy is an <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM
         * policy document</a> that is used to authorize claims to register a subscription
         * filter against a given destination.</p> <p>If multiple Amazon Web Services
         * accounts are sending logs to this destination, each sender account must be
         * listed separately in the policy. The policy does not support specifying
         * <code>*</code> as the Principal or the use of the
         * <code>aws:PrincipalOrgId</code> global key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestinationPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDestinationPolicyOutcomeCallable PutDestinationPolicyCallable(const Model::PutDestinationPolicyRequest& request) const;

        /**
         * <p>Creates or updates an access policy associated with an existing destination.
         * An access policy is an <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM
         * policy document</a> that is used to authorize claims to register a subscription
         * filter against a given destination.</p> <p>If multiple Amazon Web Services
         * accounts are sending logs to this destination, each sender account must be
         * listed separately in the policy. The policy does not support specifying
         * <code>*</code> as the Principal or the use of the
         * <code>aws:PrincipalOrgId</code> global key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestinationPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDestinationPolicyAsync(const Model::PutDestinationPolicyRequest& request, const PutDestinationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a batch of log events to the specified log stream.</p> <p>You must
         * include the sequence token obtained from the response of the previous call. An
         * upload in a newly created log stream does not require a sequence token. You can
         * also get the sequence token in the <code>expectedSequenceToken</code> field from
         * <code>InvalidSequenceTokenException</code>. If you call
         * <code>PutLogEvents</code> twice within a narrow time period using the same value
         * for <code>sequenceToken</code>, both calls might be successful or one might be
         * rejected.</p> <p>The batch of events must satisfy the following constraints:</p>
         * <ul> <li> <p>The maximum batch size is 1,048,576 bytes. This size is calculated
         * as the sum of all event messages in UTF-8, plus 26 bytes for each log event.</p>
         * </li> <li> <p>None of the log events in the batch can be more than 2 hours in
         * the future.</p> </li> <li> <p>None of the log events in the batch can be older
         * than 14 days or older than the retention period of the log group.</p> </li> <li>
         * <p>The log events in the batch must be in chronological order by their
         * timestamp. The timestamp is the time the event occurred, expressed as the number
         * of milliseconds after Jan 1, 1970 00:00:00 UTC. (In Amazon Web Services Tools
         * for PowerShell and the Amazon Web Services SDK for .NET, the timestamp is
         * specified in .NET format: yyyy-mm-ddThh:mm:ss. For example,
         * 2017-09-15T13:45:30.) </p> </li> <li> <p>A batch of log events in a single
         * request cannot span more than 24 hours. Otherwise, the operation fails.</p>
         * </li> <li> <p>The maximum number of log events in a batch is 10,000.</p> </li>
         * <li> <p>There is a quota of 5 requests per second per log stream. Additional
         * requests are throttled. This quota can't be changed.</p> </li> </ul> <p>If a
         * call to <code>PutLogEvents</code> returns "UnrecognizedClientException" the most
         * likely cause is an invalid Amazon Web Services access key ID or secret key.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLogEventsOutcome PutLogEvents(const Model::PutLogEventsRequest& request) const;

        /**
         * <p>Uploads a batch of log events to the specified log stream.</p> <p>You must
         * include the sequence token obtained from the response of the previous call. An
         * upload in a newly created log stream does not require a sequence token. You can
         * also get the sequence token in the <code>expectedSequenceToken</code> field from
         * <code>InvalidSequenceTokenException</code>. If you call
         * <code>PutLogEvents</code> twice within a narrow time period using the same value
         * for <code>sequenceToken</code>, both calls might be successful or one might be
         * rejected.</p> <p>The batch of events must satisfy the following constraints:</p>
         * <ul> <li> <p>The maximum batch size is 1,048,576 bytes. This size is calculated
         * as the sum of all event messages in UTF-8, plus 26 bytes for each log event.</p>
         * </li> <li> <p>None of the log events in the batch can be more than 2 hours in
         * the future.</p> </li> <li> <p>None of the log events in the batch can be older
         * than 14 days or older than the retention period of the log group.</p> </li> <li>
         * <p>The log events in the batch must be in chronological order by their
         * timestamp. The timestamp is the time the event occurred, expressed as the number
         * of milliseconds after Jan 1, 1970 00:00:00 UTC. (In Amazon Web Services Tools
         * for PowerShell and the Amazon Web Services SDK for .NET, the timestamp is
         * specified in .NET format: yyyy-mm-ddThh:mm:ss. For example,
         * 2017-09-15T13:45:30.) </p> </li> <li> <p>A batch of log events in a single
         * request cannot span more than 24 hours. Otherwise, the operation fails.</p>
         * </li> <li> <p>The maximum number of log events in a batch is 10,000.</p> </li>
         * <li> <p>There is a quota of 5 requests per second per log stream. Additional
         * requests are throttled. This quota can't be changed.</p> </li> </ul> <p>If a
         * call to <code>PutLogEvents</code> returns "UnrecognizedClientException" the most
         * likely cause is an invalid Amazon Web Services access key ID or secret key.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutLogEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLogEventsOutcomeCallable PutLogEventsCallable(const Model::PutLogEventsRequest& request) const;

        /**
         * <p>Uploads a batch of log events to the specified log stream.</p> <p>You must
         * include the sequence token obtained from the response of the previous call. An
         * upload in a newly created log stream does not require a sequence token. You can
         * also get the sequence token in the <code>expectedSequenceToken</code> field from
         * <code>InvalidSequenceTokenException</code>. If you call
         * <code>PutLogEvents</code> twice within a narrow time period using the same value
         * for <code>sequenceToken</code>, both calls might be successful or one might be
         * rejected.</p> <p>The batch of events must satisfy the following constraints:</p>
         * <ul> <li> <p>The maximum batch size is 1,048,576 bytes. This size is calculated
         * as the sum of all event messages in UTF-8, plus 26 bytes for each log event.</p>
         * </li> <li> <p>None of the log events in the batch can be more than 2 hours in
         * the future.</p> </li> <li> <p>None of the log events in the batch can be older
         * than 14 days or older than the retention period of the log group.</p> </li> <li>
         * <p>The log events in the batch must be in chronological order by their
         * timestamp. The timestamp is the time the event occurred, expressed as the number
         * of milliseconds after Jan 1, 1970 00:00:00 UTC. (In Amazon Web Services Tools
         * for PowerShell and the Amazon Web Services SDK for .NET, the timestamp is
         * specified in .NET format: yyyy-mm-ddThh:mm:ss. For example,
         * 2017-09-15T13:45:30.) </p> </li> <li> <p>A batch of log events in a single
         * request cannot span more than 24 hours. Otherwise, the operation fails.</p>
         * </li> <li> <p>The maximum number of log events in a batch is 10,000.</p> </li>
         * <li> <p>There is a quota of 5 requests per second per log stream. Additional
         * requests are throttled. This quota can't be changed.</p> </li> </ul> <p>If a
         * call to <code>PutLogEvents</code> returns "UnrecognizedClientException" the most
         * likely cause is an invalid Amazon Web Services access key ID or secret key.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutLogEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLogEventsAsync(const Model::PutLogEventsRequest& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a metric filter and associates it with the specified log
         * group. Metric filters allow you to configure rules to extract metric data from
         * log events ingested through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>.</p>
         * <p>The maximum number of metric filters that can be associated with a log group
         * is 100.</p> <p>When you create a metric filter, you can also optionally assign a
         * unit and dimensions to the metric that is created.</p>  <p>Metrics
         * extracted from log events are charged as custom metrics. To prevent unexpected
         * high charges, do not specify high-cardinality fields such as
         * <code>IPAddress</code> or <code>requestID</code> as dimensions. Each different
         * value found for a dimension is treated as a separate metric and accrues charges
         * as a separate custom metric. </p> <p>To help prevent accidental high charges,
         * Amazon disables a metric filter if it generates 1000 different name/value pairs
         * for the dimensions that you have specified within a certain amount of time.</p>
         * <p>You can also set up a billing alarm to alert you if your charges are higher
         * than expected. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/monitor_estimated_charges_with_cloudwatch.html">
         * Creating a Billing Alarm to Monitor Your Estimated Amazon Web Services
         * Charges</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutMetricFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricFilterOutcome PutMetricFilter(const Model::PutMetricFilterRequest& request) const;

        /**
         * <p>Creates or updates a metric filter and associates it with the specified log
         * group. Metric filters allow you to configure rules to extract metric data from
         * log events ingested through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>.</p>
         * <p>The maximum number of metric filters that can be associated with a log group
         * is 100.</p> <p>When you create a metric filter, you can also optionally assign a
         * unit and dimensions to the metric that is created.</p>  <p>Metrics
         * extracted from log events are charged as custom metrics. To prevent unexpected
         * high charges, do not specify high-cardinality fields such as
         * <code>IPAddress</code> or <code>requestID</code> as dimensions. Each different
         * value found for a dimension is treated as a separate metric and accrues charges
         * as a separate custom metric. </p> <p>To help prevent accidental high charges,
         * Amazon disables a metric filter if it generates 1000 different name/value pairs
         * for the dimensions that you have specified within a certain amount of time.</p>
         * <p>You can also set up a billing alarm to alert you if your charges are higher
         * than expected. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/monitor_estimated_charges_with_cloudwatch.html">
         * Creating a Billing Alarm to Monitor Your Estimated Amazon Web Services
         * Charges</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutMetricFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMetricFilterOutcomeCallable PutMetricFilterCallable(const Model::PutMetricFilterRequest& request) const;

        /**
         * <p>Creates or updates a metric filter and associates it with the specified log
         * group. Metric filters allow you to configure rules to extract metric data from
         * log events ingested through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>.</p>
         * <p>The maximum number of metric filters that can be associated with a log group
         * is 100.</p> <p>When you create a metric filter, you can also optionally assign a
         * unit and dimensions to the metric that is created.</p>  <p>Metrics
         * extracted from log events are charged as custom metrics. To prevent unexpected
         * high charges, do not specify high-cardinality fields such as
         * <code>IPAddress</code> or <code>requestID</code> as dimensions. Each different
         * value found for a dimension is treated as a separate metric and accrues charges
         * as a separate custom metric. </p> <p>To help prevent accidental high charges,
         * Amazon disables a metric filter if it generates 1000 different name/value pairs
         * for the dimensions that you have specified within a certain amount of time.</p>
         * <p>You can also set up a billing alarm to alert you if your charges are higher
         * than expected. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/monitor_estimated_charges_with_cloudwatch.html">
         * Creating a Billing Alarm to Monitor Your Estimated Amazon Web Services
         * Charges</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutMetricFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMetricFilterAsync(const Model::PutMetricFilterRequest& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a query definition for CloudWatch Logs Insights. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AnalyzingLogData.html">Analyzing
         * Log Data with CloudWatch Logs Insights</a>.</p> <p>To update a query definition,
         * specify its <code>queryDefinitionId</code> in your request. The values of
         * <code>name</code>, <code>queryString</code>, and <code>logGroupNames</code> are
         * changed to the values that you specify in your update operation. No current
         * values are retained from the current query definition. For example, if you
         * update a current query definition that includes log groups, and you don't
         * specify the <code>logGroupNames</code> parameter in your update operation, the
         * query definition changes to contain no log groups.</p> <p>You must have the
         * <code>logs:PutQueryDefinition</code> permission to be able to perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutQueryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutQueryDefinitionOutcome PutQueryDefinition(const Model::PutQueryDefinitionRequest& request) const;

        /**
         * <p>Creates or updates a query definition for CloudWatch Logs Insights. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AnalyzingLogData.html">Analyzing
         * Log Data with CloudWatch Logs Insights</a>.</p> <p>To update a query definition,
         * specify its <code>queryDefinitionId</code> in your request. The values of
         * <code>name</code>, <code>queryString</code>, and <code>logGroupNames</code> are
         * changed to the values that you specify in your update operation. No current
         * values are retained from the current query definition. For example, if you
         * update a current query definition that includes log groups, and you don't
         * specify the <code>logGroupNames</code> parameter in your update operation, the
         * query definition changes to contain no log groups.</p> <p>You must have the
         * <code>logs:PutQueryDefinition</code> permission to be able to perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutQueryDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutQueryDefinitionOutcomeCallable PutQueryDefinitionCallable(const Model::PutQueryDefinitionRequest& request) const;

        /**
         * <p>Creates or updates a query definition for CloudWatch Logs Insights. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AnalyzingLogData.html">Analyzing
         * Log Data with CloudWatch Logs Insights</a>.</p> <p>To update a query definition,
         * specify its <code>queryDefinitionId</code> in your request. The values of
         * <code>name</code>, <code>queryString</code>, and <code>logGroupNames</code> are
         * changed to the values that you specify in your update operation. No current
         * values are retained from the current query definition. For example, if you
         * update a current query definition that includes log groups, and you don't
         * specify the <code>logGroupNames</code> parameter in your update operation, the
         * query definition changes to contain no log groups.</p> <p>You must have the
         * <code>logs:PutQueryDefinition</code> permission to be able to perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutQueryDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutQueryDefinitionAsync(const Model::PutQueryDefinitionRequest& request, const PutQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a resource policy allowing other Amazon Web Services
         * services to put log events to this account, such as Amazon Route 53. An account
         * can have up to 10 resource policies per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>Creates or updates a resource policy allowing other Amazon Web Services
         * services to put log events to this account, such as Amazon Route 53. An account
         * can have up to 10 resource policies per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>Creates or updates a resource policy allowing other Amazon Web Services
         * services to put log events to this account, such as Amazon Route 53. An account
         * can have up to 10 resource policies per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the retention of the specified log group. A retention policy allows you
         * to configure the number of days for which to retain log events in the specified
         * log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionPolicyOutcome PutRetentionPolicy(const Model::PutRetentionPolicyRequest& request) const;

        /**
         * <p>Sets the retention of the specified log group. A retention policy allows you
         * to configure the number of days for which to retain log events in the specified
         * log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutRetentionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRetentionPolicyOutcomeCallable PutRetentionPolicyCallable(const Model::PutRetentionPolicyRequest& request) const;

        /**
         * <p>Sets the retention of the specified log group. A retention policy allows you
         * to configure the number of days for which to retain log events in the specified
         * log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutRetentionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRetentionPolicyAsync(const Model::PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a subscription filter and associates it with the specified
         * log group. Subscription filters allow you to subscribe to a real-time stream of
         * log events ingested through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>
         * and have them delivered to a specific destination. When log events are sent to
         * the receiving service, they are Base64 encoded and compressed with the gzip
         * format.</p> <p>The following destinations are supported for subscription
         * filters:</p> <ul> <li> <p>An Amazon Kinesis stream belonging to the same account
         * as the subscription filter, for same-account delivery.</p> </li> <li> <p>A
         * logical destination that belongs to a different account, for cross-account
         * delivery.</p> </li> <li> <p>An Amazon Kinesis Firehose delivery stream that
         * belongs to the same account as the subscription filter, for same-account
         * delivery.</p> </li> <li> <p>An Lambda function that belongs to the same account
         * as the subscription filter, for same-account delivery.</p> </li> </ul> <p>Each
         * log group can have up to two subscription filters associated with it. If you are
         * updating an existing filter, you must specify the correct name in
         * <code>filterName</code>. </p> <p>To perform a <code>PutSubscriptionFilter</code>
         * operation, you must also have the <code>iam:PassRole</code>
         * permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutSubscriptionFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSubscriptionFilterOutcome PutSubscriptionFilter(const Model::PutSubscriptionFilterRequest& request) const;

        /**
         * <p>Creates or updates a subscription filter and associates it with the specified
         * log group. Subscription filters allow you to subscribe to a real-time stream of
         * log events ingested through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>
         * and have them delivered to a specific destination. When log events are sent to
         * the receiving service, they are Base64 encoded and compressed with the gzip
         * format.</p> <p>The following destinations are supported for subscription
         * filters:</p> <ul> <li> <p>An Amazon Kinesis stream belonging to the same account
         * as the subscription filter, for same-account delivery.</p> </li> <li> <p>A
         * logical destination that belongs to a different account, for cross-account
         * delivery.</p> </li> <li> <p>An Amazon Kinesis Firehose delivery stream that
         * belongs to the same account as the subscription filter, for same-account
         * delivery.</p> </li> <li> <p>An Lambda function that belongs to the same account
         * as the subscription filter, for same-account delivery.</p> </li> </ul> <p>Each
         * log group can have up to two subscription filters associated with it. If you are
         * updating an existing filter, you must specify the correct name in
         * <code>filterName</code>. </p> <p>To perform a <code>PutSubscriptionFilter</code>
         * operation, you must also have the <code>iam:PassRole</code>
         * permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutSubscriptionFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSubscriptionFilterOutcomeCallable PutSubscriptionFilterCallable(const Model::PutSubscriptionFilterRequest& request) const;

        /**
         * <p>Creates or updates a subscription filter and associates it with the specified
         * log group. Subscription filters allow you to subscribe to a real-time stream of
         * log events ingested through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>
         * and have them delivered to a specific destination. When log events are sent to
         * the receiving service, they are Base64 encoded and compressed with the gzip
         * format.</p> <p>The following destinations are supported for subscription
         * filters:</p> <ul> <li> <p>An Amazon Kinesis stream belonging to the same account
         * as the subscription filter, for same-account delivery.</p> </li> <li> <p>A
         * logical destination that belongs to a different account, for cross-account
         * delivery.</p> </li> <li> <p>An Amazon Kinesis Firehose delivery stream that
         * belongs to the same account as the subscription filter, for same-account
         * delivery.</p> </li> <li> <p>An Lambda function that belongs to the same account
         * as the subscription filter, for same-account delivery.</p> </li> </ul> <p>Each
         * log group can have up to two subscription filters associated with it. If you are
         * updating an existing filter, you must specify the correct name in
         * <code>filterName</code>. </p> <p>To perform a <code>PutSubscriptionFilter</code>
         * operation, you must also have the <code>iam:PassRole</code>
         * permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutSubscriptionFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSubscriptionFilterAsync(const Model::PutSubscriptionFilterRequest& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules a query of a log group using CloudWatch Logs Insights. You specify
         * the log group and time range to query and the query string to use.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
         * Logs Insights Query Syntax</a>.</p> <p>Queries time out after 15 minutes of
         * execution. If your queries are timing out, reduce the time range being searched
         * or partition your query into a number of queries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StartQuery">AWS API
         * Reference</a></p>
         */
        virtual Model::StartQueryOutcome StartQuery(const Model::StartQueryRequest& request) const;

        /**
         * <p>Schedules a query of a log group using CloudWatch Logs Insights. You specify
         * the log group and time range to query and the query string to use.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
         * Logs Insights Query Syntax</a>.</p> <p>Queries time out after 15 minutes of
         * execution. If your queries are timing out, reduce the time range being searched
         * or partition your query into a number of queries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StartQuery">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartQueryOutcomeCallable StartQueryCallable(const Model::StartQueryRequest& request) const;

        /**
         * <p>Schedules a query of a log group using CloudWatch Logs Insights. You specify
         * the log group and time range to query and the query string to use.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
         * Logs Insights Query Syntax</a>.</p> <p>Queries time out after 15 minutes of
         * execution. If your queries are timing out, reduce the time range being searched
         * or partition your query into a number of queries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StartQuery">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartQueryAsync(const Model::StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a CloudWatch Logs Insights query that is in progress. If the query has
         * already ended, the operation returns an error indicating that the specified
         * query is not running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StopQuery">AWS API
         * Reference</a></p>
         */
        virtual Model::StopQueryOutcome StopQuery(const Model::StopQueryRequest& request) const;

        /**
         * <p>Stops a CloudWatch Logs Insights query that is in progress. If the query has
         * already ended, the operation returns an error indicating that the specified
         * query is not running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StopQuery">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopQueryOutcomeCallable StopQueryCallable(const Model::StopQueryRequest& request) const;

        /**
         * <p>Stops a CloudWatch Logs Insights query that is in progress. If the query has
         * already ended, the operation returns an error indicating that the specified
         * query is not running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StopQuery">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopQueryAsync(const Model::StopQueryRequest& request, const StopQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the specified tags for the specified log group.</p> <p>To
         * list the tags for a log group, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsLogGroup.html">ListTagsLogGroup</a>.
         * To remove tags, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UntagLogGroup.html">UntagLogGroup</a>.</p>
         * <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html#log-group-tagging">Tag
         * Log Groups in Amazon CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
         * Guide</i>.</p> <p>CloudWatch Logs doesn’t support IAM policies that prevent
         * users from assigning specified tags to log groups using the
         * <code>aws:Resource/<i>key-name</i> </code> or <code>aws:TagKeys</code> condition
         * keys. For more information about using tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
         * access to Amazon Web Services resources using tags</a>.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TagLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::TagLogGroupOutcome TagLogGroup(const Model::TagLogGroupRequest& request) const;

        /**
         * <p>Adds or updates the specified tags for the specified log group.</p> <p>To
         * list the tags for a log group, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsLogGroup.html">ListTagsLogGroup</a>.
         * To remove tags, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UntagLogGroup.html">UntagLogGroup</a>.</p>
         * <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html#log-group-tagging">Tag
         * Log Groups in Amazon CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
         * Guide</i>.</p> <p>CloudWatch Logs doesn’t support IAM policies that prevent
         * users from assigning specified tags to log groups using the
         * <code>aws:Resource/<i>key-name</i> </code> or <code>aws:TagKeys</code> condition
         * keys. For more information about using tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
         * access to Amazon Web Services resources using tags</a>.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TagLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagLogGroupOutcomeCallable TagLogGroupCallable(const Model::TagLogGroupRequest& request) const;

        /**
         * <p>Adds or updates the specified tags for the specified log group.</p> <p>To
         * list the tags for a log group, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsLogGroup.html">ListTagsLogGroup</a>.
         * To remove tags, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UntagLogGroup.html">UntagLogGroup</a>.</p>
         * <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html#log-group-tagging">Tag
         * Log Groups in Amazon CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
         * Guide</i>.</p> <p>CloudWatch Logs doesn’t support IAM policies that prevent
         * users from assigning specified tags to log groups using the
         * <code>aws:Resource/<i>key-name</i> </code> or <code>aws:TagKeys</code> condition
         * keys. For more information about using tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
         * access to Amazon Web Services resources using tags</a>.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TagLogGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagLogGroupAsync(const Model::TagLogGroupRequest& request, const TagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests the filter pattern of a metric filter against a sample of log event
         * messages. You can use this operation to validate the correctness of a metric
         * filter pattern.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TestMetricFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::TestMetricFilterOutcome TestMetricFilter(const Model::TestMetricFilterRequest& request) const;

        /**
         * <p>Tests the filter pattern of a metric filter against a sample of log event
         * messages. You can use this operation to validate the correctness of a metric
         * filter pattern.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TestMetricFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestMetricFilterOutcomeCallable TestMetricFilterCallable(const Model::TestMetricFilterRequest& request) const;

        /**
         * <p>Tests the filter pattern of a metric filter against a sample of log event
         * messages. You can use this operation to validate the correctness of a metric
         * filter pattern.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TestMetricFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestMetricFilterAsync(const Model::TestMetricFilterRequest& request, const TestMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified log group.</p> <p>To list the
         * tags for a log group, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsLogGroup.html">ListTagsLogGroup</a>.
         * To add tags, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_TagLogGroup.html">TagLogGroup</a>.</p>
         * <p>CloudWatch Logs doesn’t support IAM policies that prevent users from
         * assigning specified tags to log groups using the
         * <code>aws:Resource/<i>key-name</i> </code> or <code>aws:TagKeys</code> condition
         * keys. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/UntagLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagLogGroupOutcome UntagLogGroup(const Model::UntagLogGroupRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified log group.</p> <p>To list the
         * tags for a log group, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsLogGroup.html">ListTagsLogGroup</a>.
         * To add tags, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_TagLogGroup.html">TagLogGroup</a>.</p>
         * <p>CloudWatch Logs doesn’t support IAM policies that prevent users from
         * assigning specified tags to log groups using the
         * <code>aws:Resource/<i>key-name</i> </code> or <code>aws:TagKeys</code> condition
         * keys. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/UntagLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagLogGroupOutcomeCallable UntagLogGroupCallable(const Model::UntagLogGroupRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified log group.</p> <p>To list the
         * tags for a log group, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsLogGroup.html">ListTagsLogGroup</a>.
         * To add tags, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_TagLogGroup.html">TagLogGroup</a>.</p>
         * <p>CloudWatch Logs doesn’t support IAM policies that prevent users from
         * assigning specified tags to log groups using the
         * <code>aws:Resource/<i>key-name</i> </code> or <code>aws:TagKeys</code> condition
         * keys. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/UntagLogGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagLogGroupAsync(const Model::UntagLogGroupRequest& request, const UntagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateKmsKeyAsyncHelper(const Model::AssociateKmsKeyRequest& request, const AssociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelExportTaskAsyncHelper(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateExportTaskAsyncHelper(const Model::CreateExportTaskRequest& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLogGroupAsyncHelper(const Model::CreateLogGroupRequest& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLogStreamAsyncHelper(const Model::CreateLogStreamRequest& request, const CreateLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDestinationAsyncHelper(const Model::DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLogGroupAsyncHelper(const Model::DeleteLogGroupRequest& request, const DeleteLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLogStreamAsyncHelper(const Model::DeleteLogStreamRequest& request, const DeleteLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMetricFilterAsyncHelper(const Model::DeleteMetricFilterRequest& request, const DeleteMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteQueryDefinitionAsyncHelper(const Model::DeleteQueryDefinitionRequest& request, const DeleteQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourcePolicyAsyncHelper(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRetentionPolicyAsyncHelper(const Model::DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubscriptionFilterAsyncHelper(const Model::DeleteSubscriptionFilterRequest& request, const DeleteSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDestinationsAsyncHelper(const Model::DescribeDestinationsRequest& request, const DescribeDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExportTasksAsyncHelper(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLogGroupsAsyncHelper(const Model::DescribeLogGroupsRequest& request, const DescribeLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLogStreamsAsyncHelper(const Model::DescribeLogStreamsRequest& request, const DescribeLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMetricFiltersAsyncHelper(const Model::DescribeMetricFiltersRequest& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeQueriesAsyncHelper(const Model::DescribeQueriesRequest& request, const DescribeQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeQueryDefinitionsAsyncHelper(const Model::DescribeQueryDefinitionsRequest& request, const DescribeQueryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourcePoliciesAsyncHelper(const Model::DescribeResourcePoliciesRequest& request, const DescribeResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscriptionFiltersAsyncHelper(const Model::DescribeSubscriptionFiltersRequest& request, const DescribeSubscriptionFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateKmsKeyAsyncHelper(const Model::DisassociateKmsKeyRequest& request, const DisassociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FilterLogEventsAsyncHelper(const Model::FilterLogEventsRequest& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLogEventsAsyncHelper(const Model::GetLogEventsRequest& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLogGroupFieldsAsyncHelper(const Model::GetLogGroupFieldsRequest& request, const GetLogGroupFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLogRecordAsyncHelper(const Model::GetLogRecordRequest& request, const GetLogRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQueryResultsAsyncHelper(const Model::GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsLogGroupAsyncHelper(const Model::ListTagsLogGroupRequest& request, const ListTagsLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDestinationAsyncHelper(const Model::PutDestinationRequest& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDestinationPolicyAsyncHelper(const Model::PutDestinationPolicyRequest& request, const PutDestinationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLogEventsAsyncHelper(const Model::PutLogEventsRequest& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMetricFilterAsyncHelper(const Model::PutMetricFilterRequest& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutQueryDefinitionAsyncHelper(const Model::PutQueryDefinitionRequest& request, const PutQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourcePolicyAsyncHelper(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRetentionPolicyAsyncHelper(const Model::PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSubscriptionFilterAsyncHelper(const Model::PutSubscriptionFilterRequest& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartQueryAsyncHelper(const Model::StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopQueryAsyncHelper(const Model::StopQueryRequest& request, const StopQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagLogGroupAsyncHelper(const Model::TagLogGroupRequest& request, const TagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestMetricFilterAsyncHelper(const Model::TestMetricFilterRequest& request, const TestMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagLogGroupAsyncHelper(const Model::UntagLogGroupRequest& request, const UntagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatchLogs
} // namespace Aws
