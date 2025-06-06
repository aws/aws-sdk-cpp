﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/compute-optimizer/ComputeOptimizerServiceClientModel.h>

namespace Aws
{
namespace ComputeOptimizer
{
  /**
   * <p>Compute Optimizer is a service that analyzes the configuration and
   * utilization metrics of your Amazon Web Services compute resources, such as
   * Amazon EC2 instances, Amazon EC2 Auto Scaling groups, Lambda functions, Amazon
   * EBS volumes, and Amazon ECS services on Fargate. It reports whether your
   * resources are optimal, and generates optimization recommendations to reduce the
   * cost and improve the performance of your workloads. Compute Optimizer also
   * provides recent utilization metric data, in addition to projected utilization
   * metric data for the recommendations, which you can use to evaluate which
   * recommendation provides the best price-performance trade-off. The analysis of
   * your usage patterns can help you decide when to move or resize your running
   * resources, and still meet your performance and capacity requirements. For more
   * information about Compute Optimizer, including the required permissions to use
   * the service, see the <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">Compute
   * Optimizer User Guide</a>.</p>
   */
  class AWS_COMPUTEOPTIMIZER_API ComputeOptimizerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ComputeOptimizerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ComputeOptimizerClientConfiguration ClientConfigurationType;
      typedef ComputeOptimizerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComputeOptimizerClient(const Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration = Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration(),
                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComputeOptimizerClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration = Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComputeOptimizerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration = Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComputeOptimizerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComputeOptimizerClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComputeOptimizerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ComputeOptimizerClient();

        /**
         * <p>Deletes a recommendation preference, such as enhanced infrastructure
         * metrics.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
         * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/DeleteRecommendationPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecommendationPreferencesOutcome DeleteRecommendationPreferences(const Model::DeleteRecommendationPreferencesRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecommendationPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRecommendationPreferencesRequestT = Model::DeleteRecommendationPreferencesRequest>
        Model::DeleteRecommendationPreferencesOutcomeCallable DeleteRecommendationPreferencesCallable(const DeleteRecommendationPreferencesRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::DeleteRecommendationPreferences, request);
        }

        /**
         * An Async wrapper for DeleteRecommendationPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecommendationPreferencesRequestT = Model::DeleteRecommendationPreferencesRequest>
        void DeleteRecommendationPreferencesAsync(const DeleteRecommendationPreferencesRequestT& request, const DeleteRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::DeleteRecommendationPreferences, request, handler, context);
        }

        /**
         * <p>Describes recommendation export jobs created in the last seven days.</p>
         * <p>Use the <a>ExportAutoScalingGroupRecommendations</a> or
         * <a>ExportEC2InstanceRecommendations</a> actions to request an export of your
         * recommendations. Then use the <a>DescribeRecommendationExportJobs</a> action to
         * view your export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/DescribeRecommendationExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecommendationExportJobsOutcome DescribeRecommendationExportJobs(const Model::DescribeRecommendationExportJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeRecommendationExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRecommendationExportJobsRequestT = Model::DescribeRecommendationExportJobsRequest>
        Model::DescribeRecommendationExportJobsOutcomeCallable DescribeRecommendationExportJobsCallable(const DescribeRecommendationExportJobsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::DescribeRecommendationExportJobs, request);
        }

        /**
         * An Async wrapper for DescribeRecommendationExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecommendationExportJobsRequestT = Model::DescribeRecommendationExportJobsRequest>
        void DescribeRecommendationExportJobsAsync(const DescribeRecommendationExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeRecommendationExportJobsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::DescribeRecommendationExportJobs, request, handler, context);
        }

        /**
         * <p>Exports optimization recommendations for Auto Scaling groups.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (JSON) (.json) file, to an existing
         * Amazon Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Auto Scaling group export job in progress per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportAutoScalingGroupRecommendationsOutcome ExportAutoScalingGroupRecommendations(const Model::ExportAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ExportAutoScalingGroupRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportAutoScalingGroupRecommendationsRequestT = Model::ExportAutoScalingGroupRecommendationsRequest>
        Model::ExportAutoScalingGroupRecommendationsOutcomeCallable ExportAutoScalingGroupRecommendationsCallable(const ExportAutoScalingGroupRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::ExportAutoScalingGroupRecommendations, request);
        }

        /**
         * An Async wrapper for ExportAutoScalingGroupRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportAutoScalingGroupRecommendationsRequestT = Model::ExportAutoScalingGroupRecommendationsRequest>
        void ExportAutoScalingGroupRecommendationsAsync(const ExportAutoScalingGroupRecommendationsRequestT& request, const ExportAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::ExportAutoScalingGroupRecommendations, request, handler, context);
        }

        /**
         * <p>Exports optimization recommendations for Amazon EBS volumes.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (JSON) (.json) file, to an existing
         * Amazon Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Amazon EBS volume export job in progress per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportEBSVolumeRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportEBSVolumeRecommendationsOutcome ExportEBSVolumeRecommendations(const Model::ExportEBSVolumeRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ExportEBSVolumeRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportEBSVolumeRecommendationsRequestT = Model::ExportEBSVolumeRecommendationsRequest>
        Model::ExportEBSVolumeRecommendationsOutcomeCallable ExportEBSVolumeRecommendationsCallable(const ExportEBSVolumeRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::ExportEBSVolumeRecommendations, request);
        }

        /**
         * An Async wrapper for ExportEBSVolumeRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportEBSVolumeRecommendationsRequestT = Model::ExportEBSVolumeRecommendationsRequest>
        void ExportEBSVolumeRecommendationsAsync(const ExportEBSVolumeRecommendationsRequestT& request, const ExportEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::ExportEBSVolumeRecommendations, request, handler, context);
        }

        /**
         * <p>Exports optimization recommendations for Amazon EC2 instances.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (JSON) (.json) file, to an existing
         * Amazon Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Amazon EC2 instance export job in progress per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportEC2InstanceRecommendationsOutcome ExportEC2InstanceRecommendations(const Model::ExportEC2InstanceRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ExportEC2InstanceRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportEC2InstanceRecommendationsRequestT = Model::ExportEC2InstanceRecommendationsRequest>
        Model::ExportEC2InstanceRecommendationsOutcomeCallable ExportEC2InstanceRecommendationsCallable(const ExportEC2InstanceRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::ExportEC2InstanceRecommendations, request);
        }

        /**
         * An Async wrapper for ExportEC2InstanceRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportEC2InstanceRecommendationsRequestT = Model::ExportEC2InstanceRecommendationsRequest>
        void ExportEC2InstanceRecommendationsAsync(const ExportEC2InstanceRecommendationsRequestT& request, const ExportEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::ExportEC2InstanceRecommendations, request, handler, context);
        }

        /**
         * <p> Exports optimization recommendations for Amazon ECS services on Fargate.
         * </p> <p>Recommendations are exported in a CSV file, and its metadata in a JSON
         * file, to an existing Amazon Simple Storage Service (Amazon S3) bucket that you
         * specify. For more information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * only have one Amazon ECS service export job in progress per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportECSServiceRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportECSServiceRecommendationsOutcome ExportECSServiceRecommendations(const Model::ExportECSServiceRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ExportECSServiceRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportECSServiceRecommendationsRequestT = Model::ExportECSServiceRecommendationsRequest>
        Model::ExportECSServiceRecommendationsOutcomeCallable ExportECSServiceRecommendationsCallable(const ExportECSServiceRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::ExportECSServiceRecommendations, request);
        }

        /**
         * An Async wrapper for ExportECSServiceRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportECSServiceRecommendationsRequestT = Model::ExportECSServiceRecommendationsRequest>
        void ExportECSServiceRecommendationsAsync(const ExportECSServiceRecommendationsRequestT& request, const ExportECSServiceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::ExportECSServiceRecommendations, request, handler, context);
        }

        /**
         * <p> Export optimization recommendations for your idle resources. </p>
         * <p>Recommendations are exported in a comma-separated values (CSV) file, and its
         * metadata in a JavaScript Object Notation (JSON) file, to an existing Amazon
         * Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one idle resource export job in progress per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportIdleRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportIdleRecommendationsOutcome ExportIdleRecommendations(const Model::ExportIdleRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ExportIdleRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportIdleRecommendationsRequestT = Model::ExportIdleRecommendationsRequest>
        Model::ExportIdleRecommendationsOutcomeCallable ExportIdleRecommendationsCallable(const ExportIdleRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::ExportIdleRecommendations, request);
        }

        /**
         * An Async wrapper for ExportIdleRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportIdleRecommendationsRequestT = Model::ExportIdleRecommendationsRequest>
        void ExportIdleRecommendationsAsync(const ExportIdleRecommendationsRequestT& request, const ExportIdleRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::ExportIdleRecommendations, request, handler, context);
        }

        /**
         * <p>Exports optimization recommendations for Lambda functions.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (JSON) (.json) file, to an existing
         * Amazon Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Lambda function export job in progress per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportLambdaFunctionRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportLambdaFunctionRecommendationsOutcome ExportLambdaFunctionRecommendations(const Model::ExportLambdaFunctionRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ExportLambdaFunctionRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportLambdaFunctionRecommendationsRequestT = Model::ExportLambdaFunctionRecommendationsRequest>
        Model::ExportLambdaFunctionRecommendationsOutcomeCallable ExportLambdaFunctionRecommendationsCallable(const ExportLambdaFunctionRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::ExportLambdaFunctionRecommendations, request);
        }

        /**
         * An Async wrapper for ExportLambdaFunctionRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportLambdaFunctionRecommendationsRequestT = Model::ExportLambdaFunctionRecommendationsRequest>
        void ExportLambdaFunctionRecommendationsAsync(const ExportLambdaFunctionRecommendationsRequestT& request, const ExportLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::ExportLambdaFunctionRecommendations, request, handler, context);
        }

        /**
         * <p> Export optimization recommendations for your licenses. </p>
         * <p>Recommendations are exported in a comma-separated values (CSV) file, and its
         * metadata in a JavaScript Object Notation (JSON) file, to an existing Amazon
         * Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one license export job in progress per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportLicenseRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportLicenseRecommendationsOutcome ExportLicenseRecommendations(const Model::ExportLicenseRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ExportLicenseRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportLicenseRecommendationsRequestT = Model::ExportLicenseRecommendationsRequest>
        Model::ExportLicenseRecommendationsOutcomeCallable ExportLicenseRecommendationsCallable(const ExportLicenseRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::ExportLicenseRecommendations, request);
        }

        /**
         * An Async wrapper for ExportLicenseRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportLicenseRecommendationsRequestT = Model::ExportLicenseRecommendationsRequest>
        void ExportLicenseRecommendationsAsync(const ExportLicenseRecommendationsRequestT& request, const ExportLicenseRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::ExportLicenseRecommendations, request, handler, context);
        }

        /**
         * <p> Export optimization recommendations for your Amazon Aurora and Amazon
         * Relational Database Service (Amazon RDS) databases. </p> <p>Recommendations are
         * exported in a comma-separated values (CSV) file, and its metadata in a
         * JavaScript Object Notation (JSON) file, to an existing Amazon Simple Storage
         * Service (Amazon S3) bucket that you specify. For more information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Amazon Aurora or RDS export job in progress per Amazon Web
         * Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportRDSDatabaseRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportRDSDatabaseRecommendationsOutcome ExportRDSDatabaseRecommendations(const Model::ExportRDSDatabaseRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ExportRDSDatabaseRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportRDSDatabaseRecommendationsRequestT = Model::ExportRDSDatabaseRecommendationsRequest>
        Model::ExportRDSDatabaseRecommendationsOutcomeCallable ExportRDSDatabaseRecommendationsCallable(const ExportRDSDatabaseRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::ExportRDSDatabaseRecommendations, request);
        }

        /**
         * An Async wrapper for ExportRDSDatabaseRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportRDSDatabaseRecommendationsRequestT = Model::ExportRDSDatabaseRecommendationsRequest>
        void ExportRDSDatabaseRecommendationsAsync(const ExportRDSDatabaseRecommendationsRequestT& request, const ExportRDSDatabaseRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::ExportRDSDatabaseRecommendations, request, handler, context);
        }

        /**
         * <p>Returns Auto Scaling group recommendations.</p> <p>Compute Optimizer
         * generates recommendations for Amazon EC2 Auto Scaling groups that meet a
         * specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoScalingGroupRecommendationsOutcome GetAutoScalingGroupRecommendations(const Model::GetAutoScalingGroupRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetAutoScalingGroupRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutoScalingGroupRecommendationsRequestT = Model::GetAutoScalingGroupRecommendationsRequest>
        Model::GetAutoScalingGroupRecommendationsOutcomeCallable GetAutoScalingGroupRecommendationsCallable(const GetAutoScalingGroupRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetAutoScalingGroupRecommendations, request);
        }

        /**
         * An Async wrapper for GetAutoScalingGroupRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutoScalingGroupRecommendationsRequestT = Model::GetAutoScalingGroupRecommendationsRequest>
        void GetAutoScalingGroupRecommendationsAsync(const GetAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetAutoScalingGroupRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetAutoScalingGroupRecommendations, request, handler, context);
        }

        /**
         * <p>Returns Amazon Elastic Block Store (Amazon EBS) volume recommendations.</p>
         * <p>Compute Optimizer generates recommendations for Amazon EBS volumes that meet
         * a specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEBSVolumeRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEBSVolumeRecommendationsOutcome GetEBSVolumeRecommendations(const Model::GetEBSVolumeRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetEBSVolumeRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEBSVolumeRecommendationsRequestT = Model::GetEBSVolumeRecommendationsRequest>
        Model::GetEBSVolumeRecommendationsOutcomeCallable GetEBSVolumeRecommendationsCallable(const GetEBSVolumeRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetEBSVolumeRecommendations, request);
        }

        /**
         * An Async wrapper for GetEBSVolumeRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEBSVolumeRecommendationsRequestT = Model::GetEBSVolumeRecommendationsRequest>
        void GetEBSVolumeRecommendationsAsync(const GetEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetEBSVolumeRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetEBSVolumeRecommendations, request, handler, context);
        }

        /**
         * <p>Returns Amazon EC2 instance recommendations.</p> <p>Compute Optimizer
         * generates recommendations for Amazon Elastic Compute Cloud (Amazon EC2)
         * instances that meet a specific set of requirements. For more information, see
         * the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEC2InstanceRecommendationsOutcome GetEC2InstanceRecommendations(const Model::GetEC2InstanceRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetEC2InstanceRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEC2InstanceRecommendationsRequestT = Model::GetEC2InstanceRecommendationsRequest>
        Model::GetEC2InstanceRecommendationsOutcomeCallable GetEC2InstanceRecommendationsCallable(const GetEC2InstanceRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetEC2InstanceRecommendations, request);
        }

        /**
         * An Async wrapper for GetEC2InstanceRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEC2InstanceRecommendationsRequestT = Model::GetEC2InstanceRecommendationsRequest>
        void GetEC2InstanceRecommendationsAsync(const GetEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetEC2InstanceRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetEC2InstanceRecommendations, request, handler, context);
        }

        /**
         * <p>Returns the projected utilization metrics of Amazon EC2 instance
         * recommendations.</p>  <p>The <code>Cpu</code> and <code>Memory</code>
         * metrics are the only projected utilization metrics returned when you run this
         * action. Additionally, the <code>Memory</code> metric is returned only for
         * resources that have the unified CloudWatch agent installed on them. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
         * Memory Utilization with the CloudWatch Agent</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2RecommendationProjectedMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEC2RecommendationProjectedMetricsOutcome GetEC2RecommendationProjectedMetrics(const Model::GetEC2RecommendationProjectedMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetEC2RecommendationProjectedMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEC2RecommendationProjectedMetricsRequestT = Model::GetEC2RecommendationProjectedMetricsRequest>
        Model::GetEC2RecommendationProjectedMetricsOutcomeCallable GetEC2RecommendationProjectedMetricsCallable(const GetEC2RecommendationProjectedMetricsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetEC2RecommendationProjectedMetrics, request);
        }

        /**
         * An Async wrapper for GetEC2RecommendationProjectedMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEC2RecommendationProjectedMetricsRequestT = Model::GetEC2RecommendationProjectedMetricsRequest>
        void GetEC2RecommendationProjectedMetricsAsync(const GetEC2RecommendationProjectedMetricsRequestT& request, const GetEC2RecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetEC2RecommendationProjectedMetrics, request, handler, context);
        }

        /**
         * <p> Returns the projected metrics of Amazon ECS service recommendations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetECSServiceRecommendationProjectedMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetECSServiceRecommendationProjectedMetricsOutcome GetECSServiceRecommendationProjectedMetrics(const Model::GetECSServiceRecommendationProjectedMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetECSServiceRecommendationProjectedMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetECSServiceRecommendationProjectedMetricsRequestT = Model::GetECSServiceRecommendationProjectedMetricsRequest>
        Model::GetECSServiceRecommendationProjectedMetricsOutcomeCallable GetECSServiceRecommendationProjectedMetricsCallable(const GetECSServiceRecommendationProjectedMetricsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetECSServiceRecommendationProjectedMetrics, request);
        }

        /**
         * An Async wrapper for GetECSServiceRecommendationProjectedMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetECSServiceRecommendationProjectedMetricsRequestT = Model::GetECSServiceRecommendationProjectedMetricsRequest>
        void GetECSServiceRecommendationProjectedMetricsAsync(const GetECSServiceRecommendationProjectedMetricsRequestT& request, const GetECSServiceRecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetECSServiceRecommendationProjectedMetrics, request, handler, context);
        }

        /**
         * <p> Returns Amazon ECS service recommendations. </p> <p> Compute Optimizer
         * generates recommendations for Amazon ECS services on Fargate that meet a
         * specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetECSServiceRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetECSServiceRecommendationsOutcome GetECSServiceRecommendations(const Model::GetECSServiceRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetECSServiceRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetECSServiceRecommendationsRequestT = Model::GetECSServiceRecommendationsRequest>
        Model::GetECSServiceRecommendationsOutcomeCallable GetECSServiceRecommendationsCallable(const GetECSServiceRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetECSServiceRecommendations, request);
        }

        /**
         * An Async wrapper for GetECSServiceRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetECSServiceRecommendationsRequestT = Model::GetECSServiceRecommendationsRequest>
        void GetECSServiceRecommendationsAsync(const GetECSServiceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetECSServiceRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetECSServiceRecommendations, request, handler, context);
        }

        /**
         * <p>Returns the recommendation preferences that are in effect for a given
         * resource, such as enhanced infrastructure metrics. Considers all applicable
         * preferences that you might have set at the resource, account, and organization
         * level.</p> <p>When you create a recommendation preference, you can set its
         * status to <code>Active</code> or <code>Inactive</code>. Use this action to view
         * the recommendation preferences that are in effect, or
         * <code>Active</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEffectiveRecommendationPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEffectiveRecommendationPreferencesOutcome GetEffectiveRecommendationPreferences(const Model::GetEffectiveRecommendationPreferencesRequest& request) const;

        /**
         * A Callable wrapper for GetEffectiveRecommendationPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEffectiveRecommendationPreferencesRequestT = Model::GetEffectiveRecommendationPreferencesRequest>
        Model::GetEffectiveRecommendationPreferencesOutcomeCallable GetEffectiveRecommendationPreferencesCallable(const GetEffectiveRecommendationPreferencesRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetEffectiveRecommendationPreferences, request);
        }

        /**
         * An Async wrapper for GetEffectiveRecommendationPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEffectiveRecommendationPreferencesRequestT = Model::GetEffectiveRecommendationPreferencesRequest>
        void GetEffectiveRecommendationPreferencesAsync(const GetEffectiveRecommendationPreferencesRequestT& request, const GetEffectiveRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetEffectiveRecommendationPreferences, request, handler, context);
        }

        /**
         * <p>Returns the enrollment (opt in) status of an account to the Compute Optimizer
         * service.</p> <p>If the account is the management account of an organization,
         * this action also confirms the enrollment status of member accounts of the
         * organization. Use the <a>GetEnrollmentStatusesForOrganization</a> action to get
         * detailed information about the enrollment status of member accounts of an
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnrollmentStatusOutcome GetEnrollmentStatus(const Model::GetEnrollmentStatusRequest& request = {}) const;

        /**
         * A Callable wrapper for GetEnrollmentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnrollmentStatusRequestT = Model::GetEnrollmentStatusRequest>
        Model::GetEnrollmentStatusOutcomeCallable GetEnrollmentStatusCallable(const GetEnrollmentStatusRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetEnrollmentStatus, request);
        }

        /**
         * An Async wrapper for GetEnrollmentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnrollmentStatusRequestT = Model::GetEnrollmentStatusRequest>
        void GetEnrollmentStatusAsync(const GetEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetEnrollmentStatusRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetEnrollmentStatus, request, handler, context);
        }

        /**
         * <p>Returns the Compute Optimizer enrollment (opt-in) status of organization
         * member accounts, if your account is an organization management account.</p>
         * <p>To get the enrollment status of standalone accounts, use the
         * <a>GetEnrollmentStatus</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatusesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnrollmentStatusesForOrganizationOutcome GetEnrollmentStatusesForOrganization(const Model::GetEnrollmentStatusesForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetEnrollmentStatusesForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnrollmentStatusesForOrganizationRequestT = Model::GetEnrollmentStatusesForOrganizationRequest>
        Model::GetEnrollmentStatusesForOrganizationOutcomeCallable GetEnrollmentStatusesForOrganizationCallable(const GetEnrollmentStatusesForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetEnrollmentStatusesForOrganization, request);
        }

        /**
         * An Async wrapper for GetEnrollmentStatusesForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnrollmentStatusesForOrganizationRequestT = Model::GetEnrollmentStatusesForOrganizationRequest>
        void GetEnrollmentStatusesForOrganizationAsync(const GetEnrollmentStatusesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetEnrollmentStatusesForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetEnrollmentStatusesForOrganization, request, handler, context);
        }

        /**
         * <p>Returns idle resource recommendations. Compute Optimizer generates
         * recommendations for idle resources that meet a specific set of requirements. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Resource
         * requirements</a> in the <i>Compute Optimizer User Guide</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetIdleRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdleRecommendationsOutcome GetIdleRecommendations(const Model::GetIdleRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetIdleRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdleRecommendationsRequestT = Model::GetIdleRecommendationsRequest>
        Model::GetIdleRecommendationsOutcomeCallable GetIdleRecommendationsCallable(const GetIdleRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetIdleRecommendations, request);
        }

        /**
         * An Async wrapper for GetIdleRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdleRecommendationsRequestT = Model::GetIdleRecommendationsRequest>
        void GetIdleRecommendationsAsync(const GetIdleRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetIdleRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetIdleRecommendations, request, handler, context);
        }

        /**
         * <p>Returns Lambda function recommendations.</p> <p>Compute Optimizer generates
         * recommendations for functions that meet a specific set of requirements. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetLambdaFunctionRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLambdaFunctionRecommendationsOutcome GetLambdaFunctionRecommendations(const Model::GetLambdaFunctionRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetLambdaFunctionRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLambdaFunctionRecommendationsRequestT = Model::GetLambdaFunctionRecommendationsRequest>
        Model::GetLambdaFunctionRecommendationsOutcomeCallable GetLambdaFunctionRecommendationsCallable(const GetLambdaFunctionRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetLambdaFunctionRecommendations, request);
        }

        /**
         * An Async wrapper for GetLambdaFunctionRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLambdaFunctionRecommendationsRequestT = Model::GetLambdaFunctionRecommendationsRequest>
        void GetLambdaFunctionRecommendationsAsync(const GetLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetLambdaFunctionRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetLambdaFunctionRecommendations, request, handler, context);
        }

        /**
         * <p>Returns license recommendations for Amazon EC2 instances that run on a
         * specific license.</p> <p>Compute Optimizer generates recommendations for
         * licenses that meet a specific set of requirements. For more information, see the
         * <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetLicenseRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseRecommendationsOutcome GetLicenseRecommendations(const Model::GetLicenseRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetLicenseRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLicenseRecommendationsRequestT = Model::GetLicenseRecommendationsRequest>
        Model::GetLicenseRecommendationsOutcomeCallable GetLicenseRecommendationsCallable(const GetLicenseRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetLicenseRecommendations, request);
        }

        /**
         * An Async wrapper for GetLicenseRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLicenseRecommendationsRequestT = Model::GetLicenseRecommendationsRequest>
        void GetLicenseRecommendationsAsync(const GetLicenseRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetLicenseRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetLicenseRecommendations, request, handler, context);
        }

        /**
         * <p> Returns the projected metrics of Aurora and RDS database recommendations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRDSDatabaseRecommendationProjectedMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRDSDatabaseRecommendationProjectedMetricsOutcome GetRDSDatabaseRecommendationProjectedMetrics(const Model::GetRDSDatabaseRecommendationProjectedMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetRDSDatabaseRecommendationProjectedMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRDSDatabaseRecommendationProjectedMetricsRequestT = Model::GetRDSDatabaseRecommendationProjectedMetricsRequest>
        Model::GetRDSDatabaseRecommendationProjectedMetricsOutcomeCallable GetRDSDatabaseRecommendationProjectedMetricsCallable(const GetRDSDatabaseRecommendationProjectedMetricsRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetRDSDatabaseRecommendationProjectedMetrics, request);
        }

        /**
         * An Async wrapper for GetRDSDatabaseRecommendationProjectedMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRDSDatabaseRecommendationProjectedMetricsRequestT = Model::GetRDSDatabaseRecommendationProjectedMetricsRequest>
        void GetRDSDatabaseRecommendationProjectedMetricsAsync(const GetRDSDatabaseRecommendationProjectedMetricsRequestT& request, const GetRDSDatabaseRecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetRDSDatabaseRecommendationProjectedMetrics, request, handler, context);
        }

        /**
         * <p> Returns Amazon Aurora and RDS database recommendations. </p> <p>Compute
         * Optimizer generates recommendations for Amazon Aurora and RDS databases that
         * meet a specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRDSDatabaseRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRDSDatabaseRecommendationsOutcome GetRDSDatabaseRecommendations(const Model::GetRDSDatabaseRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetRDSDatabaseRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRDSDatabaseRecommendationsRequestT = Model::GetRDSDatabaseRecommendationsRequest>
        Model::GetRDSDatabaseRecommendationsOutcomeCallable GetRDSDatabaseRecommendationsCallable(const GetRDSDatabaseRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetRDSDatabaseRecommendations, request);
        }

        /**
         * An Async wrapper for GetRDSDatabaseRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRDSDatabaseRecommendationsRequestT = Model::GetRDSDatabaseRecommendationsRequest>
        void GetRDSDatabaseRecommendationsAsync(const GetRDSDatabaseRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetRDSDatabaseRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetRDSDatabaseRecommendations, request, handler, context);
        }

        /**
         * <p>Returns existing recommendation preferences, such as enhanced infrastructure
         * metrics.</p> <p>Use the <code>scope</code> parameter to specify which
         * preferences to return. You can specify to return preferences for an
         * organization, a specific account ID, or a specific EC2 instance or Auto Scaling
         * group Amazon Resource Name (ARN).</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
         * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRecommendationPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationPreferencesOutcome GetRecommendationPreferences(const Model::GetRecommendationPreferencesRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendationPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecommendationPreferencesRequestT = Model::GetRecommendationPreferencesRequest>
        Model::GetRecommendationPreferencesOutcomeCallable GetRecommendationPreferencesCallable(const GetRecommendationPreferencesRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetRecommendationPreferences, request);
        }

        /**
         * An Async wrapper for GetRecommendationPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecommendationPreferencesRequestT = Model::GetRecommendationPreferencesRequest>
        void GetRecommendationPreferencesAsync(const GetRecommendationPreferencesRequestT& request, const GetRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetRecommendationPreferences, request, handler, context);
        }

        /**
         * <p>Returns the optimization findings for an account.</p> <p>It returns the
         * number of:</p> <ul> <li> <p>Amazon EC2 instances in an account that are
         * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
         * <code>Optimized</code>.</p> </li> <li> <p>EC2Auto Scaling groups in an account
         * that are <code>NotOptimized</code>, or <code>Optimized</code>.</p> </li> <li>
         * <p>Amazon EBS volumes in an account that are <code>NotOptimized</code>, or
         * <code>Optimized</code>.</p> </li> <li> <p>Lambda functions in an account that
         * are <code>NotOptimized</code>, or <code>Optimized</code>.</p> </li> <li>
         * <p>Amazon ECS services in an account that are <code>Underprovisioned</code>,
         * <code>Overprovisioned</code>, or <code>Optimized</code>.</p> </li> <li>
         * <p>Commercial software licenses in an account that are
         * <code>InsufficientMetrics</code>, <code>NotOptimized</code> or
         * <code>Optimized</code>.</p> </li> <li> <p>Amazon Aurora and Amazon RDS databases
         * in an account that are <code>Underprovisioned</code>,
         * <code>Overprovisioned</code>, <code>Optimized</code>, or
         * <code>NotOptimized</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRecommendationSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationSummariesOutcome GetRecommendationSummaries(const Model::GetRecommendationSummariesRequest& request = {}) const;

        /**
         * A Callable wrapper for GetRecommendationSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecommendationSummariesRequestT = Model::GetRecommendationSummariesRequest>
        Model::GetRecommendationSummariesOutcomeCallable GetRecommendationSummariesCallable(const GetRecommendationSummariesRequestT& request = {}) const
        {
            return SubmitCallable(&ComputeOptimizerClient::GetRecommendationSummaries, request);
        }

        /**
         * An Async wrapper for GetRecommendationSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecommendationSummariesRequestT = Model::GetRecommendationSummariesRequest>
        void GetRecommendationSummariesAsync(const GetRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetRecommendationSummariesRequestT& request = {}) const
        {
            return SubmitAsync(&ComputeOptimizerClient::GetRecommendationSummaries, request, handler, context);
        }

        /**
         * <p>Creates a new recommendation preference or updates an existing recommendation
         * preference, such as enhanced infrastructure metrics.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
         * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/PutRecommendationPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecommendationPreferencesOutcome PutRecommendationPreferences(const Model::PutRecommendationPreferencesRequest& request) const;

        /**
         * A Callable wrapper for PutRecommendationPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRecommendationPreferencesRequestT = Model::PutRecommendationPreferencesRequest>
        Model::PutRecommendationPreferencesOutcomeCallable PutRecommendationPreferencesCallable(const PutRecommendationPreferencesRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::PutRecommendationPreferences, request);
        }

        /**
         * An Async wrapper for PutRecommendationPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRecommendationPreferencesRequestT = Model::PutRecommendationPreferencesRequest>
        void PutRecommendationPreferencesAsync(const PutRecommendationPreferencesRequestT& request, const PutRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::PutRecommendationPreferences, request, handler, context);
        }

        /**
         * <p>Updates the enrollment (opt in and opt out) status of an account to the
         * Compute Optimizer service.</p> <p>If the account is a management account of an
         * organization, this action can also be used to enroll member accounts of the
         * organization.</p> <p>You must have the appropriate permissions to opt in to
         * Compute Optimizer, to view its recommendations, and to opt out. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/security-iam.html">Controlling
         * access with Amazon Web Services Identity and Access Management</a> in the
         * <i>Compute Optimizer User Guide</i>.</p> <p>When you opt in, Compute Optimizer
         * automatically creates a service-linked role in your account to access its data.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/using-service-linked-roles.html">Using
         * Service-Linked Roles for Compute Optimizer</a> in the <i>Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UpdateEnrollmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnrollmentStatusOutcome UpdateEnrollmentStatus(const Model::UpdateEnrollmentStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnrollmentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnrollmentStatusRequestT = Model::UpdateEnrollmentStatusRequest>
        Model::UpdateEnrollmentStatusOutcomeCallable UpdateEnrollmentStatusCallable(const UpdateEnrollmentStatusRequestT& request) const
        {
            return SubmitCallable(&ComputeOptimizerClient::UpdateEnrollmentStatus, request);
        }

        /**
         * An Async wrapper for UpdateEnrollmentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnrollmentStatusRequestT = Model::UpdateEnrollmentStatusRequest>
        void UpdateEnrollmentStatusAsync(const UpdateEnrollmentStatusRequestT& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComputeOptimizerClient::UpdateEnrollmentStatus, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ComputeOptimizerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ComputeOptimizerClient>;
      void init(const ComputeOptimizerClientConfiguration& clientConfiguration);

      ComputeOptimizerClientConfiguration m_clientConfiguration;
      std::shared_ptr<ComputeOptimizerEndpointProviderBase> m_endpointProvider;
  };

} // namespace ComputeOptimizer
} // namespace Aws
