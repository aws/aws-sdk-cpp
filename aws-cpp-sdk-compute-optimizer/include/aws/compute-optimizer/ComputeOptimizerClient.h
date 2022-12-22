/**
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComputeOptimizerClient(const Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration = Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration(),
                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider = Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComputeOptimizerClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider = Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration = Aws::ComputeOptimizer::ComputeOptimizerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComputeOptimizerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider = Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::DeleteRecommendationPreferencesOutcomeCallable DeleteRecommendationPreferencesCallable(const Model::DeleteRecommendationPreferencesRequest& request) const;

        /**
         * An Async wrapper for DeleteRecommendationPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecommendationPreferencesAsync(const Model::DeleteRecommendationPreferencesRequest& request, const DeleteRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes recommendation export jobs created in the last seven days.</p>
         * <p>Use the <a>ExportAutoScalingGroupRecommendations</a> or
         * <a>ExportEC2InstanceRecommendations</a> actions to request an export of your
         * recommendations. Then use the <a>DescribeRecommendationExportJobs</a> action to
         * view your export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/DescribeRecommendationExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecommendationExportJobsOutcome DescribeRecommendationExportJobs(const Model::DescribeRecommendationExportJobsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecommendationExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecommendationExportJobsOutcomeCallable DescribeRecommendationExportJobsCallable(const Model::DescribeRecommendationExportJobsRequest& request) const;

        /**
         * An Async wrapper for DescribeRecommendationExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecommendationExportJobsAsync(const Model::DescribeRecommendationExportJobsRequest& request, const DescribeRecommendationExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ExportAutoScalingGroupRecommendationsOutcomeCallable ExportAutoScalingGroupRecommendationsCallable(const Model::ExportAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ExportAutoScalingGroupRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportAutoScalingGroupRecommendationsAsync(const Model::ExportAutoScalingGroupRecommendationsRequest& request, const ExportAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ExportEBSVolumeRecommendationsOutcomeCallable ExportEBSVolumeRecommendationsCallable(const Model::ExportEBSVolumeRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ExportEBSVolumeRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportEBSVolumeRecommendationsAsync(const Model::ExportEBSVolumeRecommendationsRequest& request, const ExportEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ExportEC2InstanceRecommendationsOutcomeCallable ExportEC2InstanceRecommendationsCallable(const Model::ExportEC2InstanceRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ExportEC2InstanceRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportEC2InstanceRecommendationsAsync(const Model::ExportEC2InstanceRecommendationsRequest& request, const ExportEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ExportECSServiceRecommendationsOutcomeCallable ExportECSServiceRecommendationsCallable(const Model::ExportECSServiceRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ExportECSServiceRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportECSServiceRecommendationsAsync(const Model::ExportECSServiceRecommendationsRequest& request, const ExportECSServiceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ExportLambdaFunctionRecommendationsOutcomeCallable ExportLambdaFunctionRecommendationsCallable(const Model::ExportLambdaFunctionRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ExportLambdaFunctionRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportLambdaFunctionRecommendationsAsync(const Model::ExportLambdaFunctionRecommendationsRequest& request, const ExportLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAutoScalingGroupRecommendationsOutcome GetAutoScalingGroupRecommendations(const Model::GetAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetAutoScalingGroupRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutoScalingGroupRecommendationsOutcomeCallable GetAutoScalingGroupRecommendationsCallable(const Model::GetAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * An Async wrapper for GetAutoScalingGroupRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutoScalingGroupRecommendationsAsync(const Model::GetAutoScalingGroupRecommendationsRequest& request, const GetAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEBSVolumeRecommendationsOutcome GetEBSVolumeRecommendations(const Model::GetEBSVolumeRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetEBSVolumeRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEBSVolumeRecommendationsOutcomeCallable GetEBSVolumeRecommendationsCallable(const Model::GetEBSVolumeRecommendationsRequest& request) const;

        /**
         * An Async wrapper for GetEBSVolumeRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEBSVolumeRecommendationsAsync(const Model::GetEBSVolumeRecommendationsRequest& request, const GetEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEC2InstanceRecommendationsOutcome GetEC2InstanceRecommendations(const Model::GetEC2InstanceRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetEC2InstanceRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEC2InstanceRecommendationsOutcomeCallable GetEC2InstanceRecommendationsCallable(const Model::GetEC2InstanceRecommendationsRequest& request) const;

        /**
         * An Async wrapper for GetEC2InstanceRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEC2InstanceRecommendationsAsync(const Model::GetEC2InstanceRecommendationsRequest& request, const GetEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEC2RecommendationProjectedMetricsOutcomeCallable GetEC2RecommendationProjectedMetricsCallable(const Model::GetEC2RecommendationProjectedMetricsRequest& request) const;

        /**
         * An Async wrapper for GetEC2RecommendationProjectedMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEC2RecommendationProjectedMetricsAsync(const Model::GetEC2RecommendationProjectedMetricsRequest& request, const GetEC2RecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetECSServiceRecommendationProjectedMetricsOutcomeCallable GetECSServiceRecommendationProjectedMetricsCallable(const Model::GetECSServiceRecommendationProjectedMetricsRequest& request) const;

        /**
         * An Async wrapper for GetECSServiceRecommendationProjectedMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetECSServiceRecommendationProjectedMetricsAsync(const Model::GetECSServiceRecommendationProjectedMetricsRequest& request, const GetECSServiceRecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetECSServiceRecommendationsOutcome GetECSServiceRecommendations(const Model::GetECSServiceRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetECSServiceRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetECSServiceRecommendationsOutcomeCallable GetECSServiceRecommendationsCallable(const Model::GetECSServiceRecommendationsRequest& request) const;

        /**
         * An Async wrapper for GetECSServiceRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetECSServiceRecommendationsAsync(const Model::GetECSServiceRecommendationsRequest& request, const GetECSServiceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEffectiveRecommendationPreferencesOutcomeCallable GetEffectiveRecommendationPreferencesCallable(const Model::GetEffectiveRecommendationPreferencesRequest& request) const;

        /**
         * An Async wrapper for GetEffectiveRecommendationPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEffectiveRecommendationPreferencesAsync(const Model::GetEffectiveRecommendationPreferencesRequest& request, const GetEffectiveRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEnrollmentStatusOutcome GetEnrollmentStatus(const Model::GetEnrollmentStatusRequest& request) const;

        /**
         * A Callable wrapper for GetEnrollmentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnrollmentStatusOutcomeCallable GetEnrollmentStatusCallable(const Model::GetEnrollmentStatusRequest& request) const;

        /**
         * An Async wrapper for GetEnrollmentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnrollmentStatusAsync(const Model::GetEnrollmentStatusRequest& request, const GetEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the Compute Optimizer enrollment (opt-in) status of organization
         * member accounts, if your account is an organization management account.</p>
         * <p>To get the enrollment status of standalone accounts, use the
         * <a>GetEnrollmentStatus</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatusesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnrollmentStatusesForOrganizationOutcome GetEnrollmentStatusesForOrganization(const Model::GetEnrollmentStatusesForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for GetEnrollmentStatusesForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnrollmentStatusesForOrganizationOutcomeCallable GetEnrollmentStatusesForOrganizationCallable(const Model::GetEnrollmentStatusesForOrganizationRequest& request) const;

        /**
         * An Async wrapper for GetEnrollmentStatusesForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnrollmentStatusesForOrganizationAsync(const Model::GetEnrollmentStatusesForOrganizationRequest& request, const GetEnrollmentStatusesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetLambdaFunctionRecommendationsOutcome GetLambdaFunctionRecommendations(const Model::GetLambdaFunctionRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetLambdaFunctionRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLambdaFunctionRecommendationsOutcomeCallable GetLambdaFunctionRecommendationsCallable(const Model::GetLambdaFunctionRecommendationsRequest& request) const;

        /**
         * An Async wrapper for GetLambdaFunctionRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLambdaFunctionRecommendationsAsync(const Model::GetLambdaFunctionRecommendationsRequest& request, const GetLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetRecommendationPreferencesOutcomeCallable GetRecommendationPreferencesCallable(const Model::GetRecommendationPreferencesRequest& request) const;

        /**
         * An Async wrapper for GetRecommendationPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationPreferencesAsync(const Model::GetRecommendationPreferencesRequest& request, const GetRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the optimization findings for an account.</p> <p>It returns the
         * number of:</p> <ul> <li> <p>Amazon EC2 instances in an account that are
         * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
         * <code>Optimized</code>.</p> </li> <li> <p>Auto Scaling groups in an account that
         * are <code>NotOptimized</code>, or <code>Optimized</code>.</p> </li> <li>
         * <p>Amazon EBS volumes in an account that are <code>NotOptimized</code>, or
         * <code>Optimized</code>.</p> </li> <li> <p>Lambda functions in an account that
         * are <code>NotOptimized</code>, or <code>Optimized</code>.</p> </li> <li>
         * <p>Amazon ECS services in an account that are <code>Underprovisioned</code>,
         * <code>Overprovisioned</code>, or <code>Optimized</code>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRecommendationSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationSummariesOutcome GetRecommendationSummaries(const Model::GetRecommendationSummariesRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendationSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommendationSummariesOutcomeCallable GetRecommendationSummariesCallable(const Model::GetRecommendationSummariesRequest& request) const;

        /**
         * An Async wrapper for GetRecommendationSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationSummariesAsync(const Model::GetRecommendationSummariesRequest& request, const GetRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutRecommendationPreferencesOutcomeCallable PutRecommendationPreferencesCallable(const Model::PutRecommendationPreferencesRequest& request) const;

        /**
         * An Async wrapper for PutRecommendationPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRecommendationPreferencesAsync(const Model::PutRecommendationPreferencesRequest& request, const PutRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateEnrollmentStatusOutcomeCallable UpdateEnrollmentStatusCallable(const Model::UpdateEnrollmentStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateEnrollmentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnrollmentStatusAsync(const Model::UpdateEnrollmentStatusRequest& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ComputeOptimizerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ComputeOptimizerClient>;
      void init(const ComputeOptimizerClientConfiguration& clientConfiguration);

      ComputeOptimizerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ComputeOptimizerEndpointProviderBase> m_endpointProvider;
  };

} // namespace ComputeOptimizer
} // namespace Aws
