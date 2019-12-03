/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEC2RecommendationProjectedMetricsResult.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusResult.h>
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
        class GetAutoScalingGroupRecommendationsRequest;
        class GetEC2InstanceRecommendationsRequest;
        class GetEC2RecommendationProjectedMetricsRequest;
        class GetEnrollmentStatusRequest;
        class GetRecommendationSummariesRequest;
        class UpdateEnrollmentStatusRequest;

        typedef Aws::Utils::Outcome<GetAutoScalingGroupRecommendationsResult, Aws::Client::AWSError<ComputeOptimizerErrors>> GetAutoScalingGroupRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetEC2InstanceRecommendationsResult, Aws::Client::AWSError<ComputeOptimizerErrors>> GetEC2InstanceRecommendationsOutcome;
        typedef Aws::Utils::Outcome<GetEC2RecommendationProjectedMetricsResult, Aws::Client::AWSError<ComputeOptimizerErrors>> GetEC2RecommendationProjectedMetricsOutcome;
        typedef Aws::Utils::Outcome<GetEnrollmentStatusResult, Aws::Client::AWSError<ComputeOptimizerErrors>> GetEnrollmentStatusOutcome;
        typedef Aws::Utils::Outcome<GetRecommendationSummariesResult, Aws::Client::AWSError<ComputeOptimizerErrors>> GetRecommendationSummariesOutcome;
        typedef Aws::Utils::Outcome<UpdateEnrollmentStatusResult, Aws::Client::AWSError<ComputeOptimizerErrors>> UpdateEnrollmentStatusOutcome;

        typedef std::future<GetAutoScalingGroupRecommendationsOutcome> GetAutoScalingGroupRecommendationsOutcomeCallable;
        typedef std::future<GetEC2InstanceRecommendationsOutcome> GetEC2InstanceRecommendationsOutcomeCallable;
        typedef std::future<GetEC2RecommendationProjectedMetricsOutcome> GetEC2RecommendationProjectedMetricsOutcomeCallable;
        typedef std::future<GetEnrollmentStatusOutcome> GetEnrollmentStatusOutcomeCallable;
        typedef std::future<GetRecommendationSummariesOutcome> GetRecommendationSummariesOutcomeCallable;
        typedef std::future<UpdateEnrollmentStatusOutcome> UpdateEnrollmentStatusOutcomeCallable;
} // namespace Model

  class ComputeOptimizerClient;

    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetAutoScalingGroupRecommendationsRequest&, const Model::GetAutoScalingGroupRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoScalingGroupRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEC2InstanceRecommendationsRequest&, const Model::GetEC2InstanceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEC2InstanceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEC2RecommendationProjectedMetricsRequest&, const Model::GetEC2RecommendationProjectedMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEC2RecommendationProjectedMetricsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEnrollmentStatusRequest&, const Model::GetEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnrollmentStatusResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetRecommendationSummariesRequest&, const Model::GetRecommendationSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationSummariesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::UpdateEnrollmentStatusRequest&, const Model::UpdateEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnrollmentStatusResponseReceivedHandler;

  /**
   * <p>AWS Compute Optimizer is a service that analyzes the configuration and
   * utilization metrics of your AWS resources, such as EC2 instances and Auto
   * Scaling groups. It reports whether your resources are optimal, and generates
   * optimization recommendations to reduce the cost and improve the performance of
   * your workloads. Compute Optimizer also provides recent utilization metric data,
   * as well as projected utilization metric data for the recommendations, which you
   * can use to evaluate which recommendation provides the best price-performance
   * trade-off. The analysis of your usage patterns can help you decide when to move
   * or resize your running resources, and still meet your performance and capacity
   * requirements. For more information about Compute Optimizer, see the <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">AWS Compute
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
        ComputeOptimizerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComputeOptimizerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ComputeOptimizerClient();

        inline virtual const char* GetServiceClientName() const override { return "Compute Optimizer"; }


        /**
         * <p>Returns Auto Scaling group recommendations.</p> <p>AWS Compute Optimizer
         * currently generates recommendations for Auto Scaling groups that are configured
         * to run instances of the M, C, R, T, and X instance families. The service does
         * not generate recommendations for Auto Scaling groups that have a scaling policy
         * attached to them, or that do not have the same values for desired, minimum, and
         * maximum capacity. In order for Compute Optimizer to analyze your Auto Scaling
         * groups, they must be of a fixed size. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/what-is.html">AWS
         * Compute Optimizer User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoScalingGroupRecommendationsOutcome GetAutoScalingGroupRecommendations(const Model::GetAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * <p>Returns Auto Scaling group recommendations.</p> <p>AWS Compute Optimizer
         * currently generates recommendations for Auto Scaling groups that are configured
         * to run instances of the M, C, R, T, and X instance families. The service does
         * not generate recommendations for Auto Scaling groups that have a scaling policy
         * attached to them, or that do not have the same values for desired, minimum, and
         * maximum capacity. In order for Compute Optimizer to analyze your Auto Scaling
         * groups, they must be of a fixed size. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/what-is.html">AWS
         * Compute Optimizer User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutoScalingGroupRecommendationsOutcomeCallable GetAutoScalingGroupRecommendationsCallable(const Model::GetAutoScalingGroupRecommendationsRequest& request) const;

        /**
         * <p>Returns Auto Scaling group recommendations.</p> <p>AWS Compute Optimizer
         * currently generates recommendations for Auto Scaling groups that are configured
         * to run instances of the M, C, R, T, and X instance families. The service does
         * not generate recommendations for Auto Scaling groups that have a scaling policy
         * attached to them, or that do not have the same values for desired, minimum, and
         * maximum capacity. In order for Compute Optimizer to analyze your Auto Scaling
         * groups, they must be of a fixed size. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/what-is.html">AWS
         * Compute Optimizer User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetAutoScalingGroupRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutoScalingGroupRecommendationsAsync(const Model::GetAutoScalingGroupRecommendationsRequest& request, const GetAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns Amazon EC2 instance recommendations.</p> <p>AWS Compute Optimizer
         * currently generates recommendations for Amazon Elastic Compute Cloud (Amazon
         * EC2) and Amazon EC2 Auto Scaling. It generates recommendations for M, C, R, T,
         * and X instance families. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/what-is.html">AWS
         * Compute Optimizer User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEC2InstanceRecommendationsOutcome GetEC2InstanceRecommendations(const Model::GetEC2InstanceRecommendationsRequest& request) const;

        /**
         * <p>Returns Amazon EC2 instance recommendations.</p> <p>AWS Compute Optimizer
         * currently generates recommendations for Amazon Elastic Compute Cloud (Amazon
         * EC2) and Amazon EC2 Auto Scaling. It generates recommendations for M, C, R, T,
         * and X instance families. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/what-is.html">AWS
         * Compute Optimizer User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEC2InstanceRecommendationsOutcomeCallable GetEC2InstanceRecommendationsCallable(const Model::GetEC2InstanceRecommendationsRequest& request) const;

        /**
         * <p>Returns Amazon EC2 instance recommendations.</p> <p>AWS Compute Optimizer
         * currently generates recommendations for Amazon Elastic Compute Cloud (Amazon
         * EC2) and Amazon EC2 Auto Scaling. It generates recommendations for M, C, R, T,
         * and X instance families. For more information, see the <a
         * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/what-is.html">AWS
         * Compute Optimizer User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2InstanceRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEC2InstanceRecommendationsAsync(const Model::GetEC2InstanceRecommendationsRequest& request, const GetEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the projected utilization metrics of Amazon EC2 instance
         * recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2RecommendationProjectedMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEC2RecommendationProjectedMetricsOutcome GetEC2RecommendationProjectedMetrics(const Model::GetEC2RecommendationProjectedMetricsRequest& request) const;

        /**
         * <p>Returns the projected utilization metrics of Amazon EC2 instance
         * recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2RecommendationProjectedMetrics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEC2RecommendationProjectedMetricsOutcomeCallable GetEC2RecommendationProjectedMetricsCallable(const Model::GetEC2RecommendationProjectedMetricsRequest& request) const;

        /**
         * <p>Returns the projected utilization metrics of Amazon EC2 instance
         * recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEC2RecommendationProjectedMetrics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEC2RecommendationProjectedMetricsAsync(const Model::GetEC2RecommendationProjectedMetricsRequest& request, const GetEC2RecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is a master account of an organization,
         * this operation also confirms the enrollment status of member accounts within the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnrollmentStatusOutcome GetEnrollmentStatus(const Model::GetEnrollmentStatusRequest& request) const;

        /**
         * <p>Returns the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is a master account of an organization,
         * this operation also confirms the enrollment status of member accounts within the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnrollmentStatusOutcomeCallable GetEnrollmentStatusCallable(const Model::GetEnrollmentStatusRequest& request) const;

        /**
         * <p>Returns the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is a master account of an organization,
         * this operation also confirms the enrollment status of member accounts within the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetEnrollmentStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnrollmentStatusAsync(const Model::GetEnrollmentStatusRequest& request, const GetEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the optimization findings for an account.</p> <p>For example, it
         * returns the number of Amazon EC2 instances in an account that are
         * under-provisioned, over-provisioned, or optimized. It also returns the number of
         * Auto Scaling groups in an account that are not optimized, or
         * optimized.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRecommendationSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationSummariesOutcome GetRecommendationSummaries(const Model::GetRecommendationSummariesRequest& request) const;

        /**
         * <p>Returns the optimization findings for an account.</p> <p>For example, it
         * returns the number of Amazon EC2 instances in an account that are
         * under-provisioned, over-provisioned, or optimized. It also returns the number of
         * Auto Scaling groups in an account that are not optimized, or
         * optimized.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRecommendationSummaries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommendationSummariesOutcomeCallable GetRecommendationSummariesCallable(const Model::GetRecommendationSummariesRequest& request) const;

        /**
         * <p>Returns the optimization findings for an account.</p> <p>For example, it
         * returns the number of Amazon EC2 instances in an account that are
         * under-provisioned, over-provisioned, or optimized. It also returns the number of
         * Auto Scaling groups in an account that are not optimized, or
         * optimized.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRecommendationSummaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationSummariesAsync(const Model::GetRecommendationSummariesRequest& request, const GetRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is a master account of an organization,
         * this operation can also enroll member accounts within the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UpdateEnrollmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnrollmentStatusOutcome UpdateEnrollmentStatus(const Model::UpdateEnrollmentStatusRequest& request) const;

        /**
         * <p>Updates the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is a master account of an organization,
         * this operation can also enroll member accounts within the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UpdateEnrollmentStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnrollmentStatusOutcomeCallable UpdateEnrollmentStatusCallable(const Model::UpdateEnrollmentStatusRequest& request) const;

        /**
         * <p>Updates the enrollment (opt in) status of an account to the AWS Compute
         * Optimizer service.</p> <p>If the account is a master account of an organization,
         * this operation can also enroll member accounts within the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UpdateEnrollmentStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnrollmentStatusAsync(const Model::UpdateEnrollmentStatusRequest& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetAutoScalingGroupRecommendationsAsyncHelper(const Model::GetAutoScalingGroupRecommendationsRequest& request, const GetAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEC2InstanceRecommendationsAsyncHelper(const Model::GetEC2InstanceRecommendationsRequest& request, const GetEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEC2RecommendationProjectedMetricsAsyncHelper(const Model::GetEC2RecommendationProjectedMetricsRequest& request, const GetEC2RecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEnrollmentStatusAsyncHelper(const Model::GetEnrollmentStatusRequest& request, const GetEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecommendationSummariesAsyncHelper(const Model::GetRecommendationSummariesRequest& request, const GetRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEnrollmentStatusAsyncHelper(const Model::UpdateEnrollmentStatusRequest& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ComputeOptimizer
} // namespace Aws
