/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutmetrics/LookoutMetricsServiceClientModel.h>
#include <aws/lookoutmetrics/LookoutMetricsLegacyAsyncMacros.h>

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
  class AWS_LOOKOUTMETRICS_API LookoutMetricsClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Activates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ActivateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateAnomalyDetectorOutcome ActivateAnomalyDetector(const Model::ActivateAnomalyDetectorRequest& request) const;


        /**
         * <p>Runs a backtest for anomaly detection for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/BackTestAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::BackTestAnomalyDetectorOutcome BackTestAnomalyDetector(const Model::BackTestAnomalyDetectorRequest& request) const;


        /**
         * <p>Creates an alert for an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlertOutcome CreateAlert(const Model::CreateAlertRequest& request) const;


        /**
         * <p>Creates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnomalyDetectorOutcome CreateAnomalyDetector(const Model::CreateAnomalyDetectorRequest& request) const;


        /**
         * <p>Creates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMetricSetOutcome CreateMetricSet(const Model::CreateMetricSetRequest& request) const;


        /**
         * <p>Deactivates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeactivateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateAnomalyDetectorOutcome DeactivateAnomalyDetector(const Model::DeactivateAnomalyDetectorRequest& request) const;


        /**
         * <p>Deletes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlertOutcome DeleteAlert(const Model::DeleteAlertRequest& request) const;


        /**
         * <p>Deletes a detector. Deleting an anomaly detector will delete all of its
         * corresponding resources including any configured datasets and
         * alerts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalyDetectorOutcome DeleteAnomalyDetector(const Model::DeleteAnomalyDetectorRequest& request) const;


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
         * <p>Returns information about the status of the specified anomaly detection
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeAnomalyDetectionExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyDetectionExecutionsOutcome DescribeAnomalyDetectionExecutions(const Model::DescribeAnomalyDetectionExecutionsRequest& request) const;


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
         * <p>Describes a dataset.</p> <p>Amazon Lookout for Metrics API actions are
         * eventually consistent. If you do a read operation on a resource immediately
         * after creating or modifying it, use retries to allow time for the write
         * operation to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DescribeMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricSetOutcome DescribeMetricSet(const Model::DescribeMetricSetRequest& request) const;


        /**
         * <p>Detects an Amazon S3 dataset's file format, interval, and
         * offset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectMetricSetConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectMetricSetConfigOutcome DetectMetricSetConfig(const Model::DetectMetricSetConfigRequest& request) const;


        /**
         * <p>Returns details about a group of anomalous metrics.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetAnomalyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnomalyGroupOutcome GetAnomalyGroup(const Model::GetAnomalyGroupRequest& request) const;


        /**
         * <p>Returns details about the requested data quality metrics.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetDataQualityMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataQualityMetricsOutcome GetDataQualityMetrics(const Model::GetDataQualityMetricsRequest& request) const;


        /**
         * <p>Get feedback for an anomaly group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFeedbackOutcome GetFeedback(const Model::GetFeedbackRequest& request) const;


        /**
         * <p>Returns a selection of sample records from an Amazon S3
         * datasource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetSampleData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSampleDataOutcome GetSampleData(const Model::GetSampleDataRequest& request) const;


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
         * <p>Lists the detectors in the current AWS Region.</p> <p>Amazon Lookout for
         * Metrics API actions are eventually consistent. If you do a read operation on a
         * resource immediately after creating or modifying it, use retries to allow time
         * for the write operation to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyDetectorsOutcome ListAnomalyDetectors(const Model::ListAnomalyDetectorsRequest& request) const;


        /**
         * <p>Returns a list of measures that are potential causes or effects of an anomaly
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupRelatedMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyGroupRelatedMetricsOutcome ListAnomalyGroupRelatedMetrics(const Model::ListAnomalyGroupRelatedMetricsRequest& request) const;


        /**
         * <p>Returns a list of anomaly groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyGroupSummariesOutcome ListAnomalyGroupSummaries(const Model::ListAnomalyGroupSummariesRequest& request) const;


        /**
         * <p>Gets a list of anomalous metrics for a measure in an anomaly
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupTimeSeries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyGroupTimeSeriesOutcome ListAnomalyGroupTimeSeries(const Model::ListAnomalyGroupTimeSeriesRequest& request) const;


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
         * <p>Gets a list of <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * for a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Add feedback for an anomalous metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;


        /**
         * <p>Adds <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * to a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes <a
         * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
         * from a detector, dataset, or alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Make changes to an existing alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAlertOutcome UpdateAlert(const Model::UpdateAlertRequest& request) const;


        /**
         * <p>Updates a detector. After activation, you can only change a detector's
         * ingestion delay and description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnomalyDetectorOutcome UpdateAnomalyDetector(const Model::UpdateAnomalyDetectorRequest& request) const;


        /**
         * <p>Updates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMetricSetOutcome UpdateMetricSet(const Model::UpdateMetricSetRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LookoutMetricsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LookoutMetricsClientConfiguration& clientConfiguration);

      LookoutMetricsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LookoutMetricsEndpointProviderBase> m_endpointProvider;
  };

} // namespace LookoutMetrics
} // namespace Aws
