/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/compute-optimizer/model/DeleteRecommendationPreferencesResult.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsResult.h>
#include <aws/compute-optimizer/model/ExportAutoScalingGroupRecommendationsResult.h>
#include <aws/compute-optimizer/model/ExportEBSVolumeRecommendationsResult.h>
#include <aws/compute-optimizer/model/ExportEC2InstanceRecommendationsResult.h>
#include <aws/compute-optimizer/model/ExportLambdaFunctionRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEBSVolumeRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEC2RecommendationProjectedMetricsResult.h>
#include <aws/compute-optimizer/model/GetEffectiveRecommendationPreferencesResult.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusResult.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusesForOrganizationResult.h>
#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesResult.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesResult.h>
#include <aws/compute-optimizer/model/PutRecommendationPreferencesResult.h>
#include <aws/compute-optimizer/model/UpdateEnrollmentStatusResult.h>
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

namespace ComputeOptimizer
{

namespace Model
{
        class DeleteRecommendationPreferencesRequest;
        class DescribeRecommendationExportJobsRequest;
        class ExportAutoScalingGroupRecommendationsRequest;
        class ExportEBSVolumeRecommendationsRequest;
        class ExportEC2InstanceRecommendationsRequest;
        class ExportLambdaFunctionRecommendationsRequest;
        class GetAutoScalingGroupRecommendationsRequest;
        class GetEBSVolumeRecommendationsRequest;
        class GetEC2InstanceRecommendationsRequest;
        class GetEC2RecommendationProjectedMetricsRequest;
        class GetEffectiveRecommendationPreferencesRequest;
        class GetEnrollmentStatusRequest;
        class GetEnrollmentStatusesForOrganizationRequest;
        class GetLambdaFunctionRecommendationsRequest;
        class GetRecommendationPreferencesRequest;
        class GetRecommendationSummariesRequest;
        class PutRecommendationPreferencesRequest;
        class UpdateEnrollmentStatusRequest;

        typedef Aws::Utils::Outcome<DeleteRecommendationPreferencesResult, ComputeOptimizerError> DeleteRecommendationPreferencesOutcome;
        typedef Aws::Utils::Outcome<DescribeRecommendationExportJobsResult, ComputeOptimizerError> DescribeRecommendationExportJobsOutcome;
        typedef Aws::Utils::Outcome<ExportAutoScalingGroupRecommendationsResult, ComputeOptimizerError> ExportAutoScalingGroupRecommendationsOutcome;
        typedef Aws::Utils::Outcome<ExportEBSVolumeRecommendationsResult, ComputeOptimizerError> ExportEBSVolumeRecommendationsOutcome;
        typedef Aws::Utils::Outcome<ExportEC2InstanceRecommendationsResult, ComputeOptimizerError> ExportEC2InstanceRecommendationsOutcome;
        typedef Aws::Utils::Outcome<ExportLambdaFunctionRecommendationsResult, ComputeOptimizerError> ExportLambdaFunctionRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetAutoScalingGroupRecommendationsResult, ComputeOptimizerError> GetAutoScalingGroupRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetEBSVolumeRecommendationsResult, ComputeOptimizerError> GetEBSVolumeRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetEC2InstanceRecommendationsResult, ComputeOptimizerError> GetEC2InstanceRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetEC2RecommendationProjectedMetricsResult, ComputeOptimizerError> GetEC2RecommendationProjectedMetricsOutcome;
        typedef Aws::Utils::Outcome<GetEffectiveRecommendationPreferencesResult, ComputeOptimizerError> GetEffectiveRecommendationPreferencesOutcome;
        typedef Aws::Utils::Outcome<GetEnrollmentStatusResult, ComputeOptimizerError> GetEnrollmentStatusOutcome;
        typedef Aws::Utils::Outcome<GetEnrollmentStatusesForOrganizationResult, ComputeOptimizerError> GetEnrollmentStatusesForOrganizationOutcome;
        typedef Aws::Utils::Outcome<GetLambdaFunctionRecommendationsResult, ComputeOptimizerError> GetLambdaFunctionRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetRecommendationPreferencesResult, ComputeOptimizerError> GetRecommendationPreferencesOutcome;
        typedef Aws::Utils::Outcome<GetRecommendationSummariesResult, ComputeOptimizerError> GetRecommendationSummariesOutcome;
        typedef Aws::Utils::Outcome<PutRecommendationPreferencesResult, ComputeOptimizerError> PutRecommendationPreferencesOutcome;
        typedef Aws::Utils::Outcome<UpdateEnrollmentStatusResult, ComputeOptimizerError> UpdateEnrollmentStatusOutcome;

