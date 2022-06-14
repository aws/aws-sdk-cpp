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
#include <aws/lookoutmetrics/model/DeactivateAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/DeleteAlertResult.h>
#include <aws/lookoutmetrics/model/DeleteAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/DescribeAlertResult.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectionExecutionsResult.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/DescribeMetricSetResult.h>
#include <aws/lookoutmetrics/model/DetectMetricSetConfigResult.h>
#include <aws/lookoutmetrics/model/GetAnomalyGroupResult.h>
#include <aws/lookoutmetrics/model/GetFeedbackResult.h>
#include <aws/lookoutmetrics/model/GetSampleDataResult.h>
#include <aws/lookoutmetrics/model/ListAlertsResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyDetectorsResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupRelatedMetricsResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupSummariesResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupTimeSeriesResult.h>
#include <aws/lookoutmetrics/model/ListMetricSetsResult.h>
#include <aws/lookoutmetrics/model/ListTagsForResourceResult.h>
#include <aws/lookoutmetrics/model/PutFeedbackResult.h>
#include <aws/lookoutmetrics/model/TagResourceResult.h>
#include <aws/lookoutmetrics/model/UntagResourceResult.h>
#include <aws/lookoutmetrics/model/UpdateAlertResult.h>
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
        class DeactivateAnomalyDetectorRequest;
        class DeleteAlertRequest;
        class DeleteAnomalyDetectorRequest;
        class DescribeAlertRequest;
        class DescribeAnomalyDetectionExecutionsRequest;
        class DescribeAnomalyDetectorRequest;
        class DescribeMetricSetRequest;
        class DetectMetricSetConfigRequest;
        class GetAnomalyGroupRequest;
        class GetFeedbackRequest;
        class GetSampleDataRequest;
        class ListAlertsRequest;
        class ListAnomalyDetectorsRequest;
        class ListAnomalyGroupRelatedMetricsRequest;
        class ListAnomalyGroupSummariesRequest;
        class ListAnomalyGroupTimeSeriesRequest;
        class ListMetricSetsRequest;
        class ListTagsForResourceRequest;
        class PutFeedbackRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAlertRequest;
        class UpdateAnomalyDetectorRequest;
        class UpdateMetricSetRequest;

        typedef Aws::Utils::Outcome<ActivateAnomalyDetectorResult, LookoutMetricsError> ActivateAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<BackTestAnomalyDetectorResult, LookoutMetricsError> BackTestAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<CreateAlertResult, LookoutMetricsError> CreateAlertOutcome;
        typedef Aws::Utils::Outcome<CreateAnomalyDetectorResult, LookoutMetricsError> CreateAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<CreateMetricSetResult, LookoutMetricsError> CreateMetricSetOutcome;
        typedef Aws::Utils::Outcome<DeactivateAnomalyDetectorResult, LookoutMetricsError> DeactivateAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<DeleteAlertResult, LookoutMetricsError> DeleteAlertOutcome;
        typedef Aws::Utils::Outcome<DeleteAnomalyDetectorResult, LookoutMetricsError> DeleteAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<DescribeAlertResult, LookoutMetricsError> DescribeAlertOutcome;
        typedef Aws::Utils::Outcome<DescribeAnomalyDetectionExecutionsResult, LookoutMetricsError> DescribeAnomalyDetectionExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAnomalyDetectorResult, LookoutMetricsError> DescribeAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<DescribeMetricSetResult, LookoutMetricsError> DescribeMetricSetOutcome;
        typedef Aws::Utils::Outcome<DetectMetricSetConfigResult, LookoutMetricsError> DetectMetricSetConfigOutcome;
        typedef Aws::Utils::Outcome<GetAnomalyGroupResult, LookoutMetricsError> GetAnomalyGroupOutcome;
        typedef Aws::Utils::Outcome<GetFeedbackResult, LookoutMetricsError> GetFeedbackOutcome;
        typedef Aws::Utils::Outcome<GetSampleDataResult, LookoutMetricsError> GetSampleDataOutcome;
        typedef Aws::Utils::Outcome<ListAlertsResult, LookoutMetricsError> ListAlertsOutcome;
        typedef Aws::Utils::Outcome<ListAnomalyDetectorsResult, LookoutMetricsError> ListAnomalyDetectorsOutcome;
        typedef Aws::Utils::Outcome<ListAnomalyGroupRelatedMetricsResult, LookoutMetricsError> ListAnomalyGroupRelatedMetricsOutcome;
        typedef Aws::Utils::Outcome<ListAnomalyGroupSummariesResult, LookoutMetricsError> ListAnomalyGroupSummariesOutcome;
        typedef Aws::Utils::Outcome<ListAnomalyGroupTimeSeriesResult, LookoutMetricsError> ListAnomalyGroupTimeSeriesOutcome;
        typedef Aws::Utils::Outcome<ListMetricSetsResult, LookoutMetricsError> ListMetricSetsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, LookoutMetricsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutFeedbackResult, LookoutMetricsError> PutFeedbackOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LookoutMetricsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LookoutMetricsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAlertResult, LookoutMetricsError> UpdateAlertOutcome;
        typedef Aws::Utils::Outcome<UpdateAnomalyDetectorResult, LookoutMetricsError> UpdateAnomalyDetectorOutcome;
        typedef Aws::Utils::Outcome<UpdateMetricSetResult, LookoutMetricsError> UpdateMetricSetOutcome;

        typedef std::future<ActivateAnomalyDetectorOutcome> ActivateAnomalyDetectorOutcomeCallable;
        typedef std::future<BackTestAnomalyDetectorOutcome> BackTestAnomalyDetectorOutcomeCallable;
        typedef std::future<CreateAlertOutcome> CreateAlertOutcomeCallable;
        typedef std::future<CreateAnomalyDetectorOutcome> CreateAnomalyDetectorOutcomeCallable;
        typedef std::future<CreateMetricSetOutcome> CreateMetricSetOutcomeCallable;
        typedef std::future<DeactivateAnomalyDetectorOutcome> DeactivateAnomalyDetectorOutcomeCallable;
        typedef std::future<DeleteAlertOutcome> DeleteAlertOutcomeCallable;
        typedef std::future<DeleteAnomalyDetectorOutcome> DeleteAnomalyDetectorOutcomeCallable;
        typedef std::future<DescribeAlertOutcome> DescribeAlertOutcomeCallable;
        typedef std::future<DescribeAnomalyDetectionExecutionsOutcome> DescribeAnomalyDetectionExecutionsOutcomeCallable;
        typedef std::future<DescribeAnomalyDetectorOutcome> DescribeAnomalyDetectorOutcomeCallable;
        typedef std::future<DescribeMetricSetOutcome> DescribeMetricSetOutcomeCallable;
        typedef std::future<DetectMetricSetConfigOutcome> DetectMetricSetConfigOutcomeCallable;
        typedef std::future<GetAnomalyGroupOutcome> GetAnomalyGroupOutcomeCallable;
        typedef std::future<GetFeedbackOutcome> GetFeedbackOutcomeCallable;
        typedef std::future<GetSampleDataOutcome> GetSampleDataOutcomeCallable;
        typedef std::future<ListAlertsOutcome> ListAlertsOutcomeCallable;
        typedef std::future<ListAnomalyDetectorsOutcome> ListAnomalyDetectorsOutcomeCallable;
        typedef std::future<ListAnomalyGroupRelatedMetricsOutcome> ListAnomalyGroupRelatedMetricsOutcomeCallable;
        typedef std::future<ListAnomalyGroupSummariesOutcome> ListAnomalyGroupSummariesOutcomeCallable;
        typedef std::future<ListAnomalyGroupTimeSeriesOutcome> ListAnomalyGroupTimeSeriesOutcomeCallable;
        typedef std::future<ListMetricSetsOutcome> ListMetricSetsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAlertOutcome> UpdateAlertOutcomeCallable;
        typedef std::future<UpdateAnomalyDetectorOutcome> UpdateAnomalyDetectorOutcomeCallable;
        typedef std::future<UpdateMetricSetOutcome> UpdateMetricSetOutcomeCallable;
} // namespace Model

  class LookoutMetricsClient;

    typedef std::function<void(const LookoutMetricsClient*, const Model::ActivateAnomalyDetectorRequest&, const Model::ActivateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::BackTestAnomalyDetectorRequest&, const Model::BackTestAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BackTestAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateAlertRequest&, const Model::CreateAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateAnomalyDetectorRequest&, const Model::CreateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateMetricSetRequest&, const Model::CreateMetricSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMetricSetResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DeactivateAnomalyDetectorRequest&, const Model::DeactivateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DeleteAlertRequest&, const Model::DeleteAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DeleteAnomalyDetectorRequest&, const Model::DeleteAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAlertRequest&, const Model::DescribeAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAnomalyDetectionExecutionsRequest&, const Model::DescribeAnomalyDetectionExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectionExecutionsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAnomalyDetectorRequest&, const Model::DescribeAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeMetricSetRequest&, const Model::DescribeMetricSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricSetResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DetectMetricSetConfigRequest&, const Model::DetectMetricSetConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectMetricSetConfigResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetAnomalyGroupRequest&, const Model::GetAnomalyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnomalyGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetFeedbackRequest&, const Model::GetFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFeedbackResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetSampleDataRequest&, const Model::GetSampleDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSampleDataResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAlertsRequest&, const Model::ListAlertsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlertsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyDetectorsRequest&, const Model::ListAnomalyDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyDetectorsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyGroupRelatedMetricsRequest&, const Model::ListAnomalyGroupRelatedMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyGroupRelatedMetricsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyGroupSummariesRequest&, const Model::ListAnomalyGroupSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyGroupSummariesResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyGroupTimeSeriesRequest&, const Model::ListAnomalyGroupTimeSeriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyGroupTimeSeriesResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListMetricSetsRequest&, const Model::ListMetricSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricSetsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UpdateAlertRequest&, const Model::UpdateAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAlertResponseReceivedHandler;
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
         * A Callable wrapper for ActivateAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateAnomalyDetectorOutcomeCallable ActivateAnomalyDetectorCallable(const Model::ActivateAnomalyDetectorRequest& request) const;

        /**
         * An Async wrapper for ActivateAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for BackTestAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BackTestAnomalyDetectorOutcomeCallable BackTestAnomalyDetectorCallable(const Model::BackTestAnomalyDetectorRequest& request) const;

        /**
         * An Async wrapper for BackTestAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BackTestAnomalyDetectorAsync(const Model::BackTestAnomalyDetectorRequest& request, const BackTestAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alert for an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlertOutcome CreateAlert(const Model::CreateAlertRequest& request) const;

        /**
         * A Callable wrapper for CreateAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAlertOutcomeCallable CreateAlertCallable(const Model::CreateAlertRequest& request) const;

        /**
         * An Async wrapper for CreateAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAlertAsync(const Model::CreateAlertRequest& request, const CreateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnomalyDetectorOutcome CreateAnomalyDetector(const Model::CreateAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for CreateAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAnomalyDetectorOutcomeCallable CreateAnomalyDetectorCallable(const Model::CreateAnomalyDetectorRequest& request) const;

        /**
         * An Async wrapper for CreateAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAnomalyDetectorAsync(const Model::CreateAnomalyDetectorRequest& request, const CreateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMetricSetOutcome CreateMetricSet(const Model::CreateMetricSetRequest& request) const;

        /**
         * A Callable wrapper for CreateMetricSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMetricSetOutcomeCallable CreateMetricSetCallable(const Model::CreateMetricSetRequest& request) const;

        /**
         * An Async wrapper for CreateMetricSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMetricSetAsync(const Model::CreateMetricSetRequest& request, const CreateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeactivateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateAnomalyDetectorOutcome DeactivateAnomalyDetector(const Model::DeactivateAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for DeactivateAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateAnomalyDetectorOutcomeCallable DeactivateAnomalyDetectorCallable(const Model::DeactivateAnomalyDetectorRequest& request) const;

        /**
         * An Async wrapper for DeactivateAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateAnomalyDetectorAsync(const Model::DeactivateAnomalyDetectorRequest& request, const DeactivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlertOutcome DeleteAlert(const Model::DeleteAlertRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlertOutcomeCallable DeleteAlertCallable(const Model::DeleteAlertRequest& request) const;

        /**
         * An Async wrapper for DeleteAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlertAsync(const Model::DeleteAlertRequest& request, const DeleteAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a detector. Deleting an anomaly detector will delete all of its
         * corresponding resources including any configured datasets and
         * alerts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalyDetectorOutcome DeleteAnomalyDetector(const Model::DeleteAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnomalyDetectorOutcomeCallable DeleteAnomalyDetectorCallable(const Model::DeleteAnomalyDetectorRequest& request) const;

        /**
         * An Async wrapper for DeleteAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnomalyDetectorAsync(const Model::DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an alert.</p> <p>Amazon Lookout for Metrics API actions are
         * eventually consistent. If you do a read operation on a resource immediately
         * after creating or modifying it, use retries to allow time for the write
         * operation to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlertOutcome DescribeAlert(const Model::DescribeAlertRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlertOutcomeCallable DescribeAlertCallable(const Model::DescribeAlertRequest& request) const;

        /**
         * An Async wrapper for DescribeAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeAnomalyDetectionExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnomalyDetectionExecutionsOutcomeCallable DescribeAnomalyDetectionExecutionsCallable(const Model::DescribeAnomalyDetectionExecutionsRequest& request) const;

        /**
         * An Async wrapper for DescribeAnomalyDetectionExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnomalyDetectionExecutionsAsync(const Model::DescribeAnomalyDetectionExecutionsRequest& request, const DescribeAnomalyDetectionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a detector.</p> <p>Amazon Lookout for Metrics API actions are
         * eventually consistent. If you do a read operation on a resource immediately
         * after creating or modifying it, use retries to allow time for the write
         * operation to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyDetectorOutcome DescribeAnomalyDetector(const Model::DescribeAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnomalyDetectorOutcomeCallable DescribeAnomalyDetectorCallable(const Model::DescribeAnomalyDetectorRequest& request) const;

        /**
         * An Async wrapper for DescribeAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnomalyDetectorAsync(const Model::DescribeAnomalyDetectorRequest& request, const DescribeAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a dataset.</p> <p>Amazon Lookout for Metrics API actions are
         * eventually consistent. If you do a read operation on a resource immediately
         * after creating or modifying it, use retries to allow time for the write
         * operation to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricSetOutcome DescribeMetricSet(const Model::DescribeMetricSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetricSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMetricSetOutcomeCallable DescribeMetricSetCallable(const Model::DescribeMetricSetRequest& request) const;

        /**
         * An Async wrapper for DescribeMetricSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMetricSetAsync(const Model::DescribeMetricSetRequest& request, const DescribeMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects an Amazon S3 dataset's file format, interval, and
         * offset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectMetricSetConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectMetricSetConfigOutcome DetectMetricSetConfig(const Model::DetectMetricSetConfigRequest& request) const;

        /**
         * A Callable wrapper for DetectMetricSetConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectMetricSetConfigOutcomeCallable DetectMetricSetConfigCallable(const Model::DetectMetricSetConfigRequest& request) const;

        /**
         * An Async wrapper for DetectMetricSetConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectMetricSetConfigAsync(const Model::DetectMetricSetConfigRequest& request, const DetectMetricSetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about a group of anomalous metrics.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetAnomalyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnomalyGroupOutcome GetAnomalyGroup(const Model::GetAnomalyGroupRequest& request) const;

        /**
         * A Callable wrapper for GetAnomalyGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnomalyGroupOutcomeCallable GetAnomalyGroupCallable(const Model::GetAnomalyGroupRequest& request) const;

        /**
         * An Async wrapper for GetAnomalyGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnomalyGroupAsync(const Model::GetAnomalyGroupRequest& request, const GetAnomalyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get feedback for an anomaly group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFeedbackOutcome GetFeedback(const Model::GetFeedbackRequest& request) const;

        /**
         * A Callable wrapper for GetFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFeedbackOutcomeCallable GetFeedbackCallable(const Model::GetFeedbackRequest& request) const;

        /**
         * An Async wrapper for GetFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetSampleData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSampleDataOutcomeCallable GetSampleDataCallable(const Model::GetSampleDataRequest& request) const;

        /**
         * An Async wrapper for GetSampleData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSampleDataAsync(const Model::GetSampleDataRequest& request, const GetSampleDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the alerts attached to a detector.</p> <p>Amazon Lookout for Metrics
         * API actions are eventually consistent. If you do a read operation on a resource
         * immediately after creating or modifying it, use retries to allow time for the
         * write operation to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAlerts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlertsOutcome ListAlerts(const Model::ListAlertsRequest& request) const;

        /**
         * A Callable wrapper for ListAlerts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAlertsOutcomeCallable ListAlertsCallable(const Model::ListAlertsRequest& request) const;

        /**
         * An Async wrapper for ListAlerts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlertsAsync(const Model::ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the detectors in the current AWS Region.</p> <p>Amazon Lookout for
         * Metrics API actions are eventually consistent. If you do a read operation on a
         * resource immediately after creating or modifying it, use retries to allow time
         * for the write operation to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyDetectorsOutcome ListAnomalyDetectors(const Model::ListAnomalyDetectorsRequest& request) const;

        /**
         * A Callable wrapper for ListAnomalyDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomalyDetectorsOutcomeCallable ListAnomalyDetectorsCallable(const Model::ListAnomalyDetectorsRequest& request) const;

        /**
         * An Async wrapper for ListAnomalyDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomalyDetectorsAsync(const Model::ListAnomalyDetectorsRequest& request, const ListAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of measures that are potential causes or effects of an anomaly
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupRelatedMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyGroupRelatedMetricsOutcome ListAnomalyGroupRelatedMetrics(const Model::ListAnomalyGroupRelatedMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListAnomalyGroupRelatedMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomalyGroupRelatedMetricsOutcomeCallable ListAnomalyGroupRelatedMetricsCallable(const Model::ListAnomalyGroupRelatedMetricsRequest& request) const;

        /**
         * An Async wrapper for ListAnomalyGroupRelatedMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomalyGroupRelatedMetricsAsync(const Model::ListAnomalyGroupRelatedMetricsRequest& request, const ListAnomalyGroupRelatedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of anomaly groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyGroupSummariesOutcome ListAnomalyGroupSummaries(const Model::ListAnomalyGroupSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListAnomalyGroupSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomalyGroupSummariesOutcomeCallable ListAnomalyGroupSummariesCallable(const Model::ListAnomalyGroupSummariesRequest& request) const;

        /**
         * An Async wrapper for ListAnomalyGroupSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListAnomalyGroupTimeSeries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomalyGroupTimeSeriesOutcomeCallable ListAnomalyGroupTimeSeriesCallable(const Model::ListAnomalyGroupTimeSeriesRequest& request) const;

        /**
         * An Async wrapper for ListAnomalyGroupTimeSeries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomalyGroupTimeSeriesAsync(const Model::ListAnomalyGroupTimeSeriesRequest& request, const ListAnomalyGroupTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the datasets in the current AWS Region.</p> <p>Amazon Lookout for
         * Metrics API actions are eventually consistent. If you do a read operation on a
         * resource immediately after creating or modifying it, use retries to allow time
         * for the write operation to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListMetricSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricSetsOutcome ListMetricSets(const Model::ListMetricSetsRequest& request) const;

        /**
         * A Callable wrapper for ListMetricSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMetricSetsOutcomeCallable ListMetricSetsCallable(const Model::ListMetricSetsRequest& request) const;

        /**
         * An Async wrapper for ListMetricSets that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add feedback for an anomalous metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * A Callable wrapper for PutFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const Model::PutFeedbackRequest& request) const;

        /**
         * An Async wrapper for PutFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Make changes to an existing alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAlertOutcome UpdateAlert(const Model::UpdateAlertRequest& request) const;

        /**
         * A Callable wrapper for UpdateAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAlertOutcomeCallable UpdateAlertCallable(const Model::UpdateAlertRequest& request) const;

        /**
         * An Async wrapper for UpdateAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAlertAsync(const Model::UpdateAlertRequest& request, const UpdateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a detector. After activation, you can only change a detector's
         * ingestion delay and description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnomalyDetectorOutcome UpdateAnomalyDetector(const Model::UpdateAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAnomalyDetectorOutcomeCallable UpdateAnomalyDetectorCallable(const Model::UpdateAnomalyDetectorRequest& request) const;

        /**
         * An Async wrapper for UpdateAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAnomalyDetectorAsync(const Model::UpdateAnomalyDetectorRequest& request, const UpdateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMetricSetOutcome UpdateMetricSet(const Model::UpdateMetricSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateMetricSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMetricSetOutcomeCallable UpdateMetricSetCallable(const Model::UpdateMetricSetRequest& request) const;

        /**
         * An Async wrapper for UpdateMetricSet that queues the request into a thread executor and triggers associated callback when operation has finished.
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
        void DeactivateAnomalyDetectorAsyncHelper(const Model::DeactivateAnomalyDetectorRequest& request, const DeactivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAlertAsyncHelper(const Model::DeleteAlertRequest& request, const DeleteAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAnomalyDetectorAsyncHelper(const Model::DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlertAsyncHelper(const Model::DescribeAlertRequest& request, const DescribeAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnomalyDetectionExecutionsAsyncHelper(const Model::DescribeAnomalyDetectionExecutionsRequest& request, const DescribeAnomalyDetectionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnomalyDetectorAsyncHelper(const Model::DescribeAnomalyDetectorRequest& request, const DescribeAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMetricSetAsyncHelper(const Model::DescribeMetricSetRequest& request, const DescribeMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectMetricSetConfigAsyncHelper(const Model::DetectMetricSetConfigRequest& request, const DetectMetricSetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAnomalyGroupAsyncHelper(const Model::GetAnomalyGroupRequest& request, const GetAnomalyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFeedbackAsyncHelper(const Model::GetFeedbackRequest& request, const GetFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSampleDataAsyncHelper(const Model::GetSampleDataRequest& request, const GetSampleDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAlertsAsyncHelper(const Model::ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomalyDetectorsAsyncHelper(const Model::ListAnomalyDetectorsRequest& request, const ListAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomalyGroupRelatedMetricsAsyncHelper(const Model::ListAnomalyGroupRelatedMetricsRequest& request, const ListAnomalyGroupRelatedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomalyGroupSummariesAsyncHelper(const Model::ListAnomalyGroupSummariesRequest& request, const ListAnomalyGroupSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomalyGroupTimeSeriesAsyncHelper(const Model::ListAnomalyGroupTimeSeriesRequest& request, const ListAnomalyGroupTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMetricSetsAsyncHelper(const Model::ListMetricSetsRequest& request, const ListMetricSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFeedbackAsyncHelper(const Model::PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAlertAsyncHelper(const Model::UpdateAlertRequest& request, const UpdateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAnomalyDetectorAsyncHelper(const Model::UpdateAnomalyDetectorRequest& request, const UpdateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMetricSetAsyncHelper(const Model::UpdateMetricSetRequest& request, const UpdateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LookoutMetrics
} // namespace Aws
