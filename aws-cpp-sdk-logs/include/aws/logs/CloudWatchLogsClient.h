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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/CreateExportTaskResult.h>
#include <aws/logs/model/DescribeDestinationsResult.h>
#include <aws/logs/model/DescribeExportTasksResult.h>
#include <aws/logs/model/DescribeLogGroupsResult.h>
#include <aws/logs/model/DescribeLogStreamsResult.h>
#include <aws/logs/model/DescribeMetricFiltersResult.h>
#include <aws/logs/model/DescribeSubscriptionFiltersResult.h>
#include <aws/logs/model/FilterLogEventsResult.h>
#include <aws/logs/model/GetLogEventsResult.h>
#include <aws/logs/model/ListTagsLogGroupResult.h>
#include <aws/logs/model/PutDestinationResult.h>
#include <aws/logs/model/PutLogEventsResult.h>
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

namespace CloudWatchLogs
{

namespace Model
{
        class CancelExportTaskRequest;
        class CreateExportTaskRequest;
        class CreateLogGroupRequest;
        class CreateLogStreamRequest;
        class DeleteDestinationRequest;
        class DeleteLogGroupRequest;
        class DeleteLogStreamRequest;
        class DeleteMetricFilterRequest;
        class DeleteRetentionPolicyRequest;
        class DeleteSubscriptionFilterRequest;
        class DescribeDestinationsRequest;
        class DescribeExportTasksRequest;
        class DescribeLogGroupsRequest;
        class DescribeLogStreamsRequest;
        class DescribeMetricFiltersRequest;
        class DescribeSubscriptionFiltersRequest;
        class FilterLogEventsRequest;
        class GetLogEventsRequest;
        class ListTagsLogGroupRequest;
        class PutDestinationRequest;
        class PutDestinationPolicyRequest;
        class PutLogEventsRequest;
        class PutMetricFilterRequest;
        class PutRetentionPolicyRequest;
        class PutSubscriptionFilterRequest;
        class TagLogGroupRequest;
        class TestMetricFilterRequest;
        class UntagLogGroupRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> CancelExportTaskOutcome;
        typedef Aws::Utils::Outcome<CreateExportTaskResult, Aws::Client::AWSError<CloudWatchLogsErrors>> CreateExportTaskOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> CreateLogGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> CreateLogStreamOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DeleteDestinationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DeleteLogGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DeleteLogStreamOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DeleteMetricFilterOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DeleteRetentionPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DeleteSubscriptionFilterOutcome;
        typedef Aws::Utils::Outcome<DescribeDestinationsResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DescribeDestinationsOutcome;
        typedef Aws::Utils::Outcome<DescribeExportTasksResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DescribeExportTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeLogGroupsResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DescribeLogGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeLogStreamsResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DescribeLogStreamsOutcome;
        typedef Aws::Utils::Outcome<DescribeMetricFiltersResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DescribeMetricFiltersOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscriptionFiltersResult, Aws::Client::AWSError<CloudWatchLogsErrors>> DescribeSubscriptionFiltersOutcome;
        typedef Aws::Utils::Outcome<FilterLogEventsResult, Aws::Client::AWSError<CloudWatchLogsErrors>> FilterLogEventsOutcome;
        typedef Aws::Utils::Outcome<GetLogEventsResult, Aws::Client::AWSError<CloudWatchLogsErrors>> GetLogEventsOutcome;
        typedef Aws::Utils::Outcome<ListTagsLogGroupResult, Aws::Client::AWSError<CloudWatchLogsErrors>> ListTagsLogGroupOutcome;
        typedef Aws::Utils::Outcome<PutDestinationResult, Aws::Client::AWSError<CloudWatchLogsErrors>> PutDestinationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> PutDestinationPolicyOutcome;
        typedef Aws::Utils::Outcome<PutLogEventsResult, Aws::Client::AWSError<CloudWatchLogsErrors>> PutLogEventsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> PutMetricFilterOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> PutRetentionPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> PutSubscriptionFilterOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> TagLogGroupOutcome;
        typedef Aws::Utils::Outcome<TestMetricFilterResult, Aws::Client::AWSError<CloudWatchLogsErrors>> TestMetricFilterOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchLogsErrors>> UntagLogGroupOutcome;