        typedef std::future<DeleteRecommendationPreferencesOutcome> DeleteRecommendationPreferencesOutcomeCallable;
        typedef std::future<DescribeRecommendationExportJobsOutcome> DescribeRecommendationExportJobsOutcomeCallable;
        typedef std::future<ExportAutoScalingGroupRecommendationsOutcome> ExportAutoScalingGroupRecommendationsOutcomeCallable;
        typedef std::future<ExportEBSVolumeRecommendationsOutcome> ExportEBSVolumeRecommendationsOutcomeCallable;
        typedef std::future<ExportEC2InstanceRecommendationsOutcome> ExportEC2InstanceRecommendationsOutcomeCallable;
        typedef std::future<ExportLambdaFunctionRecommendationsOutcome> ExportLambdaFunctionRecommendationsOutcomeCallable;
        typedef std::future<GetAutoScalingGroupRecommendationsOutcome> GetAutoScalingGroupRecommendationsOutcomeCallable;
        typedef std::future<GetEBSVolumeRecommendationsOutcome> GetEBSVolumeRecommendationsOutcomeCallable;
        typedef std::future<GetEC2InstanceRecommendationsOutcome> GetEC2InstanceRecommendationsOutcomeCallable;
        typedef std::future<GetEC2RecommendationProjectedMetricsOutcome> GetEC2RecommendationProjectedMetricsOutcomeCallable;
        typedef std::future<GetEffectiveRecommendationPreferencesOutcome> GetEffectiveRecommendationPreferencesOutcomeCallable;
        typedef std::future<GetEnrollmentStatusOutcome> GetEnrollmentStatusOutcomeCallable;
        typedef std::future<GetEnrollmentStatusesForOrganizationOutcome> GetEnrollmentStatusesForOrganizationOutcomeCallable;
        typedef std::future<GetLambdaFunctionRecommendationsOutcome> GetLambdaFunctionRecommendationsOutcomeCallable;
        typedef std::future<GetRecommendationPreferencesOutcome> GetRecommendationPreferencesOutcomeCallable;
        typedef std::future<GetRecommendationSummariesOutcome> GetRecommendationSummariesOutcomeCallable;
        typedef std::future<PutRecommendationPreferencesOutcome> PutRecommendationPreferencesOutcomeCallable;
        typedef std::future<UpdateEnrollmentStatusOutcome> UpdateEnrollmentStatusOutcomeCallable;
} // namespace Model

  class ComputeOptimizerClient;

    typedef std::function<void(const ComputeOptimizerClient*, const Model::DeleteRecommendationPreferencesRequest&, const Model::DeleteRecommendationPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecommendationPreferencesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::DescribeRecommendationExportJobsRequest&, const Model::DescribeRecommendationExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecommendationExportJobsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportAutoScalingGroupRecommendationsRequest&, const Model::ExportAutoScalingGroupRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportAutoScalingGroupRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportEBSVolumeRecommendationsRequest&, const Model::ExportEBSVolumeRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportEBSVolumeRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportEC2InstanceRecommendationsRequest&, const Model::ExportEC2InstanceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportEC2InstanceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportLambdaFunctionRecommendationsRequest&, const Model::ExportLambdaFunctionRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportLambdaFunctionRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetAutoScalingGroupRecommendationsRequest&, const Model::GetAutoScalingGroupRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoScalingGroupRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEBSVolumeRecommendationsRequest&, const Model::GetEBSVolumeRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEBSVolumeRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEC2InstanceRecommendationsRequest&, const Model::GetEC2InstanceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEC2InstanceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEC2RecommendationProjectedMetricsRequest&, const Model::GetEC2RecommendationProjectedMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEC2RecommendationProjectedMetricsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEffectiveRecommendationPreferencesRequest&, const Model::GetEffectiveRecommendationPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEffectiveRecommendationPreferencesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEnrollmentStatusRequest&, const Model::GetEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnrollmentStatusResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEnrollmentStatusesForOrganizationRequest&, const Model::GetEnrollmentStatusesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnrollmentStatusesForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetLambdaFunctionRecommendationsRequest&, const Model::GetLambdaFunctionRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLambdaFunctionRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetRecommendationPreferencesRequest&, const Model::GetRecommendationPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationPreferencesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetRecommendationSummariesRequest&, const Model::GetRecommendationSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationSummariesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::PutRecommendationPreferencesRequest&, const Model::PutRecommendationPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecommendationPreferencesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::UpdateEnrollmentStatusRequest&, const Model::UpdateEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnrollmentStatusResponseReceivedHandler;

  /**
   * <p>Compute Optimizer is a service that analyzes the configuration and
   * utilization metrics of your Amazon Web Services compute resources, such as
   * Amazon EC2 instances, Amazon EC2 Auto Scaling groups, Lambda functions, and
   * Amazon EBS volumes. It reports whether your resources are optimal, and generates
   * optimization recommendations to reduce the cost and improve the performance of
   * your workloads. Compute Optimizer also provides recent utilization metric data,
   * in addition to projected utilization metric data for the recommendations, which
   * you can use to evaluate which recommendation provides the best price-performance
   * trade-off. The analysis of your usage patterns can help you decide when to move
   * or resize your running resources, and still meet your performance and capacity
   * requirements. For more information about Compute Optimizer, including the
   * required permissions to use the service, see the <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">Compute
   * Optimizer User Guide</a>.</p>
   */
  class AWS_COMPUTEOPTIMIZER_API ComputeOptimizerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComputeOptimizerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComputeOptimizerClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComputeOptimizerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * are <code>NotOptimized</code>, or <code>Optimized</code>.</p> </li>
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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ComputeOptimizer
} // namespace Aws
