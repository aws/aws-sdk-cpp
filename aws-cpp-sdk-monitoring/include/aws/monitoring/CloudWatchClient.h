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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/monitoring/model/DeleteAnomalyDetectorResult.h>
#include <aws/monitoring/model/DeleteDashboardsResult.h>
#include <aws/monitoring/model/DescribeAlarmHistoryResult.h>
#include <aws/monitoring/model/DescribeAlarmsResult.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricResult.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsResult.h>
#include <aws/monitoring/model/GetDashboardResult.h>
#include <aws/monitoring/model/GetMetricDataResult.h>
#include <aws/monitoring/model/GetMetricStatisticsResult.h>
#include <aws/monitoring/model/GetMetricWidgetImageResult.h>
#include <aws/monitoring/model/ListDashboardsResult.h>
#include <aws/monitoring/model/ListMetricsResult.h>
#include <aws/monitoring/model/ListTagsForResourceResult.h>
#include <aws/monitoring/model/PutAnomalyDetectorResult.h>
#include <aws/monitoring/model/PutDashboardResult.h>
#include <aws/monitoring/model/TagResourceResult.h>
#include <aws/monitoring/model/UntagResourceResult.h>
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
        class DeleteAnomalyDetectorRequest;
        class DeleteDashboardsRequest;
        class DescribeAlarmHistoryRequest;
        class DescribeAlarmsRequest;
        class DescribeAlarmsForMetricRequest;
        class DescribeAnomalyDetectorsRequest;
        class DisableAlarmActionsRequest;
        class EnableAlarmActionsRequest;
        class GetDashboardRequest;
        class GetMetricDataRequest;
        class GetMetricStatisticsRequest;
        class GetMetricWidgetImageRequest;
        class ListDashboardsRequest;
        class ListMetricsRequest;
        class ListTagsForResourceRequest;
        class PutAnomalyDetectorRequest;
        class PutDashboardRequest;
        class PutMetricAlarmRequest;
        class PutMetricDataRequest;
        class SetAlarmStateRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchErrors>> DeleteAlarmsOutcome;
        typedef Aws::Utils::Outcome<DeleteAnomalyDetectorResult, Aws::Client::AWSError<CloudWatchErrors>> DeleteAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<DeleteDashboardsResult, Aws::Client::AWSError<CloudWatchErrors>> DeleteDashboardsOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmHistoryResult, Aws::Client::AWSError<CloudWatchErrors>> DescribeAlarmHistoryOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmsResult, Aws::Client::AWSError<CloudWatchErrors>> DescribeAlarmsOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmsForMetricResult, Aws::Client::AWSError<CloudWatchErrors>> DescribeAlarmsForMetricOutcome;
        typedef Aws::Utils::Outcome<DescribeAnomalyDetectorsResult, Aws::Client::AWSError<CloudWatchErrors>> DescribeAnomalyDetectorsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchErrors>> DisableAlarmActionsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchErrors>> EnableAlarmActionsOutcome;
        typedef Aws::Utils::Outcome<GetDashboardResult, Aws::Client::AWSError<CloudWatchErrors>> GetDashboardOutcome;
        typedef Aws::Utils::Outcome<GetMetricDataResult, Aws::Client::AWSError<CloudWatchErrors>> GetMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetMetricStatisticsResult, Aws::Client::AWSError<CloudWatchErrors>> GetMetricStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetMetricWidgetImageResult, Aws::Client::AWSError<CloudWatchErrors>> GetMetricWidgetImageOutcome;
        typedef Aws::Utils::Outcome<ListDashboardsResult, Aws::Client::AWSError<CloudWatchErrors>> ListDashboardsOutcome;
        typedef Aws::Utils::Outcome<ListMetricsResult, Aws::Client::AWSError<CloudWatchErrors>> ListMetricsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<CloudWatchErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutAnomalyDetectorResult, Aws::Client::AWSError<CloudWatchErrors>> PutAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<PutDashboardResult, Aws::Client::AWSError<CloudWatchErrors>> PutDashboardOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchErrors>> PutMetricAlarmOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchErrors>> PutMetricDataOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudWatchErrors>> SetAlarmStateOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<CloudWatchErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<CloudWatchErrors>> UntagResourceOutcome;

        typedef std::future<DeleteAlarmsOutcome> DeleteAlarmsOutcomeCallable;
        typedef std::future<DeleteAnomalyDetectorOutcome> DeleteAnomalyDetectorOutcomeCallable;
        typedef std::future<DeleteDashboardsOutcome> DeleteDashboardsOutcomeCallable;
        typedef std::future<DescribeAlarmHistoryOutcome> DescribeAlarmHistoryOutcomeCallable;
        typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
        typedef std::future<DescribeAlarmsForMetricOutcome> DescribeAlarmsForMetricOutcomeCallable;
        typedef std::future<DescribeAnomalyDetectorsOutcome> DescribeAnomalyDetectorsOutcomeCallable;
        typedef std::future<DisableAlarmActionsOutcome> DisableAlarmActionsOutcomeCallable;
        typedef std::future<EnableAlarmActionsOutcome> EnableAlarmActionsOutcomeCallable;
        typedef std::future<GetDashboardOutcome> GetDashboardOutcomeCallable;
        typedef std::future<GetMetricDataOutcome> GetMetricDataOutcomeCallable;
        typedef std::future<GetMetricStatisticsOutcome> GetMetricStatisticsOutcomeCallable;
        typedef std::future<GetMetricWidgetImageOutcome> GetMetricWidgetImageOutcomeCallable;
        typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
        typedef std::future<ListMetricsOutcome> ListMetricsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutAnomalyDetectorOutcome> PutAnomalyDetectorOutcomeCallable;
        typedef std::future<PutDashboardOutcome> PutDashboardOutcomeCallable;
        typedef std::future<PutMetricAlarmOutcome> PutMetricAlarmOutcomeCallable;
        typedef std::future<PutMetricDataOutcome> PutMetricDataOutcomeCallable;
        typedef std::future<SetAlarmStateOutcome> SetAlarmStateOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class CloudWatchClient;

    typedef std::function<void(const CloudWatchClient*, const Model::DeleteAlarmsRequest&, const Model::DeleteAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlarmsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DeleteAnomalyDetectorRequest&, const Model::DeleteAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DeleteDashboardsRequest&, const Model::DeleteDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDashboardsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmHistoryRequest&, const Model::DescribeAlarmHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmHistoryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmsRequest&, const Model::DescribeAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmsForMetricRequest&, const Model::DescribeAlarmsForMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmsForMetricResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAnomalyDetectorsRequest&, const Model::DescribeAnomalyDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectorsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DisableAlarmActionsRequest&, const Model::DisableAlarmActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAlarmActionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::EnableAlarmActionsRequest&, const Model::EnableAlarmActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAlarmActionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetDashboardRequest&, const Model::GetDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricDataRequest&, const Model::GetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricStatisticsRequest&, const Model::GetMetricStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricStatisticsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricWidgetImageRequest&, const Model::GetMetricWidgetImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricWidgetImageResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListMetricsRequest&, const Model::ListMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutAnomalyDetectorRequest&, const Model::PutAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutDashboardRequest&, const Model::PutDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDashboardResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutMetricAlarmRequest&, const Model::PutMetricAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricAlarmResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutMetricDataRequest&, const Model::PutMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricDataResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::SetAlarmStateRequest&, const Model::SetAlarmStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetAlarmStateResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the
   * applications you run on AWS in real time. You can use CloudWatch to collect and
   * track metrics, which are the variables you want to measure for your resources
   * and applications.</p> <p>CloudWatch alarms send notifications or automatically
   * change the resources you are monitoring based on rules that you define. For
   * example, you can monitor the CPU usage and disk reads and writes of your Amazon
   * EC2 instances. Then, use this data to determine whether you should launch
   * additional instances to handle increased load. You can also use this data to
   * stop under-used instances to save money.</p> <p>In addition to monitoring the
   * built-in metrics that come with AWS, you can monitor your own custom metrics.
   * With CloudWatch, you gain system-wide visibility into resource utilization,
   * application performance, and operational health.</p>
   */
  class AWS_CLOUDWATCH_API CloudWatchClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudWatchClient();

        inline virtual const char* GetServiceClientName() const override { return "CloudWatch"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Deletes the specified alarms. In the event of an error, no alarms are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlarmsOutcome DeleteAlarms(const Model::DeleteAlarmsRequest& request) const;

        /**
         * <p>Deletes the specified alarms. In the event of an error, no alarms are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAlarms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlarmsOutcomeCallable DeleteAlarmsCallable(const Model::DeleteAlarmsRequest& request) const;

        /**
         * <p>Deletes the specified alarms. In the event of an error, no alarms are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAlarms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlarmsAsync(const Model::DeleteAlarmsRequest& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified anomaly detection model from your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalyDetectorOutcome DeleteAnomalyDetector(const Model::DeleteAnomalyDetectorRequest& request) const;

        /**
         * <p>Deletes the specified anomaly detection model from your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnomalyDetectorOutcomeCallable DeleteAnomalyDetectorCallable(const Model::DeleteAnomalyDetectorRequest& request) const;

        /**
         * <p>Deletes the specified anomaly detection model from your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnomalyDetectorAsync(const Model::DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all dashboards that you specify. You may specify up to 100 dashboards
         * to delete. If there is an error during this call, no dashboards are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardsOutcome DeleteDashboards(const Model::DeleteDashboardsRequest& request) const;

        /**
         * <p>Deletes all dashboards that you specify. You may specify up to 100 dashboards
         * to delete. If there is an error during this call, no dashboards are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteDashboards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDashboardsOutcomeCallable DeleteDashboardsCallable(const Model::DeleteDashboardsRequest& request) const;

        /**
         * <p>Deletes all dashboards that you specify. You may specify up to 100 dashboards
         * to delete. If there is an error during this call, no dashboards are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteDashboards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDashboardsAsync(const Model::DeleteDashboardsRequest& request, const DeleteDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the history for the specified alarm. You can filter the results by
         * date range or item type. If an alarm name is not specified, the histories for
         * all alarms are returned.</p> <p>CloudWatch retains the history of an alarm even
         * if you delete the alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmHistoryOutcome DescribeAlarmHistory(const Model::DescribeAlarmHistoryRequest& request) const;

        /**
         * <p>Retrieves the history for the specified alarm. You can filter the results by
         * date range or item type. If an alarm name is not specified, the histories for
         * all alarms are returned.</p> <p>CloudWatch retains the history of an alarm even
         * if you delete the alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmHistoryOutcomeCallable DescribeAlarmHistoryCallable(const Model::DescribeAlarmHistoryRequest& request) const;

        /**
         * <p>Retrieves the history for the specified alarm. You can filter the results by
         * date range or item type. If an alarm name is not specified, the histories for
         * all alarms are returned.</p> <p>CloudWatch retains the history of an alarm even
         * if you delete the alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmHistoryAsync(const Model::DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified alarms. If no alarms are specified, all alarms are
         * returned. Alarms can be retrieved by using only a prefix for the alarm name, the
         * alarm state, or a prefix for any action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest& request) const;

        /**
         * <p>Retrieves the specified alarms. If no alarms are specified, all alarms are
         * returned. Alarms can be retrieved by using only a prefix for the alarm name, the
         * alarm state, or a prefix for any action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const Model::DescribeAlarmsRequest& request) const;

        /**
         * <p>Retrieves the specified alarms. If no alarms are specified, all alarms are
         * returned. Alarms can be retrieved by using only a prefix for the alarm name, the
         * alarm state, or a prefix for any action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the alarms for the specified metric. To filter the results, specify
         * a statistic, period, or unit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmsForMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmsForMetricOutcome DescribeAlarmsForMetric(const Model::DescribeAlarmsForMetricRequest& request) const;

        /**
         * <p>Retrieves the alarms for the specified metric. To filter the results, specify
         * a statistic, period, or unit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmsForMetric">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmsForMetricOutcomeCallable DescribeAlarmsForMetricCallable(const Model::DescribeAlarmsForMetricRequest& request) const;

        /**
         * <p>Retrieves the alarms for the specified metric. To filter the results, specify
         * a statistic, period, or unit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmsForMetric">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmsForMetricAsync(const Model::DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the anomaly detection models that you have created in your account. You
         * can list all models in your account or filter the results to only the models
         * that are related to a certain namespace, metric name, or metric
         * dimension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAnomalyDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyDetectorsOutcome DescribeAnomalyDetectors(const Model::DescribeAnomalyDetectorsRequest& request) const;

        /**
         * <p>Lists the anomaly detection models that you have created in your account. You
         * can list all models in your account or filter the results to only the models
         * that are related to a certain namespace, metric name, or metric
         * dimension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAnomalyDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnomalyDetectorsOutcomeCallable DescribeAnomalyDetectorsCallable(const Model::DescribeAnomalyDetectorsRequest& request) const;

        /**
         * <p>Lists the anomaly detection models that you have created in your account. You
         * can list all models in your account or filter the results to only the models
         * that are related to a certain namespace, metric name, or metric
         * dimension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAnomalyDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnomalyDetectorsAsync(const Model::DescribeAnomalyDetectorsRequest& request, const DescribeAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the actions for the specified alarms. When an alarm's actions are
         * disabled, the alarm actions do not execute when the alarm state
         * changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DisableAlarmActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAlarmActionsOutcome DisableAlarmActions(const Model::DisableAlarmActionsRequest& request) const;

        /**
         * <p>Disables the actions for the specified alarms. When an alarm's actions are
         * disabled, the alarm actions do not execute when the alarm state
         * changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DisableAlarmActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAlarmActionsOutcomeCallable DisableAlarmActionsCallable(const Model::DisableAlarmActionsRequest& request) const;

        /**
         * <p>Disables the actions for the specified alarms. When an alarm's actions are
         * disabled, the alarm actions do not execute when the alarm state
         * changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DisableAlarmActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAlarmActionsAsync(const Model::DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the actions for the specified alarms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EnableAlarmActions">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAlarmActionsOutcome EnableAlarmActions(const Model::EnableAlarmActionsRequest& request) const;

        /**
         * <p>Enables the actions for the specified alarms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EnableAlarmActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAlarmActionsOutcomeCallable EnableAlarmActionsCallable(const Model::EnableAlarmActionsRequest& request) const;

        /**
         * <p>Enables the actions for the specified alarms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EnableAlarmActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAlarmActionsAsync(const Model::EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the details of the dashboard that you specify.</p> <p>To copy an
         * existing dashboard, use <code>GetDashboard</code>, and then use the data
         * returned within <code>DashboardBody</code> as the template for the new dashboard
         * when you call <code>PutDashboard</code> to create the copy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardOutcome GetDashboard(const Model::GetDashboardRequest& request) const;

        /**
         * <p>Displays the details of the dashboard that you specify.</p> <p>To copy an
         * existing dashboard, use <code>GetDashboard</code>, and then use the data
         * returned within <code>DashboardBody</code> as the template for the new dashboard
         * when you call <code>PutDashboard</code> to create the copy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDashboardOutcomeCallable GetDashboardCallable(const Model::GetDashboardRequest& request) const;

        /**
         * <p>Displays the details of the dashboard that you specify.</p> <p>To copy an
         * existing dashboard, use <code>GetDashboard</code>, and then use the data
         * returned within <code>DashboardBody</code> as the template for the new dashboard
         * when you call <code>PutDashboard</code> to create the copy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDashboardAsync(const Model::GetDashboardRequest& request, const GetDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use the <code>GetMetricData</code> API to retrieve as many as 100
         * different metrics in a single request, with a total of as many as 100,800
         * datapoints. You can also optionally perform math expressions on the values of
         * the returned statistics, to create new time series that represent new insights
         * into your data. For example, using Lambda metrics, you could divide the Errors
         * metric by the Invocations metric to get an error rate time series. For more
         * information about metric math expressions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
         * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
         * <p>Calls to the <code>GetMetricData</code> API have a different pricing
         * structure than calls to <code>GetMetricStatistics</code>. For more information
         * about pricing, see <a href="https://aws.amazon.com/cloudwatch/pricing/">Amazon
         * CloudWatch Pricing</a>.</p> <p>Amazon CloudWatch retains metric data as
         * follows:</p> <ul> <li> <p>Data points with a period of less than 60 seconds are
         * available for 3 hours. These data points are high-resolution metrics and are
         * available only for custom metrics that have been defined with a
         * <code>StorageResolution</code> of 1.</p> </li> <li> <p>Data points with a period
         * of 60 seconds (1-minute) are available for 15 days.</p> </li> <li> <p>Data
         * points with a period of 300 seconds (5-minute) are available for 63 days.</p>
         * </li> <li> <p>Data points with a period of 3600 seconds (1 hour) are available
         * for 455 days (15 months).</p> </li> </ul> <p>Data points that are initially
         * published with a shorter period are aggregated together for long-term storage.
         * For example, if you collect data using a period of 1 minute, the data remains
         * available for 15 days with 1-minute resolution. After 15 days, this data is
         * still available, but is aggregated and retrievable only with a resolution of 5
         * minutes. After 63 days, the data is further aggregated and is available with a
         * resolution of 1 hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataOutcome GetMetricData(const Model::GetMetricDataRequest& request) const;

        /**
         * <p>You can use the <code>GetMetricData</code> API to retrieve as many as 100
         * different metrics in a single request, with a total of as many as 100,800
         * datapoints. You can also optionally perform math expressions on the values of
         * the returned statistics, to create new time series that represent new insights
         * into your data. For example, using Lambda metrics, you could divide the Errors
         * metric by the Invocations metric to get an error rate time series. For more
         * information about metric math expressions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
         * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
         * <p>Calls to the <code>GetMetricData</code> API have a different pricing
         * structure than calls to <code>GetMetricStatistics</code>. For more information
         * about pricing, see <a href="https://aws.amazon.com/cloudwatch/pricing/">Amazon
         * CloudWatch Pricing</a>.</p> <p>Amazon CloudWatch retains metric data as
         * follows:</p> <ul> <li> <p>Data points with a period of less than 60 seconds are
         * available for 3 hours. These data points are high-resolution metrics and are
         * available only for custom metrics that have been defined with a
         * <code>StorageResolution</code> of 1.</p> </li> <li> <p>Data points with a period
         * of 60 seconds (1-minute) are available for 15 days.</p> </li> <li> <p>Data
         * points with a period of 300 seconds (5-minute) are available for 63 days.</p>
         * </li> <li> <p>Data points with a period of 3600 seconds (1 hour) are available
         * for 455 days (15 months).</p> </li> </ul> <p>Data points that are initially
         * published with a shorter period are aggregated together for long-term storage.
         * For example, if you collect data using a period of 1 minute, the data remains
         * available for 15 days with 1-minute resolution. After 15 days, this data is
         * still available, but is aggregated and retrievable only with a resolution of 5
         * minutes. After 63 days, the data is further aggregated and is available with a
         * resolution of 1 hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetricDataOutcomeCallable GetMetricDataCallable(const Model::GetMetricDataRequest& request) const;

        /**
         * <p>You can use the <code>GetMetricData</code> API to retrieve as many as 100
         * different metrics in a single request, with a total of as many as 100,800
         * datapoints. You can also optionally perform math expressions on the values of
         * the returned statistics, to create new time series that represent new insights
         * into your data. For example, using Lambda metrics, you could divide the Errors
         * metric by the Invocations metric to get an error rate time series. For more
         * information about metric math expressions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
         * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
         * <p>Calls to the <code>GetMetricData</code> API have a different pricing
         * structure than calls to <code>GetMetricStatistics</code>. For more information
         * about pricing, see <a href="https://aws.amazon.com/cloudwatch/pricing/">Amazon
         * CloudWatch Pricing</a>.</p> <p>Amazon CloudWatch retains metric data as
         * follows:</p> <ul> <li> <p>Data points with a period of less than 60 seconds are
         * available for 3 hours. These data points are high-resolution metrics and are
         * available only for custom metrics that have been defined with a
         * <code>StorageResolution</code> of 1.</p> </li> <li> <p>Data points with a period
         * of 60 seconds (1-minute) are available for 15 days.</p> </li> <li> <p>Data
         * points with a period of 300 seconds (5-minute) are available for 63 days.</p>
         * </li> <li> <p>Data points with a period of 3600 seconds (1 hour) are available
         * for 455 days (15 months).</p> </li> </ul> <p>Data points that are initially
         * published with a shorter period are aggregated together for long-term storage.
         * For example, if you collect data using a period of 1 minute, the data remains
         * available for 15 days with 1-minute resolution. After 15 days, this data is
         * still available, but is aggregated and retrievable only with a resolution of 5
         * minutes. After 63 days, the data is further aggregated and is available with a
         * resolution of 1 hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMetricDataAsync(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets statistics for the specified metric.</p> <p>The maximum number of data
         * points returned from a single call is 1,440. If you request more than 1,440 data
         * points, CloudWatch returns an error. To reduce the number of data points, you
         * can narrow the specified time range and make multiple requests across adjacent
         * time ranges, or you can increase the specified period. Data points are not
         * returned in chronological order.</p> <p>CloudWatch aggregates data points based
         * on the length of the period that you specify. For example, if you request
         * statistics with a one-hour period, CloudWatch aggregates all data points with
         * time stamps that fall within each one-hour period. Therefore, the number of
         * values aggregated by CloudWatch is larger than the number of data points
         * returned.</p> <p>CloudWatch needs raw data points to calculate percentile
         * statistics. If you publish data using a statistic set instead, you can only
         * retrieve percentile statistics for this data if one of the following conditions
         * is true:</p> <ul> <li> <p>The SampleCount value of the statistic set is 1.</p>
         * </li> <li> <p>The Min and the Max values of the statistic set are equal.</p>
         * </li> </ul> <p>Percentile statistics are not available for metrics when any of
         * the metric values are negative numbers.</p> <p>Amazon CloudWatch retains metric
         * data as follows:</p> <ul> <li> <p>Data points with a period of less than 60
         * seconds are available for 3 hours. These data points are high-resolution metrics
         * and are available only for custom metrics that have been defined with a
         * <code>StorageResolution</code> of 1.</p> </li> <li> <p>Data points with a period
         * of 60 seconds (1-minute) are available for 15 days.</p> </li> <li> <p>Data
         * points with a period of 300 seconds (5-minute) are available for 63 days.</p>
         * </li> <li> <p>Data points with a period of 3600 seconds (1 hour) are available
         * for 455 days (15 months).</p> </li> </ul> <p>Data points that are initially
         * published with a shorter period are aggregated together for long-term storage.
         * For example, if you collect data using a period of 1 minute, the data remains
         * available for 15 days with 1-minute resolution. After 15 days, this data is
         * still available, but is aggregated and retrievable only with a resolution of 5
         * minutes. After 63 days, the data is further aggregated and is available with a
         * resolution of 1 hour.</p> <p>CloudWatch started retaining 5-minute and 1-hour
         * metric data as of July 9, 2016.</p> <p>For information about metrics and
         * dimensions supported by AWS services, see the <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CW_Support_For_AWS.html">Amazon
         * CloudWatch Metrics and Dimensions Reference</a> in the <i>Amazon CloudWatch User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricStatisticsOutcome GetMetricStatistics(const Model::GetMetricStatisticsRequest& request) const;

        /**
         * <p>Gets statistics for the specified metric.</p> <p>The maximum number of data
         * points returned from a single call is 1,440. If you request more than 1,440 data
         * points, CloudWatch returns an error. To reduce the number of data points, you
         * can narrow the specified time range and make multiple requests across adjacent
         * time ranges, or you can increase the specified period. Data points are not
         * returned in chronological order.</p> <p>CloudWatch aggregates data points based
         * on the length of the period that you specify. For example, if you request
         * statistics with a one-hour period, CloudWatch aggregates all data points with
         * time stamps that fall within each one-hour period. Therefore, the number of
         * values aggregated by CloudWatch is larger than the number of data points
         * returned.</p> <p>CloudWatch needs raw data points to calculate percentile
         * statistics. If you publish data using a statistic set instead, you can only
         * retrieve percentile statistics for this data if one of the following conditions
         * is true:</p> <ul> <li> <p>The SampleCount value of the statistic set is 1.</p>
         * </li> <li> <p>The Min and the Max values of the statistic set are equal.</p>
         * </li> </ul> <p>Percentile statistics are not available for metrics when any of
         * the metric values are negative numbers.</p> <p>Amazon CloudWatch retains metric
         * data as follows:</p> <ul> <li> <p>Data points with a period of less than 60
         * seconds are available for 3 hours. These data points are high-resolution metrics
         * and are available only for custom metrics that have been defined with a
         * <code>StorageResolution</code> of 1.</p> </li> <li> <p>Data points with a period
         * of 60 seconds (1-minute) are available for 15 days.</p> </li> <li> <p>Data
         * points with a period of 300 seconds (5-minute) are available for 63 days.</p>
         * </li> <li> <p>Data points with a period of 3600 seconds (1 hour) are available
         * for 455 days (15 months).</p> </li> </ul> <p>Data points that are initially
         * published with a shorter period are aggregated together for long-term storage.
         * For example, if you collect data using a period of 1 minute, the data remains
         * available for 15 days with 1-minute resolution. After 15 days, this data is
         * still available, but is aggregated and retrievable only with a resolution of 5
         * minutes. After 63 days, the data is further aggregated and is available with a
         * resolution of 1 hour.</p> <p>CloudWatch started retaining 5-minute and 1-hour
         * metric data as of July 9, 2016.</p> <p>For information about metrics and
         * dimensions supported by AWS services, see the <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CW_Support_For_AWS.html">Amazon
         * CloudWatch Metrics and Dimensions Reference</a> in the <i>Amazon CloudWatch User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetricStatisticsOutcomeCallable GetMetricStatisticsCallable(const Model::GetMetricStatisticsRequest& request) const;

        /**
         * <p>Gets statistics for the specified metric.</p> <p>The maximum number of data
         * points returned from a single call is 1,440. If you request more than 1,440 data
         * points, CloudWatch returns an error. To reduce the number of data points, you
         * can narrow the specified time range and make multiple requests across adjacent
         * time ranges, or you can increase the specified period. Data points are not
         * returned in chronological order.</p> <p>CloudWatch aggregates data points based
         * on the length of the period that you specify. For example, if you request
         * statistics with a one-hour period, CloudWatch aggregates all data points with
         * time stamps that fall within each one-hour period. Therefore, the number of
         * values aggregated by CloudWatch is larger than the number of data points
         * returned.</p> <p>CloudWatch needs raw data points to calculate percentile
         * statistics. If you publish data using a statistic set instead, you can only
         * retrieve percentile statistics for this data if one of the following conditions
         * is true:</p> <ul> <li> <p>The SampleCount value of the statistic set is 1.</p>
         * </li> <li> <p>The Min and the Max values of the statistic set are equal.</p>
         * </li> </ul> <p>Percentile statistics are not available for metrics when any of
         * the metric values are negative numbers.</p> <p>Amazon CloudWatch retains metric
         * data as follows:</p> <ul> <li> <p>Data points with a period of less than 60
         * seconds are available for 3 hours. These data points are high-resolution metrics
         * and are available only for custom metrics that have been defined with a
         * <code>StorageResolution</code> of 1.</p> </li> <li> <p>Data points with a period
         * of 60 seconds (1-minute) are available for 15 days.</p> </li> <li> <p>Data
         * points with a period of 300 seconds (5-minute) are available for 63 days.</p>
         * </li> <li> <p>Data points with a period of 3600 seconds (1 hour) are available
         * for 455 days (15 months).</p> </li> </ul> <p>Data points that are initially
         * published with a shorter period are aggregated together for long-term storage.
         * For example, if you collect data using a period of 1 minute, the data remains
         * available for 15 days with 1-minute resolution. After 15 days, this data is
         * still available, but is aggregated and retrievable only with a resolution of 5
         * minutes. After 63 days, the data is further aggregated and is available with a
         * resolution of 1 hour.</p> <p>CloudWatch started retaining 5-minute and 1-hour
         * metric data as of July 9, 2016.</p> <p>For information about metrics and
         * dimensions supported by AWS services, see the <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CW_Support_For_AWS.html">Amazon
         * CloudWatch Metrics and Dimensions Reference</a> in the <i>Amazon CloudWatch User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMetricStatisticsAsync(const Model::GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use the <code>GetMetricWidgetImage</code> API to retrieve a snapshot
         * graph of one or more Amazon CloudWatch metrics as a bitmap image. You can then
         * embed this image into your services and products, such as wiki pages, reports,
         * and documents. You could also retrieve images regularly, such as every minute,
         * and create your own custom live dashboard.</p> <p>The graph you retrieve can
         * include all CloudWatch metric graph features, including metric math and
         * horizontal and vertical annotations.</p> <p>There is a limit of 20 transactions
         * per second for this API. Each <code>GetMetricWidgetImage</code> action has the
         * following limits:</p> <ul> <li> <p>As many as 100 metrics in the graph.</p>
         * </li> <li> <p>Up to 100 KB uncompressed payload.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricWidgetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricWidgetImageOutcome GetMetricWidgetImage(const Model::GetMetricWidgetImageRequest& request) const;

        /**
         * <p>You can use the <code>GetMetricWidgetImage</code> API to retrieve a snapshot
         * graph of one or more Amazon CloudWatch metrics as a bitmap image. You can then
         * embed this image into your services and products, such as wiki pages, reports,
         * and documents. You could also retrieve images regularly, such as every minute,
         * and create your own custom live dashboard.</p> <p>The graph you retrieve can
         * include all CloudWatch metric graph features, including metric math and
         * horizontal and vertical annotations.</p> <p>There is a limit of 20 transactions
         * per second for this API. Each <code>GetMetricWidgetImage</code> action has the
         * following limits:</p> <ul> <li> <p>As many as 100 metrics in the graph.</p>
         * </li> <li> <p>Up to 100 KB uncompressed payload.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricWidgetImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetricWidgetImageOutcomeCallable GetMetricWidgetImageCallable(const Model::GetMetricWidgetImageRequest& request) const;

        /**
         * <p>You can use the <code>GetMetricWidgetImage</code> API to retrieve a snapshot
         * graph of one or more Amazon CloudWatch metrics as a bitmap image. You can then
         * embed this image into your services and products, such as wiki pages, reports,
         * and documents. You could also retrieve images regularly, such as every minute,
         * and create your own custom live dashboard.</p> <p>The graph you retrieve can
         * include all CloudWatch metric graph features, including metric math and
         * horizontal and vertical annotations.</p> <p>There is a limit of 20 transactions
         * per second for this API. Each <code>GetMetricWidgetImage</code> action has the
         * following limits:</p> <ul> <li> <p>As many as 100 metrics in the graph.</p>
         * </li> <li> <p>Up to 100 KB uncompressed payload.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricWidgetImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMetricWidgetImageAsync(const Model::GetMetricWidgetImageRequest& request, const GetMetricWidgetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the dashboards for your account. If you include
         * <code>DashboardNamePrefix</code>, only those dashboards with names starting with
         * the prefix are listed. Otherwise, all dashboards in your account are listed.
         * </p> <p> <code>ListDashboards</code> returns up to 1000 results on one page. If
         * there are more than 1000 dashboards, you can call <code>ListDashboards</code>
         * again and include the value you received for <code>NextToken</code> in the first
         * call, to receive the next 1000 results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;

        /**
         * <p>Returns a list of the dashboards for your account. If you include
         * <code>DashboardNamePrefix</code>, only those dashboards with names starting with
         * the prefix are listed. Otherwise, all dashboards in your account are listed.
         * </p> <p> <code>ListDashboards</code> returns up to 1000 results on one page. If
         * there are more than 1000 dashboards, you can call <code>ListDashboards</code>
         * again and include the value you received for <code>NextToken</code> in the first
         * call, to receive the next 1000 results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListDashboards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const Model::ListDashboardsRequest& request) const;

        /**
         * <p>Returns a list of the dashboards for your account. If you include
         * <code>DashboardNamePrefix</code>, only those dashboards with names starting with
         * the prefix are listed. Otherwise, all dashboards in your account are listed.
         * </p> <p> <code>ListDashboards</code> returns up to 1000 results on one page. If
         * there are more than 1000 dashboards, you can call <code>ListDashboards</code>
         * again and include the value you received for <code>NextToken</code> in the first
         * call, to receive the next 1000 results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListDashboards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDashboardsAsync(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the specified metrics. You can use the returned metrics with
         * <a>GetMetricData</a> or <a>GetMetricStatistics</a> to obtain statistical
         * data.</p> <p>Up to 500 results are returned for any one call. To retrieve
         * additional results, use the returned token with subsequent calls.</p> <p>After
         * you create a metric, allow up to fifteen minutes before the metric appears.
         * Statistics about the metric, however, are available sooner using
         * <a>GetMetricData</a> or <a>GetMetricStatistics</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricsOutcome ListMetrics(const Model::ListMetricsRequest& request) const;

        /**
         * <p>List the specified metrics. You can use the returned metrics with
         * <a>GetMetricData</a> or <a>GetMetricStatistics</a> to obtain statistical
         * data.</p> <p>Up to 500 results are returned for any one call. To retrieve
         * additional results, use the returned token with subsequent calls.</p> <p>After
         * you create a metric, allow up to fifteen minutes before the metric appears.
         * Statistics about the metric, however, are available sooner using
         * <a>GetMetricData</a> or <a>GetMetricStatistics</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListMetrics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMetricsOutcomeCallable ListMetricsCallable(const Model::ListMetricsRequest& request) const;

        /**
         * <p>List the specified metrics. You can use the returned metrics with
         * <a>GetMetricData</a> or <a>GetMetricStatistics</a> to obtain statistical
         * data.</p> <p>Up to 500 results are returned for any one call. To retrieve
         * additional results, use the returned token with subsequent calls.</p> <p>After
         * you create a metric, allow up to fifteen minutes before the metric appears.
         * Statistics about the metric, however, are available sooner using
         * <a>GetMetricData</a> or <a>GetMetricStatistics</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListMetrics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMetricsAsync(const Model::ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with a CloudWatch resource. Alarms support
         * tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with a CloudWatch resource. Alarms support
         * tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with a CloudWatch resource. Alarms support
         * tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an anomaly detection model for a CloudWatch metric. You can use the
         * model to display a band of expected normal values when the metric is
         * graphed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Anomaly_Detection.html">CloudWatch
         * Anomaly Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAnomalyDetectorOutcome PutAnomalyDetector(const Model::PutAnomalyDetectorRequest& request) const;

        /**
         * <p>Creates an anomaly detection model for a CloudWatch metric. You can use the
         * model to display a band of expected normal values when the metric is
         * graphed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Anomaly_Detection.html">CloudWatch
         * Anomaly Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAnomalyDetectorOutcomeCallable PutAnomalyDetectorCallable(const Model::PutAnomalyDetectorRequest& request) const;

        /**
         * <p>Creates an anomaly detection model for a CloudWatch metric. You can use the
         * model to display a band of expected normal values when the metric is
         * graphed.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Anomaly_Detection.html">CloudWatch
         * Anomaly Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAnomalyDetectorAsync(const Model::PutAnomalyDetectorRequest& request, const PutAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dashboard if it does not already exist, or updates an existing
         * dashboard. If you update a dashboard, the entire contents are replaced with what
         * you specify here.</p> <p>All dashboards in your account are global, not
         * region-specific.</p> <p>A simple way to create a dashboard using
         * <code>PutDashboard</code> is to copy an existing dashboard. To copy an existing
         * dashboard using the console, you can load the dashboard and then use the
         * View/edit source command in the Actions menu to display the JSON block for that
         * dashboard. Another way to copy a dashboard is to use <code>GetDashboard</code>,
         * and then use the data returned within <code>DashboardBody</code> as the template
         * for the new dashboard when you call <code>PutDashboard</code>.</p> <p>When you
         * create a dashboard with <code>PutDashboard</code>, a good practice is to add a
         * text widget at the top of the dashboard with a message that the dashboard was
         * created by script and should not be changed in the console. This message could
         * also point console users to the location of the <code>DashboardBody</code>
         * script or the CloudFormation template used to create the
         * dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDashboardOutcome PutDashboard(const Model::PutDashboardRequest& request) const;

        /**
         * <p>Creates a dashboard if it does not already exist, or updates an existing
         * dashboard. If you update a dashboard, the entire contents are replaced with what
         * you specify here.</p> <p>All dashboards in your account are global, not
         * region-specific.</p> <p>A simple way to create a dashboard using
         * <code>PutDashboard</code> is to copy an existing dashboard. To copy an existing
         * dashboard using the console, you can load the dashboard and then use the
         * View/edit source command in the Actions menu to display the JSON block for that
         * dashboard. Another way to copy a dashboard is to use <code>GetDashboard</code>,
         * and then use the data returned within <code>DashboardBody</code> as the template
         * for the new dashboard when you call <code>PutDashboard</code>.</p> <p>When you
         * create a dashboard with <code>PutDashboard</code>, a good practice is to add a
         * text widget at the top of the dashboard with a message that the dashboard was
         * created by script and should not be changed in the console. This message could
         * also point console users to the location of the <code>DashboardBody</code>
         * script or the CloudFormation template used to create the
         * dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutDashboard">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDashboardOutcomeCallable PutDashboardCallable(const Model::PutDashboardRequest& request) const;

        /**
         * <p>Creates a dashboard if it does not already exist, or updates an existing
         * dashboard. If you update a dashboard, the entire contents are replaced with what
         * you specify here.</p> <p>All dashboards in your account are global, not
         * region-specific.</p> <p>A simple way to create a dashboard using
         * <code>PutDashboard</code> is to copy an existing dashboard. To copy an existing
         * dashboard using the console, you can load the dashboard and then use the
         * View/edit source command in the Actions menu to display the JSON block for that
         * dashboard. Another way to copy a dashboard is to use <code>GetDashboard</code>,
         * and then use the data returned within <code>DashboardBody</code> as the template
         * for the new dashboard when you call <code>PutDashboard</code>.</p> <p>When you
         * create a dashboard with <code>PutDashboard</code>, a good practice is to add a
         * text widget at the top of the dashboard with a message that the dashboard was
         * created by script and should not be changed in the console. This message could
         * also point console users to the location of the <code>DashboardBody</code>
         * script or the CloudFormation template used to create the
         * dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutDashboard">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDashboardAsync(const Model::PutDashboardRequest& request, const PutDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an alarm and associates it with the specified metric,
         * metric math expression, or anomaly detection model.</p> <p>Alarms based on
         * anomaly detection models cannot have Auto Scaling actions.</p> <p>When this
         * operation creates an alarm, the alarm state is immediately set to
         * <code>INSUFFICIENT_DATA</code>. The alarm is then evaluated and its state is set
         * appropriately. Any actions associated with the new state are then executed.</p>
         * <p>When you update an existing alarm, its state is left unchanged, but the
         * update completely overwrites the previous configuration of the alarm.</p> <p>If
         * you are an IAM user, you must have Amazon EC2 permissions for some alarm
         * operations:</p> <ul> <li> <p> <code>iam:CreateServiceLinkedRole</code> for all
         * alarms with EC2 actions</p> </li> <li> <p>
         * <code>ec2:DescribeInstanceStatus</code> and <code>ec2:DescribeInstances</code>
         * for all alarms on EC2 instance status metrics</p> </li> <li> <p>
         * <code>ec2:StopInstances</code> for alarms with stop actions</p> </li> <li> <p>
         * <code>ec2:TerminateInstances</code> for alarms with terminate actions</p> </li>
         * <li> <p>No specific permissions are needed for alarms with recover actions</p>
         * </li> </ul> <p>If you have read/write permissions for Amazon CloudWatch but not
         * for Amazon EC2, you can still create an alarm, but the stop or terminate actions
         * are not performed. However, if you are later granted the required permissions,
         * the alarm actions that you created earlier are performed.</p> <p>If you are
         * using an IAM role (for example, an EC2 instance profile), you cannot stop or
         * terminate the instance using alarm actions. However, you can still see the alarm
         * state and perform any other actions such as Amazon SNS notifications or Auto
         * Scaling policies.</p> <p>If you are using temporary security credentials granted
         * using AWS STS, you cannot stop or terminate an EC2 instance using alarm
         * actions.</p> <p>The first time you create an alarm in the AWS Management
         * Console, the CLI, or by using the PutMetricAlarm API, CloudWatch creates the
         * necessary service-linked role for you. The service-linked role is called
         * <code>AWSServiceRoleForCloudWatchEvents</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">AWS
         * service-linked role</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricAlarmOutcome PutMetricAlarm(const Model::PutMetricAlarmRequest& request) const;

        /**
         * <p>Creates or updates an alarm and associates it with the specified metric,
         * metric math expression, or anomaly detection model.</p> <p>Alarms based on
         * anomaly detection models cannot have Auto Scaling actions.</p> <p>When this
         * operation creates an alarm, the alarm state is immediately set to
         * <code>INSUFFICIENT_DATA</code>. The alarm is then evaluated and its state is set
         * appropriately. Any actions associated with the new state are then executed.</p>
         * <p>When you update an existing alarm, its state is left unchanged, but the
         * update completely overwrites the previous configuration of the alarm.</p> <p>If
         * you are an IAM user, you must have Amazon EC2 permissions for some alarm
         * operations:</p> <ul> <li> <p> <code>iam:CreateServiceLinkedRole</code> for all
         * alarms with EC2 actions</p> </li> <li> <p>
         * <code>ec2:DescribeInstanceStatus</code> and <code>ec2:DescribeInstances</code>
         * for all alarms on EC2 instance status metrics</p> </li> <li> <p>
         * <code>ec2:StopInstances</code> for alarms with stop actions</p> </li> <li> <p>
         * <code>ec2:TerminateInstances</code> for alarms with terminate actions</p> </li>
         * <li> <p>No specific permissions are needed for alarms with recover actions</p>
         * </li> </ul> <p>If you have read/write permissions for Amazon CloudWatch but not
         * for Amazon EC2, you can still create an alarm, but the stop or terminate actions
         * are not performed. However, if you are later granted the required permissions,
         * the alarm actions that you created earlier are performed.</p> <p>If you are
         * using an IAM role (for example, an EC2 instance profile), you cannot stop or
         * terminate the instance using alarm actions. However, you can still see the alarm
         * state and perform any other actions such as Amazon SNS notifications or Auto
         * Scaling policies.</p> <p>If you are using temporary security credentials granted
         * using AWS STS, you cannot stop or terminate an EC2 instance using alarm
         * actions.</p> <p>The first time you create an alarm in the AWS Management
         * Console, the CLI, or by using the PutMetricAlarm API, CloudWatch creates the
         * necessary service-linked role for you. The service-linked role is called
         * <code>AWSServiceRoleForCloudWatchEvents</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">AWS
         * service-linked role</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMetricAlarmOutcomeCallable PutMetricAlarmCallable(const Model::PutMetricAlarmRequest& request) const;

        /**
         * <p>Creates or updates an alarm and associates it with the specified metric,
         * metric math expression, or anomaly detection model.</p> <p>Alarms based on
         * anomaly detection models cannot have Auto Scaling actions.</p> <p>When this
         * operation creates an alarm, the alarm state is immediately set to
         * <code>INSUFFICIENT_DATA</code>. The alarm is then evaluated and its state is set
         * appropriately. Any actions associated with the new state are then executed.</p>
         * <p>When you update an existing alarm, its state is left unchanged, but the
         * update completely overwrites the previous configuration of the alarm.</p> <p>If
         * you are an IAM user, you must have Amazon EC2 permissions for some alarm
         * operations:</p> <ul> <li> <p> <code>iam:CreateServiceLinkedRole</code> for all
         * alarms with EC2 actions</p> </li> <li> <p>
         * <code>ec2:DescribeInstanceStatus</code> and <code>ec2:DescribeInstances</code>
         * for all alarms on EC2 instance status metrics</p> </li> <li> <p>
         * <code>ec2:StopInstances</code> for alarms with stop actions</p> </li> <li> <p>
         * <code>ec2:TerminateInstances</code> for alarms with terminate actions</p> </li>
         * <li> <p>No specific permissions are needed for alarms with recover actions</p>
         * </li> </ul> <p>If you have read/write permissions for Amazon CloudWatch but not
         * for Amazon EC2, you can still create an alarm, but the stop or terminate actions
         * are not performed. However, if you are later granted the required permissions,
         * the alarm actions that you created earlier are performed.</p> <p>If you are
         * using an IAM role (for example, an EC2 instance profile), you cannot stop or
         * terminate the instance using alarm actions. However, you can still see the alarm
         * state and perform any other actions such as Amazon SNS notifications or Auto
         * Scaling policies.</p> <p>If you are using temporary security credentials granted
         * using AWS STS, you cannot stop or terminate an EC2 instance using alarm
         * actions.</p> <p>The first time you create an alarm in the AWS Management
         * Console, the CLI, or by using the PutMetricAlarm API, CloudWatch creates the
         * necessary service-linked role for you. The service-linked role is called
         * <code>AWSServiceRoleForCloudWatchEvents</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">AWS
         * service-linked role</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMetricAlarmAsync(const Model::PutMetricAlarmRequest& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
         * data points with the specified metric. If the specified metric does not exist,
         * CloudWatch creates the metric. When CloudWatch creates a metric, it can take up
         * to fifteen minutes for the metric to appear in calls to <a>ListMetrics</a>.</p>
         * <p>You can publish either individual data points in the <code>Value</code>
         * field, or arrays of values and the number of times each value occurred during
         * the period by using the <code>Values</code> and <code>Counts</code> fields in
         * the <code>MetricDatum</code> structure. Using the <code>Values</code> and
         * <code>Counts</code> method enables you to publish up to 150 values per metric
         * with one <code>PutMetricData</code> request, and supports retrieving percentile
         * statistics on this data.</p> <p>Each <code>PutMetricData</code> request is
         * limited to 40 KB in size for HTTP POST requests. You can send a payload
         * compressed by gzip. Each request is also limited to no more than 20 different
         * metrics.</p> <p>Although the <code>Value</code> parameter accepts numbers of
         * type <code>Double</code>, CloudWatch rejects values that are either too small or
         * too large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base
         * 10) or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
         * +Infinity, -Infinity) are not supported.</p> <p>You can use up to 10 dimensions
         * per metric to further clarify what data the metric collects. Each dimension
         * consists of a Name and Value pair. For more information about specifying
         * dimensions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing
         * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> <p>Data points with
         * time stamps from 24 hours ago or longer can take at least 48 hours to become
         * available for <a>GetMetricData</a> or <a>GetMetricStatistics</a> from the time
         * they are submitted.</p> <p>CloudWatch needs raw data points to calculate
         * percentile statistics. If you publish data using a statistic set instead, you
         * can only retrieve percentile statistics for this data if one of the following
         * conditions is true:</p> <ul> <li> <p>The <code>SampleCount</code> value of the
         * statistic set is 1 and <code>Min</code>, <code>Max</code>, and <code>Sum</code>
         * are all equal.</p> </li> <li> <p>The <code>Min</code> and <code>Max</code> are
         * equal, and <code>Sum</code> is equal to <code>Min</code> multiplied by
         * <code>SampleCount</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricDataOutcome PutMetricData(const Model::PutMetricDataRequest& request) const;

        /**
         * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
         * data points with the specified metric. If the specified metric does not exist,
         * CloudWatch creates the metric. When CloudWatch creates a metric, it can take up
         * to fifteen minutes for the metric to appear in calls to <a>ListMetrics</a>.</p>
         * <p>You can publish either individual data points in the <code>Value</code>
         * field, or arrays of values and the number of times each value occurred during
         * the period by using the <code>Values</code> and <code>Counts</code> fields in
         * the <code>MetricDatum</code> structure. Using the <code>Values</code> and
         * <code>Counts</code> method enables you to publish up to 150 values per metric
         * with one <code>PutMetricData</code> request, and supports retrieving percentile
         * statistics on this data.</p> <p>Each <code>PutMetricData</code> request is
         * limited to 40 KB in size for HTTP POST requests. You can send a payload
         * compressed by gzip. Each request is also limited to no more than 20 different
         * metrics.</p> <p>Although the <code>Value</code> parameter accepts numbers of
         * type <code>Double</code>, CloudWatch rejects values that are either too small or
         * too large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base
         * 10) or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
         * +Infinity, -Infinity) are not supported.</p> <p>You can use up to 10 dimensions
         * per metric to further clarify what data the metric collects. Each dimension
         * consists of a Name and Value pair. For more information about specifying
         * dimensions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing
         * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> <p>Data points with
         * time stamps from 24 hours ago or longer can take at least 48 hours to become
         * available for <a>GetMetricData</a> or <a>GetMetricStatistics</a> from the time
         * they are submitted.</p> <p>CloudWatch needs raw data points to calculate
         * percentile statistics. If you publish data using a statistic set instead, you
         * can only retrieve percentile statistics for this data if one of the following
         * conditions is true:</p> <ul> <li> <p>The <code>SampleCount</code> value of the
         * statistic set is 1 and <code>Min</code>, <code>Max</code>, and <code>Sum</code>
         * are all equal.</p> </li> <li> <p>The <code>Min</code> and <code>Max</code> are
         * equal, and <code>Sum</code> is equal to <code>Min</code> multiplied by
         * <code>SampleCount</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMetricDataOutcomeCallable PutMetricDataCallable(const Model::PutMetricDataRequest& request) const;

        /**
         * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
         * data points with the specified metric. If the specified metric does not exist,
         * CloudWatch creates the metric. When CloudWatch creates a metric, it can take up
         * to fifteen minutes for the metric to appear in calls to <a>ListMetrics</a>.</p>
         * <p>You can publish either individual data points in the <code>Value</code>
         * field, or arrays of values and the number of times each value occurred during
         * the period by using the <code>Values</code> and <code>Counts</code> fields in
         * the <code>MetricDatum</code> structure. Using the <code>Values</code> and
         * <code>Counts</code> method enables you to publish up to 150 values per metric
         * with one <code>PutMetricData</code> request, and supports retrieving percentile
         * statistics on this data.</p> <p>Each <code>PutMetricData</code> request is
         * limited to 40 KB in size for HTTP POST requests. You can send a payload
         * compressed by gzip. Each request is also limited to no more than 20 different
         * metrics.</p> <p>Although the <code>Value</code> parameter accepts numbers of
         * type <code>Double</code>, CloudWatch rejects values that are either too small or
         * too large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base
         * 10) or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
         * +Infinity, -Infinity) are not supported.</p> <p>You can use up to 10 dimensions
         * per metric to further clarify what data the metric collects. Each dimension
         * consists of a Name and Value pair. For more information about specifying
         * dimensions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing
         * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> <p>Data points with
         * time stamps from 24 hours ago or longer can take at least 48 hours to become
         * available for <a>GetMetricData</a> or <a>GetMetricStatistics</a> from the time
         * they are submitted.</p> <p>CloudWatch needs raw data points to calculate
         * percentile statistics. If you publish data using a statistic set instead, you
         * can only retrieve percentile statistics for this data if one of the following
         * conditions is true:</p> <ul> <li> <p>The <code>SampleCount</code> value of the
         * statistic set is 1 and <code>Min</code>, <code>Max</code>, and <code>Sum</code>
         * are all equal.</p> </li> <li> <p>The <code>Min</code> and <code>Max</code> are
         * equal, and <code>Sum</code> is equal to <code>Min</code> multiplied by
         * <code>SampleCount</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMetricDataAsync(const Model::PutMetricDataRequest& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Temporarily sets the state of an alarm for testing purposes. When the updated
         * state differs from the previous value, the action configured for the appropriate
         * state is invoked. For example, if your alarm is configured to send an Amazon SNS
         * message when an alarm is triggered, temporarily changing the alarm state to
         * <code>ALARM</code> sends an SNS message. The alarm returns to its actual state
         * (often within seconds). Because the alarm state change happens quickly, it is
         * typically only visible in the alarm's <b>History</b> tab in the Amazon
         * CloudWatch console or through <a>DescribeAlarmHistory</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/SetAlarmState">AWS
         * API Reference</a></p>
         */
        virtual Model::SetAlarmStateOutcome SetAlarmState(const Model::SetAlarmStateRequest& request) const;

        /**
         * <p>Temporarily sets the state of an alarm for testing purposes. When the updated
         * state differs from the previous value, the action configured for the appropriate
         * state is invoked. For example, if your alarm is configured to send an Amazon SNS
         * message when an alarm is triggered, temporarily changing the alarm state to
         * <code>ALARM</code> sends an SNS message. The alarm returns to its actual state
         * (often within seconds). Because the alarm state change happens quickly, it is
         * typically only visible in the alarm's <b>History</b> tab in the Amazon
         * CloudWatch console or through <a>DescribeAlarmHistory</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/SetAlarmState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetAlarmStateOutcomeCallable SetAlarmStateCallable(const Model::SetAlarmStateRequest& request) const;

        /**
         * <p>Temporarily sets the state of an alarm for testing purposes. When the updated
         * state differs from the previous value, the action configured for the appropriate
         * state is invoked. For example, if your alarm is configured to send an Amazon SNS
         * message when an alarm is triggered, temporarily changing the alarm state to
         * <code>ALARM</code> sends an SNS message. The alarm returns to its actual state
         * (often within seconds). Because the alarm state change happens quickly, it is
         * typically only visible in the alarm's <b>History</b> tab in the Amazon
         * CloudWatch console or through <a>DescribeAlarmHistory</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/SetAlarmState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetAlarmStateAsync(const Model::SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions, by granting a user permission to access or
         * change only resources with certain tag values. In CloudWatch, alarms can be
         * tagged.</p> <p>Tags don't have any semantic meaning to AWS and are interpreted
         * strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a resource that already has tags. If you
         * specify a new tag key for the resource, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions, by granting a user permission to access or
         * change only resources with certain tag values. In CloudWatch, alarms can be
         * tagged.</p> <p>Tags don't have any semantic meaning to AWS and are interpreted
         * strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a resource that already has tags. If you
         * specify a new tag key for the resource, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions, by granting a user permission to access or
         * change only resources with certain tag values. In CloudWatch, alarms can be
         * tagged.</p> <p>Tags don't have any semantic meaning to AWS and are interpreted
         * strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a resource that already has tags. If you
         * specify a new tag key for the resource, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteAlarmsAsyncHelper(const Model::DeleteAlarmsRequest& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAnomalyDetectorAsyncHelper(const Model::DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDashboardsAsyncHelper(const Model::DeleteDashboardsRequest& request, const DeleteDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmHistoryAsyncHelper(const Model::DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmsAsyncHelper(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmsForMetricAsyncHelper(const Model::DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnomalyDetectorsAsyncHelper(const Model::DescribeAnomalyDetectorsRequest& request, const DescribeAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableAlarmActionsAsyncHelper(const Model::DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAlarmActionsAsyncHelper(const Model::EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDashboardAsyncHelper(const Model::GetDashboardRequest& request, const GetDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricDataAsyncHelper(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricStatisticsAsyncHelper(const Model::GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricWidgetImageAsyncHelper(const Model::GetMetricWidgetImageRequest& request, const GetMetricWidgetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDashboardsAsyncHelper(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMetricsAsyncHelper(const Model::ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAnomalyDetectorAsyncHelper(const Model::PutAnomalyDetectorRequest& request, const PutAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDashboardAsyncHelper(const Model::PutDashboardRequest& request, const PutDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMetricAlarmAsyncHelper(const Model::PutMetricAlarmRequest& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMetricDataAsyncHelper(const Model::PutMetricDataRequest& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetAlarmStateAsyncHelper(const Model::SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatch
} // namespace Aws