        typedef std::future<CancelExportTaskOutcome> CancelExportTaskOutcomeCallable;
        typedef std::future<CreateExportTaskOutcome> CreateExportTaskOutcomeCallable;
        typedef std::future<CreateLogGroupOutcome> CreateLogGroupOutcomeCallable;
        typedef std::future<CreateLogStreamOutcome> CreateLogStreamOutcomeCallable;
        typedef std::future<DeleteDestinationOutcome> DeleteDestinationOutcomeCallable;
        typedef std::future<DeleteLogGroupOutcome> DeleteLogGroupOutcomeCallable;
        typedef std::future<DeleteLogStreamOutcome> DeleteLogStreamOutcomeCallable;
        typedef std::future<DeleteMetricFilterOutcome> DeleteMetricFilterOutcomeCallable;
        typedef std::future<DeleteRetentionPolicyOutcome> DeleteRetentionPolicyOutcomeCallable;
        typedef std::future<DeleteSubscriptionFilterOutcome> DeleteSubscriptionFilterOutcomeCallable;
        typedef std::future<DescribeDestinationsOutcome> DescribeDestinationsOutcomeCallable;
        typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
        typedef std::future<DescribeLogGroupsOutcome> DescribeLogGroupsOutcomeCallable;
        typedef std::future<DescribeLogStreamsOutcome> DescribeLogStreamsOutcomeCallable;
        typedef std::future<DescribeMetricFiltersOutcome> DescribeMetricFiltersOutcomeCallable;
        typedef std::future<DescribeSubscriptionFiltersOutcome> DescribeSubscriptionFiltersOutcomeCallable;
        typedef std::future<FilterLogEventsOutcome> FilterLogEventsOutcomeCallable;
        typedef std::future<GetLogEventsOutcome> GetLogEventsOutcomeCallable;
        typedef std::future<ListTagsLogGroupOutcome> ListTagsLogGroupOutcomeCallable;
        typedef std::future<PutDestinationOutcome> PutDestinationOutcomeCallable;
        typedef std::future<PutDestinationPolicyOutcome> PutDestinationPolicyOutcomeCallable;
        typedef std::future<PutLogEventsOutcome> PutLogEventsOutcomeCallable;
        typedef std::future<PutMetricFilterOutcome> PutMetricFilterOutcomeCallable;
        typedef std::future<PutRetentionPolicyOutcome> PutRetentionPolicyOutcomeCallable;
        typedef std::future<PutSubscriptionFilterOutcome> PutSubscriptionFilterOutcomeCallable;
        typedef std::future<TagLogGroupOutcome> TagLogGroupOutcomeCallable;
        typedef std::future<TestMetricFilterOutcome> TestMetricFilterOutcomeCallable;
        typedef std::future<UntagLogGroupOutcome> UntagLogGroupOutcomeCallable;
} // namespace Model

  class CloudWatchLogsClient;

