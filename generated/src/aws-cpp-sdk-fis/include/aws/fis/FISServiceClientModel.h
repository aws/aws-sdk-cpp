/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/fis/FISErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/fis/FISEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in FISClient header */
#include <aws/fis/model/CreateExperimentTemplateResult.h>
#include <aws/fis/model/DeleteExperimentTemplateResult.h>
#include <aws/fis/model/GetActionResult.h>
#include <aws/fis/model/GetExperimentResult.h>
#include <aws/fis/model/GetExperimentTemplateResult.h>
#include <aws/fis/model/GetTargetResourceTypeResult.h>
#include <aws/fis/model/ListActionsResult.h>
#include <aws/fis/model/ListExperimentTemplatesResult.h>
#include <aws/fis/model/ListExperimentsResult.h>
#include <aws/fis/model/ListTagsForResourceResult.h>
#include <aws/fis/model/ListTargetResourceTypesResult.h>
#include <aws/fis/model/StartExperimentResult.h>
#include <aws/fis/model/StopExperimentResult.h>
#include <aws/fis/model/TagResourceResult.h>
#include <aws/fis/model/UntagResourceResult.h>
#include <aws/fis/model/UpdateExperimentTemplateResult.h>
/* End of service model headers required in FISClient header */

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

  namespace FIS
  {
    using FISClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using FISEndpointProviderBase = Aws::FIS::Endpoint::FISEndpointProviderBase;
    using FISEndpointProvider = Aws::FIS::Endpoint::FISEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in FISClient header */
      class CreateExperimentTemplateRequest;
      class DeleteExperimentTemplateRequest;
      class GetActionRequest;
      class GetExperimentRequest;
      class GetExperimentTemplateRequest;
      class GetTargetResourceTypeRequest;
      class ListActionsRequest;
      class ListExperimentTemplatesRequest;
      class ListExperimentsRequest;
      class ListTagsForResourceRequest;
      class ListTargetResourceTypesRequest;
      class StartExperimentRequest;
      class StopExperimentRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateExperimentTemplateRequest;
      /* End of service model forward declarations required in FISClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateExperimentTemplateResult, FISError> CreateExperimentTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteExperimentTemplateResult, FISError> DeleteExperimentTemplateOutcome;
      typedef Aws::Utils::Outcome<GetActionResult, FISError> GetActionOutcome;
      typedef Aws::Utils::Outcome<GetExperimentResult, FISError> GetExperimentOutcome;
      typedef Aws::Utils::Outcome<GetExperimentTemplateResult, FISError> GetExperimentTemplateOutcome;
      typedef Aws::Utils::Outcome<GetTargetResourceTypeResult, FISError> GetTargetResourceTypeOutcome;
      typedef Aws::Utils::Outcome<ListActionsResult, FISError> ListActionsOutcome;
      typedef Aws::Utils::Outcome<ListExperimentTemplatesResult, FISError> ListExperimentTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListExperimentsResult, FISError> ListExperimentsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, FISError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTargetResourceTypesResult, FISError> ListTargetResourceTypesOutcome;
      typedef Aws::Utils::Outcome<StartExperimentResult, FISError> StartExperimentOutcome;
      typedef Aws::Utils::Outcome<StopExperimentResult, FISError> StopExperimentOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, FISError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, FISError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateExperimentTemplateResult, FISError> UpdateExperimentTemplateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateExperimentTemplateOutcome> CreateExperimentTemplateOutcomeCallable;
      typedef std::future<DeleteExperimentTemplateOutcome> DeleteExperimentTemplateOutcomeCallable;
      typedef std::future<GetActionOutcome> GetActionOutcomeCallable;
      typedef std::future<GetExperimentOutcome> GetExperimentOutcomeCallable;
      typedef std::future<GetExperimentTemplateOutcome> GetExperimentTemplateOutcomeCallable;
      typedef std::future<GetTargetResourceTypeOutcome> GetTargetResourceTypeOutcomeCallable;
      typedef std::future<ListActionsOutcome> ListActionsOutcomeCallable;
      typedef std::future<ListExperimentTemplatesOutcome> ListExperimentTemplatesOutcomeCallable;
      typedef std::future<ListExperimentsOutcome> ListExperimentsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTargetResourceTypesOutcome> ListTargetResourceTypesOutcomeCallable;
      typedef std::future<StartExperimentOutcome> StartExperimentOutcomeCallable;
      typedef std::future<StopExperimentOutcome> StopExperimentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateExperimentTemplateOutcome> UpdateExperimentTemplateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FISClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FISClient*, const Model::CreateExperimentTemplateRequest&, const Model::CreateExperimentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExperimentTemplateResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::DeleteExperimentTemplateRequest&, const Model::DeleteExperimentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExperimentTemplateResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::GetActionRequest&, const Model::GetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetActionResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::GetExperimentRequest&, const Model::GetExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExperimentResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::GetExperimentTemplateRequest&, const Model::GetExperimentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExperimentTemplateResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::GetTargetResourceTypeRequest&, const Model::GetTargetResourceTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTargetResourceTypeResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListActionsRequest&, const Model::ListActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActionsResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListExperimentTemplatesRequest&, const Model::ListExperimentTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperimentTemplatesResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListExperimentsRequest&, const Model::ListExperimentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperimentsResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListTargetResourceTypesRequest&, const Model::ListTargetResourceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetResourceTypesResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::StartExperimentRequest&, const Model::StartExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExperimentResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::StopExperimentRequest&, const Model::StopExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopExperimentResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::UpdateExperimentTemplateRequest&, const Model::UpdateExperimentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExperimentTemplateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace FIS
} // namespace Aws
