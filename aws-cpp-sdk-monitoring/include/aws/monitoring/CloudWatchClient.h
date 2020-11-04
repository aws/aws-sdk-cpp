/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/monitoring/model/DeleteInsightRulesResult.h>
#include <aws/monitoring/model/DescribeAlarmHistoryResult.h>
#include <aws/monitoring/model/DescribeAlarmsResult.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricResult.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsResult.h>
#include <aws/monitoring/model/DescribeInsightRulesResult.h>
#include <aws/monitoring/model/DisableInsightRulesResult.h>
#include <aws/monitoring/model/EnableInsightRulesResult.h>
#include <aws/monitoring/model/GetDashboardResult.h>
#include <aws/monitoring/model/GetInsightRuleReportResult.h>
#include <aws/monitoring/model/GetMetricDataResult.h>
#include <aws/monitoring/model/GetMetricStatisticsResult.h>
#include <aws/monitoring/model/GetMetricWidgetImageResult.h>
#include <aws/monitoring/model/ListDashboardsResult.h>
#include <aws/monitoring/model/ListMetricsResult.h>
#include <aws/monitoring/model/ListTagsForResourceResult.h>
#include <aws/monitoring/model/PutAnomalyDetectorResult.h>
#include <aws/monitoring/model/PutDashboardResult.h>
#include <aws/monitoring/model/PutInsightRuleResult.h>
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
        class DeleteInsightRulesRequest;
        class DescribeAlarmHistoryRequest;
        class DescribeAlarmsRequest;
        class DescribeAlarmsForMetricRequest;
        class DescribeAnomalyDetectorsRequest;
        class DescribeInsightRulesRequest;
        class DisableAlarmActionsRequest;
        class DisableInsightRulesRequest;
        class EnableAlarmActionsRequest;
        class EnableInsightRulesRequest;
        class GetDashboardRequest;
        class GetInsightRuleReportRequest;
        class GetMetricDataRequest;
        class GetMetricStatisticsRequest;
        class GetMetricWidgetImageRequest;
        class ListDashboardsRequest;
        class ListMetricsRequest;
        class ListTagsForResourceRequest;
        class PutAnomalyDetectorRequest;
        class PutCompositeAlarmRequest;
        class PutDashboardRequest;
        class PutInsightRuleRequest;
        class PutMetricAlarmRequest;
        class PutMetricDataRequest;
        class SetAlarmStateRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> DeleteAlarmsOutcome;
        typedef Aws::Utils::Outcome<DeleteAnomalyDetectorResult, CloudWatchError> DeleteAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<DeleteDashboardsResult, CloudWatchError> DeleteDashboardsOutcome;
        typedef Aws::Utils::Outcome<DeleteInsightRulesResult, CloudWatchError> DeleteInsightRulesOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmHistoryResult, CloudWatchError> DescribeAlarmHistoryOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmsResult, CloudWatchError> DescribeAlarmsOutcome;
        typedef Aws::Utils::Outcome<DescribeAlarmsForMetricResult, CloudWatchError> DescribeAlarmsForMetricOutcome;
        typedef Aws::Utils::Outcome<DescribeAnomalyDetectorsResult, CloudWatchError> DescribeAnomalyDetectorsOutcome;
        typedef Aws::Utils::Outcome<DescribeInsightRulesResult, CloudWatchError> DescribeInsightRulesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> DisableAlarmActionsOutcome;
        typedef Aws::Utils::Outcome<DisableInsightRulesResult, CloudWatchError> DisableInsightRulesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> EnableAlarmActionsOutcome;
        typedef Aws::Utils::Outcome<EnableInsightRulesResult, CloudWatchError> EnableInsightRulesOutcome;
        typedef Aws::Utils::Outcome<GetDashboardResult, CloudWatchError> GetDashboardOutcome;
        typedef Aws::Utils::Outcome<GetInsightRuleReportResult, CloudWatchError> GetInsightRuleReportOutcome;
        typedef Aws::Utils::Outcome<GetMetricDataResult, CloudWatchError> GetMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetMetricStatisticsResult, CloudWatchError> GetMetricStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetMetricWidgetImageResult, CloudWatchError> GetMetricWidgetImageOutcome;
        typedef Aws::Utils::Outcome<ListDashboardsResult, CloudWatchError> ListDashboardsOutcome;
        typedef Aws::Utils::Outcome<ListMetricsResult, CloudWatchError> ListMetricsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudWatchError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutAnomalyDetectorResult, CloudWatchError> PutAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> PutCompositeAlarmOutcome;
        typedef Aws::Utils::Outcome<PutDashboardResult, CloudWatchError> PutDashboardOutcome;
        typedef Aws::Utils::Outcome<PutInsightRuleResult, CloudWatchError> PutInsightRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> PutMetricAlarmOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> PutMetricDataOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> SetAlarmStateOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, CloudWatchError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, CloudWatchError> UntagResourceOutcome;

        typedef std::future<DeleteAlarmsOutcome> DeleteAlarmsOutcomeCallable;
        typedef std::future<DeleteAnomalyDetectorOutcome> DeleteAnomalyDetectorOutcomeCallable;
        typedef std::future<DeleteDashboardsOutcome> DeleteDashboardsOutcomeCallable;
        typedef std::future<DeleteInsightRulesOutcome> DeleteInsightRulesOutcomeCallable;
        typedef std::future<DescribeAlarmHistoryOutcome> DescribeAlarmHistoryOutcomeCallable;
        typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
        typedef std::future<DescribeAlarmsForMetricOutcome> DescribeAlarmsForMetricOutcomeCallable;
        typedef std::future<DescribeAnomalyDetectorsOutcome> DescribeAnomalyDetectorsOutcomeCallable;
        typedef std::future<DescribeInsightRulesOutcome> DescribeInsightRulesOutcomeCallable;
        typedef std::future<DisableAlarmActionsOutcome> DisableAlarmActionsOutcomeCallable;
        typedef std::future<DisableInsightRulesOutcome> DisableInsightRulesOutcomeCallable;
        typedef std::future<EnableAlarmActionsOutcome> EnableAlarmActionsOutcomeCallable;
        typedef std::future<EnableInsightRulesOutcome> EnableInsightRulesOutcomeCallable;
        typedef std::future<GetDashboardOutcome> GetDashboardOutcomeCallable;
        typedef std::future<GetInsightRuleReportOutcome> GetInsightRuleReportOutcomeCallable;
        typedef std::future<GetMetricDataOutcome> GetMetricDataOutcomeCallable;
        typedef std::future<GetMetricStatisticsOutcome> GetMetricStatisticsOutcomeCallable;
        typedef std::future<GetMetricWidgetImageOutcome> GetMetricWidgetImageOutcomeCallable;
        typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
        typedef std::future<ListMetricsOutcome> ListMetricsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutAnomalyDetectorOutcome> PutAnomalyDetectorOutcomeCallable;
        typedef std::future<PutCompositeAlarmOutcome> PutCompositeAlarmOutcomeCallable;
        typedef std::future<PutDashboardOutcome> PutDashboardOutcomeCallable;
        typedef std::future<PutInsightRuleOutcome> PutInsightRuleOutcomeCallable;
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
    typedef std::function<void(const CloudWatchClient*, const Model::DeleteInsightRulesRequest&, const Model::DeleteInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmHistoryRequest&, const Model::DescribeAlarmHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmHistoryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmsRequest&, const Model::DescribeAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmsForMetricRequest&, const Model::DescribeAlarmsForMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmsForMetricResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAnomalyDetectorsRequest&, const Model::DescribeAnomalyDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectorsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeInsightRulesRequest&, const Model::DescribeInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DisableAlarmActionsRequest&, const Model::DisableAlarmActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAlarmActionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DisableInsightRulesRequest&, const Model::DisableInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::EnableAlarmActionsRequest&, const Model::EnableAlarmActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAlarmActionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::EnableInsightRulesRequest&, const Model::EnableInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetDashboardRequest&, const Model::GetDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetInsightRuleReportRequest&, const Model::GetInsightRuleReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightRuleReportResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricDataRequest&, const Model::GetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricStatisticsRequest&, const Model::GetMetricStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricStatisticsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricWidgetImageRequest&, const Model::GetMetricWidgetImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricWidgetImageResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListMetricsRequest&, const Model::ListMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutAnomalyDetectorRequest&, const Model::PutAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutCompositeAlarmRequest&, const Model::PutCompositeAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCompositeAlarmResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutDashboardRequest&, const Model::PutDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDashboardResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutInsightRuleRequest&, const Model::PutInsightRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInsightRuleResponseReceivedHandler;
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


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Deletes the specified alarms. You can delete up to 100 alarms in one
         * operation. However, this total can include no more than one composite alarm. For
         * example, you could delete 99 metric alarms and one composite alarms with one
         * operation, but you can't delete two composite alarms with one operation.</p> <p>
         * In the event of an error, no alarms are deleted.</p>  <p>It is possible to
         * create a loop or cycle of composite alarms, where composite alarm A depends on
         * composite alarm B, and composite alarm B also depends on composite alarm A. In
         * this scenario, you can't delete any composite alarm that is part of the cycle
         * because there is always still a composite alarm that depends on that alarm that
         * you want to delete.</p> <p>To get out of such a situation, you must break the
         * cycle by changing the rule of one of the composite alarms in the cycle to remove
         * a dependency that creates the cycle. The simplest change to make to break a
         * cycle is to change the <code>AlarmRule</code> of one of the alarms to
         * <code>False</code>. </p> <p>Additionally, the evaluation of composite alarms
         * stops if CloudWatch detects a cycle in the evaluation path. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlarmsOutcome DeleteAlarms(const Model::DeleteAlarmsRequest& request) const;

        /**
         * <p>Deletes the specified alarms. You can delete up to 100 alarms in one
         * operation. However, this total can include no more than one composite alarm. For
         * example, you could delete 99 metric alarms and one composite alarms with one
         * operation, but you can't delete two composite alarms with one operation.</p> <p>
         * In the event of an error, no alarms are deleted.</p>  <p>It is possible to
         * create a loop or cycle of composite alarms, where composite alarm A depends on
         * composite alarm B, and composite alarm B also depends on composite alarm A. In
         * this scenario, you can't delete any composite alarm that is part of the cycle
         * because there is always still a composite alarm that depends on that alarm that
         * you want to delete.</p> <p>To get out of such a situation, you must break the
         * cycle by changing the rule of one of the composite alarms in the cycle to remove
         * a dependency that creates the cycle. The simplest change to make to break a
         * cycle is to change the <code>AlarmRule</code> of one of the alarms to
         * <code>False</code>. </p> <p>Additionally, the evaluation of composite alarms
         * stops if CloudWatch detects a cycle in the evaluation path. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAlarms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlarmsOutcomeCallable DeleteAlarmsCallable(const Model::DeleteAlarmsRequest& request) const;

        /**
         * <p>Deletes the specified alarms. You can delete up to 100 alarms in one
         * operation. However, this total can include no more than one composite alarm. For
         * example, you could delete 99 metric alarms and one composite alarms with one
         * operation, but you can't delete two composite alarms with one operation.</p> <p>
         * In the event of an error, no alarms are deleted.</p>  <p>It is possible to
         * create a loop or cycle of composite alarms, where composite alarm A depends on
         * composite alarm B, and composite alarm B also depends on composite alarm A. In
         * this scenario, you can't delete any composite alarm that is part of the cycle
         * because there is always still a composite alarm that depends on that alarm that
         * you want to delete.</p> <p>To get out of such a situation, you must break the
         * cycle by changing the rule of one of the composite alarms in the cycle to remove
         * a dependency that creates the cycle. The simplest change to make to break a
         * cycle is to change the <code>AlarmRule</code> of one of the alarms to
         * <code>False</code>. </p> <p>Additionally, the evaluation of composite alarms
         * stops if CloudWatch detects a cycle in the evaluation path. </p>
         * <p><h3>See Also:</h3>   <a
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
         * <p>Deletes all dashboards that you specify. You can specify up to 100 dashboards
         * to delete. If there is an error during this call, no dashboards are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardsOutcome DeleteDashboards(const Model::DeleteDashboardsRequest& request) const;

        /**
         * <p>Deletes all dashboards that you specify. You can specify up to 100 dashboards
         * to delete. If there is an error during this call, no dashboards are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteDashboards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDashboardsOutcomeCallable DeleteDashboardsCallable(const Model::DeleteDashboardsRequest& request) const;

        /**
         * <p>Deletes all dashboards that you specify. You can specify up to 100 dashboards
         * to delete. If there is an error during this call, no dashboards are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteDashboards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDashboardsAsync(const Model::DeleteDashboardsRequest& request, const DeleteDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes the specified Contributor Insights rules.</p> <p>If you
         * create a rule, delete it, and then re-create it with the same name, historical
         * data from the first time the rule was created might not be
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightRulesOutcome DeleteInsightRules(const Model::DeleteInsightRulesRequest& request) const;

        /**
         * <p>Permanently deletes the specified Contributor Insights rules.</p> <p>If you
         * create a rule, delete it, and then re-create it with the same name, historical
         * data from the first time the rule was created might not be
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteInsightRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInsightRulesOutcomeCallable DeleteInsightRulesCallable(const Model::DeleteInsightRulesRequest& request) const;

        /**
         * <p>Permanently deletes the specified Contributor Insights rules.</p> <p>If you
         * create a rule, delete it, and then re-create it with the same name, historical
         * data from the first time the rule was created might not be
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteInsightRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInsightRulesAsync(const Model::DeleteInsightRulesRequest& request, const DeleteInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the history for the specified alarm. You can filter the results by
         * date range or item type. If an alarm name is not specified, the histories for
         * either all metric alarms or all composite alarms are returned.</p> <p>CloudWatch
         * retains the history of an alarm even if you delete the alarm.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmHistoryOutcome DescribeAlarmHistory(const Model::DescribeAlarmHistoryRequest& request) const;

        /**
         * <p>Retrieves the history for the specified alarm. You can filter the results by
         * date range or item type. If an alarm name is not specified, the histories for
         * either all metric alarms or all composite alarms are returned.</p> <p>CloudWatch
         * retains the history of an alarm even if you delete the alarm.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmHistoryOutcomeCallable DescribeAlarmHistoryCallable(const Model::DescribeAlarmHistoryRequest& request) const;

        /**
         * <p>Retrieves the history for the specified alarm. You can filter the results by
         * date range or item type. If an alarm name is not specified, the histories for
         * either all metric alarms or all composite alarms are returned.</p> <p>CloudWatch
         * retains the history of an alarm even if you delete the alarm.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmHistoryAsync(const Model::DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified alarms. You can filter the results by specifying a a
         * prefix for the alarm name, the alarm state, or a prefix for any
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest& request) const;

        /**
         * <p>Retrieves the specified alarms. You can filter the results by specifying a a
         * prefix for the alarm name, the alarm state, or a prefix for any
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const Model::DescribeAlarmsRequest& request) const;

        /**
         * <p>Retrieves the specified alarms. You can filter the results by specifying a a
         * prefix for the alarm name, the alarm state, or a prefix for any
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the alarms for the specified metric. To filter the results, specify
         * a statistic, period, or unit.</p> <p>This operation retrieves only standard
         * alarms that are based on the specified metric. It does not return alarms based
         * on math expressions that use the specified metric, or composite alarms that use
         * the specified metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmsForMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmsForMetricOutcome DescribeAlarmsForMetric(const Model::DescribeAlarmsForMetricRequest& request) const;

        /**
         * <p>Retrieves the alarms for the specified metric. To filter the results, specify
         * a statistic, period, or unit.</p> <p>This operation retrieves only standard
         * alarms that are based on the specified metric. It does not return alarms based
         * on math expressions that use the specified metric, or composite alarms that use
         * the specified metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmsForMetric">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlarmsForMetricOutcomeCallable DescribeAlarmsForMetricCallable(const Model::DescribeAlarmsForMetricRequest& request) const;

        /**
         * <p>Retrieves the alarms for the specified metric. To filter the results, specify
         * a statistic, period, or unit.</p> <p>This operation retrieves only standard
         * alarms that are based on the specified metric. It does not return alarms based
         * on math expressions that use the specified metric, or composite alarms that use
         * the specified metric.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of all the Contributor Insights rules in your account.</p>
         * <p>For more information about Contributor Insights, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using
         * Contributor Insights to Analyze High-Cardinality Data</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInsightRulesOutcome DescribeInsightRules(const Model::DescribeInsightRulesRequest& request) const;

        /**
         * <p>Returns a list of all the Contributor Insights rules in your account.</p>
         * <p>For more information about Contributor Insights, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using
         * Contributor Insights to Analyze High-Cardinality Data</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeInsightRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInsightRulesOutcomeCallable DescribeInsightRulesCallable(const Model::DescribeInsightRulesRequest& request) const;

        /**
         * <p>Returns a list of all the Contributor Insights rules in your account.</p>
         * <p>For more information about Contributor Insights, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using
         * Contributor Insights to Analyze High-Cardinality Data</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeInsightRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInsightRulesAsync(const Model::DescribeInsightRulesRequest& request, const DescribeInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Disables the specified Contributor Insights rules. When rules are disabled,
         * they do not analyze log groups and do not incur costs.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DisableInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableInsightRulesOutcome DisableInsightRules(const Model::DisableInsightRulesRequest& request) const;

        /**
         * <p>Disables the specified Contributor Insights rules. When rules are disabled,
         * they do not analyze log groups and do not incur costs.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DisableInsightRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableInsightRulesOutcomeCallable DisableInsightRulesCallable(const Model::DisableInsightRulesRequest& request) const;

        /**
         * <p>Disables the specified Contributor Insights rules. When rules are disabled,
         * they do not analyze log groups and do not incur costs.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DisableInsightRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableInsightRulesAsync(const Model::DisableInsightRulesRequest& request, const DisableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Enables the specified Contributor Insights rules. When rules are enabled,
         * they immediately begin analyzing log data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EnableInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableInsightRulesOutcome EnableInsightRules(const Model::EnableInsightRulesRequest& request) const;

        /**
         * <p>Enables the specified Contributor Insights rules. When rules are enabled,
         * they immediately begin analyzing log data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EnableInsightRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableInsightRulesOutcomeCallable EnableInsightRulesCallable(const Model::EnableInsightRulesRequest& request) const;

        /**
         * <p>Enables the specified Contributor Insights rules. When rules are enabled,
         * they immediately begin analyzing log data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EnableInsightRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableInsightRulesAsync(const Model::EnableInsightRulesRequest& request, const EnableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>This operation returns the time series data collected by a Contributor
         * Insights rule. The data includes the identity and number of contributors to the
         * log group.</p> <p>You can also optionally return one or more statistics about
         * each data point in the time series. These statistics can include the
         * following:</p> <ul> <li> <p> <code>UniqueContributors</code> -- the number of
         * unique contributors for each data point.</p> </li> <li> <p>
         * <code>MaxContributorValue</code> -- the value of the top contributor for each
         * data point. The identity of the contributor might change for each data point in
         * the graph.</p> <p>If this rule aggregates by COUNT, the top contributor for each
         * data point is the contributor with the most occurrences in that period. If the
         * rule aggregates by SUM, the top contributor is the contributor with the highest
         * sum in the log field specified by the rule's <code>Value</code>, during that
         * period.</p> </li> <li> <p> <code>SampleCount</code> -- the number of data points
         * matched by the rule.</p> </li> <li> <p> <code>Sum</code> -- the sum of the
         * values from all contributors during the time period represented by that data
         * point.</p> </li> <li> <p> <code>Minimum</code> -- the minimum value from a
         * single observation during the time period represented by that data point.</p>
         * </li> <li> <p> <code>Maximum</code> -- the maximum value from a single
         * observation during the time period represented by that data point.</p> </li>
         * <li> <p> <code>Average</code> -- the average value from all contributors during
         * the time period represented by that data point.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetInsightRuleReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightRuleReportOutcome GetInsightRuleReport(const Model::GetInsightRuleReportRequest& request) const;

        /**
         * <p>This operation returns the time series data collected by a Contributor
         * Insights rule. The data includes the identity and number of contributors to the
         * log group.</p> <p>You can also optionally return one or more statistics about
         * each data point in the time series. These statistics can include the
         * following:</p> <ul> <li> <p> <code>UniqueContributors</code> -- the number of
         * unique contributors for each data point.</p> </li> <li> <p>
         * <code>MaxContributorValue</code> -- the value of the top contributor for each
         * data point. The identity of the contributor might change for each data point in
         * the graph.</p> <p>If this rule aggregates by COUNT, the top contributor for each
         * data point is the contributor with the most occurrences in that period. If the
         * rule aggregates by SUM, the top contributor is the contributor with the highest
         * sum in the log field specified by the rule's <code>Value</code>, during that
         * period.</p> </li> <li> <p> <code>SampleCount</code> -- the number of data points
         * matched by the rule.</p> </li> <li> <p> <code>Sum</code> -- the sum of the
         * values from all contributors during the time period represented by that data
         * point.</p> </li> <li> <p> <code>Minimum</code> -- the minimum value from a
         * single observation during the time period represented by that data point.</p>
         * </li> <li> <p> <code>Maximum</code> -- the maximum value from a single
         * observation during the time period represented by that data point.</p> </li>
         * <li> <p> <code>Average</code> -- the average value from all contributors during
         * the time period represented by that data point.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetInsightRuleReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightRuleReportOutcomeCallable GetInsightRuleReportCallable(const Model::GetInsightRuleReportRequest& request) const;

        /**
         * <p>This operation returns the time series data collected by a Contributor
         * Insights rule. The data includes the identity and number of contributors to the
         * log group.</p> <p>You can also optionally return one or more statistics about
         * each data point in the time series. These statistics can include the
         * following:</p> <ul> <li> <p> <code>UniqueContributors</code> -- the number of
         * unique contributors for each data point.</p> </li> <li> <p>
         * <code>MaxContributorValue</code> -- the value of the top contributor for each
         * data point. The identity of the contributor might change for each data point in
         * the graph.</p> <p>If this rule aggregates by COUNT, the top contributor for each
         * data point is the contributor with the most occurrences in that period. If the
         * rule aggregates by SUM, the top contributor is the contributor with the highest
         * sum in the log field specified by the rule's <code>Value</code>, during that
         * period.</p> </li> <li> <p> <code>SampleCount</code> -- the number of data points
         * matched by the rule.</p> </li> <li> <p> <code>Sum</code> -- the sum of the
         * values from all contributors during the time period represented by that data
         * point.</p> </li> <li> <p> <code>Minimum</code> -- the minimum value from a
         * single observation during the time period represented by that data point.</p>
         * </li> <li> <p> <code>Maximum</code> -- the maximum value from a single
         * observation during the time period represented by that data point.</p> </li>
         * <li> <p> <code>Average</code> -- the average value from all contributors during
         * the time period represented by that data point.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetInsightRuleReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightRuleReportAsync(const Model::GetInsightRuleReportRequest& request, const GetInsightRuleReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use the <code>GetMetricData</code> API to retrieve as many as 500
         * different metrics in a single request, with a total of as many as 100,800 data
         * points. You can also optionally perform math expressions on the values of the
         * returned statistics, to create new time series that represent new insights into
         * your data. For example, using Lambda metrics, you could divide the Errors metric
         * by the Invocations metric to get an error rate time series. For more information
         * about metric math expressions, see <a
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
         * resolution of 1 hour.</p> <p>If you omit <code>Unit</code> in your request, all
         * data that was collected with any unit is returned, along with the corresponding
         * units that were specified when the data was reported to CloudWatch. If you
         * specify a unit, the operation returns only data that was collected with that
         * unit specified. If you specify a unit that does not match the data collected,
         * the results of the operation are null. CloudWatch does not perform unit
         * conversions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataOutcome GetMetricData(const Model::GetMetricDataRequest& request) const;

        /**
         * <p>You can use the <code>GetMetricData</code> API to retrieve as many as 500
         * different metrics in a single request, with a total of as many as 100,800 data
         * points. You can also optionally perform math expressions on the values of the
         * returned statistics, to create new time series that represent new insights into
         * your data. For example, using Lambda metrics, you could divide the Errors metric
         * by the Invocations metric to get an error rate time series. For more information
         * about metric math expressions, see <a
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
         * resolution of 1 hour.</p> <p>If you omit <code>Unit</code> in your request, all
         * data that was collected with any unit is returned, along with the corresponding
         * units that were specified when the data was reported to CloudWatch. If you
         * specify a unit, the operation returns only data that was collected with that
         * unit specified. If you specify a unit that does not match the data collected,
         * the results of the operation are null. CloudWatch does not perform unit
         * conversions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetricDataOutcomeCallable GetMetricDataCallable(const Model::GetMetricDataRequest& request) const;

        /**
         * <p>You can use the <code>GetMetricData</code> API to retrieve as many as 500
         * different metrics in a single request, with a total of as many as 100,800 data
         * points. You can also optionally perform math expressions on the values of the
         * returned statistics, to create new time series that represent new insights into
         * your data. For example, using Lambda metrics, you could divide the Errors metric
         * by the Invocations metric to get an error rate time series. For more information
         * about metric math expressions, see <a
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
         * resolution of 1 hour.</p> <p>If you omit <code>Unit</code> in your request, all
         * data that was collected with any unit is returned, along with the corresponding
         * units that were specified when the data was reported to CloudWatch. If you
         * specify a unit, the operation returns only data that was collected with that
         * unit specified. If you specify a unit that does not match the data collected,
         * the results of the operation are null. CloudWatch does not perform unit
         * conversions.</p><p><h3>See Also:</h3>   <a
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
         * <p>List the specified metrics. You can use the returned metrics with <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
         * to obtain statistical data.</p> <p>Up to 500 results are returned for any one
         * call. To retrieve additional results, use the returned token with subsequent
         * calls.</p> <p>After you create a metric, allow up to 15 minutes before the
         * metric appears. You can see statistics about the metric sooner by using <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p>
         * <p> <code>ListMetrics</code> doesn't return information about metrics if those
         * metrics haven't reported data in the past two weeks. To retrieve those metrics,
         * use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricsOutcome ListMetrics(const Model::ListMetricsRequest& request) const;

        /**
         * <p>List the specified metrics. You can use the returned metrics with <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
         * to obtain statistical data.</p> <p>Up to 500 results are returned for any one
         * call. To retrieve additional results, use the returned token with subsequent
         * calls.</p> <p>After you create a metric, allow up to 15 minutes before the
         * metric appears. You can see statistics about the metric sooner by using <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p>
         * <p> <code>ListMetrics</code> doesn't return information about metrics if those
         * metrics haven't reported data in the past two weeks. To retrieve those metrics,
         * use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListMetrics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMetricsOutcomeCallable ListMetricsCallable(const Model::ListMetricsRequest& request) const;

        /**
         * <p>List the specified metrics. You can use the returned metrics with <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
         * to obtain statistical data.</p> <p>Up to 500 results are returned for any one
         * call. To retrieve additional results, use the returned token with subsequent
         * calls.</p> <p>After you create a metric, allow up to 15 minutes before the
         * metric appears. You can see statistics about the metric sooner by using <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p>
         * <p> <code>ListMetrics</code> doesn't return information about metrics if those
         * metrics haven't reported data in the past two weeks. To retrieve those metrics,
         * use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListMetrics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMetricsAsync(const Model::ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with a CloudWatch resource. Currently, alarms
         * and Contributor Insights rules support tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with a CloudWatch resource. Currently, alarms
         * and Contributor Insights rules support tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with a CloudWatch resource. Currently, alarms
         * and Contributor Insights rules support tagging.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates or updates a <i>composite alarm</i>. When you create a composite
         * alarm, you specify a rule expression for the alarm that takes into account the
         * alarm states of other alarms that you have created. The composite alarm goes
         * into ALARM state only if all conditions of the rule are met.</p> <p>The alarms
         * specified in a composite alarm's rule expression can include metric alarms and
         * other composite alarms.</p> <p>Using composite alarms can reduce alarm noise.
         * You can create multiple metric alarms, and also create a composite alarm and set
         * up alerts only for the composite alarm. For example, you could create a
         * composite alarm that goes into ALARM state only when more than one of the
         * underlying metric alarms are in ALARM state.</p> <p>Currently, the only alarm
         * actions that can be taken by composite alarms are notifying SNS topics.</p>
         *  <p>It is possible to create a loop or cycle of composite alarms, where
         * composite alarm A depends on composite alarm B, and composite alarm B also
         * depends on composite alarm A. In this scenario, you can't delete any composite
         * alarm that is part of the cycle because there is always still a composite alarm
         * that depends on that alarm that you want to delete.</p> <p>To get out of such a
         * situation, you must break the cycle by changing the rule of one of the composite
         * alarms in the cycle to remove a dependency that creates the cycle. The simplest
         * change to make to break a cycle is to change the <code>AlarmRule</code> of one
         * of the alarms to <code>False</code>. </p> <p>Additionally, the evaluation of
         * composite alarms stops if CloudWatch detects a cycle in the evaluation path.
         * </p>  <p>When this operation creates an alarm, the alarm state is
         * immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is then evaluated
         * and its state is set appropriately. Any actions associated with the new state
         * are then executed. For a composite alarm, this initial time after creation is
         * the only time that the alarm can be in <code>INSUFFICIENT_DATA</code> state.</p>
         * <p>When you update an existing alarm, its state is left unchanged, but the
         * update completely overwrites the previous configuration of the
         * alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutCompositeAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCompositeAlarmOutcome PutCompositeAlarm(const Model::PutCompositeAlarmRequest& request) const;

        /**
         * <p>Creates or updates a <i>composite alarm</i>. When you create a composite
         * alarm, you specify a rule expression for the alarm that takes into account the
         * alarm states of other alarms that you have created. The composite alarm goes
         * into ALARM state only if all conditions of the rule are met.</p> <p>The alarms
         * specified in a composite alarm's rule expression can include metric alarms and
         * other composite alarms.</p> <p>Using composite alarms can reduce alarm noise.
         * You can create multiple metric alarms, and also create a composite alarm and set
         * up alerts only for the composite alarm. For example, you could create a
         * composite alarm that goes into ALARM state only when more than one of the
         * underlying metric alarms are in ALARM state.</p> <p>Currently, the only alarm
         * actions that can be taken by composite alarms are notifying SNS topics.</p>
         *  <p>It is possible to create a loop or cycle of composite alarms, where
         * composite alarm A depends on composite alarm B, and composite alarm B also
         * depends on composite alarm A. In this scenario, you can't delete any composite
         * alarm that is part of the cycle because there is always still a composite alarm
         * that depends on that alarm that you want to delete.</p> <p>To get out of such a
         * situation, you must break the cycle by changing the rule of one of the composite
         * alarms in the cycle to remove a dependency that creates the cycle. The simplest
         * change to make to break a cycle is to change the <code>AlarmRule</code> of one
         * of the alarms to <code>False</code>. </p> <p>Additionally, the evaluation of
         * composite alarms stops if CloudWatch detects a cycle in the evaluation path.
         * </p>  <p>When this operation creates an alarm, the alarm state is
         * immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is then evaluated
         * and its state is set appropriately. Any actions associated with the new state
         * are then executed. For a composite alarm, this initial time after creation is
         * the only time that the alarm can be in <code>INSUFFICIENT_DATA</code> state.</p>
         * <p>When you update an existing alarm, its state is left unchanged, but the
         * update completely overwrites the previous configuration of the
         * alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutCompositeAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutCompositeAlarmOutcomeCallable PutCompositeAlarmCallable(const Model::PutCompositeAlarmRequest& request) const;

        /**
         * <p>Creates or updates a <i>composite alarm</i>. When you create a composite
         * alarm, you specify a rule expression for the alarm that takes into account the
         * alarm states of other alarms that you have created. The composite alarm goes
         * into ALARM state only if all conditions of the rule are met.</p> <p>The alarms
         * specified in a composite alarm's rule expression can include metric alarms and
         * other composite alarms.</p> <p>Using composite alarms can reduce alarm noise.
         * You can create multiple metric alarms, and also create a composite alarm and set
         * up alerts only for the composite alarm. For example, you could create a
         * composite alarm that goes into ALARM state only when more than one of the
         * underlying metric alarms are in ALARM state.</p> <p>Currently, the only alarm
         * actions that can be taken by composite alarms are notifying SNS topics.</p>
         *  <p>It is possible to create a loop or cycle of composite alarms, where
         * composite alarm A depends on composite alarm B, and composite alarm B also
         * depends on composite alarm A. In this scenario, you can't delete any composite
         * alarm that is part of the cycle because there is always still a composite alarm
         * that depends on that alarm that you want to delete.</p> <p>To get out of such a
         * situation, you must break the cycle by changing the rule of one of the composite
         * alarms in the cycle to remove a dependency that creates the cycle. The simplest
         * change to make to break a cycle is to change the <code>AlarmRule</code> of one
         * of the alarms to <code>False</code>. </p> <p>Additionally, the evaluation of
         * composite alarms stops if CloudWatch detects a cycle in the evaluation path.
         * </p>  <p>When this operation creates an alarm, the alarm state is
         * immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is then evaluated
         * and its state is set appropriately. Any actions associated with the new state
         * are then executed. For a composite alarm, this initial time after creation is
         * the only time that the alarm can be in <code>INSUFFICIENT_DATA</code> state.</p>
         * <p>When you update an existing alarm, its state is left unchanged, but the
         * update completely overwrites the previous configuration of the
         * alarm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutCompositeAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutCompositeAlarmAsync(const Model::PutCompositeAlarmRequest& request, const PutCompositeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Creates a Contributor Insights rule. Rules evaluate log events in a
         * CloudWatch Logs log group, enabling you to find contributor data for the log
         * events in that log group. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using
         * Contributor Insights to Analyze High-Cardinality Data</a>.</p> <p>If you create
         * a rule, delete it, and then re-create it with the same name, historical data
         * from the first time the rule was created might not be available.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutInsightRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInsightRuleOutcome PutInsightRule(const Model::PutInsightRuleRequest& request) const;

        /**
         * <p>Creates a Contributor Insights rule. Rules evaluate log events in a
         * CloudWatch Logs log group, enabling you to find contributor data for the log
         * events in that log group. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using
         * Contributor Insights to Analyze High-Cardinality Data</a>.</p> <p>If you create
         * a rule, delete it, and then re-create it with the same name, historical data
         * from the first time the rule was created might not be available.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutInsightRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInsightRuleOutcomeCallable PutInsightRuleCallable(const Model::PutInsightRuleRequest& request) const;

        /**
         * <p>Creates a Contributor Insights rule. Rules evaluate log events in a
         * CloudWatch Logs log group, enabling you to find contributor data for the log
         * events in that log group. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using
         * Contributor Insights to Analyze High-Cardinality Data</a>.</p> <p>If you create
         * a rule, delete it, and then re-create it with the same name, historical data
         * from the first time the rule was created might not be available.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutInsightRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInsightRuleAsync(const Model::PutInsightRuleRequest& request, const PutInsightRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * to fifteen minutes for the metric to appear in calls to <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_ListMetrics.html">ListMetrics</a>.</p>
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
         * too large. Values must be in the range of -2^360 to 2^360. In addition, special
         * values (for example, NaN, +Infinity, -Infinity) are not supported.</p> <p>You
         * can use up to 10 dimensions per metric to further clarify what data the metric
         * collects. Each dimension consists of a Name and Value pair. For more information
         * about specifying dimensions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing
         * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> <p>You specify the
         * time stamp to be associated with each data point. You can specify time stamps
         * that are as much as two weeks before the current date, and as much as 2 hours
         * after the current day and time.</p> <p>Data points with time stamps from 24
         * hours ago or longer can take at least 48 hours to become available for <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
         * from the time they are submitted. Data points with time stamps between 3 and 24
         * hours ago can take as much as 2 hours to become available for for <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p>
         * <p>CloudWatch needs raw data points to calculate percentile statistics. If you
         * publish data using a statistic set instead, you can only retrieve percentile
         * statistics for this data if one of the following conditions is true:</p> <ul>
         * <li> <p>The <code>SampleCount</code> value of the statistic set is 1 and
         * <code>Min</code>, <code>Max</code>, and <code>Sum</code> are all equal.</p>
         * </li> <li> <p>The <code>Min</code> and <code>Max</code> are equal, and
         * <code>Sum</code> is equal to <code>Min</code> multiplied by
         * <code>SampleCount</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricDataOutcome PutMetricData(const Model::PutMetricDataRequest& request) const;

        /**
         * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
         * data points with the specified metric. If the specified metric does not exist,
         * CloudWatch creates the metric. When CloudWatch creates a metric, it can take up
         * to fifteen minutes for the metric to appear in calls to <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_ListMetrics.html">ListMetrics</a>.</p>
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
         * too large. Values must be in the range of -2^360 to 2^360. In addition, special
         * values (for example, NaN, +Infinity, -Infinity) are not supported.</p> <p>You
         * can use up to 10 dimensions per metric to further clarify what data the metric
         * collects. Each dimension consists of a Name and Value pair. For more information
         * about specifying dimensions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing
         * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> <p>You specify the
         * time stamp to be associated with each data point. You can specify time stamps
         * that are as much as two weeks before the current date, and as much as 2 hours
         * after the current day and time.</p> <p>Data points with time stamps from 24
         * hours ago or longer can take at least 48 hours to become available for <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
         * from the time they are submitted. Data points with time stamps between 3 and 24
         * hours ago can take as much as 2 hours to become available for for <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p>
         * <p>CloudWatch needs raw data points to calculate percentile statistics. If you
         * publish data using a statistic set instead, you can only retrieve percentile
         * statistics for this data if one of the following conditions is true:</p> <ul>
         * <li> <p>The <code>SampleCount</code> value of the statistic set is 1 and
         * <code>Min</code>, <code>Max</code>, and <code>Sum</code> are all equal.</p>
         * </li> <li> <p>The <code>Min</code> and <code>Max</code> are equal, and
         * <code>Sum</code> is equal to <code>Min</code> multiplied by
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
         * to fifteen minutes for the metric to appear in calls to <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_ListMetrics.html">ListMetrics</a>.</p>
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
         * too large. Values must be in the range of -2^360 to 2^360. In addition, special
         * values (for example, NaN, +Infinity, -Infinity) are not supported.</p> <p>You
         * can use up to 10 dimensions per metric to further clarify what data the metric
         * collects. Each dimension consists of a Name and Value pair. For more information
         * about specifying dimensions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing
         * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> <p>You specify the
         * time stamp to be associated with each data point. You can specify time stamps
         * that are as much as two weeks before the current date, and as much as 2 hours
         * after the current day and time.</p> <p>Data points with time stamps from 24
         * hours ago or longer can take at least 48 hours to become available for <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
         * from the time they are submitted. Data points with time stamps between 3 and 24
         * hours ago can take as much as 2 hours to become available for for <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p>
         * <p>CloudWatch needs raw data points to calculate percentile statistics. If you
         * publish data using a statistic set instead, you can only retrieve percentile
         * statistics for this data if one of the following conditions is true:</p> <ul>
         * <li> <p>The <code>SampleCount</code> value of the statistic set is 1 and
         * <code>Min</code>, <code>Max</code>, and <code>Sum</code> are all equal.</p>
         * </li> <li> <p>The <code>Min</code> and <code>Max</code> are equal, and
         * <code>Sum</code> is equal to <code>Min</code> multiplied by
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
         * <code>ALARM</code> sends an SNS message.</p> <p>Metric alarms returns to their
         * actual state quickly, often within seconds. Because the metric alarm state
         * change happens quickly, it is typically only visible in the alarm's
         * <b>History</b> tab in the Amazon CloudWatch console or through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_DescribeAlarmHistory.html">DescribeAlarmHistory</a>.</p>
         * <p>If you use <code>SetAlarmState</code> on a composite alarm, the composite
         * alarm is not guaranteed to return to its actual state. It returns to its actual
         * state only once any of its children alarms change state. It is also reevaluated
         * if you update its configuration.</p> <p>If an alarm triggers EC2 Auto Scaling
         * policies or application Auto Scaling policies, you must include information in
         * the <code>StateReasonData</code> parameter to enable the policy to take the
         * correct action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/SetAlarmState">AWS
         * API Reference</a></p>
         */
        virtual Model::SetAlarmStateOutcome SetAlarmState(const Model::SetAlarmStateRequest& request) const;

        /**
         * <p>Temporarily sets the state of an alarm for testing purposes. When the updated
         * state differs from the previous value, the action configured for the appropriate
         * state is invoked. For example, if your alarm is configured to send an Amazon SNS
         * message when an alarm is triggered, temporarily changing the alarm state to
         * <code>ALARM</code> sends an SNS message.</p> <p>Metric alarms returns to their
         * actual state quickly, often within seconds. Because the metric alarm state
         * change happens quickly, it is typically only visible in the alarm's
         * <b>History</b> tab in the Amazon CloudWatch console or through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_DescribeAlarmHistory.html">DescribeAlarmHistory</a>.</p>
         * <p>If you use <code>SetAlarmState</code> on a composite alarm, the composite
         * alarm is not guaranteed to return to its actual state. It returns to its actual
         * state only once any of its children alarms change state. It is also reevaluated
         * if you update its configuration.</p> <p>If an alarm triggers EC2 Auto Scaling
         * policies or application Auto Scaling policies, you must include information in
         * the <code>StateReasonData</code> parameter to enable the policy to take the
         * correct action.</p><p><h3>See Also:</h3>   <a
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
         * <code>ALARM</code> sends an SNS message.</p> <p>Metric alarms returns to their
         * actual state quickly, often within seconds. Because the metric alarm state
         * change happens quickly, it is typically only visible in the alarm's
         * <b>History</b> tab in the Amazon CloudWatch console or through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_DescribeAlarmHistory.html">DescribeAlarmHistory</a>.</p>
         * <p>If you use <code>SetAlarmState</code> on a composite alarm, the composite
         * alarm is not guaranteed to return to its actual state. It returns to its actual
         * state only once any of its children alarms change state. It is also reevaluated
         * if you update its configuration.</p> <p>If an alarm triggers EC2 Auto Scaling
         * policies or application Auto Scaling policies, you must include information in
         * the <code>StateReasonData</code> parameter to enable the policy to take the
         * correct action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/SetAlarmState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetAlarmStateAsync(const Model::SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * resource. Currently, the only CloudWatch resources that can be tagged are alarms
         * and Contributor Insights rules.</p> <p>Tags can help you organize and categorize
         * your resources. You can also use them to scope user permissions by granting a
         * user permission to access or change only resources with certain tag values.</p>
         * <p>Tags don't have any semantic meaning to AWS and are interpreted strictly as
         * strings of characters.</p> <p>You can use the <code>TagResource</code> action
         * with an alarm that already has tags. If you specify a new tag key for the alarm,
         * this tag is appended to the list of tags associated with the alarm. If you
         * specify a tag key that is already associated with the alarm, the new tag value
         * that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a CloudWatch resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * resource. Currently, the only CloudWatch resources that can be tagged are alarms
         * and Contributor Insights rules.</p> <p>Tags can help you organize and categorize
         * your resources. You can also use them to scope user permissions by granting a
         * user permission to access or change only resources with certain tag values.</p>
         * <p>Tags don't have any semantic meaning to AWS and are interpreted strictly as
         * strings of characters.</p> <p>You can use the <code>TagResource</code> action
         * with an alarm that already has tags. If you specify a new tag key for the alarm,
         * this tag is appended to the list of tags associated with the alarm. If you
         * specify a tag key that is already associated with the alarm, the new tag value
         * that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a CloudWatch resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * resource. Currently, the only CloudWatch resources that can be tagged are alarms
         * and Contributor Insights rules.</p> <p>Tags can help you organize and categorize
         * your resources. You can also use them to scope user permissions by granting a
         * user permission to access or change only resources with certain tag values.</p>
         * <p>Tags don't have any semantic meaning to AWS and are interpreted strictly as
         * strings of characters.</p> <p>You can use the <code>TagResource</code> action
         * with an alarm that already has tags. If you specify a new tag key for the alarm,
         * this tag is appended to the list of tags associated with the alarm. If you
         * specify a tag key that is already associated with the alarm, the new tag value
         * that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a CloudWatch resource.</p><p><h3>See
         * Also:</h3>   <a
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
        void DeleteInsightRulesAsyncHelper(const Model::DeleteInsightRulesRequest& request, const DeleteInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmHistoryAsyncHelper(const Model::DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmsAsyncHelper(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlarmsForMetricAsyncHelper(const Model::DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnomalyDetectorsAsyncHelper(const Model::DescribeAnomalyDetectorsRequest& request, const DescribeAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInsightRulesAsyncHelper(const Model::DescribeInsightRulesRequest& request, const DescribeInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableAlarmActionsAsyncHelper(const Model::DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableInsightRulesAsyncHelper(const Model::DisableInsightRulesRequest& request, const DisableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAlarmActionsAsyncHelper(const Model::EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableInsightRulesAsyncHelper(const Model::EnableInsightRulesRequest& request, const EnableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDashboardAsyncHelper(const Model::GetDashboardRequest& request, const GetDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInsightRuleReportAsyncHelper(const Model::GetInsightRuleReportRequest& request, const GetInsightRuleReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricDataAsyncHelper(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricStatisticsAsyncHelper(const Model::GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricWidgetImageAsyncHelper(const Model::GetMetricWidgetImageRequest& request, const GetMetricWidgetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDashboardsAsyncHelper(const Model::ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMetricsAsyncHelper(const Model::ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAnomalyDetectorAsyncHelper(const Model::PutAnomalyDetectorRequest& request, const PutAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutCompositeAlarmAsyncHelper(const Model::PutCompositeAlarmRequest& request, const PutCompositeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDashboardAsyncHelper(const Model::PutDashboardRequest& request, const PutDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutInsightRuleAsyncHelper(const Model::PutInsightRuleRequest& request, const PutInsightRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
