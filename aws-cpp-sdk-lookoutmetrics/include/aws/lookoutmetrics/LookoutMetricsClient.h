/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutmetrics/model/ActivateAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/BackTestAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/CreateAlertResult.h>
#include <aws/lookoutmetrics/model/CreateAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/CreateMetricSetResult.h>
#include <aws/lookoutmetrics/model/DeleteAlertResult.h>
#include <aws/lookoutmetrics/model/DeleteAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/DescribeAlertResult.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectionExecutionsResult.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/DescribeMetricSetResult.h>
#include <aws/lookoutmetrics/model/GetAnomalyGroupResult.h>
#include <aws/lookoutmetrics/model/GetFeedbackResult.h>
#include <aws/lookoutmetrics/model/GetSampleDataResult.h>
#include <aws/lookoutmetrics/model/ListAlertsResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyDetectorsResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupSummariesResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupTimeSeriesResult.h>
#include <aws/lookoutmetrics/model/ListMetricSetsResult.h>
#include <aws/lookoutmetrics/model/ListTagsForResourceResult.h>
#include <aws/lookoutmetrics/model/PutFeedbackResult.h>
#include <aws/lookoutmetrics/model/TagResourceResult.h>
#include <aws/lookoutmetrics/model/UntagResourceResult.h>
#include <aws/lookoutmetrics/model/UpdateAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/UpdateMetricSetResult.h>
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

namespace LookoutMetrics
{

namespace Model
{
        class ActivateAnomalyDetectorRequest;
        class BackTestAnomalyDetectorRequest;
        class CreateAlertRequest;
        class CreateAnomalyDetectorRequest;
        class CreateMetricSetRequest;
        class DeleteAlertRequest;
        class DeleteAnomalyDetectorRequest;
        class DescribeAlertRequest;
        class DescribeAnomalyDetectionExecutionsRequest;
        class DescribeAnomalyDetectorRequest;
        class DescribeMetricSetRequest;
        class GetAnomalyGroupRequest;
        class GetFeedbackRequest;
        class GetSampleDataRequest;
        class ListAlertsRequest;
        class ListAnomalyDetectorsRequest;
        class ListAnomalyGroupSummariesRequest;
        class ListAnomalyGroupTimeSeriesRequest;
        class ListMetricSetsRequest;
        class ListTagsForResourceRequest;
        class PutFeedbackRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAnomalyDetectorRequest;
        class UpdateMetricSetRequest;

        typedef Aws::Utils::Outcome<ActivateAnomalyDetectorResult, LookoutMetricsError> ActivateAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<BackTestAnomalyDetectorResult, LookoutMetricsError> BackTestAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<CreateAlertResult, LookoutMetricsError> CreateAlertOutcome;
        typedef Aws::Utils::Outcome<CreateAnomalyDetectorResult, LookoutMetricsError> CreateAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<CreateMetricSetResult, LookoutMetricsError> CreateMetricSetOutcome;
        typedef Aws::Utils::Outcome<DeleteAlertResult, LookoutMetricsError> DeleteAlertOutcome;
        typedef Aws::Utils::Outcome<DeleteAnomalyDetectorResult, LookoutMetricsError> DeleteAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<DescribeAlertResult, LookoutMetricsError> DescribeAlertOutcome;
        typedef Aws::Utils::Outcome<DescribeAnomalyDetectionExecutionsResult, LookoutMetricsError> DescribeAnomalyDetectionExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAnomalyDetectorResult, LookoutMetricsError> DescribeAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<DescribeMetricSetResult, LookoutMetricsError> DescribeMetricSetOutcome;
        typedef Aws::Utils::Outcome<GetAnomalyGroupResult, LookoutMetricsError> GetAnomalyGroupOutcome;
        typedef Aws::Utils::Outcome<GetFeedbackResult, LookoutMetricsError> GetFeedbackOutcome;
        typedef Aws::Utils::Outcome<GetSampleDataResult, LookoutMetricsError> GetSampleDataOutcome;
        typedef Aws::Utils::Outcome<ListAlertsResult, LookoutMetricsError> ListAlertsOutcome;
        typedef Aws::Utils::Outcome<ListAnomalyDetectorsResult, LookoutMetricsError> ListAnomalyDetectorsOutcome;
        typedef Aws::Utils::Outcome<ListAnomalyGroupSummariesResult, LookoutMetricsError> ListAnomalyGroupSummariesOutcome;
        typedef Aws::Utils::Outcome<ListAnomalyGroupTimeSeriesResult, LookoutMetricsError> ListAnomalyGroupTimeSeriesOutcome;
        typedef Aws::Utils::Outcome<ListMetricSetsResult, LookoutMetricsError> ListMetricSetsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, LookoutMetricsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutFeedbackResult, LookoutMetricsError> PutFeedbackOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LookoutMetricsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LookoutMetricsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAnomalyDetectorResult, LookoutMetricsError> UpdateAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<UpdateMetricSetResult, LookoutMetricsError> UpdateMetricSetOutcome;