    typedef std::function<void(const CloudWatchLogsClient*, const Model::CancelExportTaskRequest&, const Model::CancelExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelExportTaskResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateExportTaskRequest&, const Model::CreateExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExportTaskResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateLogGroupRequest&, const Model::CreateLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateLogStreamRequest&, const Model::CreateLogStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteDestinationRequest&, const Model::DeleteDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteLogGroupRequest&, const Model::DeleteLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteLogStreamRequest&, const Model::DeleteLogStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteMetricFilterRequest&, const Model::DeleteMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteRetentionPolicyRequest&, const Model::DeleteRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteSubscriptionFilterRequest&, const Model::DeleteSubscriptionFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeDestinationsRequest&, const Model::DescribeDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDestinationsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeLogGroupsRequest&, const Model::DescribeLogGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLogGroupsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeLogStreamsRequest&, const Model::DescribeLogStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLogStreamsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeMetricFiltersRequest&, const Model::DescribeMetricFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricFiltersResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeSubscriptionFiltersRequest&, const Model::DescribeSubscriptionFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscriptionFiltersResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::FilterLogEventsRequest&, const Model::FilterLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FilterLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetLogEventsRequest&, const Model::GetLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::ListTagsLogGroupRequest&, const Model::ListTagsLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDestinationRequest&, const Model::PutDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDestinationPolicyRequest&, const Model::PutDestinationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDestinationPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutLogEventsRequest&, const Model::PutLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutMetricFilterRequest&, const Model::PutMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutRetentionPolicyRequest&, const Model::PutRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutSubscriptionFilterRequest&, const Model::PutSubscriptionFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSubscriptionFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::TagLogGroupRequest&, const Model::TagLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::TestMetricFilterRequest&, const Model::TestMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::UntagLogGroupRequest&, const Model::UntagLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagLogGroupResponseReceivedHandler;

  /**
   * <p>You can use Amazon CloudWatch Logs to monitor, store, and access your log
   * files from EC2 instances, Amazon CloudTrail, or other sources. You can then
   * retrieve the associated log data from CloudWatch Logs using the Amazon
   * CloudWatch console, the CloudWatch Logs commands in the AWS CLI, the CloudWatch
   * Logs API, or the CloudWatch Logs SDK.</p> <p>You can use CloudWatch Logs to:</p>
   * <ul> <li> <p> <b>Monitor Logs from Amazon EC2 Instances in Real-time</b>: You
   * can use CloudWatch Logs to monitor applications and systems using log data. For
   * example, CloudWatch Logs can track the number of errors that occur in your
   * application logs and send you a notification whenever the rate of errors exceeds
   * a threshold you specify. CloudWatch Logs uses your log data for monitoring; so,
   * no code changes are required. For example, you can monitor application logs for
   * specific literal terms (such as "NullReferenceException") or count the number of
   * occurrences of a literal term at a particular position in log data (such as
   * "404" status codes in an Apache access log). When the term you are searching for
   * is found, CloudWatch Logs reports the data to a Amazon CloudWatch metric that
   * you specify.</p> </li> <li> <p> <b>Monitor Amazon CloudTrail Logged Events</b>:
   * You can create alarms in Amazon CloudWatch and receive notifications of
   * particular API activity as captured by CloudTrail and use the notification to
   * perform troubleshooting.</p> </li> <li> <p> <b>Archive Log Data</b>: You can use
   * CloudWatch Logs to store your log data in highly durable storage. You can change
   * the log retention setting so that any log events older than this setting are
   * automatically deleted. The CloudWatch Logs agent makes it easy to quickly send
   * both rotated and non-rotated log data off of a host and into the log service.
   * You can then access the raw log data when you need it.</p> </li> </ul>
   */
  class AWS_CLOUDWATCHLOGS_API CloudWatchLogsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchLogsClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchLogsClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchLogsClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CloudWatchLogsClient();

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
         * log group to an Amazon S3 bucket.</p> <p>This is an asynchronous call. If all
         * the required information is provided, this operation initiates an export task
         * and responds with the ID of the task. After the task has started, you can use
         * <a>DescribeExportTasks</a> to get the status of the export task. Each account
         * can only have one active (<code>RUNNING</code> or <code>PENDING</code>) export
         * task at a time. To cancel an export task, use <a>CancelExportTask</a>.</p>
         * <p>You can export logs from multiple log groups or multiple time ranges to the
         * same S3 bucket. To separate out log data for each export task, you can specify a
         * prefix that will be used as the Amazon S3 key prefix for all exported
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportTaskOutcome CreateExportTask(const Model::CreateExportTaskRequest& request) const;

        /**
         * <p>Creates an export task, which allows you to efficiently export data from a
         * log group to an Amazon S3 bucket.</p> <p>This is an asynchronous call. If all
         * the required information is provided, this operation initiates an export task
         * and responds with the ID of the task. After the task has started, you can use
         * <a>DescribeExportTasks</a> to get the status of the export task. Each account
         * can only have one active (<code>RUNNING</code> or <code>PENDING</code>) export
         * task at a time. To cancel an export task, use <a>CancelExportTask</a>.</p>
         * <p>You can export logs from multiple log groups or multiple time ranges to the
         * same S3 bucket. To separate out log data for each export task, you can specify a
         * prefix that will be used as the Amazon S3 key prefix for all exported
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateExportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExportTaskOutcomeCallable CreateExportTaskCallable(const Model::CreateExportTaskRequest& request) const;

        /**
         * <p>Creates an export task, which allows you to efficiently export data from a
         * log group to an Amazon S3 bucket.</p> <p>This is an asynchronous call. If all
         * the required information is provided, this operation initiates an export task
         * and responds with the ID of the task. After the task has started, you can use
         * <a>DescribeExportTasks</a> to get the status of the export task. Each account
         * can only have one active (<code>RUNNING</code> or <code>PENDING</code>) export
         * task at a time. To cancel an export task, use <a>CancelExportTask</a>.</p>
         * <p>You can export logs from multiple log groups or multiple time ranges to the
         * same S3 bucket. To separate out log data for each export task, you can specify a
         * prefix that will be used as the Amazon S3 key prefix for all exported
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateExportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExportTaskAsync(const Model::CreateExportTaskRequest& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a log group with the specified name.</p> <p>You can create up to 5000
         * log groups per account.</p> <p>You must use the following guidelines when naming
         * a log group:</p> <ul> <li> <p>Log group names must be unique within a region for
         * an AWS account.</p> </li> <li> <p>Log group names can be between 1 and 512
         * characters long.</p> </li> <li> <p>Log group names consist of the following
         * characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash),
         * and '.' (period).</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogGroupOutcome CreateLogGroup(const Model::CreateLogGroupRequest& request) const;

        /**
         * <p>Creates a log group with the specified name.</p> <p>You can create up to 5000
         * log groups per account.</p> <p>You must use the following guidelines when naming
         * a log group:</p> <ul> <li> <p>Log group names must be unique within a region for
         * an AWS account.</p> </li> <li> <p>Log group names can be between 1 and 512
         * characters long.</p> </li> <li> <p>Log group names consist of the following
         * characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash),
         * and '.' (period).</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLogGroupOutcomeCallable CreateLogGroupCallable(const Model::CreateLogGroupRequest& request) const;

        /**
         * <p>Creates a log group with the specified name.</p> <p>You can create up to 5000
         * log groups per account.</p> <p>You must use the following guidelines when naming
         * a log group:</p> <ul> <li> <p>Log group names must be unique within a region for
         * an AWS account.</p> </li> <li> <p>Log group names can be between 1 and 512
         * characters long.</p> </li> <li> <p>Log group names consist of the following
         * characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash),
         * and '.' (period).</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLogGroupAsync(const Model::CreateLogGroupRequest& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a log stream for the specified log group.</p> <p>There is no limit on
         * the number of log streams that you can create for a log group.</p> <p>You must
         * use the following guidelines when naming a log stream:</p> <ul> <li> <p>Log
         * stream names must be unique within the log group.</p> </li> <li> <p>Log stream
         * names can be between 1 and 512 characters long.</p> </li> <li> <p>The ':'
         * (colon) and '*' (asterisk) characters are not allowed.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogStreamOutcome CreateLogStream(const Model::CreateLogStreamRequest& request) const;

        /**
         * <p>Creates a log stream for the specified log group.</p> <p>There is no limit on
         * the number of log streams that you can create for a log group.</p> <p>You must
         * use the following guidelines when naming a log stream:</p> <ul> <li> <p>Log
         * stream names must be unique within the log group.</p> </li> <li> <p>Log stream
         * names can be between 1 and 512 characters long.</p> </li> <li> <p>The ':'
         * (colon) and '*' (asterisk) characters are not allowed.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLogStreamOutcomeCallable CreateLogStreamCallable(const Model::CreateLogStreamRequest& request) const;

        /**
         * <p>Creates a log stream for the specified log group.</p> <p>There is no limit on
         * the number of log streams that you can create for a log group.</p> <p>You must
         * use the following guidelines when naming a log stream:</p> <ul> <li> <p>Log
         * stream names must be unique within the log group.</p> </li> <li> <p>Log stream
         * names can be between 1 and 512 characters long.</p> </li> <li> <p>The ':'
         * (colon) and '*' (asterisk) characters are not allowed.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
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
         * the results by prefix. The results are ASCII-sorted by log group
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLogGroupsOutcome DescribeLogGroups(const Model::DescribeLogGroupsRequest& request) const;

        /**
         * <p>Lists the specified log groups. You can list all your log groups or filter
         * the results by prefix. The results are ASCII-sorted by log group
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLogGroupsOutcomeCallable DescribeLogGroupsCallable(const Model::DescribeLogGroupsRequest& request) const;

        /**
         * <p>Lists the specified log groups. You can list all your log groups or filter
         * the results by prefix. The results are ASCII-sorted by log group
         * name.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the specified metric filters. You can list all the metric filters or
         * filter the results by log name, prefix, metric name, and metric namespace. The
         * results are ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeMetricFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricFiltersOutcome DescribeMetricFilters(const Model::DescribeMetricFiltersRequest& request) const;

        /**
         * <p>Lists the specified metric filters. You can list all the metric filters or
         * filter the results by log name, prefix, metric name, and metric namespace. The
         * results are ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeMetricFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMetricFiltersOutcomeCallable DescribeMetricFiltersCallable(const Model::DescribeMetricFiltersRequest& request) const;

        /**
         * <p>Lists the specified metric filters. You can list all the metric filters or
         * filter the results by log name, prefix, metric name, and metric namespace. The
         * results are ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeMetricFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMetricFiltersAsync(const Model::DescribeMetricFiltersRequest& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists log events from the specified log group. You can list all the log
         * events or filter the results using a filter pattern, a time range, and the name
         * of the log stream.</p> <p>By default, this operation returns as many log events
         * as can fit in 1MB (up to 10,000 log events), or all the events found within the
         * time range that you specify. If the results include a token, then there are more
         * log events available, and you can get additional results by specifying the token
         * in a subsequent call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/FilterLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::FilterLogEventsOutcome FilterLogEvents(const Model::FilterLogEventsRequest& request) const;

        /**
         * <p>Lists log events from the specified log group. You can list all the log
         * events or filter the results using a filter pattern, a time range, and the name
         * of the log stream.</p> <p>By default, this operation returns as many log events
         * as can fit in 1MB (up to 10,000 log events), or all the events found within the
         * time range that you specify. If the results include a token, then there are more
         * log events available, and you can get additional results by specifying the token
         * in a subsequent call.</p><p><h3>See Also:</h3>   <a
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
         * as can fit in 1MB (up to 10,000 log events), or all the events found within the
         * time range that you specify. If the results include a token, then there are more
         * log events available, and you can get additional results by specifying the token
         * in a subsequent call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/FilterLogEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FilterLogEventsAsync(const Model::FilterLogEventsRequest& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists log events from the specified log stream. You can list all the log
         * events or filter using a time range.</p> <p>By default, this operation returns
         * as many log events as can fit in a response size of 1MB (up to 10,000 log
         * events). If the results include tokens, there are more log events available. You
         * can get additional log events by specifying one of the tokens in a subsequent
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogEventsOutcome GetLogEvents(const Model::GetLogEventsRequest& request) const;

        /**
         * <p>Lists log events from the specified log stream. You can list all the log
         * events or filter using a time range.</p> <p>By default, this operation returns
         * as many log events as can fit in a response size of 1MB (up to 10,000 log
         * events). If the results include tokens, there are more log events available. You
         * can get additional log events by specifying one of the tokens in a subsequent
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLogEventsOutcomeCallable GetLogEventsCallable(const Model::GetLogEventsRequest& request) const;

        /**
         * <p>Lists log events from the specified log stream. You can list all the log
         * events or filter using a time range.</p> <p>By default, this operation returns
         * as many log events as can fit in a response size of 1MB (up to 10,000 log
         * events). If the results include tokens, there are more log events available. You
         * can get additional log events by specifying one of the tokens in a subsequent
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLogEventsAsync(const Model::GetLogEventsRequest& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified log group.</p> <p>To add tags, use
         * <a>TagLogGroup</a>. To remove tags, use <a>UntagLogGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ListTagsLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsLogGroupOutcome ListTagsLogGroup(const Model::ListTagsLogGroupRequest& request) const;

        /**
         * <p>Lists the tags for the specified log group.</p> <p>To add tags, use
         * <a>TagLogGroup</a>. To remove tags, use <a>UntagLogGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ListTagsLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsLogGroupOutcomeCallable ListTagsLogGroupCallable(const Model::ListTagsLogGroupRequest& request) const;

        /**
         * <p>Lists the tags for the specified log group.</p> <p>To add tags, use
         * <a>TagLogGroup</a>. To remove tags, use <a>UntagLogGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ListTagsLogGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsLogGroupAsync(const Model::ListTagsLogGroupRequest& request, const ListTagsLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a destination. A destination encapsulates a physical
         * resource (such as a Kinesis stream) and enables you to subscribe to a real-time
         * stream of log events of a different account, ingested using <a>PutLogEvents</a>.
         * Currently, the only supported physical resource is a Amazon Kinesis stream
         * belonging to the same account as the destination.</p> <p>A destination controls
         * what is written to its Amazon Kinesis stream through an access policy. By
         * default, <code>PutDestination</code> does not set any access policy with the
         * destination, which means a cross-account user cannot call
         * <a>PutSubscriptionFilter</a> against this destination. To enable this, the
         * destination owner must call <a>PutDestinationPolicy</a> after
         * <code>PutDestination</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDestinationOutcome PutDestination(const Model::PutDestinationRequest& request) const;

        /**
         * <p>Creates or updates a destination. A destination encapsulates a physical
         * resource (such as a Kinesis stream) and enables you to subscribe to a real-time
         * stream of log events of a different account, ingested using <a>PutLogEvents</a>.
         * Currently, the only supported physical resource is a Amazon Kinesis stream
         * belonging to the same account as the destination.</p> <p>A destination controls
         * what is written to its Amazon Kinesis stream through an access policy. By
         * default, <code>PutDestination</code> does not set any access policy with the
         * destination, which means a cross-account user cannot call
         * <a>PutSubscriptionFilter</a> against this destination. To enable this, the
         * destination owner must call <a>PutDestinationPolicy</a> after
         * <code>PutDestination</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDestinationOutcomeCallable PutDestinationCallable(const Model::PutDestinationRequest& request) const;

        /**
         * <p>Creates or updates a destination. A destination encapsulates a physical
         * resource (such as a Kinesis stream) and enables you to subscribe to a real-time
         * stream of log events of a different account, ingested using <a>PutLogEvents</a>.
         * Currently, the only supported physical resource is a Amazon Kinesis stream
         * belonging to the same account as the destination.</p> <p>A destination controls
         * what is written to its Amazon Kinesis stream through an access policy. By
         * default, <code>PutDestination</code> does not set any access policy with the
         * destination, which means a cross-account user cannot call
         * <a>PutSubscriptionFilter</a> against this destination. To enable this, the
         * destination owner must call <a>PutDestinationPolicy</a> after
         * <code>PutDestination</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDestinationAsync(const Model::PutDestinationRequest& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an access policy associated with an existing destination.
         * An access policy is an <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM
         * policy document</a> that is used to authorize claims to register a subscription
         * filter against a given destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestinationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDestinationPolicyOutcome PutDestinationPolicy(const Model::PutDestinationPolicyRequest& request) const;

        /**
         * <p>Creates or updates an access policy associated with an existing destination.
         * An access policy is an <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM
         * policy document</a> that is used to authorize claims to register a subscription
         * filter against a given destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestinationPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDestinationPolicyOutcomeCallable PutDestinationPolicyCallable(const Model::PutDestinationPolicyRequest& request) const;

        /**
         * <p>Creates or updates an access policy associated with an existing destination.
         * An access policy is an <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM
         * policy document</a> that is used to authorize claims to register a subscription
         * filter against a given destination.</p><p><h3>See Also:</h3>   <a
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
         * also get the sequence token using <a>DescribeLogStreams</a>.</p> <p>The batch of
         * events must satisfy the following constraints:</p> <ul> <li> <p>The maximum
         * batch size is 1,048,576 bytes, and this size is calculated as the sum of all
         * event messages in UTF-8, plus 26 bytes for each log event.</p> </li> <li>
         * <p>None of the log events in the batch can be more than 2 hours in the
         * future.</p> </li> <li> <p>None of the log events in the batch can be older than
         * 14 days or the retention period of the log group.</p> </li> <li> <p>The log
         * events in the batch must be in chronological ordered by their timestamp (the
         * time the event occurred, expressed as the number of milliseconds since Jan 1,
         * 1970 00:00:00 UTC).</p> </li> <li> <p>The maximum number of log events in a
         * batch is 10,000.</p> </li> <li> <p>A batch of log events in a single request
         * cannot span more than 24 hours. Otherwise, the operation fails.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLogEventsOutcome PutLogEvents(const Model::PutLogEventsRequest& request) const;

        /**
         * <p>Uploads a batch of log events to the specified log stream.</p> <p>You must
         * include the sequence token obtained from the response of the previous call. An
         * upload in a newly created log stream does not require a sequence token. You can
         * also get the sequence token using <a>DescribeLogStreams</a>.</p> <p>The batch of
         * events must satisfy the following constraints:</p> <ul> <li> <p>The maximum
         * batch size is 1,048,576 bytes, and this size is calculated as the sum of all
         * event messages in UTF-8, plus 26 bytes for each log event.</p> </li> <li>
         * <p>None of the log events in the batch can be more than 2 hours in the
         * future.</p> </li> <li> <p>None of the log events in the batch can be older than
         * 14 days or the retention period of the log group.</p> </li> <li> <p>The log
         * events in the batch must be in chronological ordered by their timestamp (the
         * time the event occurred, expressed as the number of milliseconds since Jan 1,
         * 1970 00:00:00 UTC).</p> </li> <li> <p>The maximum number of log events in a
         * batch is 10,000.</p> </li> <li> <p>A batch of log events in a single request
         * cannot span more than 24 hours. Otherwise, the operation fails.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
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
         * also get the sequence token using <a>DescribeLogStreams</a>.</p> <p>The batch of
         * events must satisfy the following constraints:</p> <ul> <li> <p>The maximum
         * batch size is 1,048,576 bytes, and this size is calculated as the sum of all
         * event messages in UTF-8, plus 26 bytes for each log event.</p> </li> <li>
         * <p>None of the log events in the batch can be more than 2 hours in the
         * future.</p> </li> <li> <p>None of the log events in the batch can be older than
         * 14 days or the retention period of the log group.</p> </li> <li> <p>The log
         * events in the batch must be in chronological ordered by their timestamp (the
         * time the event occurred, expressed as the number of milliseconds since Jan 1,
         * 1970 00:00:00 UTC).</p> </li> <li> <p>The maximum number of log events in a
         * batch is 10,000.</p> </li> <li> <p>A batch of log events in a single request
         * cannot span more than 24 hours. Otherwise, the operation fails.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutLogEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLogEventsAsync(const Model::PutLogEventsRequest& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a metric filter and associates it with the specified log
         * group. Metric filters allow you to configure rules to extract metric data from
         * log events ingested through <a>PutLogEvents</a>.</p> <p>The maximum number of
         * metric filters that can be associated with a log group is 100.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutMetricFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricFilterOutcome PutMetricFilter(const Model::PutMetricFilterRequest& request) const;

        /**
         * <p>Creates or updates a metric filter and associates it with the specified log
         * group. Metric filters allow you to configure rules to extract metric data from
         * log events ingested through <a>PutLogEvents</a>.</p> <p>The maximum number of
         * metric filters that can be associated with a log group is 100.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutMetricFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMetricFilterOutcomeCallable PutMetricFilterCallable(const Model::PutMetricFilterRequest& request) const;

        /**
         * <p>Creates or updates a metric filter and associates it with the specified log
         * group. Metric filters allow you to configure rules to extract metric data from
         * log events ingested through <a>PutLogEvents</a>.</p> <p>The maximum number of
         * metric filters that can be associated with a log group is 100.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutMetricFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMetricFilterAsync(const Model::PutMetricFilterRequest& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the retention of the specified log group. A retention policy allows you
         * to configure the number of days you want to retain log events in the specified
         * log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionPolicyOutcome PutRetentionPolicy(const Model::PutRetentionPolicyRequest& request) const;

        /**
         * <p>Sets the retention of the specified log group. A retention policy allows you
         * to configure the number of days you want to retain log events in the specified
         * log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutRetentionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRetentionPolicyOutcomeCallable PutRetentionPolicyCallable(const Model::PutRetentionPolicyRequest& request) const;

        /**
         * <p>Sets the retention of the specified log group. A retention policy allows you
         * to configure the number of days you want to retain log events in the specified
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
         * log events ingested through <a>PutLogEvents</a> and have them delivered to a
         * specific destination. Currently, the supported destinations are:</p> <ul> <li>
         * <p>An Amazon Kinesis stream belonging to the same account as the subscription
         * filter, for same-account delivery.</p> </li> <li> <p>A logical destination that
         * belongs to a different account, for cross-account delivery.</p> </li> <li> <p>An
         * Amazon Kinesis Firehose stream that belongs to the same account as the
         * subscription filter, for same-account delivery.</p> </li> <li> <p>An AWS Lambda
         * function that belongs to the same account as the subscription filter, for
         * same-account delivery.</p> </li> </ul> <p>There can only be one subscription
         * filter associated with a log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutSubscriptionFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSubscriptionFilterOutcome PutSubscriptionFilter(const Model::PutSubscriptionFilterRequest& request) const;

        /**
         * <p>Creates or updates a subscription filter and associates it with the specified
         * log group. Subscription filters allow you to subscribe to a real-time stream of
         * log events ingested through <a>PutLogEvents</a> and have them delivered to a
         * specific destination. Currently, the supported destinations are:</p> <ul> <li>
         * <p>An Amazon Kinesis stream belonging to the same account as the subscription
         * filter, for same-account delivery.</p> </li> <li> <p>A logical destination that
         * belongs to a different account, for cross-account delivery.</p> </li> <li> <p>An
         * Amazon Kinesis Firehose stream that belongs to the same account as the
         * subscription filter, for same-account delivery.</p> </li> <li> <p>An AWS Lambda
         * function that belongs to the same account as the subscription filter, for
         * same-account delivery.</p> </li> </ul> <p>There can only be one subscription
         * filter associated with a log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutSubscriptionFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSubscriptionFilterOutcomeCallable PutSubscriptionFilterCallable(const Model::PutSubscriptionFilterRequest& request) const;

        /**
         * <p>Creates or updates a subscription filter and associates it with the specified
         * log group. Subscription filters allow you to subscribe to a real-time stream of
         * log events ingested through <a>PutLogEvents</a> and have them delivered to a
         * specific destination. Currently, the supported destinations are:</p> <ul> <li>
         * <p>An Amazon Kinesis stream belonging to the same account as the subscription
         * filter, for same-account delivery.</p> </li> <li> <p>A logical destination that
         * belongs to a different account, for cross-account delivery.</p> </li> <li> <p>An
         * Amazon Kinesis Firehose stream that belongs to the same account as the
         * subscription filter, for same-account delivery.</p> </li> <li> <p>An AWS Lambda
         * function that belongs to the same account as the subscription filter, for
         * same-account delivery.</p> </li> </ul> <p>There can only be one subscription
         * filter associated with a log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutSubscriptionFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSubscriptionFilterAsync(const Model::PutSubscriptionFilterRequest& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the specified tags for the specified log group.</p> <p>To
         * list the tags for a log group, use <a>ListTagsLogGroup</a>. To remove tags, use
         * <a>UntagLogGroup</a>.</p> <p>For more information about tags, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/log-group-tagging.html">Tag
         * Log Groups in Amazon CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TagLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::TagLogGroupOutcome TagLogGroup(const Model::TagLogGroupRequest& request) const;

        /**
         * <p>Adds or updates the specified tags for the specified log group.</p> <p>To
         * list the tags for a log group, use <a>ListTagsLogGroup</a>. To remove tags, use
         * <a>UntagLogGroup</a>.</p> <p>For more information about tags, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/log-group-tagging.html">Tag
         * Log Groups in Amazon CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TagLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagLogGroupOutcomeCallable TagLogGroupCallable(const Model::TagLogGroupRequest& request) const;

        /**
         * <p>Adds or updates the specified tags for the specified log group.</p> <p>To
         * list the tags for a log group, use <a>ListTagsLogGroup</a>. To remove tags, use
         * <a>UntagLogGroup</a>.</p> <p>For more information about tags, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/log-group-tagging.html">Tag
         * Log Groups in Amazon CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TagLogGroup">AWS
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
         * tags for a log group, use <a>ListTagsLogGroup</a>. To add tags, use
         * <a>UntagLogGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/UntagLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagLogGroupOutcome UntagLogGroup(const Model::UntagLogGroupRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified log group.</p> <p>To list the
         * tags for a log group, use <a>ListTagsLogGroup</a>. To add tags, use
         * <a>UntagLogGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/UntagLogGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagLogGroupOutcomeCallable UntagLogGroupCallable(const Model::UntagLogGroupRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified log group.</p> <p>To list the
         * tags for a log group, use <a>ListTagsLogGroup</a>. To add tags, use
         * <a>UntagLogGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/UntagLogGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagLogGroupAsync(const Model::UntagLogGroupRequest& request, const UntagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CancelExportTaskAsyncHelper(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateExportTaskAsyncHelper(const Model::CreateExportTaskRequest& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLogGroupAsyncHelper(const Model::CreateLogGroupRequest& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLogStreamAsyncHelper(const Model::CreateLogStreamRequest& request, const CreateLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDestinationAsyncHelper(const Model::DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLogGroupAsyncHelper(const Model::DeleteLogGroupRequest& request, const DeleteLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLogStreamAsyncHelper(const Model::DeleteLogStreamRequest& request, const DeleteLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMetricFilterAsyncHelper(const Model::DeleteMetricFilterRequest& request, const DeleteMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRetentionPolicyAsyncHelper(const Model::DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubscriptionFilterAsyncHelper(const Model::DeleteSubscriptionFilterRequest& request, const DeleteSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDestinationsAsyncHelper(const Model::DescribeDestinationsRequest& request, const DescribeDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExportTasksAsyncHelper(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLogGroupsAsyncHelper(const Model::DescribeLogGroupsRequest& request, const DescribeLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLogStreamsAsyncHelper(const Model::DescribeLogStreamsRequest& request, const DescribeLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMetricFiltersAsyncHelper(const Model::DescribeMetricFiltersRequest& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscriptionFiltersAsyncHelper(const Model::DescribeSubscriptionFiltersRequest& request, const DescribeSubscriptionFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void FilterLogEventsAsyncHelper(const Model::FilterLogEventsRequest& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLogEventsAsyncHelper(const Model::GetLogEventsRequest& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsLogGroupAsyncHelper(const Model::ListTagsLogGroupRequest& request, const ListTagsLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDestinationAsyncHelper(const Model::PutDestinationRequest& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDestinationPolicyAsyncHelper(const Model::PutDestinationPolicyRequest& request, const PutDestinationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLogEventsAsyncHelper(const Model::PutLogEventsRequest& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMetricFilterAsyncHelper(const Model::PutMetricFilterRequest& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRetentionPolicyAsyncHelper(const Model::PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSubscriptionFilterAsyncHelper(const Model::PutSubscriptionFilterRequest& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagLogGroupAsyncHelper(const Model::TagLogGroupRequest& request, const TagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestMetricFilterAsyncHelper(const Model::TestMetricFilterRequest& request, const TestMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagLogGroupAsyncHelper(const Model::UntagLogGroupRequest& request, const UntagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatchLogs
} // namespace Aws
