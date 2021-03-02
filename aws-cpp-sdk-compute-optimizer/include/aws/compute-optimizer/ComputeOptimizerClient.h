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
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsResult.h>
#include <aws/compute-optimizer/model/ExportAutoScalingGroupRecommendationsResult.h>
#include <aws/compute-optimizer/model/ExportEC2InstanceRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEBSVolumeRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEC2RecommendationProjectedMetricsResult.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusResult.h>
#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesResult.h>
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
        class DescribeRecommendationExportJobsRequest;
        class ExportAutoScalingGroupRecommendationsRequest;
        class ExportEC2InstanceRecommendationsRequest;
        class GetAutoScalingGroupRecommendationsRequest;
        class GetEBSVolumeRecommendationsRequest;
        class GetEC2InstanceRecommendationsRequest;
        class GetEC2RecommendationProjectedMetricsRequest;
        class GetEnrollmentStatusRequest;
        class GetLambdaFunctionRecommendationsRequest;
        class GetRecommendationSummariesRequest;
        class UpdateEnrollmentStatusRequest;

        typedef Aws::Utils::Outcome<DescribeRecommendationExportJobsResult, ComputeOptimizerError> DescribeRecommendationExportJobsOutcome;
        typedef Aws::Utils::Outcome<ExportAutoScalingGroupRecommendationsResult, ComputeOptimizerError> ExportAutoScalingGroupRecommendationsOutcome;
        typedef Aws::Utils::Outcome<ExportEC2InstanceRecommendationsResult, ComputeOptimizerError> ExportEC2InstanceRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetAutoScalingGroupRecommendationsResult, ComputeOptimizerError> GetAutoScalingGroupRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetEBSVolumeRecommendationsResult, ComputeOptimizerError> GetEBSVolumeRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetEC2InstanceRecommendationsResult, ComputeOptimizerError> GetEC2InstanceRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetEC2RecommendationProjectedMetricsResult, ComputeOptimizerError> GetEC2RecommendationProjectedMetricsOutcome;
        typedef Aws::Utils::Outcome<GetEnrollmentStatusResult, ComputeOptimizerError> GetEnrollmentStatusOutcome;
        typedef Aws::Utils::Outcome<GetLambdaFunctionRecommendationsResult, ComputeOptimizerError> GetLambdaFunctionRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetRecommendationSummariesResult, ComputeOptimizerError> GetRecommendationSummariesOutcome;
        typedef Aws::Utils::Outcome<UpdateEnrollmentStatusResult, ComputeOptimizerError> UpdateEnrollmentStatusOutcome;

        typedef std::future<DescribeRecommendationExportJobsOutcome> DescribeRecommendationExportJobsOutcomeCallable;
        typedef std::future<ExportAutoScalingGroupRecommendationsOutcome> ExportAutoScalingGroupRecommendationsOutcomeCallable;
        typedef std::future<ExportEC2InstanceRecommendationsOutcome> ExportEC2InstanceRecommendationsOutcomeCallable;
        typedef std::future<GetAutoScalingGroupRecommendationsOutcome> GetAutoScalingGroupRecommendationsOutcomeCallable;
        typedef std::future<GetEBSVolumeRecommendationsOutcome> GetEBSVolumeRecommendationsOutcomeCallable;
        typedef std::future<GetEC2InstanceRecommendationsOutcome> GetEC2InstanceRecommendationsOutcomeCallable;
        typedef std::future<GetEC2RecommendationProjectedMetricsOutcome> GetEC2RecommendationProjectedMetricsOutcomeCallable;
        typedef std::future<GetEnrollmentStatusOutcome> GetEnrollmentStatusOutcomeCallable;
        typedef std::future<GetLambdaFunctionRecommendationsOutcome> GetLambdaFunctionRecommendationsOutcomeCallable;
        typedef std::future<GetRecommendationSummariesOutcome> GetRecommendationSummariesOutcomeCallable;
        typedef std::future<UpdateEnrollmentStatusOutcome> UpdateEnrollmentStatusOutcomeCallable;
} // namespace Model

  class ComputeOptimizerClient;

    typedef std::function<void(const ComputeOptimizerClient*, const Model::DescribeRecommendationExportJobsRequest&, const Model::DescribeRecommendationExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecommendationExportJobsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportAutoScalingGroupRecommendationsRequest&, const Model::ExportAutoScalingGroupRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportAutoScalingGroupRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportEC2InstanceRecommendationsRequest&, const Model::ExportEC2InstanceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportEC2InstanceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetAutoScalingGroupRecommendationsRequest&, const Model::GetAutoScalingGroupRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoScalingGroupRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEBSVolumeRecommendationsRequest&, const Model::GetEBSVolumeRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEBSVolumeRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEC2InstanceRecommendationsRequest&, const Model::GetEC2InstanceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEC2InstanceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEC2RecommendationProjectedMetricsRequest&, const Model::GetEC2RecommendationProjectedMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEC2RecommendationProjectedMetricsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEnrollmentStatusRequest&, const Model::GetEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnrollmentStatusResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetLambdaFunctionRecommendationsRequest&, const Model::GetLambdaFunctionRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLambdaFunctionRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetRecommendationSummariesRequest&, const Model::GetRecommendationSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationSummariesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::UpdateEnrollmentStatusRequest&, const Model::UpdateEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnrollmentStatusResponseReceivedHandler;

  /**
   * <p>AWS Compute Optimizer is a service that analyzes the configuration and
   * utilization metrics of your AWS compute resources, such as EC2 instances, Auto
   * Scaling groups, AWS Lambda functions, and Amazon EBS volumes. It reports whether
   * your resources are optimal, and generates optimization recommendations to reduce
   * the cost and improve the performance of your workloads. Compute Optimizer also
   * provides recent utilization metric data, as well as projected utilization metric
   * data for the recommendations, which you can use to evaluate which recommendation
   * provides the best price-performance trade-off. The analysis of your usage
   * patterns can help you decide when to move or resize your running resources, and
   * still meet your performance and capacity requirements. For more information
   * about Compute Optimizer, including the required permissions to use the service,
   * see the <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">AWS
   * Compute Optimizer User Guide</a>.</p>
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
        ComputeOptimizerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComputeOptimizerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ComputeOptimizerClient();


        /**
         * <p>Describes recommendation export jobs created in the last seven days.</p>
         * <p>Use the <code>ExportAutoScalingGroupRecommendations</code> or
         * <code>ExportEC2InstanceRecommendations</code> actions to request an export of
         * your recommendations. Then use the <code>DescribeRecommendationExportJobs</code>
         * action to view your export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/DescribeRecommendationExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecommendationExportJobsOutcome DescribeRecommendationExportJobs(const Model::DescribeRecommendationExportJobsRequest& request) const;

        /**
         * <p>Describes recommendation export jobs created in the last seven days.</p>
         * <p>Use the <code>ExportAutoScalingGroupRecommendations</code> or
         * <code>ExportEC2InstanceRecommendations</code> actions to request an export of
         * your recommendations. Then use the <code>DescribeRecommendationExportJobs</code>
         * action to view your export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/DescribeRecommendationExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecommendationExportJobsOutcomeCallable DescribeRecommendationExportJobsCallable(const Model::DescribeRecommendationExportJobsRequest& request) const;

        /**
         * <p>Describes recommendation export jobs created in the last seven days.</p>
         * <p>Use the <code>ExportAutoScalingGroupRecommendations</code> or
         * <code>ExportEC2InstanceRecommendations</code> actions to request an export of
         * your recommendations. Then use the <code>DescribeRecommendationExportJobs</code>
         * action to view your export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/DescribeRecommendationExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecommendationExportJobsAsync(const Model::DescribeRecommendationExportJobsRequest& request, const DescribeRecommendationExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports optimization recommendations for Auto Scaling groups.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (.json) file, to an existing Amazon
         * Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Auto Scaling group export job in progress per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportAutoScalingGroupRecommendationsOutcome ExportAutoScalingGroupRecommendations(const Model::ExportAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * <p>Exports optimization recommendations for Auto Scaling groups.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (.json) file, to an existing Amazon
         * Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Auto Scaling group export job in progress per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportAutoScalingGroupRecommendationsOutcomeCallable ExportAutoScalingGroupRecommendationsCallable(const Model::ExportAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * <p>Exports optimization recommendations for Auto Scaling groups.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (.json) file, to an existing Amazon
         * Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Auto Scaling group export job in progress per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportAutoScalingGroupRecommendationsAsync(const Model::ExportAutoScalingGroupRecommendationsRequest& request, const ExportAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports optimization recommendations for Amazon EC2 instances.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (.json) file, to an existing Amazon
         * Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Amazon EC2 instance export job in progress per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportEC2InstanceRecommendationsOutcome ExportEC2InstanceRecommendations(const Model::ExportEC2InstanceRecommendationsRequest& request) const;

        /**
         * <p>Exports optimization recommendations for Amazon EC2 instances.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (.json) file, to an existing Amazon
         * Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Amazon EC2 instance export job in progress per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportEC2InstanceRecommendationsOutcomeCallable ExportEC2InstanceRecommendationsCallable(const Model::ExportEC2InstanceRecommendationsRequest& request) const;

        /**
         * <p>Exports optimization recommendations for Amazon EC2 instances.</p>
         * <p>Recommendations are exported in a comma-separated values (.csv) file, and its
         * metadata in a JavaScript Object Notation (.json) file, to an existing Amazon
         * Simple Storage Service (Amazon S3) bucket that you specify. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/exporting-recommendations.html">Exporting
         * Recommendations</a> in the <i>Compute Optimizer User Guide</i>.</p> <p>You can
         * have only one Amazon EC2 instance export job in progress per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExportEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportEC2InstanceRecommendationsAsync(const Model::ExportEC2InstanceRecommendationsRequest& request, const ExportEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns Auto Scaling group recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for Amazon EC2 Auto Scaling groups that meet a
         * specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoScalingGroupRecommendationsOutcome GetAutoScalingGroupRecommendations(const Model::GetAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * <p>Returns Auto Scaling group recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for Amazon EC2 Auto Scaling groups that meet a
         * specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutoScalingGroupRecommendationsOutcomeCallable GetAutoScalingGroupRecommendationsCallable(const Model::GetAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * <p>Returns Auto Scaling group recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for Amazon EC2 Auto Scaling groups that meet a
         * specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutoScalingGroupRecommendationsAsync(const Model::GetAutoScalingGroupRecommendationsRequest& request, const GetAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns Amazon Elastic Block Store (Amazon EBS) volume recommendations.</p>
         * <p>AWS Compute Optimizer generates recommendations for Amazon EBS volumes that
         * meet a specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEBSVolumeRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEBSVolumeRecommendationsOutcome GetEBSVolumeRecommendations(const Model::GetEBSVolumeRecommendationsRequest& request) const;

        /**
         * <p>Returns Amazon Elastic Block Store (Amazon EBS) volume recommendations.</p>
         * <p>AWS Compute Optimizer generates recommendations for Amazon EBS volumes that
         * meet a specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEBSVolumeRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEBSVolumeRecommendationsOutcomeCallable GetEBSVolumeRecommendationsCallable(const Model::GetEBSVolumeRecommendationsRequest& request) const;

        /**
         * <p>Returns Amazon Elastic Block Store (Amazon EBS) volume recommendations.</p>
         * <p>AWS Compute Optimizer generates recommendations for Amazon EBS volumes that
         * meet a specific set of requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEBSVolumeRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEBSVolumeRecommendationsAsync(const Model::GetEBSVolumeRecommendationsRequest& request, const GetEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns Amazon EC2 instance recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for Amazon Elastic Compute Cloud (Amazon EC2)
         * instances that meet a specific set of requirements. For more information, see
         * the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEC2InstanceRecommendationsOutcome GetEC2InstanceRecommendations(const Model::GetEC2InstanceRecommendationsRequest& request) const;

        /**
         * <p>Returns Amazon EC2 instance recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for Amazon Elastic Compute Cloud (Amazon EC2)
         * instances that meet a specific set of requirements. For more information, see
         * the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEC2InstanceRecommendationsOutcomeCallable GetEC2InstanceRecommendationsCallable(const Model::GetEC2InstanceRecommendationsRequest& request) const;

        /**
         * <p>Returns Amazon EC2 instance recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for Amazon Elastic Compute Cloud (Amazon EC2)
         * instances that meet a specific set of requirements. For more information, see
         * the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEC2RecommendationProjectedMetricsOutcomeCallable GetEC2RecommendationProjectedMetricsCallable(const Model::GetEC2RecommendationProjectedMetricsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEC2RecommendationProjectedMetricsAsync(const Model::GetEC2RecommendationProjectedMetricsRequest& request, const GetEC2RecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is the management account of an
         * organization, this action also confirms the enrollment status of member accounts
         * within the organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnrollmentStatusOutcome GetEnrollmentStatus(const Model::GetEnrollmentStatusRequest& request) const;

        /**
         * <p>Returns the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is the management account of an
         * organization, this action also confirms the enrollment status of member accounts
         * within the organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnrollmentStatusOutcomeCallable GetEnrollmentStatusCallable(const Model::GetEnrollmentStatusRequest& request) const;

        /**
         * <p>Returns the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is the management account of an
         * organization, this action also confirms the enrollment status of member accounts
         * within the organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnrollmentStatusAsync(const Model::GetEnrollmentStatusRequest& request, const GetEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns AWS Lambda function recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for functions that meet a specific set of
         * requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetLambdaFunctionRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLambdaFunctionRecommendationsOutcome GetLambdaFunctionRecommendations(const Model::GetLambdaFunctionRecommendationsRequest& request) const;

        /**
         * <p>Returns AWS Lambda function recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for functions that meet a specific set of
         * requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetLambdaFunctionRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLambdaFunctionRecommendationsOutcomeCallable GetLambdaFunctionRecommendationsCallable(const Model::GetLambdaFunctionRecommendationsRequest& request) const;

        /**
         * <p>Returns AWS Lambda function recommendations.</p> <p>AWS Compute Optimizer
         * generates recommendations for functions that meet a specific set of
         * requirements. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
         * resources and requirements</a> in the <i>AWS Compute Optimizer User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetLambdaFunctionRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLambdaFunctionRecommendationsAsync(const Model::GetLambdaFunctionRecommendationsRequest& request, const GetLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommendationSummariesOutcomeCallable GetRecommendationSummariesCallable(const Model::GetRecommendationSummariesRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationSummariesAsync(const Model::GetRecommendationSummariesRequest& request, const GetRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the enrollment (opt in and opt out) status of an account to the AWS
         * Compute Optimizer service.</p> <p>If the account is a management account of an
         * organization, this action can also be used to enroll member accounts within the
         * organization.</p> <p>You must have the appropriate permissions to opt in to
         * Compute Optimizer, to view its recommendations, and to opt out. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/ug/security-iam.html">Controlling
         * access with AWS Identity and Access Management</a> in the <i>Compute Optimizer
         * User Guide</i>.</p> <p>When you opt in, Compute Optimizer automatically creates
         * a Service-Linked Role in your account to access its data. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/ug/using-service-linked-roles.html">Using
         * Service-Linked Roles for AWS Compute Optimizer</a> in the <i>Compute Optimizer
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UpdateEnrollmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnrollmentStatusOutcome UpdateEnrollmentStatus(const Model::UpdateEnrollmentStatusRequest& request) const;

        /**
         * <p>Updates the enrollment (opt in and opt out) status of an account to the AWS
         * Compute Optimizer service.</p> <p>If the account is a management account of an
         * organization, this action can also be used to enroll member accounts within the
         * organization.</p> <p>You must have the appropriate permissions to opt in to
         * Compute Optimizer, to view its recommendations, and to opt out. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/ug/security-iam.html">Controlling
         * access with AWS Identity and Access Management</a> in the <i>Compute Optimizer
         * User Guide</i>.</p> <p>When you opt in, Compute Optimizer automatically creates
         * a Service-Linked Role in your account to access its data. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/ug/using-service-linked-roles.html">Using
         * Service-Linked Roles for AWS Compute Optimizer</a> in the <i>Compute Optimizer
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UpdateEnrollmentStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnrollmentStatusOutcomeCallable UpdateEnrollmentStatusCallable(const Model::UpdateEnrollmentStatusRequest& request) const;

        /**
         * <p>Updates the enrollment (opt in and opt out) status of an account to the AWS
         * Compute Optimizer service.</p> <p>If the account is a management account of an
         * organization, this action can also be used to enroll member accounts within the
         * organization.</p> <p>You must have the appropriate permissions to opt in to
         * Compute Optimizer, to view its recommendations, and to opt out. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/ug/security-iam.html">Controlling
         * access with AWS Identity and Access Management</a> in the <i>Compute Optimizer
         * User Guide</i>.</p> <p>When you opt in, Compute Optimizer automatically creates
         * a Service-Linked Role in your account to access its data. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/compute-optimizer/ug/using-service-linked-roles.html">Using
         * Service-Linked Roles for AWS Compute Optimizer</a> in the <i>Compute Optimizer
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UpdateEnrollmentStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnrollmentStatusAsync(const Model::UpdateEnrollmentStatusRequest& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DescribeRecommendationExportJobsAsyncHelper(const Model::DescribeRecommendationExportJobsRequest& request, const DescribeRecommendationExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportAutoScalingGroupRecommendationsAsyncHelper(const Model::ExportAutoScalingGroupRecommendationsRequest& request, const ExportAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportEC2InstanceRecommendationsAsyncHelper(const Model::ExportEC2InstanceRecommendationsRequest& request, const ExportEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAutoScalingGroupRecommendationsAsyncHelper(const Model::GetAutoScalingGroupRecommendationsRequest& request, const GetAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEBSVolumeRecommendationsAsyncHelper(const Model::GetEBSVolumeRecommendationsRequest& request, const GetEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEC2InstanceRecommendationsAsyncHelper(const Model::GetEC2InstanceRecommendationsRequest& request, const GetEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEC2RecommendationProjectedMetricsAsyncHelper(const Model::GetEC2RecommendationProjectedMetricsRequest& request, const GetEC2RecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEnrollmentStatusAsyncHelper(const Model::GetEnrollmentStatusRequest& request, const GetEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLambdaFunctionRecommendationsAsyncHelper(const Model::GetLambdaFunctionRecommendationsRequest& request, const GetLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecommendationSummariesAsyncHelper(const Model::GetRecommendationSummariesRequest& request, const GetRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEnrollmentStatusAsyncHelper(const Model::UpdateEnrollmentStatusRequest& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ComputeOptimizer
} // namespace Aws