        typedef std::future<ActivateAnomalyDetectorOutcome> ActivateAnomalyDetectorOutcomeCallable;
        typedef std::future<BackTestAnomalyDetectorOutcome> BackTestAnomalyDetectorOutcomeCallable;
        typedef std::future<CreateAlertOutcome> CreateAlertOutcomeCallable;
        typedef std::future<CreateAnomalyDetectorOutcome> CreateAnomalyDetectorOutcomeCallable;
        typedef std::future<CreateMetricSetOutcome> CreateMetricSetOutcomeCallable;
        typedef std::future<DeleteAlertOutcome> DeleteAlertOutcomeCallable;
        typedef std::future<DeleteAnomalyDetectorOutcome> DeleteAnomalyDetectorOutcomeCallable;
        typedef std::future<DescribeAlertOutcome> DescribeAlertOutcomeCallable;
        typedef std::future<DescribeAnomalyDetectionExecutionsOutcome> DescribeAnomalyDetectionExecutionsOutcomeCallable;
        typedef std::future<DescribeAnomalyDetectorOutcome> DescribeAnomalyDetectorOutcomeCallable;
        typedef std::future<DescribeMetricSetOutcome> DescribeMetricSetOutcomeCallable;
        typedef std::future<GetAnomalyGroupOutcome> GetAnomalyGroupOutcomeCallable;
        typedef std::future<GetFeedbackOutcome> GetFeedbackOutcomeCallable;
        typedef std::future<GetSampleDataOutcome> GetSampleDataOutcomeCallable;
        typedef std::future<ListAlertsOutcome> ListAlertsOutcomeCallable;
        typedef std::future<ListAnomalyDetectorsOutcome> ListAnomalyDetectorsOutcomeCallable;
        typedef std::future<ListAnomalyGroupSummariesOutcome> ListAnomalyGroupSummariesOutcomeCallable;
        typedef std::future<ListAnomalyGroupTimeSeriesOutcome> ListAnomalyGroupTimeSeriesOutcomeCallable;
        typedef std::future<ListMetricSetsOutcome> ListMetricSetsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAnomalyDetectorOutcome> UpdateAnomalyDetectorOutcomeCallable;
        typedef std::future<UpdateMetricSetOutcome> UpdateMetricSetOutcomeCallable;
} // namespace Model

  class LookoutMetricsClient;

