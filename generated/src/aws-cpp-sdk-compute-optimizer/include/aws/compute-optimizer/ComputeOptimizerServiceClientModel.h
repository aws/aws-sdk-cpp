/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/compute-optimizer/ComputeOptimizerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/compute-optimizer/ComputeOptimizerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ComputeOptimizerClient header */
#include <aws/compute-optimizer/model/DeleteRecommendationPreferencesResult.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsResult.h>
#include <aws/compute-optimizer/model/ExportAutoScalingGroupRecommendationsResult.h>
#include <aws/compute-optimizer/model/ExportEBSVolumeRecommendationsResult.h>
#include <aws/compute-optimizer/model/ExportEC2InstanceRecommendationsResult.h>
#include <aws/compute-optimizer/model/ExportECSServiceRecommendationsResult.h>
#include <aws/compute-optimizer/model/ExportLambdaFunctionRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEBSVolumeRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEC2RecommendationProjectedMetricsResult.h>
#include <aws/compute-optimizer/model/GetECSServiceRecommendationProjectedMetricsResult.h>
#include <aws/compute-optimizer/model/GetECSServiceRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetEffectiveRecommendationPreferencesResult.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusResult.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusesForOrganizationResult.h>
#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsResult.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesResult.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesResult.h>
#include <aws/compute-optimizer/model/PutRecommendationPreferencesResult.h>
#include <aws/compute-optimizer/model/UpdateEnrollmentStatusResult.h>
/* End of service model headers required in ComputeOptimizerClient header */

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
    using ComputeOptimizerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ComputeOptimizerEndpointProviderBase = Aws::ComputeOptimizer::Endpoint::ComputeOptimizerEndpointProviderBase;
    using ComputeOptimizerEndpointProvider = Aws::ComputeOptimizer::Endpoint::ComputeOptimizerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ComputeOptimizerClient header */
      class DeleteRecommendationPreferencesRequest;
      class DescribeRecommendationExportJobsRequest;
      class ExportAutoScalingGroupRecommendationsRequest;
      class ExportEBSVolumeRecommendationsRequest;
      class ExportEC2InstanceRecommendationsRequest;
      class ExportECSServiceRecommendationsRequest;
      class ExportLambdaFunctionRecommendationsRequest;
      class GetAutoScalingGroupRecommendationsRequest;
      class GetEBSVolumeRecommendationsRequest;
      class GetEC2InstanceRecommendationsRequest;
      class GetEC2RecommendationProjectedMetricsRequest;
      class GetECSServiceRecommendationProjectedMetricsRequest;
      class GetECSServiceRecommendationsRequest;
      class GetEffectiveRecommendationPreferencesRequest;
      class GetEnrollmentStatusRequest;
      class GetEnrollmentStatusesForOrganizationRequest;
      class GetLambdaFunctionRecommendationsRequest;
      class GetRecommendationPreferencesRequest;
      class GetRecommendationSummariesRequest;
      class PutRecommendationPreferencesRequest;
      class UpdateEnrollmentStatusRequest;
      /* End of service model forward declarations required in ComputeOptimizerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteRecommendationPreferencesResult, ComputeOptimizerError> DeleteRecommendationPreferencesOutcome;
      typedef Aws::Utils::Outcome<DescribeRecommendationExportJobsResult, ComputeOptimizerError> DescribeRecommendationExportJobsOutcome;
      typedef Aws::Utils::Outcome<ExportAutoScalingGroupRecommendationsResult, ComputeOptimizerError> ExportAutoScalingGroupRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ExportEBSVolumeRecommendationsResult, ComputeOptimizerError> ExportEBSVolumeRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ExportEC2InstanceRecommendationsResult, ComputeOptimizerError> ExportEC2InstanceRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ExportECSServiceRecommendationsResult, ComputeOptimizerError> ExportECSServiceRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ExportLambdaFunctionRecommendationsResult, ComputeOptimizerError> ExportLambdaFunctionRecommendationsOutcome;
      typedef Aws::Utils::Outcome<GetAutoScalingGroupRecommendationsResult, ComputeOptimizerError> GetAutoScalingGroupRecommendationsOutcome;
      typedef Aws::Utils::Outcome<GetEBSVolumeRecommendationsResult, ComputeOptimizerError> GetEBSVolumeRecommendationsOutcome;
      typedef Aws::Utils::Outcome<GetEC2InstanceRecommendationsResult, ComputeOptimizerError> GetEC2InstanceRecommendationsOutcome;
      typedef Aws::Utils::Outcome<GetEC2RecommendationProjectedMetricsResult, ComputeOptimizerError> GetEC2RecommendationProjectedMetricsOutcome;
      typedef Aws::Utils::Outcome<GetECSServiceRecommendationProjectedMetricsResult, ComputeOptimizerError> GetECSServiceRecommendationProjectedMetricsOutcome;
      typedef Aws::Utils::Outcome<GetECSServiceRecommendationsResult, ComputeOptimizerError> GetECSServiceRecommendationsOutcome;
      typedef Aws::Utils::Outcome<GetEffectiveRecommendationPreferencesResult, ComputeOptimizerError> GetEffectiveRecommendationPreferencesOutcome;
      typedef Aws::Utils::Outcome<GetEnrollmentStatusResult, ComputeOptimizerError> GetEnrollmentStatusOutcome;
      typedef Aws::Utils::Outcome<GetEnrollmentStatusesForOrganizationResult, ComputeOptimizerError> GetEnrollmentStatusesForOrganizationOutcome;
      typedef Aws::Utils::Outcome<GetLambdaFunctionRecommendationsResult, ComputeOptimizerError> GetLambdaFunctionRecommendationsOutcome;
      typedef Aws::Utils::Outcome<GetRecommendationPreferencesResult, ComputeOptimizerError> GetRecommendationPreferencesOutcome;
      typedef Aws::Utils::Outcome<GetRecommendationSummariesResult, ComputeOptimizerError> GetRecommendationSummariesOutcome;
      typedef Aws::Utils::Outcome<PutRecommendationPreferencesResult, ComputeOptimizerError> PutRecommendationPreferencesOutcome;
      typedef Aws::Utils::Outcome<UpdateEnrollmentStatusResult, ComputeOptimizerError> UpdateEnrollmentStatusOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteRecommendationPreferencesOutcome> DeleteRecommendationPreferencesOutcomeCallable;
      typedef std::future<DescribeRecommendationExportJobsOutcome> DescribeRecommendationExportJobsOutcomeCallable;
      typedef std::future<ExportAutoScalingGroupRecommendationsOutcome> ExportAutoScalingGroupRecommendationsOutcomeCallable;
      typedef std::future<ExportEBSVolumeRecommendationsOutcome> ExportEBSVolumeRecommendationsOutcomeCallable;
      typedef std::future<ExportEC2InstanceRecommendationsOutcome> ExportEC2InstanceRecommendationsOutcomeCallable;
      typedef std::future<ExportECSServiceRecommendationsOutcome> ExportECSServiceRecommendationsOutcomeCallable;
      typedef std::future<ExportLambdaFunctionRecommendationsOutcome> ExportLambdaFunctionRecommendationsOutcomeCallable;
      typedef std::future<GetAutoScalingGroupRecommendationsOutcome> GetAutoScalingGroupRecommendationsOutcomeCallable;
      typedef std::future<GetEBSVolumeRecommendationsOutcome> GetEBSVolumeRecommendationsOutcomeCallable;
      typedef std::future<GetEC2InstanceRecommendationsOutcome> GetEC2InstanceRecommendationsOutcomeCallable;
      typedef std::future<GetEC2RecommendationProjectedMetricsOutcome> GetEC2RecommendationProjectedMetricsOutcomeCallable;
      typedef std::future<GetECSServiceRecommendationProjectedMetricsOutcome> GetECSServiceRecommendationProjectedMetricsOutcomeCallable;
      typedef std::future<GetECSServiceRecommendationsOutcome> GetECSServiceRecommendationsOutcomeCallable;
      typedef std::future<GetEffectiveRecommendationPreferencesOutcome> GetEffectiveRecommendationPreferencesOutcomeCallable;
      typedef std::future<GetEnrollmentStatusOutcome> GetEnrollmentStatusOutcomeCallable;
      typedef std::future<GetEnrollmentStatusesForOrganizationOutcome> GetEnrollmentStatusesForOrganizationOutcomeCallable;
      typedef std::future<GetLambdaFunctionRecommendationsOutcome> GetLambdaFunctionRecommendationsOutcomeCallable;
      typedef std::future<GetRecommendationPreferencesOutcome> GetRecommendationPreferencesOutcomeCallable;
      typedef std::future<GetRecommendationSummariesOutcome> GetRecommendationSummariesOutcomeCallable;
      typedef std::future<PutRecommendationPreferencesOutcome> PutRecommendationPreferencesOutcomeCallable;
      typedef std::future<UpdateEnrollmentStatusOutcome> UpdateEnrollmentStatusOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ComputeOptimizerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ComputeOptimizerClient*, const Model::DeleteRecommendationPreferencesRequest&, const Model::DeleteRecommendationPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecommendationPreferencesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::DescribeRecommendationExportJobsRequest&, const Model::DescribeRecommendationExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecommendationExportJobsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportAutoScalingGroupRecommendationsRequest&, const Model::ExportAutoScalingGroupRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportAutoScalingGroupRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportEBSVolumeRecommendationsRequest&, const Model::ExportEBSVolumeRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportEBSVolumeRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportEC2InstanceRecommendationsRequest&, const Model::ExportEC2InstanceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportEC2InstanceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportECSServiceRecommendationsRequest&, const Model::ExportECSServiceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportECSServiceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::ExportLambdaFunctionRecommendationsRequest&, const Model::ExportLambdaFunctionRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportLambdaFunctionRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetAutoScalingGroupRecommendationsRequest&, const Model::GetAutoScalingGroupRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoScalingGroupRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEBSVolumeRecommendationsRequest&, const Model::GetEBSVolumeRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEBSVolumeRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEC2InstanceRecommendationsRequest&, const Model::GetEC2InstanceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEC2InstanceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEC2RecommendationProjectedMetricsRequest&, const Model::GetEC2RecommendationProjectedMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEC2RecommendationProjectedMetricsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetECSServiceRecommendationProjectedMetricsRequest&, const Model::GetECSServiceRecommendationProjectedMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetECSServiceRecommendationProjectedMetricsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetECSServiceRecommendationsRequest&, const Model::GetECSServiceRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetECSServiceRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEffectiveRecommendationPreferencesRequest&, const Model::GetEffectiveRecommendationPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEffectiveRecommendationPreferencesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEnrollmentStatusRequest&, const Model::GetEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnrollmentStatusResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetEnrollmentStatusesForOrganizationRequest&, const Model::GetEnrollmentStatusesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnrollmentStatusesForOrganizationResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetLambdaFunctionRecommendationsRequest&, const Model::GetLambdaFunctionRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLambdaFunctionRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetRecommendationPreferencesRequest&, const Model::GetRecommendationPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationPreferencesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::GetRecommendationSummariesRequest&, const Model::GetRecommendationSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationSummariesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::PutRecommendationPreferencesRequest&, const Model::PutRecommendationPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecommendationPreferencesResponseReceivedHandler;
    typedef std::function<void(const ComputeOptimizerClient*, const Model::UpdateEnrollmentStatusRequest&, const Model::UpdateEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnrollmentStatusResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ComputeOptimizer
} // namespace Aws
