/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/arc-region-switch/ARCRegionswitchErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/arc-region-switch/ARCRegionswitchEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ARCRegionswitchClient header */
#include <aws/arc-region-switch/model/ApprovePlanExecutionStepResult.h>
#include <aws/arc-region-switch/model/CancelPlanExecutionResult.h>
#include <aws/arc-region-switch/model/CreatePlanResult.h>
#include <aws/arc-region-switch/model/DeletePlanResult.h>
#include <aws/arc-region-switch/model/GetPlanResult.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusResult.h>
#include <aws/arc-region-switch/model/GetPlanExecutionResult.h>
#include <aws/arc-region-switch/model/GetPlanInRegionResult.h>
#include <aws/arc-region-switch/model/ListPlanExecutionEventsResult.h>
#include <aws/arc-region-switch/model/ListPlanExecutionsResult.h>
#include <aws/arc-region-switch/model/ListPlansResult.h>
#include <aws/arc-region-switch/model/ListPlansInRegionResult.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksResult.h>
#include <aws/arc-region-switch/model/ListTagsForResourceResult.h>
#include <aws/arc-region-switch/model/StartPlanExecutionResult.h>
#include <aws/arc-region-switch/model/TagResourceResult.h>
#include <aws/arc-region-switch/model/UntagResourceResult.h>
#include <aws/arc-region-switch/model/UpdatePlanResult.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionResult.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionStepResult.h>
#include <aws/arc-region-switch/model/ListPlansRequest.h>
#include <aws/arc-region-switch/model/ListPlansInRegionRequest.h>
/* End of service model headers required in ARCRegionswitchClient header */

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

  namespace ARCRegionswitch
  {
    using ARCRegionswitchClientConfiguration = Aws::Client::GenericClientConfiguration;
    using ARCRegionswitchEndpointProviderBase = Aws::ARCRegionswitch::Endpoint::ARCRegionswitchEndpointProviderBase;
    using ARCRegionswitchEndpointProvider = Aws::ARCRegionswitch::Endpoint::ARCRegionswitchEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ARCRegionswitchClient header */
      class ApprovePlanExecutionStepRequest;
      class CancelPlanExecutionRequest;
      class CreatePlanRequest;
      class DeletePlanRequest;
      class GetPlanRequest;
      class GetPlanEvaluationStatusRequest;
      class GetPlanExecutionRequest;
      class GetPlanInRegionRequest;
      class ListPlanExecutionEventsRequest;
      class ListPlanExecutionsRequest;
      class ListPlansRequest;
      class ListPlansInRegionRequest;
      class ListRoute53HealthChecksRequest;
      class ListTagsForResourceRequest;
      class StartPlanExecutionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdatePlanRequest;
      class UpdatePlanExecutionRequest;
      class UpdatePlanExecutionStepRequest;
      /* End of service model forward declarations required in ARCRegionswitchClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ApprovePlanExecutionStepResult, ARCRegionswitchError> ApprovePlanExecutionStepOutcome;
      typedef Aws::Utils::Outcome<CancelPlanExecutionResult, ARCRegionswitchError> CancelPlanExecutionOutcome;
      typedef Aws::Utils::Outcome<CreatePlanResult, ARCRegionswitchError> CreatePlanOutcome;
      typedef Aws::Utils::Outcome<DeletePlanResult, ARCRegionswitchError> DeletePlanOutcome;
      typedef Aws::Utils::Outcome<GetPlanResult, ARCRegionswitchError> GetPlanOutcome;
      typedef Aws::Utils::Outcome<GetPlanEvaluationStatusResult, ARCRegionswitchError> GetPlanEvaluationStatusOutcome;
      typedef Aws::Utils::Outcome<GetPlanExecutionResult, ARCRegionswitchError> GetPlanExecutionOutcome;
      typedef Aws::Utils::Outcome<GetPlanInRegionResult, ARCRegionswitchError> GetPlanInRegionOutcome;
      typedef Aws::Utils::Outcome<ListPlanExecutionEventsResult, ARCRegionswitchError> ListPlanExecutionEventsOutcome;
      typedef Aws::Utils::Outcome<ListPlanExecutionsResult, ARCRegionswitchError> ListPlanExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListPlansResult, ARCRegionswitchError> ListPlansOutcome;
      typedef Aws::Utils::Outcome<ListPlansInRegionResult, ARCRegionswitchError> ListPlansInRegionOutcome;
      typedef Aws::Utils::Outcome<ListRoute53HealthChecksResult, ARCRegionswitchError> ListRoute53HealthChecksOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ARCRegionswitchError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartPlanExecutionResult, ARCRegionswitchError> StartPlanExecutionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ARCRegionswitchError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ARCRegionswitchError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdatePlanResult, ARCRegionswitchError> UpdatePlanOutcome;
      typedef Aws::Utils::Outcome<UpdatePlanExecutionResult, ARCRegionswitchError> UpdatePlanExecutionOutcome;
      typedef Aws::Utils::Outcome<UpdatePlanExecutionStepResult, ARCRegionswitchError> UpdatePlanExecutionStepOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ApprovePlanExecutionStepOutcome> ApprovePlanExecutionStepOutcomeCallable;
      typedef std::future<CancelPlanExecutionOutcome> CancelPlanExecutionOutcomeCallable;
      typedef std::future<CreatePlanOutcome> CreatePlanOutcomeCallable;
      typedef std::future<DeletePlanOutcome> DeletePlanOutcomeCallable;
      typedef std::future<GetPlanOutcome> GetPlanOutcomeCallable;
      typedef std::future<GetPlanEvaluationStatusOutcome> GetPlanEvaluationStatusOutcomeCallable;
      typedef std::future<GetPlanExecutionOutcome> GetPlanExecutionOutcomeCallable;
      typedef std::future<GetPlanInRegionOutcome> GetPlanInRegionOutcomeCallable;
      typedef std::future<ListPlanExecutionEventsOutcome> ListPlanExecutionEventsOutcomeCallable;
      typedef std::future<ListPlanExecutionsOutcome> ListPlanExecutionsOutcomeCallable;
      typedef std::future<ListPlansOutcome> ListPlansOutcomeCallable;
      typedef std::future<ListPlansInRegionOutcome> ListPlansInRegionOutcomeCallable;
      typedef std::future<ListRoute53HealthChecksOutcome> ListRoute53HealthChecksOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartPlanExecutionOutcome> StartPlanExecutionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdatePlanOutcome> UpdatePlanOutcomeCallable;
      typedef std::future<UpdatePlanExecutionOutcome> UpdatePlanExecutionOutcomeCallable;
      typedef std::future<UpdatePlanExecutionStepOutcome> UpdatePlanExecutionStepOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ARCRegionswitchClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ARCRegionswitchClient*, const Model::ApprovePlanExecutionStepRequest&, const Model::ApprovePlanExecutionStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApprovePlanExecutionStepResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::CancelPlanExecutionRequest&, const Model::CancelPlanExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelPlanExecutionResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::CreatePlanRequest&, const Model::CreatePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlanResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::DeletePlanRequest&, const Model::DeletePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlanResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::GetPlanRequest&, const Model::GetPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlanResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::GetPlanEvaluationStatusRequest&, const Model::GetPlanEvaluationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlanEvaluationStatusResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::GetPlanExecutionRequest&, const Model::GetPlanExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlanExecutionResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::GetPlanInRegionRequest&, const Model::GetPlanInRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlanInRegionResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::ListPlanExecutionEventsRequest&, const Model::ListPlanExecutionEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlanExecutionEventsResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::ListPlanExecutionsRequest&, const Model::ListPlanExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlanExecutionsResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::ListPlansRequest&, const Model::ListPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlansResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::ListPlansInRegionRequest&, const Model::ListPlansInRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlansInRegionResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::ListRoute53HealthChecksRequest&, const Model::ListRoute53HealthChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoute53HealthChecksResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::StartPlanExecutionRequest&, const Model::StartPlanExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPlanExecutionResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::UpdatePlanRequest&, const Model::UpdatePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePlanResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::UpdatePlanExecutionRequest&, const Model::UpdatePlanExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePlanExecutionResponseReceivedHandler;
    typedef std::function<void(const ARCRegionswitchClient*, const Model::UpdatePlanExecutionStepRequest&, const Model::UpdatePlanExecutionStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePlanExecutionStepResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ARCRegionswitch
} // namespace Aws
