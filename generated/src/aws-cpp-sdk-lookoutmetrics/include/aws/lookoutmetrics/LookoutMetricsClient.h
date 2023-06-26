﻿/**
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

      typedef LookoutMetricsClientConfiguration ClientConfigurationType;
      typedef LookoutMetricsEndpointProvider EndpointProviderType;

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
        template<typename ActivateAnomalyDetectorRequestT = Model::ActivateAnomalyDetectorRequest>
        Model::ActivateAnomalyDetectorOutcomeCallable ActivateAnomalyDetectorCallable(const ActivateAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::ActivateAnomalyDetector, request);
        }

        /**
         * An Async wrapper for ActivateAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateAnomalyDetectorRequestT = Model::ActivateAnomalyDetectorRequest>
        void ActivateAnomalyDetectorAsync(const ActivateAnomalyDetectorRequestT& request, const ActivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::ActivateAnomalyDetector, request, handler, context);
        }

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
        template<typename BackTestAnomalyDetectorRequestT = Model::BackTestAnomalyDetectorRequest>
        Model::BackTestAnomalyDetectorOutcomeCallable BackTestAnomalyDetectorCallable(const BackTestAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::BackTestAnomalyDetector, request);
        }

        /**
         * An Async wrapper for BackTestAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BackTestAnomalyDetectorRequestT = Model::BackTestAnomalyDetectorRequest>
        void BackTestAnomalyDetectorAsync(const BackTestAnomalyDetectorRequestT& request, const BackTestAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::BackTestAnomalyDetector, request, handler, context);
        }

        /**
         * <p>Creates an alert for an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlertOutcome CreateAlert(const Model::CreateAlertRequest& request) const;

        /**
         * A Callable wrapper for CreateAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAlertRequestT = Model::CreateAlertRequest>
        Model::CreateAlertOutcomeCallable CreateAlertCallable(const CreateAlertRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::CreateAlert, request);
        }

        /**
         * An Async wrapper for CreateAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAlertRequestT = Model::CreateAlertRequest>
        void CreateAlertAsync(const CreateAlertRequestT& request, const CreateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::CreateAlert, request, handler, context);
        }

        /**
         * <p>Creates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnomalyDetectorOutcome CreateAnomalyDetector(const Model::CreateAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for CreateAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAnomalyDetectorRequestT = Model::CreateAnomalyDetectorRequest>
        Model::CreateAnomalyDetectorOutcomeCallable CreateAnomalyDetectorCallable(const CreateAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::CreateAnomalyDetector, request);
        }

        /**
         * An Async wrapper for CreateAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAnomalyDetectorRequestT = Model::CreateAnomalyDetectorRequest>
        void CreateAnomalyDetectorAsync(const CreateAnomalyDetectorRequestT& request, const CreateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::CreateAnomalyDetector, request, handler, context);
        }

        /**
         * <p>Creates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CreateMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMetricSetOutcome CreateMetricSet(const Model::CreateMetricSetRequest& request) const;

        /**
         * A Callable wrapper for CreateMetricSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMetricSetRequestT = Model::CreateMetricSetRequest>
        Model::CreateMetricSetOutcomeCallable CreateMetricSetCallable(const CreateMetricSetRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::CreateMetricSet, request);
        }

        /**
         * An Async wrapper for CreateMetricSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMetricSetRequestT = Model::CreateMetricSetRequest>
        void CreateMetricSetAsync(const CreateMetricSetRequestT& request, const CreateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::CreateMetricSet, request, handler, context);
        }

        /**
         * <p>Deactivates an anomaly detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeactivateAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateAnomalyDetectorOutcome DeactivateAnomalyDetector(const Model::DeactivateAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for DeactivateAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeactivateAnomalyDetectorRequestT = Model::DeactivateAnomalyDetectorRequest>
        Model::DeactivateAnomalyDetectorOutcomeCallable DeactivateAnomalyDetectorCallable(const DeactivateAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::DeactivateAnomalyDetector, request);
        }

        /**
         * An Async wrapper for DeactivateAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeactivateAnomalyDetectorRequestT = Model::DeactivateAnomalyDetectorRequest>
        void DeactivateAnomalyDetectorAsync(const DeactivateAnomalyDetectorRequestT& request, const DeactivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::DeactivateAnomalyDetector, request, handler, context);
        }

        /**
         * <p>Deletes an alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DeleteAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlertOutcome DeleteAlert(const Model::DeleteAlertRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAlertRequestT = Model::DeleteAlertRequest>
        Model::DeleteAlertOutcomeCallable DeleteAlertCallable(const DeleteAlertRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::DeleteAlert, request);
        }

        /**
         * An Async wrapper for DeleteAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAlertRequestT = Model::DeleteAlertRequest>
        void DeleteAlertAsync(const DeleteAlertRequestT& request, const DeleteAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::DeleteAlert, request, handler, context);
        }

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
        template<typename DeleteAnomalyDetectorRequestT = Model::DeleteAnomalyDetectorRequest>
        Model::DeleteAnomalyDetectorOutcomeCallable DeleteAnomalyDetectorCallable(const DeleteAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::DeleteAnomalyDetector, request);
        }

        /**
         * An Async wrapper for DeleteAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnomalyDetectorRequestT = Model::DeleteAnomalyDetectorRequest>
        void DeleteAnomalyDetectorAsync(const DeleteAnomalyDetectorRequestT& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::DeleteAnomalyDetector, request, handler, context);
        }

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
        template<typename DescribeAlertRequestT = Model::DescribeAlertRequest>
        Model::DescribeAlertOutcomeCallable DescribeAlertCallable(const DescribeAlertRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::DescribeAlert, request);
        }

        /**
         * An Async wrapper for DescribeAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlertRequestT = Model::DescribeAlertRequest>
        void DescribeAlertAsync(const DescribeAlertRequestT& request, const DescribeAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::DescribeAlert, request, handler, context);
        }

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
        template<typename DescribeAnomalyDetectionExecutionsRequestT = Model::DescribeAnomalyDetectionExecutionsRequest>
        Model::DescribeAnomalyDetectionExecutionsOutcomeCallable DescribeAnomalyDetectionExecutionsCallable(const DescribeAnomalyDetectionExecutionsRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::DescribeAnomalyDetectionExecutions, request);
        }

        /**
         * An Async wrapper for DescribeAnomalyDetectionExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAnomalyDetectionExecutionsRequestT = Model::DescribeAnomalyDetectionExecutionsRequest>
        void DescribeAnomalyDetectionExecutionsAsync(const DescribeAnomalyDetectionExecutionsRequestT& request, const DescribeAnomalyDetectionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::DescribeAnomalyDetectionExecutions, request, handler, context);
        }

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
        template<typename DescribeAnomalyDetectorRequestT = Model::DescribeAnomalyDetectorRequest>
        Model::DescribeAnomalyDetectorOutcomeCallable DescribeAnomalyDetectorCallable(const DescribeAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::DescribeAnomalyDetector, request);
        }

        /**
         * An Async wrapper for DescribeAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAnomalyDetectorRequestT = Model::DescribeAnomalyDetectorRequest>
        void DescribeAnomalyDetectorAsync(const DescribeAnomalyDetectorRequestT& request, const DescribeAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::DescribeAnomalyDetector, request, handler, context);
        }

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
        template<typename DescribeMetricSetRequestT = Model::DescribeMetricSetRequest>
        Model::DescribeMetricSetOutcomeCallable DescribeMetricSetCallable(const DescribeMetricSetRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::DescribeMetricSet, request);
        }

        /**
         * An Async wrapper for DescribeMetricSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMetricSetRequestT = Model::DescribeMetricSetRequest>
        void DescribeMetricSetAsync(const DescribeMetricSetRequestT& request, const DescribeMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::DescribeMetricSet, request, handler, context);
        }

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
        template<typename DetectMetricSetConfigRequestT = Model::DetectMetricSetConfigRequest>
        Model::DetectMetricSetConfigOutcomeCallable DetectMetricSetConfigCallable(const DetectMetricSetConfigRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::DetectMetricSetConfig, request);
        }

        /**
         * An Async wrapper for DetectMetricSetConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectMetricSetConfigRequestT = Model::DetectMetricSetConfigRequest>
        void DetectMetricSetConfigAsync(const DetectMetricSetConfigRequestT& request, const DetectMetricSetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::DetectMetricSetConfig, request, handler, context);
        }

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
        template<typename GetAnomalyGroupRequestT = Model::GetAnomalyGroupRequest>
        Model::GetAnomalyGroupOutcomeCallable GetAnomalyGroupCallable(const GetAnomalyGroupRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::GetAnomalyGroup, request);
        }

        /**
         * An Async wrapper for GetAnomalyGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnomalyGroupRequestT = Model::GetAnomalyGroupRequest>
        void GetAnomalyGroupAsync(const GetAnomalyGroupRequestT& request, const GetAnomalyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::GetAnomalyGroup, request, handler, context);
        }

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
        template<typename GetDataQualityMetricsRequestT = Model::GetDataQualityMetricsRequest>
        Model::GetDataQualityMetricsOutcomeCallable GetDataQualityMetricsCallable(const GetDataQualityMetricsRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::GetDataQualityMetrics, request);
        }

        /**
         * An Async wrapper for GetDataQualityMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataQualityMetricsRequestT = Model::GetDataQualityMetricsRequest>
        void GetDataQualityMetricsAsync(const GetDataQualityMetricsRequestT& request, const GetDataQualityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::GetDataQualityMetrics, request, handler, context);
        }

        /**
         * <p>Get feedback for an anomaly group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/GetFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFeedbackOutcome GetFeedback(const Model::GetFeedbackRequest& request) const;

        /**
         * A Callable wrapper for GetFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFeedbackRequestT = Model::GetFeedbackRequest>
        Model::GetFeedbackOutcomeCallable GetFeedbackCallable(const GetFeedbackRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::GetFeedback, request);
        }

        /**
         * An Async wrapper for GetFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFeedbackRequestT = Model::GetFeedbackRequest>
        void GetFeedbackAsync(const GetFeedbackRequestT& request, const GetFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::GetFeedback, request, handler, context);
        }

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
        template<typename GetSampleDataRequestT = Model::GetSampleDataRequest>
        Model::GetSampleDataOutcomeCallable GetSampleDataCallable(const GetSampleDataRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::GetSampleData, request);
        }

        /**
         * An Async wrapper for GetSampleData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSampleDataRequestT = Model::GetSampleDataRequest>
        void GetSampleDataAsync(const GetSampleDataRequestT& request, const GetSampleDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::GetSampleData, request, handler, context);
        }

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
        template<typename ListAlertsRequestT = Model::ListAlertsRequest>
        Model::ListAlertsOutcomeCallable ListAlertsCallable(const ListAlertsRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::ListAlerts, request);
        }

        /**
         * An Async wrapper for ListAlerts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAlertsRequestT = Model::ListAlertsRequest>
        void ListAlertsAsync(const ListAlertsRequestT& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::ListAlerts, request, handler, context);
        }

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
        template<typename ListAnomalyDetectorsRequestT = Model::ListAnomalyDetectorsRequest>
        Model::ListAnomalyDetectorsOutcomeCallable ListAnomalyDetectorsCallable(const ListAnomalyDetectorsRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::ListAnomalyDetectors, request);
        }

        /**
         * An Async wrapper for ListAnomalyDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnomalyDetectorsRequestT = Model::ListAnomalyDetectorsRequest>
        void ListAnomalyDetectorsAsync(const ListAnomalyDetectorsRequestT& request, const ListAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::ListAnomalyDetectors, request, handler, context);
        }

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
        template<typename ListAnomalyGroupRelatedMetricsRequestT = Model::ListAnomalyGroupRelatedMetricsRequest>
        Model::ListAnomalyGroupRelatedMetricsOutcomeCallable ListAnomalyGroupRelatedMetricsCallable(const ListAnomalyGroupRelatedMetricsRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::ListAnomalyGroupRelatedMetrics, request);
        }

        /**
         * An Async wrapper for ListAnomalyGroupRelatedMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnomalyGroupRelatedMetricsRequestT = Model::ListAnomalyGroupRelatedMetricsRequest>
        void ListAnomalyGroupRelatedMetricsAsync(const ListAnomalyGroupRelatedMetricsRequestT& request, const ListAnomalyGroupRelatedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::ListAnomalyGroupRelatedMetrics, request, handler, context);
        }

        /**
         * <p>Returns a list of anomaly groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ListAnomalyGroupSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalyGroupSummariesOutcome ListAnomalyGroupSummaries(const Model::ListAnomalyGroupSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListAnomalyGroupSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnomalyGroupSummariesRequestT = Model::ListAnomalyGroupSummariesRequest>
        Model::ListAnomalyGroupSummariesOutcomeCallable ListAnomalyGroupSummariesCallable(const ListAnomalyGroupSummariesRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::ListAnomalyGroupSummaries, request);
        }

        /**
         * An Async wrapper for ListAnomalyGroupSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnomalyGroupSummariesRequestT = Model::ListAnomalyGroupSummariesRequest>
        void ListAnomalyGroupSummariesAsync(const ListAnomalyGroupSummariesRequestT& request, const ListAnomalyGroupSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::ListAnomalyGroupSummaries, request, handler, context);
        }

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
        template<typename ListAnomalyGroupTimeSeriesRequestT = Model::ListAnomalyGroupTimeSeriesRequest>
        Model::ListAnomalyGroupTimeSeriesOutcomeCallable ListAnomalyGroupTimeSeriesCallable(const ListAnomalyGroupTimeSeriesRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::ListAnomalyGroupTimeSeries, request);
        }

        /**
         * An Async wrapper for ListAnomalyGroupTimeSeries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnomalyGroupTimeSeriesRequestT = Model::ListAnomalyGroupTimeSeriesRequest>
        void ListAnomalyGroupTimeSeriesAsync(const ListAnomalyGroupTimeSeriesRequestT& request, const ListAnomalyGroupTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::ListAnomalyGroupTimeSeries, request, handler, context);
        }

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
        template<typename ListMetricSetsRequestT = Model::ListMetricSetsRequest>
        Model::ListMetricSetsOutcomeCallable ListMetricSetsCallable(const ListMetricSetsRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::ListMetricSets, request);
        }

        /**
         * An Async wrapper for ListMetricSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMetricSetsRequestT = Model::ListMetricSetsRequest>
        void ListMetricSetsAsync(const ListMetricSetsRequestT& request, const ListMetricSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::ListMetricSets, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Add feedback for an anomalous metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * A Callable wrapper for PutFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutFeedbackRequestT = Model::PutFeedbackRequest>
        Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const PutFeedbackRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::PutFeedback, request);
        }

        /**
         * An Async wrapper for PutFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutFeedbackRequestT = Model::PutFeedbackRequest>
        void PutFeedbackAsync(const PutFeedbackRequestT& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::PutFeedback, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Make changes to an existing alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAlertOutcome UpdateAlert(const Model::UpdateAlertRequest& request) const;

        /**
         * A Callable wrapper for UpdateAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAlertRequestT = Model::UpdateAlertRequest>
        Model::UpdateAlertOutcomeCallable UpdateAlertCallable(const UpdateAlertRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::UpdateAlert, request);
        }

        /**
         * An Async wrapper for UpdateAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAlertRequestT = Model::UpdateAlertRequest>
        void UpdateAlertAsync(const UpdateAlertRequestT& request, const UpdateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::UpdateAlert, request, handler, context);
        }

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
        template<typename UpdateAnomalyDetectorRequestT = Model::UpdateAnomalyDetectorRequest>
        Model::UpdateAnomalyDetectorOutcomeCallable UpdateAnomalyDetectorCallable(const UpdateAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::UpdateAnomalyDetector, request);
        }

        /**
         * An Async wrapper for UpdateAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAnomalyDetectorRequestT = Model::UpdateAnomalyDetectorRequest>
        void UpdateAnomalyDetectorAsync(const UpdateAnomalyDetectorRequestT& request, const UpdateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::UpdateAnomalyDetector, request, handler, context);
        }

        /**
         * <p>Updates a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/UpdateMetricSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMetricSetOutcome UpdateMetricSet(const Model::UpdateMetricSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateMetricSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMetricSetRequestT = Model::UpdateMetricSetRequest>
        Model::UpdateMetricSetOutcomeCallable UpdateMetricSetCallable(const UpdateMetricSetRequestT& request) const
        {
            return SubmitCallable(&LookoutMetricsClient::UpdateMetricSet, request);
        }

        /**
         * An Async wrapper for UpdateMetricSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMetricSetRequestT = Model::UpdateMetricSetRequest>
        void UpdateMetricSetAsync(const UpdateMetricSetRequestT& request, const UpdateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutMetricsClient::UpdateMetricSet, request, handler, context);
        }


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
