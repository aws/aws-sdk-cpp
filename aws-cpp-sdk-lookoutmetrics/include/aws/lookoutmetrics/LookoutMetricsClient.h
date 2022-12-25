/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutmetrics/LookoutMetricsServiceClientModel.h>

namespace Aws
{
namespace LookoutMetrics
{
  /**
   * <p>This is the <i>Amazon Lookout for Metrics API Reference</i>. For an
   * introduction to the service with tutorials for getting started, visit <a
   * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for
   * Metrics Developer Guide</a>.</p>
   */
  class AWS_LOOKOUTMETRICS_API LookoutMetricsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LookoutMetricsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutMetricsClient(const Aws::LookoutMetrics::LookoutMetricsClientConfiguration& clientConfiguration = Aws::LookoutMetrics::LookoutMetricsClientConfiguration(),
                             std::shared_ptr<LookoutMetricsEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutMetricsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutMetricsClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<LookoutMetricsEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutMetricsEndpointProvider>(ALLOCATION_TAG),
                             const Aws::LookoutMetrics::LookoutMetricsClientConfiguration& clientConfiguration = Aws::LookoutMetrics::LookoutMetricsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutMetricsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<LookoutMetricsEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutMetricsEndpointProvider>(ALLOCATION_TAG),
                             const Aws::LookoutMetrics::LookoutMetricsClientConfiguration& clientConfiguration = Aws::LookoutMetrics::LookoutMetricsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutMetricsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutMetricsClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutMetricsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * <p>Returns details about the requested data quality metrics.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetDataQualityMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataQualityMetricsOutcome GetDataQualityMetrics(const Model::GetDataQualityMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetDataQualityMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataQualityMetricsOutcomeCallable GetDataQualityMetricsCallable(const Model::GetDataQualityMetricsRequest& request) const;

        /**
         * An Async wrapper for GetDataQualityMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataQualityMetricsAsync(const Model::GetDataQualityMetricsRequest& request, const GetDataQualityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
      std::shared_ptr<LookoutMetricsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LookoutMetricsClient>;
      void init(const LookoutMetricsClientConfiguration& clientConfiguration);

      LookoutMetricsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LookoutMetricsEndpointProviderBase> m_endpointProvider;
  };

} // namespace LookoutMetrics
} // namespace Aws
