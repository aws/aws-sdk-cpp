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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/monitoring/model/DescribeAlarmHistoryResult.h>
#include <aws/monitoring/model/DescribeAlarmsResult.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricResult.h>
#include <aws/monitoring/model/GetMetricStatisticsResult.h>
#include <aws/monitoring/model/ListMetricsResult.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace CloudWatch
{

namespace Model
{
        class DeleteAlarmsRequest;
        class DescribeAlarmHistoryRequest;
        class DescribeAlarmsRequest;
        class DescribeAlarmsForMetricRequest;
        class DisableAlarmActionsRequest;
        class EnableAlarmActionsRequest;
        class GetMetricStatisticsRequest;
        class ListMetricsRequest;
        class PutMetricAlarmRequest;
        class PutMetricDataRequest;
        class SetAlarmStateRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchErrors>> DeleteAlarmsOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmHistoryResult, Aws::Client::AWSError<CloudWatchErrors>> DescribeAlarmHistoryOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmsResult, Aws::Client::AWSError<CloudWatchErrors>> DescribeAlarmsOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmsForMetricResult, Aws::Client::AWSError<CloudWatchErrors>> DescribeAlarmsForMetricOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchErrors>> DisableAlarmActionsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchErrors>> EnableAlarmActionsOutcome;
        typedef Aws::Utils::Outcome<GetMetricStatisticsResult, Aws::Client::AWSError<CloudWatchErrors>> GetMetricStatisticsOutcome;
        typedef Aws::Utils::Outcome<ListMetricsResult, Aws::Client::AWSError<CloudWatchErrors>> ListMetricsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchErrors>> PutMetricAlarmOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchErrors>> PutMetricDataOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudWatchErrors>> SetAlarmStateOutcome;

        typedef std::future<DeleteAlarmsOutcome> DeleteAlarmsOutcomeCallable;
        typedef std::future<DescribeAlarmHistoryOutcome> DescribeAlarmHistoryOutcomeCallable;
        typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
        typedef std::future<DescribeAlarmsForMetricOutcome> DescribeAlarmsForMetricOutcomeCallable;
        typedef std::future<DisableAlarmActionsOutcome> DisableAlarmActionsOutcomeCallable;
        typedef std::future<EnableAlarmActionsOutcome> EnableAlarmActionsOutcomeCallable;
        typedef std::future<GetMetricStatisticsOutcome> GetMetricStatisticsOutcomeCallable;
        typedef std::future<ListMetricsOutcome> ListMetricsOutcomeCallable;
        typedef std::future<PutMetricAlarmOutcome> PutMetricAlarmOutcomeCallable;
        typedef std::future<PutMetricDataOutcome> PutMetricDataOutcomeCallable;
        typedef std::future<SetAlarmStateOutcome> SetAlarmStateOutcomeCallable;
} // namespace Model

  class CloudWatchClient;

    typedef std::function<void(const CloudWatchClient*, const Model::DeleteAlarmsRequest&, const Model::DeleteAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlarmsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmHistoryRequest&, const Model::DescribeAlarmHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmHistoryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmsRequest&, const Model::DescribeAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmsForMetricRequest&, const Model::DescribeAlarmsForMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmsForMetricResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DisableAlarmActionsRequest&, const Model::DisableAlarmActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAlarmActionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::EnableAlarmActionsRequest&, const Model::EnableAlarmActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAlarmActionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricStatisticsRequest&, const Model::GetMetricStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricStatisticsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListMetricsRequest&, const Model::ListMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutMetricAlarmRequest&, const Model::PutMetricAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricAlarmResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutMetricDataRequest&, const Model::PutMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricDataResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::SetAlarmStateRequest&, const Model::SetAlarmStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetAlarmStateResponseReceivedHandler;

  /**
   * <p>Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the
   * applications you run on AWS in real-time. You can use CloudWatch to collect and
   * track metrics, which are the variables you want to measure for your resources
   * and applications.</p> <p>CloudWatch alarms send notifications or automatically
   * make changes to the resources you are monitoring based on rules that you define.
   * For example, you can monitor the CPU usage and disk reads and writes of your
   * Amazon Elastic Compute Cloud (Amazon EC2) instances and then use this data to
   * determine whether you should launch additional instances to handle increased
   * load. You can also use this data to stop under-used instances to save money.</p>
   * <p>In addition to monitoring the built-in metrics that come with AWS, you can
   * monitor your own custom metrics. With CloudWatch, you gain system-wide
   * visibility into resource utilization, application performance, and operational
   * health.</p>
   */
  class AWS_CLOUDWATCH_API CloudWatchClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CloudWatchClient();

        /**
         * <p>Deletes all specified alarms. In the event of an error, no alarms are
         * deleted.</p>
         */
        virtual Model::DeleteAlarmsOutcome DeleteAlarms(const Model::DeleteAlarmsRequest& request) const;

        /**
         * <p>Deletes all specified alarms. In the event of an error, no alarms are
         * deleted.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlarmsOutcomeCallable DeleteAlarmsCallable(const Model::DeleteAlarmsRequest& request) const;

        /**
         * <p>Deletes all specified alarms. In the event of an error, no alarms are
         * deleted.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlarmsAsync(const Model::DeleteAlarmsRequest& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves history for the specified alarm. Filter alarms by date range or
         * item type. If an alarm name is not specified, Amazon CloudWatch returns
         * histories for all of the owner's alarms.</p> <note> <p>Amazon CloudWatch retains
         * the history of an alarm for two weeks, whether or not you delete the alarm.</p>
         * </note>
         */
        virtual Model::DescribeAlarmHistoryOutcome DescribeAlarmHistory(const Model::DescribeAlarmHistoryRequest& request) const;

        /**
         * <p>Retrieves history for the specified alarm. Filter alarms by date range or
         * item type. If an alarm name is not specified, Amazon CloudWatch returns
         * histories for all of the owner's alarms.</p> <note> <p>Amazon CloudWatch retains
         * the history of an alarm for two weeks, whether or not you delete the alarm.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmHistoryOutcomeCallable DescribeAlarmHistoryCallable(const Model::DescribeAlarmHistoryRequest& request) const;

        /**
         * <p>Retrieves history for the specified alarm. Filter alarms by date range or
         * item type. If an alarm name is not specified, Amazon CloudWatch returns
         * histories for all of the owner's alarms.</p> <note> <p>Amazon CloudWatch retains
         * the history of an alarm for two weeks, whether or not you delete the alarm.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmHistoryAsync(const Model::DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves alarms with the specified names. If no name is specified, all
         * alarms for the user are returned. Alarms can be retrieved by using only a prefix
         * for the alarm name, the alarm state, or a prefix for any action.</p>
         */
        virtual Model::DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest& request) const;

        /**
         * <p>Retrieves alarms with the specified names. If no name is specified, all
         * alarms for the user are returned. Alarms can be retrieved by using only a prefix
         * for the alarm name, the alarm state, or a prefix for any action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const Model::DescribeAlarmsRequest& request) const;

        /**
         * <p>Retrieves alarms with the specified names. If no name is specified, all
         * alarms for the user are returned. Alarms can be retrieved by using only a prefix
         * for the alarm name, the alarm state, or a prefix for any action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all alarms for a single metric. Specify a statistic, period, or
         * unit to filter the set of alarms further.</p>
         */
        virtual Model::DescribeAlarmsForMetricOutcome DescribeAlarmsForMetric(const Model::DescribeAlarmsForMetricRequest& request) const;

        /**
         * <p>Retrieves all alarms for a single metric. Specify a statistic, period, or
         * unit to filter the set of alarms further.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmsForMetricOutcomeCallable DescribeAlarmsForMetricCallable(const Model::DescribeAlarmsForMetricRequest& request) const;

        /**
         * <p>Retrieves all alarms for a single metric. Specify a statistic, period, or
         * unit to filter the set of alarms further.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmsForMetricAsync(const Model::DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables actions for the specified alarms. When an alarm's actions are
         * disabled the alarm's state may change, but none of the alarm's actions will
         * execute.</p>
         */
        virtual Model::DisableAlarmActionsOutcome DisableAlarmActions(const Model::DisableAlarmActionsRequest& request) const;

        /**
         * <p>Disables actions for the specified alarms. When an alarm's actions are
         * disabled the alarm's state may change, but none of the alarm's actions will
         * execute.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAlarmActionsOutcomeCallable DisableAlarmActionsCallable(const Model::DisableAlarmActionsRequest& request) const;

        /**
         * <p>Disables actions for the specified alarms. When an alarm's actions are
         * disabled the alarm's state may change, but none of the alarm's actions will
         * execute.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAlarmActionsAsync(const Model::DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables actions for the specified alarms.</p>
         */
        virtual Model::EnableAlarmActionsOutcome EnableAlarmActions(const Model::EnableAlarmActionsRequest& request) const;

        /**
         * <p>Enables actions for the specified alarms.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAlarmActionsOutcomeCallable EnableAlarmActionsCallable(const Model::EnableAlarmActionsRequest& request) const;

        /**
         * <p>Enables actions for the specified alarms.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAlarmActionsAsync(const Model::EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets statistics for the specified metric.</p> <p> The maximum number of data
         * points that can be queried is 50,850, whereas the maximum number of data points
         * returned from a single <code>GetMetricStatistics</code> request is 1,440. If you
         * make a request that generates more than 1,440 data points, Amazon CloudWatch
         * returns an error. In such a case, you can alter the request by narrowing the
         * specified time range or increasing the specified period. A period can be as
         * short as one minute (60 seconds) or as long as one day (86,400 seconds).
         * Alternatively, you can make multiple requests across adjacent time ranges.
         * <code>GetMetricStatistics</code> does not return the data in chronological
         * order. </p> <p> Amazon CloudWatch aggregates data points based on the length of
         * the <code>period</code> that you specify. For example, if you request statistics
         * with a one-minute granularity, Amazon CloudWatch aggregates data points with
         * time stamps that fall within the same one-minute period. In such a case, the
         * data points queried can greatly outnumber the data points returned. </p> <p> The
         * following examples show various statistics allowed by the data point query
         * maximum of 50,850 when you call <code>GetMetricStatistics</code> on Amazon EC2
         * instances with detailed (one-minute) monitoring enabled: </p> <ul> <li>
         * <p>Statistics for up to 400 instances for a span of one hour</p> </li> <li>
         * <p>Statistics for up to 35 instances over a span of 24 hours</p> </li> <li>
         * <p>Statistics for up to 2 instances over a span of 2 weeks</p> </li> </ul> <p>
         * For information about the namespace, metric names, and dimensions that other
         * Amazon Web Services products use to send metrics to CloudWatch, go to <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
         * CloudWatch Metrics, Namespaces, and Dimensions Reference</a> in the <i>Amazon
         * CloudWatch Developer Guide</i>. </p>
         */
        virtual Model::GetMetricStatisticsOutcome GetMetricStatistics(const Model::GetMetricStatisticsRequest& request) const;

        /**
         * <p>Gets statistics for the specified metric.</p> <p> The maximum number of data
         * points that can be queried is 50,850, whereas the maximum number of data points
         * returned from a single <code>GetMetricStatistics</code> request is 1,440. If you
         * make a request that generates more than 1,440 data points, Amazon CloudWatch
         * returns an error. In such a case, you can alter the request by narrowing the
         * specified time range or increasing the specified period. A period can be as
         * short as one minute (60 seconds) or as long as one day (86,400 seconds).
         * Alternatively, you can make multiple requests across adjacent time ranges.
         * <code>GetMetricStatistics</code> does not return the data in chronological
         * order. </p> <p> Amazon CloudWatch aggregates data points based on the length of
         * the <code>period</code> that you specify. For example, if you request statistics
         * with a one-minute granularity, Amazon CloudWatch aggregates data points with
         * time stamps that fall within the same one-minute period. In such a case, the
         * data points queried can greatly outnumber the data points returned. </p> <p> The
         * following examples show various statistics allowed by the data point query
         * maximum of 50,850 when you call <code>GetMetricStatistics</code> on Amazon EC2
         * instances with detailed (one-minute) monitoring enabled: </p> <ul> <li>
         * <p>Statistics for up to 400 instances for a span of one hour</p> </li> <li>
         * <p>Statistics for up to 35 instances over a span of 24 hours</p> </li> <li>
         * <p>Statistics for up to 2 instances over a span of 2 weeks</p> </li> </ul> <p>
         * For information about the namespace, metric names, and dimensions that other
         * Amazon Web Services products use to send metrics to CloudWatch, go to <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
         * CloudWatch Metrics, Namespaces, and Dimensions Reference</a> in the <i>Amazon
         * CloudWatch Developer Guide</i>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetricStatisticsOutcomeCallable GetMetricStatisticsCallable(const Model::GetMetricStatisticsRequest& request) const;

        /**
         * <p>Gets statistics for the specified metric.</p> <p> The maximum number of data
         * points that can be queried is 50,850, whereas the maximum number of data points
         * returned from a single <code>GetMetricStatistics</code> request is 1,440. If you
         * make a request that generates more than 1,440 data points, Amazon CloudWatch
         * returns an error. In such a case, you can alter the request by narrowing the
         * specified time range or increasing the specified period. A period can be as
         * short as one minute (60 seconds) or as long as one day (86,400 seconds).
         * Alternatively, you can make multiple requests across adjacent time ranges.
         * <code>GetMetricStatistics</code> does not return the data in chronological
         * order. </p> <p> Amazon CloudWatch aggregates data points based on the length of
         * the <code>period</code> that you specify. For example, if you request statistics
         * with a one-minute granularity, Amazon CloudWatch aggregates data points with
         * time stamps that fall within the same one-minute period. In such a case, the
         * data points queried can greatly outnumber the data points returned. </p> <p> The
         * following examples show various statistics allowed by the data point query
         * maximum of 50,850 when you call <code>GetMetricStatistics</code> on Amazon EC2
         * instances with detailed (one-minute) monitoring enabled: </p> <ul> <li>
         * <p>Statistics for up to 400 instances for a span of one hour</p> </li> <li>
         * <p>Statistics for up to 35 instances over a span of 24 hours</p> </li> <li>
         * <p>Statistics for up to 2 instances over a span of 2 weeks</p> </li> </ul> <p>
         * For information about the namespace, metric names, and dimensions that other
         * Amazon Web Services products use to send metrics to CloudWatch, go to <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
         * CloudWatch Metrics, Namespaces, and Dimensions Reference</a> in the <i>Amazon
         * CloudWatch Developer Guide</i>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMetricStatisticsAsync(const Model::GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of valid metrics stored for the AWS account owner. Returned
         * metrics can be used with <a>GetMetricStatistics</a> to obtain statistical data
         * for a given metric. </p> <note> <p> Up to 500 results are returned for any one
         * call. To retrieve further results, use returned <code>NextToken</code> values
         * with subsequent <code>ListMetrics</code> operations.</p> </note> <note> <p> If
         * you create a metric with <a>PutMetricData</a>, allow up to fifteen minutes for
         * the metric to appear in calls to <code>ListMetrics</code>. Statistics about the
         * metric, however, are available sooner using <a>GetMetricStatistics</a>.</p>
         * </note>
         */
        virtual Model::ListMetricsOutcome ListMetrics(const Model::ListMetricsRequest& request) const;

        /**
         * <p> Returns a list of valid metrics stored for the AWS account owner. Returned
         * metrics can be used with <a>GetMetricStatistics</a> to obtain statistical data
         * for a given metric. </p> <note> <p> Up to 500 results are returned for any one
         * call. To retrieve further results, use returned <code>NextToken</code> values
         * with subsequent <code>ListMetrics</code> operations.</p> </note> <note> <p> If
         * you create a metric with <a>PutMetricData</a>, allow up to fifteen minutes for
         * the metric to appear in calls to <code>ListMetrics</code>. Statistics about the
         * metric, however, are available sooner using <a>GetMetricStatistics</a>.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMetricsOutcomeCallable ListMetricsCallable(const Model::ListMetricsRequest& request) const;

        /**
         * <p> Returns a list of valid metrics stored for the AWS account owner. Returned
         * metrics can be used with <a>GetMetricStatistics</a> to obtain statistical data
         * for a given metric. </p> <note> <p> Up to 500 results are returned for any one
         * call. To retrieve further results, use returned <code>NextToken</code> values
         * with subsequent <code>ListMetrics</code> operations.</p> </note> <note> <p> If
         * you create a metric with <a>PutMetricData</a>, allow up to fifteen minutes for
         * the metric to appear in calls to <code>ListMetrics</code>. Statistics about the
         * metric, however, are available sooner using <a>GetMetricStatistics</a>.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMetricsAsync(const Model::ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an alarm and associates it with the specified Amazon
         * CloudWatch metric. Optionally, this operation can associate one or more Amazon
         * SNS resources with the alarm.</p> <p> When this operation creates an alarm, the
         * alarm state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is
         * evaluated and its <code>StateValue</code> is set appropriately. Any actions
         * associated with the <code>StateValue</code> are then executed. </p> <note>
         * <p>When updating an existing alarm, its <code>StateValue</code> is left
         * unchanged, but it completely overwrites the alarm's previous configuration.</p>
         * </note> <note> <p>If you are using an AWS Identity and Access Management (IAM)
         * account to create or modify an alarm, you must have the following Amazon EC2
         * permissions:</p> <ul> <li> <p> <code>ec2:DescribeInstanceStatus</code> and
         * <code>ec2:DescribeInstances</code> for all alarms on Amazon EC2 instance status
         * metrics.</p> </li> <li> <p> <code>ec2:StopInstances</code> for alarms with stop
         * actions.</p> </li> <li> <p> <code>ec2:TerminateInstances</code> for alarms with
         * terminate actions.</p> </li> <li> <p>
         * <code>ec2:DescribeInstanceRecoveryAttribute</code>, and
         * <code>ec2:RecoverInstances</code> for alarms with recover actions.</p> </li>
         * </ul> <p>If you have read/write permissions for Amazon CloudWatch but not for
         * Amazon EC2, you can still create an alarm but the stop or terminate actions
         * won't be performed on the Amazon EC2 instance. However, if you are later granted
         * permission to use the associated Amazon EC2 APIs, the alarm actions you created
         * earlier will be performed. For more information about IAM permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a> in <i>Using IAM</i>.</p> <p>If you are using an IAM role (e.g.,
         * an Amazon EC2 instance profile), you cannot stop or terminate the instance using
         * alarm actions. However, you can still see the alarm state and perform any other
         * actions such as Amazon SNS notifications or Auto Scaling policies.</p> <p>If you
         * are using temporary security credentials granted using the AWS Security Token
         * Service (AWS STS), you cannot stop or terminate an Amazon EC2 instance using
         * alarm actions.</p> </note>
         */
        virtual Model::PutMetricAlarmOutcome PutMetricAlarm(const Model::PutMetricAlarmRequest& request) const;

        /**
         * <p>Creates or updates an alarm and associates it with the specified Amazon
         * CloudWatch metric. Optionally, this operation can associate one or more Amazon
         * SNS resources with the alarm.</p> <p> When this operation creates an alarm, the
         * alarm state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is
         * evaluated and its <code>StateValue</code> is set appropriately. Any actions
         * associated with the <code>StateValue</code> are then executed. </p> <note>
         * <p>When updating an existing alarm, its <code>StateValue</code> is left
         * unchanged, but it completely overwrites the alarm's previous configuration.</p>
         * </note> <note> <p>If you are using an AWS Identity and Access Management (IAM)
         * account to create or modify an alarm, you must have the following Amazon EC2
         * permissions:</p> <ul> <li> <p> <code>ec2:DescribeInstanceStatus</code> and
         * <code>ec2:DescribeInstances</code> for all alarms on Amazon EC2 instance status
         * metrics.</p> </li> <li> <p> <code>ec2:StopInstances</code> for alarms with stop
         * actions.</p> </li> <li> <p> <code>ec2:TerminateInstances</code> for alarms with
         * terminate actions.</p> </li> <li> <p>
         * <code>ec2:DescribeInstanceRecoveryAttribute</code>, and
         * <code>ec2:RecoverInstances</code> for alarms with recover actions.</p> </li>
         * </ul> <p>If you have read/write permissions for Amazon CloudWatch but not for
         * Amazon EC2, you can still create an alarm but the stop or terminate actions
         * won't be performed on the Amazon EC2 instance. However, if you are later granted
         * permission to use the associated Amazon EC2 APIs, the alarm actions you created
         * earlier will be performed. For more information about IAM permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a> in <i>Using IAM</i>.</p> <p>If you are using an IAM role (e.g.,
         * an Amazon EC2 instance profile), you cannot stop or terminate the instance using
         * alarm actions. However, you can still see the alarm state and perform any other
         * actions such as Amazon SNS notifications or Auto Scaling policies.</p> <p>If you
         * are using temporary security credentials granted using the AWS Security Token
         * Service (AWS STS), you cannot stop or terminate an Amazon EC2 instance using
         * alarm actions.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMetricAlarmOutcomeCallable PutMetricAlarmCallable(const Model::PutMetricAlarmRequest& request) const;

        /**
         * <p>Creates or updates an alarm and associates it with the specified Amazon
         * CloudWatch metric. Optionally, this operation can associate one or more Amazon
         * SNS resources with the alarm.</p> <p> When this operation creates an alarm, the
         * alarm state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is
         * evaluated and its <code>StateValue</code> is set appropriately. Any actions
         * associated with the <code>StateValue</code> are then executed. </p> <note>
         * <p>When updating an existing alarm, its <code>StateValue</code> is left
         * unchanged, but it completely overwrites the alarm's previous configuration.</p>
         * </note> <note> <p>If you are using an AWS Identity and Access Management (IAM)
         * account to create or modify an alarm, you must have the following Amazon EC2
         * permissions:</p> <ul> <li> <p> <code>ec2:DescribeInstanceStatus</code> and
         * <code>ec2:DescribeInstances</code> for all alarms on Amazon EC2 instance status
         * metrics.</p> </li> <li> <p> <code>ec2:StopInstances</code> for alarms with stop
         * actions.</p> </li> <li> <p> <code>ec2:TerminateInstances</code> for alarms with
         * terminate actions.</p> </li> <li> <p>
         * <code>ec2:DescribeInstanceRecoveryAttribute</code>, and
         * <code>ec2:RecoverInstances</code> for alarms with recover actions.</p> </li>
         * </ul> <p>If you have read/write permissions for Amazon CloudWatch but not for
         * Amazon EC2, you can still create an alarm but the stop or terminate actions
         * won't be performed on the Amazon EC2 instance. However, if you are later granted
         * permission to use the associated Amazon EC2 APIs, the alarm actions you created
         * earlier will be performed. For more information about IAM permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a> in <i>Using IAM</i>.</p> <p>If you are using an IAM role (e.g.,
         * an Amazon EC2 instance profile), you cannot stop or terminate the instance using
         * alarm actions. However, you can still see the alarm state and perform any other
         * actions such as Amazon SNS notifications or Auto Scaling policies.</p> <p>If you
         * are using temporary security credentials granted using the AWS Security Token
         * Service (AWS STS), you cannot stop or terminate an Amazon EC2 instance using
         * alarm actions.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMetricAlarmAsync(const Model::PutMetricAlarmRequest& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Publishes metric data points to Amazon CloudWatch. Amazon CloudWatch
         * associates the data points with the specified metric. If the specified metric
         * does not exist, Amazon CloudWatch creates the metric. When Amazon CloudWatch
         * creates a metric, it can take up to fifteen minutes for the metric to appear in
         * calls to <a>ListMetrics</a>. </p> <p> Each <code>PutMetricData</code> request is
         * limited to 8 KB in size for HTTP GET requests and is limited to 40 KB in size
         * for HTTP POST requests. </p> <important> <p>Although the <code>Value</code>
         * parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch rejects
         * values that are either too small or too large. Values must be in the range of
         * 8.515920e-109 to 1.174271e+108 (Base 10) or 2e-360 to 2e360 (Base 2). In
         * addition, special values (e.g., NaN, +Infinity, -Infinity) are not
         * supported.</p> </important> <p>Data that is timestamped 24 hours or more in the
         * past may take in excess of 48 hours to become available from submission time
         * using <code>GetMetricStatistics</code>.</p>
         */
        virtual Model::PutMetricDataOutcome PutMetricData(const Model::PutMetricDataRequest& request) const;

        /**
         * <p> Publishes metric data points to Amazon CloudWatch. Amazon CloudWatch
         * associates the data points with the specified metric. If the specified metric
         * does not exist, Amazon CloudWatch creates the metric. When Amazon CloudWatch
         * creates a metric, it can take up to fifteen minutes for the metric to appear in
         * calls to <a>ListMetrics</a>. </p> <p> Each <code>PutMetricData</code> request is
         * limited to 8 KB in size for HTTP GET requests and is limited to 40 KB in size
         * for HTTP POST requests. </p> <important> <p>Although the <code>Value</code>
         * parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch rejects
         * values that are either too small or too large. Values must be in the range of
         * 8.515920e-109 to 1.174271e+108 (Base 10) or 2e-360 to 2e360 (Base 2). In
         * addition, special values (e.g., NaN, +Infinity, -Infinity) are not
         * supported.</p> </important> <p>Data that is timestamped 24 hours or more in the
         * past may take in excess of 48 hours to become available from submission time
         * using <code>GetMetricStatistics</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMetricDataOutcomeCallable PutMetricDataCallable(const Model::PutMetricDataRequest& request) const;

        /**
         * <p> Publishes metric data points to Amazon CloudWatch. Amazon CloudWatch
         * associates the data points with the specified metric. If the specified metric
         * does not exist, Amazon CloudWatch creates the metric. When Amazon CloudWatch
         * creates a metric, it can take up to fifteen minutes for the metric to appear in
         * calls to <a>ListMetrics</a>. </p> <p> Each <code>PutMetricData</code> request is
         * limited to 8 KB in size for HTTP GET requests and is limited to 40 KB in size
         * for HTTP POST requests. </p> <important> <p>Although the <code>Value</code>
         * parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch rejects
         * values that are either too small or too large. Values must be in the range of
         * 8.515920e-109 to 1.174271e+108 (Base 10) or 2e-360 to 2e360 (Base 2). In
         * addition, special values (e.g., NaN, +Infinity, -Infinity) are not
         * supported.</p> </important> <p>Data that is timestamped 24 hours or more in the
         * past may take in excess of 48 hours to become available from submission time
         * using <code>GetMetricStatistics</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMetricDataAsync(const Model::PutMetricDataRequest& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Temporarily sets the state of an alarm for testing purposes. When the
         * updated <code>StateValue</code> differs from the previous value, the action
         * configured for the appropriate state is invoked. For example, if your alarm is
         * configured to send an Amazon SNS message when an alarm is triggered, temporarily
         * changing the alarm's state to <b>ALARM</b> sends an Amazon SNS message. The
         * alarm returns to its actual state (often within seconds). Because the alarm
         * state change happens very quickly, it is typically only visible in the alarm's
         * <b>History</b> tab in the Amazon CloudWatch console or through
         * <code>DescribeAlarmHistory</code>. </p>
         */
        virtual Model::SetAlarmStateOutcome SetAlarmState(const Model::SetAlarmStateRequest& request) const;

        /**
         * <p> Temporarily sets the state of an alarm for testing purposes. When the
         * updated <code>StateValue</code> differs from the previous value, the action
         * configured for the appropriate state is invoked. For example, if your alarm is
         * configured to send an Amazon SNS message when an alarm is triggered, temporarily
         * changing the alarm's state to <b>ALARM</b> sends an Amazon SNS message. The
         * alarm returns to its actual state (often within seconds). Because the alarm
         * state change happens very quickly, it is typically only visible in the alarm's
         * <b>History</b> tab in the Amazon CloudWatch console or through
         * <code>DescribeAlarmHistory</code>. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetAlarmStateOutcomeCallable SetAlarmStateCallable(const Model::SetAlarmStateRequest& request) const;

        /**
         * <p> Temporarily sets the state of an alarm for testing purposes. When the
         * updated <code>StateValue</code> differs from the previous value, the action
         * configured for the appropriate state is invoked. For example, if your alarm is
         * configured to send an Amazon SNS message when an alarm is triggered, temporarily
         * changing the alarm's state to <b>ALARM</b> sends an Amazon SNS message. The
         * alarm returns to its actual state (often within seconds). Because the alarm
         * state change happens very quickly, it is typically only visible in the alarm's
         * <b>History</b> tab in the Amazon CloudWatch console or through
         * <code>DescribeAlarmHistory</code>. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetAlarmStateAsync(const Model::SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void DeleteAlarmsAsyncHelper(const Model::DeleteAlarmsRequest& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmHistoryAsyncHelper(const Model::DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmsAsyncHelper(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmsForMetricAsyncHelper(const Model::DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableAlarmActionsAsyncHelper(const Model::DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAlarmActionsAsyncHelper(const Model::EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricStatisticsAsyncHelper(const Model::GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMetricsAsyncHelper(const Model::ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMetricAlarmAsyncHelper(const Model::PutMetricAlarmRequest& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMetricDataAsyncHelper(const Model::PutMetricDataRequest& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetAlarmStateAsyncHelper(const Model::SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatch
} // namespace Aws
