/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cost-optimization-hub/CostOptimizationHubErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cost-optimization-hub/CostOptimizationHubEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CostOptimizationHubClient header */
#include <aws/cost-optimization-hub/model/GetPreferencesResult.h>
#include <aws/cost-optimization-hub/model/GetRecommendationResult.h>
#include <aws/cost-optimization-hub/model/ListEnrollmentStatusesResult.h>
#include <aws/cost-optimization-hub/model/ListRecommendationSummariesResult.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsResult.h>
#include <aws/cost-optimization-hub/model/UpdateEnrollmentStatusResult.h>
#include <aws/cost-optimization-hub/model/UpdatePreferencesResult.h>
/* End of service model headers required in CostOptimizationHubClient header */

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

  namespace CostOptimizationHub
  {
    using CostOptimizationHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CostOptimizationHubEndpointProviderBase = Aws::CostOptimizationHub::Endpoint::CostOptimizationHubEndpointProviderBase;
    using CostOptimizationHubEndpointProvider = Aws::CostOptimizationHub::Endpoint::CostOptimizationHubEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CostOptimizationHubClient header */
      class GetPreferencesRequest;
      class GetRecommendationRequest;
      class ListEnrollmentStatusesRequest;
      class ListRecommendationSummariesRequest;
      class ListRecommendationsRequest;
      class UpdateEnrollmentStatusRequest;
      class UpdatePreferencesRequest;
      /* End of service model forward declarations required in CostOptimizationHubClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetPreferencesResult, CostOptimizationHubError> GetPreferencesOutcome;
      typedef Aws::Utils::Outcome<GetRecommendationResult, CostOptimizationHubError> GetRecommendationOutcome;
      typedef Aws::Utils::Outcome<ListEnrollmentStatusesResult, CostOptimizationHubError> ListEnrollmentStatusesOutcome;
      typedef Aws::Utils::Outcome<ListRecommendationSummariesResult, CostOptimizationHubError> ListRecommendationSummariesOutcome;
      typedef Aws::Utils::Outcome<ListRecommendationsResult, CostOptimizationHubError> ListRecommendationsOutcome;
      typedef Aws::Utils::Outcome<UpdateEnrollmentStatusResult, CostOptimizationHubError> UpdateEnrollmentStatusOutcome;
      typedef Aws::Utils::Outcome<UpdatePreferencesResult, CostOptimizationHubError> UpdatePreferencesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetPreferencesOutcome> GetPreferencesOutcomeCallable;
      typedef std::future<GetRecommendationOutcome> GetRecommendationOutcomeCallable;
      typedef std::future<ListEnrollmentStatusesOutcome> ListEnrollmentStatusesOutcomeCallable;
      typedef std::future<ListRecommendationSummariesOutcome> ListRecommendationSummariesOutcomeCallable;
      typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
      typedef std::future<UpdateEnrollmentStatusOutcome> UpdateEnrollmentStatusOutcomeCallable;
      typedef std::future<UpdatePreferencesOutcome> UpdatePreferencesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CostOptimizationHubClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CostOptimizationHubClient*, const Model::GetPreferencesRequest&, const Model::GetPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPreferencesResponseReceivedHandler;
    typedef std::function<void(const CostOptimizationHubClient*, const Model::GetRecommendationRequest&, const Model::GetRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationResponseReceivedHandler;
    typedef std::function<void(const CostOptimizationHubClient*, const Model::ListEnrollmentStatusesRequest&, const Model::ListEnrollmentStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnrollmentStatusesResponseReceivedHandler;
    typedef std::function<void(const CostOptimizationHubClient*, const Model::ListRecommendationSummariesRequest&, const Model::ListRecommendationSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationSummariesResponseReceivedHandler;
    typedef std::function<void(const CostOptimizationHubClient*, const Model::ListRecommendationsRequest&, const Model::ListRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationsResponseReceivedHandler;
    typedef std::function<void(const CostOptimizationHubClient*, const Model::UpdateEnrollmentStatusRequest&, const Model::UpdateEnrollmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnrollmentStatusResponseReceivedHandler;
    typedef std::function<void(const CostOptimizationHubClient*, const Model::UpdatePreferencesRequest&, const Model::UpdatePreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePreferencesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CostOptimizationHub
} // namespace Aws
