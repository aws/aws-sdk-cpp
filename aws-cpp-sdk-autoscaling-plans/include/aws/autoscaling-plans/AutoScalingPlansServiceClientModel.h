/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/autoscaling-plans/AutoScalingPlansErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/autoscaling-plans/AutoScalingPlansEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AutoScalingPlansClient header */
#include <aws/autoscaling-plans/model/CreateScalingPlanResult.h>
#include <aws/autoscaling-plans/model/DeleteScalingPlanResult.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlanResourcesResult.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlansResult.h>
#include <aws/autoscaling-plans/model/GetScalingPlanResourceForecastDataResult.h>
#include <aws/autoscaling-plans/model/UpdateScalingPlanResult.h>
/* End of service model headers required in AutoScalingPlansClient header */

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

  namespace AutoScalingPlans
  {
    using AutoScalingPlansClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AutoScalingPlansEndpointProviderBase = Aws::AutoScalingPlans::Endpoint::AutoScalingPlansEndpointProviderBase;
    using AutoScalingPlansEndpointProvider = Aws::AutoScalingPlans::Endpoint::AutoScalingPlansEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AutoScalingPlansClient header */
      class CreateScalingPlanRequest;
      class DeleteScalingPlanRequest;
      class DescribeScalingPlanResourcesRequest;
      class DescribeScalingPlansRequest;
      class GetScalingPlanResourceForecastDataRequest;
      class UpdateScalingPlanRequest;
      /* End of service model forward declarations required in AutoScalingPlansClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateScalingPlanResult, AutoScalingPlansError> CreateScalingPlanOutcome;
      typedef Aws::Utils::Outcome<DeleteScalingPlanResult, AutoScalingPlansError> DeleteScalingPlanOutcome;
      typedef Aws::Utils::Outcome<DescribeScalingPlanResourcesResult, AutoScalingPlansError> DescribeScalingPlanResourcesOutcome;
      typedef Aws::Utils::Outcome<DescribeScalingPlansResult, AutoScalingPlansError> DescribeScalingPlansOutcome;
      typedef Aws::Utils::Outcome<GetScalingPlanResourceForecastDataResult, AutoScalingPlansError> GetScalingPlanResourceForecastDataOutcome;
      typedef Aws::Utils::Outcome<UpdateScalingPlanResult, AutoScalingPlansError> UpdateScalingPlanOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateScalingPlanOutcome> CreateScalingPlanOutcomeCallable;
      typedef std::future<DeleteScalingPlanOutcome> DeleteScalingPlanOutcomeCallable;
      typedef std::future<DescribeScalingPlanResourcesOutcome> DescribeScalingPlanResourcesOutcomeCallable;
      typedef std::future<DescribeScalingPlansOutcome> DescribeScalingPlansOutcomeCallable;
      typedef std::future<GetScalingPlanResourceForecastDataOutcome> GetScalingPlanResourceForecastDataOutcomeCallable;
      typedef std::future<UpdateScalingPlanOutcome> UpdateScalingPlanOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AutoScalingPlansClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AutoScalingPlansClient*, const Model::CreateScalingPlanRequest&, const Model::CreateScalingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScalingPlanResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::DeleteScalingPlanRequest&, const Model::DeleteScalingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScalingPlanResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::DescribeScalingPlanResourcesRequest&, const Model::DescribeScalingPlanResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPlanResourcesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::DescribeScalingPlansRequest&, const Model::DescribeScalingPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPlansResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::GetScalingPlanResourceForecastDataRequest&, const Model::GetScalingPlanResourceForecastDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScalingPlanResourceForecastDataResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::UpdateScalingPlanRequest&, const Model::UpdateScalingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScalingPlanResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AutoScalingPlans
} // namespace Aws
