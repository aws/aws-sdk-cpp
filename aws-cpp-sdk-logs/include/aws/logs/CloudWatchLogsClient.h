/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/DescribeLogGroupsResult.h>
#include <aws/logs/model/DescribeLogStreamsResult.h>
#include <aws/logs/model/DescribeMetricFiltersResult.h>
#include <aws/logs/model/FilterLogEventsResult.h>
#include <aws/logs/model/GetLogEventsResult.h>
#include <aws/logs/model/PutLogEventsResult.h>
#include <aws/logs/model/TestMetricFilterResult.h>
#include <aws/core/NoResult.h>
#include <future>

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
    class CreateLogGroupRequest;
    class CreateLogStreamRequest;
    class DeleteLogGroupRequest;
    class DeleteLogStreamRequest;
    class DeleteMetricFilterRequest;
    class DeleteRetentionPolicyRequest;
    class DescribeLogGroupsRequest;
    class DescribeLogStreamsRequest;
    class DescribeMetricFiltersRequest;
    class FilterLogEventsRequest;
    class GetLogEventsRequest;
    class PutLogEventsRequest;
    class PutMetricFilterRequest;
    class PutRetentionPolicyRequest;
    class TestMetricFilterRequest;

  typedef Utils::Outcome<NoResult, Client::AWSError<CloudWatchLogsErrors>> CreateLogGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudWatchLogsErrors>> CreateLogStreamOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudWatchLogsErrors>> DeleteLogGroupOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudWatchLogsErrors>> DeleteLogStreamOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudWatchLogsErrors>> DeleteMetricFilterOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudWatchLogsErrors>> DeleteRetentionPolicyOutcome;
  typedef Utils::Outcome<DescribeLogGroupsResult, Client::AWSError<CloudWatchLogsErrors>> DescribeLogGroupsOutcome;
  typedef Utils::Outcome<DescribeLogStreamsResult, Client::AWSError<CloudWatchLogsErrors>> DescribeLogStreamsOutcome;
  typedef Utils::Outcome<DescribeMetricFiltersResult, Client::AWSError<CloudWatchLogsErrors>> DescribeMetricFiltersOutcome;
  typedef Utils::Outcome<FilterLogEventsResult, Client::AWSError<CloudWatchLogsErrors>> FilterLogEventsOutcome;
  typedef Utils::Outcome<GetLogEventsResult, Client::AWSError<CloudWatchLogsErrors>> GetLogEventsOutcome;
  typedef Utils::Outcome<PutLogEventsResult, Client::AWSError<CloudWatchLogsErrors>> PutLogEventsOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudWatchLogsErrors>> PutMetricFilterOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudWatchLogsErrors>> PutRetentionPolicyOutcome;
  typedef Utils::Outcome<TestMetricFilterResult, Client::AWSError<CloudWatchLogsErrors>> TestMetricFilterOutcome;

  typedef std::future<CreateLogGroupOutcome> CreateLogGroupOutcomeCallable;
  typedef std::future<CreateLogStreamOutcome> CreateLogStreamOutcomeCallable;
  typedef std::future<DeleteLogGroupOutcome> DeleteLogGroupOutcomeCallable;
  typedef std::future<DeleteLogStreamOutcome> DeleteLogStreamOutcomeCallable;
  typedef std::future<DeleteMetricFilterOutcome> DeleteMetricFilterOutcomeCallable;
  typedef std::future<DeleteRetentionPolicyOutcome> DeleteRetentionPolicyOutcomeCallable;
  typedef std::future<DescribeLogGroupsOutcome> DescribeLogGroupsOutcomeCallable;
  typedef std::future<DescribeLogStreamsOutcome> DescribeLogStreamsOutcomeCallable;
  typedef std::future<DescribeMetricFiltersOutcome> DescribeMetricFiltersOutcomeCallable;
  typedef std::future<FilterLogEventsOutcome> FilterLogEventsOutcomeCallable;
  typedef std::future<GetLogEventsOutcome> GetLogEventsOutcomeCallable;
  typedef std::future<PutLogEventsOutcome> PutLogEventsOutcomeCallable;
  typedef std::future<PutMetricFilterOutcome> PutMetricFilterOutcomeCallable;
  typedef std::future<PutRetentionPolicyOutcome> PutRetentionPolicyOutcomeCallable;
  typedef std::future<TestMetricFilterOutcome> TestMetricFilterOutcomeCallable;
} // namespace Model

    class CloudWatchLogsClient;

  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::CreateLogGroupRequest&, const Model::CreateLogGroupOutcome&> CreateLogGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::CreateLogStreamRequest&, const Model::CreateLogStreamOutcome&> CreateLogStreamOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::DeleteLogGroupRequest&, const Model::DeleteLogGroupOutcome&> DeleteLogGroupOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::DeleteLogStreamRequest&, const Model::DeleteLogStreamOutcome&> DeleteLogStreamOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::DeleteMetricFilterRequest&, const Model::DeleteMetricFilterOutcome&> DeleteMetricFilterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::DeleteRetentionPolicyRequest&, const Model::DeleteRetentionPolicyOutcome&> DeleteRetentionPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::DescribeLogGroupsRequest&, const Model::DescribeLogGroupsOutcome&> DescribeLogGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::DescribeLogStreamsRequest&, const Model::DescribeLogStreamsOutcome&> DescribeLogStreamsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::DescribeMetricFiltersRequest&, const Model::DescribeMetricFiltersOutcome&> DescribeMetricFiltersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::FilterLogEventsRequest&, const Model::FilterLogEventsOutcome&> FilterLogEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::GetLogEventsRequest&, const Model::GetLogEventsOutcome&> GetLogEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::PutLogEventsRequest&, const Model::PutLogEventsOutcome&> PutLogEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::PutMetricFilterRequest&, const Model::PutMetricFilterOutcome&> PutMetricFilterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::PutRetentionPolicyRequest&, const Model::PutRetentionPolicyOutcome&> PutRetentionPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudWatchLogsClient, const Model::TestMetricFilterRequest&, const Model::TestMetricFilterOutcome&> TestMetricFilterOutcomeReceivedEvent;

  /*
    <fullname>Amazon CloudWatch Logs API Reference</fullname> <p>This is the <i>Amazon CloudWatch Logs API Reference</i>. Amazon CloudWatch Logs enables you to monitor, store, and access your system, application, and custom log files. This guide provides detailed information about Amazon CloudWatch Logs actions, data types, parameters, and errors. For detailed information about Amazon CloudWatch Logs features and their associated API calls, go to the <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide">Amazon CloudWatch Developer Guide</a>. </p> <p>Use the following links to get started using the <i>Amazon CloudWatch Logs API Reference</i>:</p> <ul> <li> <a href="http://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_Operations.html">Actions</a>: An alphabetical list of all Amazon CloudWatch Logs actions.</li> <li> <a href="http://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_Types.html">Data Types</a>: An alphabetical list of all Amazon CloudWatch Logs data types.</li> <li> <a href="http://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/CommonParameters.html">Common Parameters</a>: Parameters that all Query actions can use.</li> <li> <a href="http://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/CommonErrors.html">Common Errors</a>: Client and server errors that all actions can return.</li> <li> <a href="http://docs.aws.amazon.com/general/latest/gr/index.html?rande.html">Regions and Endpoints</a>: Itemized regions and endpoints for all AWS products.</li> </ul> <p>In addition to using the Amazon CloudWatch Logs API, you can also use the following SDKs and third-party libraries to access Amazon CloudWatch Logs programmatically.</p> <ul> <li><a href="http://aws.amazon.com/documentation/sdkforjava/">AWS SDK for Java Documentation</a></li> <li><a href="http://aws.amazon.com/documentation/sdkfornet/">AWS SDK for .NET Documentation</a></li> <li><a href="http://aws.amazon.com/documentation/sdkforphp/">AWS SDK for PHP Documentation</a></li> <li><a href="http://aws.amazon.com/documentation/sdkforruby/">AWS SDK for Ruby Documentation</a></li> </ul> <p>Developers in the AWS developer community also provide their own libraries, which you can find at the following AWS developer centers:</p> <ul> <li><a href="http://aws.amazon.com/java/">AWS Java Developer Center</a></li> <li><a href="http://aws.amazon.com/php/">AWS PHP Developer Center</a></li> <li><a href="http://aws.amazon.com/python/">AWS Python Developer Center</a></li> <li><a href="http://aws.amazon.com/ruby/">AWS Ruby Developer Center</a></li> <li><a href="http://aws.amazon.com/net/">AWS Windows and .NET Developer Center</a></li> </ul>
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
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~CloudWatchLogsClient();

     /*
       <p> Creates a new log group with the specified name. The name of the log group must be unique within a region for an AWS account. You can create up to 500 log groups per account. </p> <p> You must use the following guidelines when naming a log group: <ul> <li>Log group names can be between 1 and 512 characters long.</li> <li>Allowed characters are a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash), and '.' (period).</li> </ul> </p>
     */
     Model::CreateLogGroupOutcome CreateLogGroup(const Model::CreateLogGroupRequest& request) const;

     /*
       <p> Creates a new log group with the specified name. The name of the log group must be unique within a region for an AWS account. You can create up to 500 log groups per account. </p> <p> You must use the following guidelines when naming a log group: <ul> <li>Log group names can be between 1 and 512 characters long.</li> <li>Allowed characters are a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash), and '.' (period).</li> </ul> </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateLogGroupOutcomeCallable CreateLogGroupCallable(const Model::CreateLogGroupRequest& request) const;

     /*
       <p> Creates a new log group with the specified name. The name of the log group must be unique within a region for an AWS account. You can create up to 500 log groups per account. </p> <p> You must use the following guidelines when naming a log group: <ul> <li>Log group names can be between 1 and 512 characters long.</li> <li>Allowed characters are a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash), and '.' (period).</li> </ul> </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateLogGroupAsync(const Model::CreateLogGroupRequest& request) const;

     /*
       <p> Creates a new log stream in the specified log group. The name of the log stream must be unique within the log group. There is no limit on the number of log streams that can exist in a log group. </p> <p> You must use the following guidelines when naming a log stream: <ul> <li>Log stream names can be between 1 and 512 characters long.</li> <li>The ':' colon character is not allowed.</li> </ul> </p>
     */
     Model::CreateLogStreamOutcome CreateLogStream(const Model::CreateLogStreamRequest& request) const;

     /*
       <p> Creates a new log stream in the specified log group. The name of the log stream must be unique within the log group. There is no limit on the number of log streams that can exist in a log group. </p> <p> You must use the following guidelines when naming a log stream: <ul> <li>Log stream names can be between 1 and 512 characters long.</li> <li>The ':' colon character is not allowed.</li> </ul> </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateLogStreamOutcomeCallable CreateLogStreamCallable(const Model::CreateLogStreamRequest& request) const;

     /*
       <p> Creates a new log stream in the specified log group. The name of the log stream must be unique within the log group. There is no limit on the number of log streams that can exist in a log group. </p> <p> You must use the following guidelines when naming a log stream: <ul> <li>Log stream names can be between 1 and 512 characters long.</li> <li>The ':' colon character is not allowed.</li> </ul> </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateLogStreamAsync(const Model::CreateLogStreamRequest& request) const;

     /*
       <p> Deletes the log group with the specified name and permanently deletes all the archived log events associated with it. </p>
     */
     Model::DeleteLogGroupOutcome DeleteLogGroup(const Model::DeleteLogGroupRequest& request) const;

     /*
       <p> Deletes the log group with the specified name and permanently deletes all the archived log events associated with it. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteLogGroupOutcomeCallable DeleteLogGroupCallable(const Model::DeleteLogGroupRequest& request) const;

     /*
       <p> Deletes the log group with the specified name and permanently deletes all the archived log events associated with it. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteLogGroupAsync(const Model::DeleteLogGroupRequest& request) const;

     /*
       <p> Deletes a log stream and permanently deletes all the archived log events associated with it. </p>
     */
     Model::DeleteLogStreamOutcome DeleteLogStream(const Model::DeleteLogStreamRequest& request) const;

     /*
       <p> Deletes a log stream and permanently deletes all the archived log events associated with it. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteLogStreamOutcomeCallable DeleteLogStreamCallable(const Model::DeleteLogStreamRequest& request) const;

     /*
       <p> Deletes a log stream and permanently deletes all the archived log events associated with it. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteLogStreamAsync(const Model::DeleteLogStreamRequest& request) const;

     /*
       <p> Deletes a metric filter associated with the specified log group. </p>
     */
     Model::DeleteMetricFilterOutcome DeleteMetricFilter(const Model::DeleteMetricFilterRequest& request) const;

     /*
       <p> Deletes a metric filter associated with the specified log group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteMetricFilterOutcomeCallable DeleteMetricFilterCallable(const Model::DeleteMetricFilterRequest& request) const;

     /*
       <p> Deletes a metric filter associated with the specified log group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteMetricFilterAsync(const Model::DeleteMetricFilterRequest& request) const;

     /*
       <p> Deletes the retention policy of the specified log group. Log events would not expire if they belong to log groups without a retention policy. </p>
     */
     Model::DeleteRetentionPolicyOutcome DeleteRetentionPolicy(const Model::DeleteRetentionPolicyRequest& request) const;

     /*
       <p> Deletes the retention policy of the specified log group. Log events would not expire if they belong to log groups without a retention policy. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteRetentionPolicyOutcomeCallable DeleteRetentionPolicyCallable(const Model::DeleteRetentionPolicyRequest& request) const;

     /*
       <p> Deletes the retention policy of the specified log group. Log events would not expire if they belong to log groups without a retention policy. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteRetentionPolicyAsync(const Model::DeleteRetentionPolicyRequest& request) const;

     /*
       <p> Returns all the log groups that are associated with the AWS account making the request. The list returned in the response is ASCII-sorted by log group name. </p> <p> By default, this operation returns up to 50 log groups. If there are more log groups to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of log groups returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>
     */
     Model::DescribeLogGroupsOutcome DescribeLogGroups(const Model::DescribeLogGroupsRequest& request) const;

     /*
       <p> Returns all the log groups that are associated with the AWS account making the request. The list returned in the response is ASCII-sorted by log group name. </p> <p> By default, this operation returns up to 50 log groups. If there are more log groups to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of log groups returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLogGroupsOutcomeCallable DescribeLogGroupsCallable(const Model::DescribeLogGroupsRequest& request) const;

     /*
       <p> Returns all the log groups that are associated with the AWS account making the request. The list returned in the response is ASCII-sorted by log group name. </p> <p> By default, this operation returns up to 50 log groups. If there are more log groups to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of log groups returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLogGroupsAsync(const Model::DescribeLogGroupsRequest& request) const;

     /*
       <p> Returns all the log streams that are associated with the specified log group. The list returned in the response is ASCII-sorted by log stream name. </p> <p> By default, this operation returns up to 50 log streams. If there are more log streams to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of log streams returned in the response by specifying the <code class="code">limit</code> parameter in the request. This operation has a limit of five transactions per second, after which transactions are throttled. </p>
     */
     Model::DescribeLogStreamsOutcome DescribeLogStreams(const Model::DescribeLogStreamsRequest& request) const;

     /*
       <p> Returns all the log streams that are associated with the specified log group. The list returned in the response is ASCII-sorted by log stream name. </p> <p> By default, this operation returns up to 50 log streams. If there are more log streams to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of log streams returned in the response by specifying the <code class="code">limit</code> parameter in the request. This operation has a limit of five transactions per second, after which transactions are throttled. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLogStreamsOutcomeCallable DescribeLogStreamsCallable(const Model::DescribeLogStreamsRequest& request) const;

     /*
       <p> Returns all the log streams that are associated with the specified log group. The list returned in the response is ASCII-sorted by log stream name. </p> <p> By default, this operation returns up to 50 log streams. If there are more log streams to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of log streams returned in the response by specifying the <code class="code">limit</code> parameter in the request. This operation has a limit of five transactions per second, after which transactions are throttled. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLogStreamsAsync(const Model::DescribeLogStreamsRequest& request) const;

     /*
       <p> Returns all the metrics filters associated with the specified log group. The list returned in the response is ASCII-sorted by filter name. </p> <p> By default, this operation returns up to 50 metric filters. If there are more metric filters to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of metric filters returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>
     */
     Model::DescribeMetricFiltersOutcome DescribeMetricFilters(const Model::DescribeMetricFiltersRequest& request) const;

     /*
       <p> Returns all the metrics filters associated with the specified log group. The list returned in the response is ASCII-sorted by filter name. </p> <p> By default, this operation returns up to 50 metric filters. If there are more metric filters to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of metric filters returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeMetricFiltersOutcomeCallable DescribeMetricFiltersCallable(const Model::DescribeMetricFiltersRequest& request) const;

     /*
       <p> Returns all the metrics filters associated with the specified log group. The list returned in the response is ASCII-sorted by filter name. </p> <p> By default, this operation returns up to 50 metric filters. If there are more metric filters to list, the response would contain a <code class="code">nextToken</code> value in the response body. You can also limit the number of metric filters returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeMetricFiltersAsync(const Model::DescribeMetricFiltersRequest& request) const;

     /*
       <p> Retrieves log events, optionally filtered by a filter pattern from the specified log group. You can provide an optional time range to filter the results on the event <code class="code">timestamp</code>. You can limit the streams searched to an explicit list of <code class="code">logStreamNames</code>. </p> <p> By default, this operation returns as much matching log events as can fit in a response size of 1MB, up to 10,000 log events, or all the events found within a time-bounded scan window. If the response includes a <code class="code">nextToken</code>, then there is more data to search, and the search can be resumed with a new request providing the nextToken. The response will contain a list of <code class="code">searchedLogStreams</code> that contains information about which streams were searched in the request and whether they have been searched completely or require further pagination. The <code class="code">limit</code> parameter in the request. can be used to specify the maximum number of events to return in a page. </p>
     */
     Model::FilterLogEventsOutcome FilterLogEvents(const Model::FilterLogEventsRequest& request) const;

     /*
       <p> Retrieves log events, optionally filtered by a filter pattern from the specified log group. You can provide an optional time range to filter the results on the event <code class="code">timestamp</code>. You can limit the streams searched to an explicit list of <code class="code">logStreamNames</code>. </p> <p> By default, this operation returns as much matching log events as can fit in a response size of 1MB, up to 10,000 log events, or all the events found within a time-bounded scan window. If the response includes a <code class="code">nextToken</code>, then there is more data to search, and the search can be resumed with a new request providing the nextToken. The response will contain a list of <code class="code">searchedLogStreams</code> that contains information about which streams were searched in the request and whether they have been searched completely or require further pagination. The <code class="code">limit</code> parameter in the request. can be used to specify the maximum number of events to return in a page. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::FilterLogEventsOutcomeCallable FilterLogEventsCallable(const Model::FilterLogEventsRequest& request) const;

     /*
       <p> Retrieves log events, optionally filtered by a filter pattern from the specified log group. You can provide an optional time range to filter the results on the event <code class="code">timestamp</code>. You can limit the streams searched to an explicit list of <code class="code">logStreamNames</code>. </p> <p> By default, this operation returns as much matching log events as can fit in a response size of 1MB, up to 10,000 log events, or all the events found within a time-bounded scan window. If the response includes a <code class="code">nextToken</code>, then there is more data to search, and the search can be resumed with a new request providing the nextToken. The response will contain a list of <code class="code">searchedLogStreams</code> that contains information about which streams were searched in the request and whether they have been searched completely or require further pagination. The <code class="code">limit</code> parameter in the request. can be used to specify the maximum number of events to return in a page. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void FilterLogEventsAsync(const Model::FilterLogEventsRequest& request) const;

     /*
       <p> Retrieves log events from the specified log stream. You can provide an optional time range to filter the results on the event <code class="code">timestamp</code>. </p> <p> By default, this operation returns as much log events as can fit in a response size of 1MB, up to 10,000 log events. The response will always include a <code class="code">nextForwardToken</code> and a <code class="code">nextBackwardToken</code> in the response body. You can use any of these tokens in subsequent <code class="code">GetLogEvents</code> requests to paginate through events in either forward or backward direction. You can also limit the number of log events returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>
     */
     Model::GetLogEventsOutcome GetLogEvents(const Model::GetLogEventsRequest& request) const;

     /*
       <p> Retrieves log events from the specified log stream. You can provide an optional time range to filter the results on the event <code class="code">timestamp</code>. </p> <p> By default, this operation returns as much log events as can fit in a response size of 1MB, up to 10,000 log events. The response will always include a <code class="code">nextForwardToken</code> and a <code class="code">nextBackwardToken</code> in the response body. You can use any of these tokens in subsequent <code class="code">GetLogEvents</code> requests to paginate through events in either forward or backward direction. You can also limit the number of log events returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetLogEventsOutcomeCallable GetLogEventsCallable(const Model::GetLogEventsRequest& request) const;

     /*
       <p> Retrieves log events from the specified log stream. You can provide an optional time range to filter the results on the event <code class="code">timestamp</code>. </p> <p> By default, this operation returns as much log events as can fit in a response size of 1MB, up to 10,000 log events. The response will always include a <code class="code">nextForwardToken</code> and a <code class="code">nextBackwardToken</code> in the response body. You can use any of these tokens in subsequent <code class="code">GetLogEvents</code> requests to paginate through events in either forward or backward direction. You can also limit the number of log events returned in the response by specifying the <code class="code">limit</code> parameter in the request. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetLogEventsAsync(const Model::GetLogEventsRequest& request) const;

     /*
       <p> Uploads a batch of log events to the specified log stream. </p> <p> Every PutLogEvents request must include the <code class="code">sequenceToken</code> obtained from the response of the previous request. An upload in a newly created log stream does not require a <code class="code">sequenceToken</code>. </p> <p> The batch of events must satisfy the following constraints: <ul> <li>The maximum batch size is 1,048,576 bytes, and this size is calculated as the sum of all event messages in UTF-8, plus 26 bytes for each log event.</li> <li>None of the log events in the batch can be more than 2 hours in the future.</li> <li>None of the log events in the batch can be older than 14 days or the retention period of the log group.</li> <li>The log events in the batch must be in chronological ordered by their <code class="code">timestamp</code>.</li> <li>The maximum number of log events in a batch is 10,000.</li> </ul> </p>
     */
     Model::PutLogEventsOutcome PutLogEvents(const Model::PutLogEventsRequest& request) const;

     /*
       <p> Uploads a batch of log events to the specified log stream. </p> <p> Every PutLogEvents request must include the <code class="code">sequenceToken</code> obtained from the response of the previous request. An upload in a newly created log stream does not require a <code class="code">sequenceToken</code>. </p> <p> The batch of events must satisfy the following constraints: <ul> <li>The maximum batch size is 1,048,576 bytes, and this size is calculated as the sum of all event messages in UTF-8, plus 26 bytes for each log event.</li> <li>None of the log events in the batch can be more than 2 hours in the future.</li> <li>None of the log events in the batch can be older than 14 days or the retention period of the log group.</li> <li>The log events in the batch must be in chronological ordered by their <code class="code">timestamp</code>.</li> <li>The maximum number of log events in a batch is 10,000.</li> </ul> </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutLogEventsOutcomeCallable PutLogEventsCallable(const Model::PutLogEventsRequest& request) const;

     /*
       <p> Uploads a batch of log events to the specified log stream. </p> <p> Every PutLogEvents request must include the <code class="code">sequenceToken</code> obtained from the response of the previous request. An upload in a newly created log stream does not require a <code class="code">sequenceToken</code>. </p> <p> The batch of events must satisfy the following constraints: <ul> <li>The maximum batch size is 1,048,576 bytes, and this size is calculated as the sum of all event messages in UTF-8, plus 26 bytes for each log event.</li> <li>None of the log events in the batch can be more than 2 hours in the future.</li> <li>None of the log events in the batch can be older than 14 days or the retention period of the log group.</li> <li>The log events in the batch must be in chronological ordered by their <code class="code">timestamp</code>.</li> <li>The maximum number of log events in a batch is 10,000.</li> </ul> </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutLogEventsAsync(const Model::PutLogEventsRequest& request) const;

     /*
       <p> Creates or updates a metric filter and associates it with the specified log group. Metric filters allow you to configure rules to extract metric data from log events ingested through <code class="code">PutLogEvents</code> requests. </p>
     */
     Model::PutMetricFilterOutcome PutMetricFilter(const Model::PutMetricFilterRequest& request) const;

     /*
       <p> Creates or updates a metric filter and associates it with the specified log group. Metric filters allow you to configure rules to extract metric data from log events ingested through <code class="code">PutLogEvents</code> requests. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutMetricFilterOutcomeCallable PutMetricFilterCallable(const Model::PutMetricFilterRequest& request) const;

     /*
       <p> Creates or updates a metric filter and associates it with the specified log group. Metric filters allow you to configure rules to extract metric data from log events ingested through <code class="code">PutLogEvents</code> requests. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutMetricFilterAsync(const Model::PutMetricFilterRequest& request) const;

     /*
       <p> Sets the retention of the specified log group. A retention policy allows you to configure the number of days you want to retain log events in the specified log group. </p>
     */
     Model::PutRetentionPolicyOutcome PutRetentionPolicy(const Model::PutRetentionPolicyRequest& request) const;

     /*
       <p> Sets the retention of the specified log group. A retention policy allows you to configure the number of days you want to retain log events in the specified log group. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutRetentionPolicyOutcomeCallable PutRetentionPolicyCallable(const Model::PutRetentionPolicyRequest& request) const;

     /*
       <p> Sets the retention of the specified log group. A retention policy allows you to configure the number of days you want to retain log events in the specified log group. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutRetentionPolicyAsync(const Model::PutRetentionPolicyRequest& request) const;

     /*
       <p> Tests the filter pattern of a metric filter against a sample of log event messages. You can use this operation to validate the correctness of a metric filter pattern. </p>
     */
     Model::TestMetricFilterOutcome TestMetricFilter(const Model::TestMetricFilterRequest& request) const;

     /*
       <p> Tests the filter pattern of a metric filter against a sample of log event messages. You can use this operation to validate the correctness of a metric filter pattern. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::TestMetricFilterOutcomeCallable TestMetricFilterCallable(const Model::TestMetricFilterRequest& request) const;

     /*
       <p> Tests the filter pattern of a metric filter against a sample of log event messages. You can use this operation to validate the correctness of a metric filter pattern. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void TestMetricFilterAsync(const Model::TestMetricFilterRequest& request) const;

   /**
    * Adds an event handler for CreateLogGroupAsync to call upon completion to the handler chain. You need to call this to
    * use CreateLogGroupAsync.
    */
    inline void RegisterCreateLogGroupOutcomeReceivedHandler(const CreateLogGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateLogGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateLogGroup.
    */
    inline void ClearAllCreateLogGroupOutcomeReceivedHandlers()
    {
      m_onCreateLogGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateLogStreamAsync to call upon completion to the handler chain. You need to call this to
    * use CreateLogStreamAsync.
    */
    inline void RegisterCreateLogStreamOutcomeReceivedHandler(const CreateLogStreamOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateLogStreamOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateLogStream.
    */
    inline void ClearAllCreateLogStreamOutcomeReceivedHandlers()
    {
      m_onCreateLogStreamOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteLogGroupAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteLogGroupAsync.
    */
    inline void RegisterDeleteLogGroupOutcomeReceivedHandler(const DeleteLogGroupOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteLogGroupOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteLogGroup.
    */
    inline void ClearAllDeleteLogGroupOutcomeReceivedHandlers()
    {
      m_onDeleteLogGroupOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteLogStreamAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteLogStreamAsync.
    */
    inline void RegisterDeleteLogStreamOutcomeReceivedHandler(const DeleteLogStreamOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteLogStreamOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteLogStream.
    */
    inline void ClearAllDeleteLogStreamOutcomeReceivedHandlers()
    {
      m_onDeleteLogStreamOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteMetricFilterAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteMetricFilterAsync.
    */
    inline void RegisterDeleteMetricFilterOutcomeReceivedHandler(const DeleteMetricFilterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteMetricFilterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteMetricFilter.
    */
    inline void ClearAllDeleteMetricFilterOutcomeReceivedHandlers()
    {
      m_onDeleteMetricFilterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteRetentionPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteRetentionPolicyAsync.
    */
    inline void RegisterDeleteRetentionPolicyOutcomeReceivedHandler(const DeleteRetentionPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteRetentionPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteRetentionPolicy.
    */
    inline void ClearAllDeleteRetentionPolicyOutcomeReceivedHandlers()
    {
      m_onDeleteRetentionPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLogGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLogGroupsAsync.
    */
    inline void RegisterDescribeLogGroupsOutcomeReceivedHandler(const DescribeLogGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLogGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLogGroups.
    */
    inline void ClearAllDescribeLogGroupsOutcomeReceivedHandlers()
    {
      m_onDescribeLogGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLogStreamsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLogStreamsAsync.
    */
    inline void RegisterDescribeLogStreamsOutcomeReceivedHandler(const DescribeLogStreamsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLogStreamsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLogStreams.
    */
    inline void ClearAllDescribeLogStreamsOutcomeReceivedHandlers()
    {
      m_onDescribeLogStreamsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeMetricFiltersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeMetricFiltersAsync.
    */
    inline void RegisterDescribeMetricFiltersOutcomeReceivedHandler(const DescribeMetricFiltersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeMetricFiltersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeMetricFilters.
    */
    inline void ClearAllDescribeMetricFiltersOutcomeReceivedHandlers()
    {
      m_onDescribeMetricFiltersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for FilterLogEventsAsync to call upon completion to the handler chain. You need to call this to
    * use FilterLogEventsAsync.
    */
    inline void RegisterFilterLogEventsOutcomeReceivedHandler(const FilterLogEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onFilterLogEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for FilterLogEvents.
    */
    inline void ClearAllFilterLogEventsOutcomeReceivedHandlers()
    {
      m_onFilterLogEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetLogEventsAsync to call upon completion to the handler chain. You need to call this to
    * use GetLogEventsAsync.
    */
    inline void RegisterGetLogEventsOutcomeReceivedHandler(const GetLogEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetLogEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetLogEvents.
    */
    inline void ClearAllGetLogEventsOutcomeReceivedHandlers()
    {
      m_onGetLogEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutLogEventsAsync to call upon completion to the handler chain. You need to call this to
    * use PutLogEventsAsync.
    */
    inline void RegisterPutLogEventsOutcomeReceivedHandler(const PutLogEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutLogEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutLogEvents.
    */
    inline void ClearAllPutLogEventsOutcomeReceivedHandlers()
    {
      m_onPutLogEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutMetricFilterAsync to call upon completion to the handler chain. You need to call this to
    * use PutMetricFilterAsync.
    */
    inline void RegisterPutMetricFilterOutcomeReceivedHandler(const PutMetricFilterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutMetricFilterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutMetricFilter.
    */
    inline void ClearAllPutMetricFilterOutcomeReceivedHandlers()
    {
      m_onPutMetricFilterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutRetentionPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use PutRetentionPolicyAsync.
    */
    inline void RegisterPutRetentionPolicyOutcomeReceivedHandler(const PutRetentionPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutRetentionPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutRetentionPolicy.
    */
    inline void ClearAllPutRetentionPolicyOutcomeReceivedHandlers()
    {
      m_onPutRetentionPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for TestMetricFilterAsync to call upon completion to the handler chain. You need to call this to
    * use TestMetricFilterAsync.
    */
    inline void RegisterTestMetricFilterOutcomeReceivedHandler(const TestMetricFilterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onTestMetricFilterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for TestMetricFilter.
    */
    inline void ClearAllTestMetricFilterOutcomeReceivedHandlers()
    {
      m_onTestMetricFilterOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void CreateLogGroupAsyncHelper(const Model::CreateLogGroupRequest& request) const;
    void CreateLogStreamAsyncHelper(const Model::CreateLogStreamRequest& request) const;
    void DeleteLogGroupAsyncHelper(const Model::DeleteLogGroupRequest& request) const;
    void DeleteLogStreamAsyncHelper(const Model::DeleteLogStreamRequest& request) const;
    void DeleteMetricFilterAsyncHelper(const Model::DeleteMetricFilterRequest& request) const;
    void DeleteRetentionPolicyAsyncHelper(const Model::DeleteRetentionPolicyRequest& request) const;
    void DescribeLogGroupsAsyncHelper(const Model::DescribeLogGroupsRequest& request) const;
    void DescribeLogStreamsAsyncHelper(const Model::DescribeLogStreamsRequest& request) const;
    void DescribeMetricFiltersAsyncHelper(const Model::DescribeMetricFiltersRequest& request) const;
    void FilterLogEventsAsyncHelper(const Model::FilterLogEventsRequest& request) const;
    void GetLogEventsAsyncHelper(const Model::GetLogEventsRequest& request) const;
    void PutLogEventsAsyncHelper(const Model::PutLogEventsRequest& request) const;
    void PutMetricFilterAsyncHelper(const Model::PutMetricFilterRequest& request) const;
    void PutRetentionPolicyAsyncHelper(const Model::PutRetentionPolicyRequest& request) const;
    void TestMetricFilterAsyncHelper(const Model::TestMetricFilterRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    CreateLogGroupOutcomeReceivedEvent m_onCreateLogGroupOutcomeReceived;
    CreateLogStreamOutcomeReceivedEvent m_onCreateLogStreamOutcomeReceived;
    DeleteLogGroupOutcomeReceivedEvent m_onDeleteLogGroupOutcomeReceived;
    DeleteLogStreamOutcomeReceivedEvent m_onDeleteLogStreamOutcomeReceived;
    DeleteMetricFilterOutcomeReceivedEvent m_onDeleteMetricFilterOutcomeReceived;
    DeleteRetentionPolicyOutcomeReceivedEvent m_onDeleteRetentionPolicyOutcomeReceived;
    DescribeLogGroupsOutcomeReceivedEvent m_onDescribeLogGroupsOutcomeReceived;
    DescribeLogStreamsOutcomeReceivedEvent m_onDescribeLogStreamsOutcomeReceived;
    DescribeMetricFiltersOutcomeReceivedEvent m_onDescribeMetricFiltersOutcomeReceived;
    FilterLogEventsOutcomeReceivedEvent m_onFilterLogEventsOutcomeReceived;
    GetLogEventsOutcomeReceivedEvent m_onGetLogEventsOutcomeReceived;
    PutLogEventsOutcomeReceivedEvent m_onPutLogEventsOutcomeReceived;
    PutMetricFilterOutcomeReceivedEvent m_onPutMetricFilterOutcomeReceived;
    PutRetentionPolicyOutcomeReceivedEvent m_onPutRetentionPolicyOutcomeReceived;
    TestMetricFilterOutcomeReceivedEvent m_onTestMetricFilterOutcomeReceived;
  };

} // namespace CloudWatchLogs
} // namespace Aws