    typedef std::function<void(const LookoutMetricsClient*, const Model::ActivateAnomalyDetectorRequest&, const Model::ActivateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::BackTestAnomalyDetectorRequest&, const Model::BackTestAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BackTestAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateAlertRequest&, const Model::CreateAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateAnomalyDetectorRequest&, const Model::CreateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateMetricSetRequest&, const Model::CreateMetricSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMetricSetResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DeleteAlertRequest&, const Model::DeleteAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DeleteAnomalyDetectorRequest&, const Model::DeleteAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAlertRequest&, const Model::DescribeAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAnomalyDetectionExecutionsRequest&, const Model::DescribeAnomalyDetectionExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectionExecutionsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAnomalyDetectorRequest&, const Model::DescribeAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeMetricSetRequest&, const Model::DescribeMetricSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricSetResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetAnomalyGroupRequest&, const Model::GetAnomalyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnomalyGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetFeedbackRequest&, const Model::GetFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFeedbackResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetSampleDataRequest&, const Model::GetSampleDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSampleDataResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAlertsRequest&, const Model::ListAlertsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlertsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyDetectorsRequest&, const Model::ListAnomalyDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyDetectorsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyGroupSummariesRequest&, const Model::ListAnomalyGroupSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyGroupSummariesResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyGroupTimeSeriesRequest&, const Model::ListAnomalyGroupTimeSeriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyGroupTimeSeriesResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListMetricSetsRequest&, const Model::ListMetricSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricSetsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UpdateAnomalyDetectorRequest&, const Model::UpdateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UpdateMetricSetRequest&, const Model::UpdateMetricSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMetricSetResponseReceivedHandler;

  /**
   * <p>This is the <i>Amazon Lookout for Metrics API Reference</i>. For an
   * introduction to the service with tutorials for getting started, visit <a
   * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for
   * Metrics Developer Guide</a>.</p>
   */
  class AWS_LOOKOUTMETRICS_API LookoutMetricsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutMetricsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutMetricsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutMetricsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LookoutMetricsClient();


        /**
         * <p>Activates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ActivateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateAnomalyDetectorOutcome ActivateAnomalyDetector(const Model::ActivateAnomalyDetectorRequest& request) const;

        /**
         * <p>Activates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ActivateAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateAnomalyDetectorOutcomeCallable ActivateAnomalyDetectorCallable(const Model::ActivateAnomalyDetectorRequest& request) const;

        /**
         * <p>Activates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ActivateAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateAnomalyDetectorAsync(const Model::ActivateAnomalyDetectorRequest& request, const ActivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs a backtest for anomaly detection for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/BackTestAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::BackTestAnomalyDetectorOutcome BackTestAnomalyDetector(const Model::BackTestAnomalyDetectorRequest& request) const;

        /**
         * <p>Runs a backtest for anomaly detection for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/BackTestAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BackTestAnomalyDetectorOutcomeCallable BackTestAnomalyDetectorCallable(const Model::BackTestAnomalyDetectorRequest& request) const;

        /**
         * <p>Runs a backtest for anomaly detection for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/BackTestAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BackTestAnomalyDetectorAsync(const Model::BackTestAnomalyDetectorRequest& request, const BackTestAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alert for an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlertOutcome CreateAlert(const Model::CreateAlertRequest& request) const;

        /**
         * <p>Creates an alert for an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAlert">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAlertOutcomeCallable CreateAlertCallable(const Model::CreateAlertRequest& request) const;

        /**
         * <p>Creates an alert for an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAlert">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAlertAsync(const Model::CreateAlertRequest& request, const CreateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnomalyDetectorOutcome CreateAnomalyDetector(const Model::CreateAnomalyDetectorRequest& request) const;

        /**
         * <p>Creates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAnomalyDetectorOutcomeCallable CreateAnomalyDetectorCallable(const Model::CreateAnomalyDetectorRequest& request) const;

        /**
         * <p>Creates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAnomalyDetectorAsync(const Model::CreateAnomalyDetectorRequest& request, const CreateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMetricSetOutcome CreateMetricSet(const Model::CreateMetricSetRequest& request) const;

        /**
         * <p>Creates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateMetricSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMetricSetOutcomeCallable CreateMetricSetCallable(const Model::CreateMetricSetRequest& request) const;

        /**
         * <p>Creates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateMetricSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMetricSetAsync(const Model::CreateMetricSetRequest& request, const CreateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlertOutcome DeleteAlert(const Model::DeleteAlertRequest& request) const;

        /**
         * <p>Deletes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAlert">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlertOutcomeCallable DeleteAlertCallable(const Model::DeleteAlertRequest& request) const;

        /**
         * <p>Deletes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAlert">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlertAsync(const Model::DeleteAlertRequest& request, const DeleteAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a detector. Deleting an anomaly detector will delete all of its
         * corresponding resources including any configured datasets and alerts.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalyDetectorOutcome DeleteAnomalyDetector(const Model::DeleteAnomalyDetectorRequest& request) const;

        /**
         * <p>Deletes a detector. Deleting an anomaly detector will delete all of its
         * corresponding resources including any configured datasets and alerts.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnomalyDetectorOutcomeCallable DeleteAnomalyDetectorCallable(const Model::DeleteAnomalyDetectorRequest& request) const;

        /**
         * <p>Deletes a detector. Deleting an anomaly detector will delete all of its
         * corresponding resources including any configured datasets and alerts.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnomalyDetectorAsync(const Model::DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlertOutcome DescribeAlert(const Model::DescribeAlertRequest& request) const;

        /**
         * <p>Describes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAlert">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlertOutcomeCallable DescribeAlertCallable(const Model::DescribeAlertRequest& request) const;

        /**
         * <p>Describes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAlert">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlertAsync(const Model::DescribeAlertRequest& request, const DescribeAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the status of the specified anomaly detection
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAnomalyDetectionExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyDetectionExecutionsOutcome DescribeAnomalyDetectionExecutions(const Model::DescribeAnomalyDetectionExecutionsRequest& request) const;

        /**
         * <p>Returns information about the status of the specified anomaly detection
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAnomalyDetectionExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnomalyDetectionExecutionsOutcomeCallable DescribeAnomalyDetectionExecutionsCallable(const Model::DescribeAnomalyDetectionExecutionsRequest& request) const;

        /**
         * <p>Returns information about the status of the specified anomaly detection
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAnomalyDetectionExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnomalyDetectionExecutionsAsync(const Model::DescribeAnomalyDetectionExecutionsRequest& request, const DescribeAnomalyDetectionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyDetectorOutcome DescribeAnomalyDetector(const Model::DescribeAnomalyDetectorRequest& request) const;

        /**
         * <p>Describes a detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnomalyDetectorOutcomeCallable DescribeAnomalyDetectorCallable(const Model::DescribeAnomalyDetectorRequest& request) const;

        /**
         * <p>Describes a detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnomalyDetectorAsync(const Model::DescribeAnomalyDetectorRequest& request, const DescribeAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricSetOutcome DescribeMetricSet(const Model::DescribeMetricSetRequest& request) const;

        /**
         * <p>Describes a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeMetricSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMetricSetOutcomeCallable DescribeMetricSetCallable(const Model::DescribeMetricSetRequest& request) const;

        /**
         * <p>Describes a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeMetricSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMetricSetAsync(const Model::DescribeMetricSetRequest& request, const DescribeMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about a group of anomalous metrics.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetAnomalyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnomalyGroupOutcome GetAnomalyGroup(const Model::GetAnomalyGroupRequest& request) const;

        /**
         * <p>Returns details about a group of anomalous metrics.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetAnomalyGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnomalyGroupOutcomeCallable GetAnomalyGroupCallable(const Model::GetAnomalyGroupRequest& request) const;

        /**
         * <p>Returns details about a group of anomalous metrics.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetAnomalyGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnomalyGroupAsync(const Model::GetAnomalyGroupRequest& request, const GetAnomalyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get feedback for an anomaly group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFeedbackOutcome GetFeedback(const Model::GetFeedbackRequest& request) const;

        /**
         * <p>Get feedback for an anomaly group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFeedbackOutcomeCallable GetFeedbackCallable(const Model::GetFeedbackRequest& request) const;

        /**
         * <p>Get feedback for an anomaly group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFeedbackAsync(const Model::GetFeedbackRequest& request, const GetFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a selection of sample records from an Amazon S3
         * datasource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetSampleData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSampleDataOutcome GetSampleData(const Model::GetSampleDataRequest& request) const;

        /**
         * <p>Returns a selection of sample records from an Amazon S3
         * datasource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetSampleData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSampleDataOutcomeCallable GetSampleDataCallable(const Model::GetSampleDataRequest& request) const;

        /**
         * <p>Returns a selection of sample records from an Amazon S3
         * datasource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetSampleData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSampleDataAsync(const Model::GetSampleDataRequest& request, const GetSampleDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the alerts attached to a detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAlerts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlertsOutcome ListAlerts(const Model::ListAlertsRequest& request) const;

        /**
         * <p>Lists the alerts attached to a detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAlerts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAlertsOutcomeCallable ListAlertsCallable(const Model::ListAlertsRequest& request) const;

        /**
         * <p>Lists the alerts attached to a detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAlerts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlertsAsync(const Model::ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the detectors in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyDetectorsOutcome ListAnomalyDetectors(const Model::ListAnomalyDetectorsRequest& request) const;

        /**
         * <p>Lists the detectors in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomalyDetectorsOutcomeCallable ListAnomalyDetectorsCallable(const Model::ListAnomalyDetectorsRequest& request) const;

        /**
         * <p>Lists the detectors in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomalyDetectorsAsync(const Model::ListAnomalyDetectorsRequest& request, const ListAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of anomaly groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyGroupSummariesOutcome ListAnomalyGroupSummaries(const Model::ListAnomalyGroupSummariesRequest& request) const;

        /**
         * <p>Returns a list of anomaly groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupSummaries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomalyGroupSummariesOutcomeCallable ListAnomalyGroupSummariesCallable(const Model::ListAnomalyGroupSummariesRequest& request) const;

        /**
         * <p>Returns a list of anomaly groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupSummaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomalyGroupSummariesAsync(const Model::ListAnomalyGroupSummariesRequest& request, const ListAnomalyGroupSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of anomalous metrics for a measure in an anomaly
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupTimeSeries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyGroupTimeSeriesOutcome ListAnomalyGroupTimeSeries(const Model::ListAnomalyGroupTimeSeriesRequest& request) const;

        /**
         * <p>Gets a list of anomalous metrics for a measure in an anomaly
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupTimeSeries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomalyGroupTimeSeriesOutcomeCallable ListAnomalyGroupTimeSeriesCallable(const Model::ListAnomalyGroupTimeSeriesRequest& request) const;

        /**
         * <p>Gets a list of anomalous metrics for a measure in an anomaly
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupTimeSeries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomalyGroupTimeSeriesAsync(const Model::ListAnomalyGroupTimeSeriesRequest& request, const ListAnomalyGroupTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the datasets in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListMetricSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricSetsOutcome ListMetricSets(const Model::ListMetricSetsRequest& request) const;

        /**
         * <p>Lists the datasets in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListMetricSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMetricSetsOutcomeCallable ListMetricSetsCallable(const Model::ListMetricSetsRequest& request) const;

        /**
         * <p>Lists the datasets in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListMetricSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMetricSetsAsync(const Model::ListMetricSetsRequest& request, const ListMetricSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * for a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets a list of <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * for a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets a list of <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * for a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add feedback for an anomalous metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * <p>Add feedback for an anomalous metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/PutFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const Model::PutFeedbackRequest& request) const;

        /**
         * <p>Add feedback for an anomalous metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/PutFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFeedbackAsync(const Model::PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * to a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * to a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * to a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * from a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * from a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * from a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a detector. After activation, you can only change a detector's
         * ingestion delay and description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnomalyDetectorOutcome UpdateAnomalyDetector(const Model::UpdateAnomalyDetectorRequest& request) const;

        /**
         * <p>Updates a detector. After activation, you can only change a detector's
         * ingestion delay and description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAnomalyDetectorOutcomeCallable UpdateAnomalyDetectorCallable(const Model::UpdateAnomalyDetectorRequest& request) const;

        /**
         * <p>Updates a detector. After activation, you can only change a detector's
         * ingestion delay and description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateAnomalyDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAnomalyDetectorAsync(const Model::UpdateAnomalyDetectorRequest& request, const UpdateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMetricSetOutcome UpdateMetricSet(const Model::UpdateMetricSetRequest& request) const;

        /**
         * <p>Updates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateMetricSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMetricSetOutcomeCallable UpdateMetricSetCallable(const Model::UpdateMetricSetRequest& request) const;

        /**
         * <p>Updates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateMetricSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMetricSetAsync(const Model::UpdateMetricSetRequest& request, const UpdateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ActivateAnomalyDetectorAsyncHelper(const Model::ActivateAnomalyDetectorRequest& request, const ActivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BackTestAnomalyDetectorAsyncHelper(const Model::BackTestAnomalyDetectorRequest& request, const BackTestAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAlertAsyncHelper(const Model::CreateAlertRequest& request, const CreateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAnomalyDetectorAsyncHelper(const Model::CreateAnomalyDetectorRequest& request, const CreateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMetricSetAsyncHelper(const Model::CreateMetricSetRequest& request, const CreateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAlertAsyncHelper(const Model::DeleteAlertRequest& request, const DeleteAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAnomalyDetectorAsyncHelper(const Model::DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlertAsyncHelper(const Model::DescribeAlertRequest& request, const DescribeAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnomalyDetectionExecutionsAsyncHelper(const Model::DescribeAnomalyDetectionExecutionsRequest& request, const DescribeAnomalyDetectionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnomalyDetectorAsyncHelper(const Model::DescribeAnomalyDetectorRequest& request, const DescribeAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMetricSetAsyncHelper(const Model::DescribeMetricSetRequest& request, const DescribeMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAnomalyGroupAsyncHelper(const Model::GetAnomalyGroupRequest& request, const GetAnomalyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFeedbackAsyncHelper(const Model::GetFeedbackRequest& request, const GetFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSampleDataAsyncHelper(const Model::GetSampleDataRequest& request, const GetSampleDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAlertsAsyncHelper(const Model::ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomalyDetectorsAsyncHelper(const Model::ListAnomalyDetectorsRequest& request, const ListAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomalyGroupSummariesAsyncHelper(const Model::ListAnomalyGroupSummariesRequest& request, const ListAnomalyGroupSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomalyGroupTimeSeriesAsyncHelper(const Model::ListAnomalyGroupTimeSeriesRequest& request, const ListAnomalyGroupTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMetricSetsAsyncHelper(const Model::ListMetricSetsRequest& request, const ListMetricSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFeedbackAsyncHelper(const Model::PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAnomalyDetectorAsyncHelper(const Model::UpdateAnomalyDetectorRequest& request, const UpdateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMetricSetAsyncHelper(const Model::UpdateMetricSetRequest& request, const UpdateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LookoutMetrics
} // namespace Aws
