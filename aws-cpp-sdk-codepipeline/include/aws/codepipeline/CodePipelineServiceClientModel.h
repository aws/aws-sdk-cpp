/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codepipeline/CodePipelineErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codepipeline/CodePipelineEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodePipelineClient header */
#include <aws/codepipeline/model/AcknowledgeJobResult.h>
#include <aws/codepipeline/model/AcknowledgeThirdPartyJobResult.h>
#include <aws/codepipeline/model/CreateCustomActionTypeResult.h>
#include <aws/codepipeline/model/CreatePipelineResult.h>
#include <aws/codepipeline/model/DeleteWebhookResult.h>
#include <aws/codepipeline/model/DeregisterWebhookWithThirdPartyResult.h>
#include <aws/codepipeline/model/GetActionTypeResult.h>
#include <aws/codepipeline/model/GetJobDetailsResult.h>
#include <aws/codepipeline/model/GetPipelineResult.h>
#include <aws/codepipeline/model/GetPipelineExecutionResult.h>
#include <aws/codepipeline/model/GetPipelineStateResult.h>
#include <aws/codepipeline/model/GetThirdPartyJobDetailsResult.h>
#include <aws/codepipeline/model/ListActionExecutionsResult.h>
#include <aws/codepipeline/model/ListActionTypesResult.h>
#include <aws/codepipeline/model/ListPipelineExecutionsResult.h>
#include <aws/codepipeline/model/ListPipelinesResult.h>
#include <aws/codepipeline/model/ListTagsForResourceResult.h>
#include <aws/codepipeline/model/ListWebhooksResult.h>
#include <aws/codepipeline/model/PollForJobsResult.h>
#include <aws/codepipeline/model/PollForThirdPartyJobsResult.h>
#include <aws/codepipeline/model/PutActionRevisionResult.h>
#include <aws/codepipeline/model/PutApprovalResultResult.h>
#include <aws/codepipeline/model/PutWebhookResult.h>
#include <aws/codepipeline/model/RegisterWebhookWithThirdPartyResult.h>
#include <aws/codepipeline/model/RetryStageExecutionResult.h>
#include <aws/codepipeline/model/StartPipelineExecutionResult.h>
#include <aws/codepipeline/model/StopPipelineExecutionResult.h>
#include <aws/codepipeline/model/TagResourceResult.h>
#include <aws/codepipeline/model/UntagResourceResult.h>
#include <aws/codepipeline/model/UpdatePipelineResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CodePipelineClient header */

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

  namespace CodePipeline
  {
    using CodePipelineClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodePipelineEndpointProviderBase = Aws::CodePipeline::Endpoint::CodePipelineEndpointProviderBase;
    using CodePipelineEndpointProvider = Aws::CodePipeline::Endpoint::CodePipelineEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodePipelineClient header */
      class AcknowledgeJobRequest;
      class AcknowledgeThirdPartyJobRequest;
      class CreateCustomActionTypeRequest;
      class CreatePipelineRequest;
      class DeleteCustomActionTypeRequest;
      class DeletePipelineRequest;
      class DeleteWebhookRequest;
      class DeregisterWebhookWithThirdPartyRequest;
      class DisableStageTransitionRequest;
      class EnableStageTransitionRequest;
      class GetActionTypeRequest;
      class GetJobDetailsRequest;
      class GetPipelineRequest;
      class GetPipelineExecutionRequest;
      class GetPipelineStateRequest;
      class GetThirdPartyJobDetailsRequest;
      class ListActionExecutionsRequest;
      class ListActionTypesRequest;
      class ListPipelineExecutionsRequest;
      class ListPipelinesRequest;
      class ListTagsForResourceRequest;
      class ListWebhooksRequest;
      class PollForJobsRequest;
      class PollForThirdPartyJobsRequest;
      class PutActionRevisionRequest;
      class PutApprovalResultRequest;
      class PutJobFailureResultRequest;
      class PutJobSuccessResultRequest;
      class PutThirdPartyJobFailureResultRequest;
      class PutThirdPartyJobSuccessResultRequest;
      class PutWebhookRequest;
      class RegisterWebhookWithThirdPartyRequest;
      class RetryStageExecutionRequest;
      class StartPipelineExecutionRequest;
      class StopPipelineExecutionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateActionTypeRequest;
      class UpdatePipelineRequest;
      /* End of service model forward declarations required in CodePipelineClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcknowledgeJobResult, CodePipelineError> AcknowledgeJobOutcome;
      typedef Aws::Utils::Outcome<AcknowledgeThirdPartyJobResult, CodePipelineError> AcknowledgeThirdPartyJobOutcome;
      typedef Aws::Utils::Outcome<CreateCustomActionTypeResult, CodePipelineError> CreateCustomActionTypeOutcome;
      typedef Aws::Utils::Outcome<CreatePipelineResult, CodePipelineError> CreatePipelineOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> DeleteCustomActionTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> DeletePipelineOutcome;
      typedef Aws::Utils::Outcome<DeleteWebhookResult, CodePipelineError> DeleteWebhookOutcome;
      typedef Aws::Utils::Outcome<DeregisterWebhookWithThirdPartyResult, CodePipelineError> DeregisterWebhookWithThirdPartyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> DisableStageTransitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> EnableStageTransitionOutcome;
      typedef Aws::Utils::Outcome<GetActionTypeResult, CodePipelineError> GetActionTypeOutcome;
      typedef Aws::Utils::Outcome<GetJobDetailsResult, CodePipelineError> GetJobDetailsOutcome;
      typedef Aws::Utils::Outcome<GetPipelineResult, CodePipelineError> GetPipelineOutcome;
      typedef Aws::Utils::Outcome<GetPipelineExecutionResult, CodePipelineError> GetPipelineExecutionOutcome;
      typedef Aws::Utils::Outcome<GetPipelineStateResult, CodePipelineError> GetPipelineStateOutcome;
      typedef Aws::Utils::Outcome<GetThirdPartyJobDetailsResult, CodePipelineError> GetThirdPartyJobDetailsOutcome;
      typedef Aws::Utils::Outcome<ListActionExecutionsResult, CodePipelineError> ListActionExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListActionTypesResult, CodePipelineError> ListActionTypesOutcome;
      typedef Aws::Utils::Outcome<ListPipelineExecutionsResult, CodePipelineError> ListPipelineExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListPipelinesResult, CodePipelineError> ListPipelinesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodePipelineError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWebhooksResult, CodePipelineError> ListWebhooksOutcome;
      typedef Aws::Utils::Outcome<PollForJobsResult, CodePipelineError> PollForJobsOutcome;
      typedef Aws::Utils::Outcome<PollForThirdPartyJobsResult, CodePipelineError> PollForThirdPartyJobsOutcome;
      typedef Aws::Utils::Outcome<PutActionRevisionResult, CodePipelineError> PutActionRevisionOutcome;
      typedef Aws::Utils::Outcome<PutApprovalResultResult, CodePipelineError> PutApprovalResultOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> PutJobFailureResultOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> PutJobSuccessResultOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> PutThirdPartyJobFailureResultOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> PutThirdPartyJobSuccessResultOutcome;
      typedef Aws::Utils::Outcome<PutWebhookResult, CodePipelineError> PutWebhookOutcome;
      typedef Aws::Utils::Outcome<RegisterWebhookWithThirdPartyResult, CodePipelineError> RegisterWebhookWithThirdPartyOutcome;
      typedef Aws::Utils::Outcome<RetryStageExecutionResult, CodePipelineError> RetryStageExecutionOutcome;
      typedef Aws::Utils::Outcome<StartPipelineExecutionResult, CodePipelineError> StartPipelineExecutionOutcome;
      typedef Aws::Utils::Outcome<StopPipelineExecutionResult, CodePipelineError> StopPipelineExecutionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodePipelineError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodePipelineError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> UpdateActionTypeOutcome;
      typedef Aws::Utils::Outcome<UpdatePipelineResult, CodePipelineError> UpdatePipelineOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcknowledgeJobOutcome> AcknowledgeJobOutcomeCallable;
      typedef std::future<AcknowledgeThirdPartyJobOutcome> AcknowledgeThirdPartyJobOutcomeCallable;
      typedef std::future<CreateCustomActionTypeOutcome> CreateCustomActionTypeOutcomeCallable;
      typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
      typedef std::future<DeleteCustomActionTypeOutcome> DeleteCustomActionTypeOutcomeCallable;
      typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
      typedef std::future<DeleteWebhookOutcome> DeleteWebhookOutcomeCallable;
      typedef std::future<DeregisterWebhookWithThirdPartyOutcome> DeregisterWebhookWithThirdPartyOutcomeCallable;
      typedef std::future<DisableStageTransitionOutcome> DisableStageTransitionOutcomeCallable;
      typedef std::future<EnableStageTransitionOutcome> EnableStageTransitionOutcomeCallable;
      typedef std::future<GetActionTypeOutcome> GetActionTypeOutcomeCallable;
      typedef std::future<GetJobDetailsOutcome> GetJobDetailsOutcomeCallable;
      typedef std::future<GetPipelineOutcome> GetPipelineOutcomeCallable;
      typedef std::future<GetPipelineExecutionOutcome> GetPipelineExecutionOutcomeCallable;
      typedef std::future<GetPipelineStateOutcome> GetPipelineStateOutcomeCallable;
      typedef std::future<GetThirdPartyJobDetailsOutcome> GetThirdPartyJobDetailsOutcomeCallable;
      typedef std::future<ListActionExecutionsOutcome> ListActionExecutionsOutcomeCallable;
      typedef std::future<ListActionTypesOutcome> ListActionTypesOutcomeCallable;
      typedef std::future<ListPipelineExecutionsOutcome> ListPipelineExecutionsOutcomeCallable;
      typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWebhooksOutcome> ListWebhooksOutcomeCallable;
      typedef std::future<PollForJobsOutcome> PollForJobsOutcomeCallable;
      typedef std::future<PollForThirdPartyJobsOutcome> PollForThirdPartyJobsOutcomeCallable;
      typedef std::future<PutActionRevisionOutcome> PutActionRevisionOutcomeCallable;
      typedef std::future<PutApprovalResultOutcome> PutApprovalResultOutcomeCallable;
      typedef std::future<PutJobFailureResultOutcome> PutJobFailureResultOutcomeCallable;
      typedef std::future<PutJobSuccessResultOutcome> PutJobSuccessResultOutcomeCallable;
      typedef std::future<PutThirdPartyJobFailureResultOutcome> PutThirdPartyJobFailureResultOutcomeCallable;
      typedef std::future<PutThirdPartyJobSuccessResultOutcome> PutThirdPartyJobSuccessResultOutcomeCallable;
      typedef std::future<PutWebhookOutcome> PutWebhookOutcomeCallable;
      typedef std::future<RegisterWebhookWithThirdPartyOutcome> RegisterWebhookWithThirdPartyOutcomeCallable;
      typedef std::future<RetryStageExecutionOutcome> RetryStageExecutionOutcomeCallable;
      typedef std::future<StartPipelineExecutionOutcome> StartPipelineExecutionOutcomeCallable;
      typedef std::future<StopPipelineExecutionOutcome> StopPipelineExecutionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateActionTypeOutcome> UpdateActionTypeOutcomeCallable;
      typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodePipelineClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodePipelineClient*, const Model::AcknowledgeJobRequest&, const Model::AcknowledgeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcknowledgeJobResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::AcknowledgeThirdPartyJobRequest&, const Model::AcknowledgeThirdPartyJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcknowledgeThirdPartyJobResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::CreateCustomActionTypeRequest&, const Model::CreateCustomActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeleteCustomActionTypeRequest&, const Model::DeleteCustomActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeleteWebhookRequest&, const Model::DeleteWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebhookResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeregisterWebhookWithThirdPartyRequest&, const Model::DeregisterWebhookWithThirdPartyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterWebhookWithThirdPartyResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DisableStageTransitionRequest&, const Model::DisableStageTransitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableStageTransitionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::EnableStageTransitionRequest&, const Model::EnableStageTransitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableStageTransitionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetActionTypeRequest&, const Model::GetActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetJobDetailsRequest&, const Model::GetJobDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobDetailsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineRequest&, const Model::GetPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineExecutionRequest&, const Model::GetPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineStateRequest&, const Model::GetPipelineStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineStateResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetThirdPartyJobDetailsRequest&, const Model::GetThirdPartyJobDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThirdPartyJobDetailsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListActionExecutionsRequest&, const Model::ListActionExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActionExecutionsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListActionTypesRequest&, const Model::ListActionTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActionTypesResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListPipelineExecutionsRequest&, const Model::ListPipelineExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelineExecutionsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListWebhooksRequest&, const Model::ListWebhooksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebhooksResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PollForJobsRequest&, const Model::PollForJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForJobsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PollForThirdPartyJobsRequest&, const Model::PollForThirdPartyJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForThirdPartyJobsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutActionRevisionRequest&, const Model::PutActionRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutActionRevisionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutApprovalResultRequest&, const Model::PutApprovalResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApprovalResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutJobFailureResultRequest&, const Model::PutJobFailureResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobFailureResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutJobSuccessResultRequest&, const Model::PutJobSuccessResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobSuccessResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutThirdPartyJobFailureResultRequest&, const Model::PutThirdPartyJobFailureResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutThirdPartyJobFailureResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutThirdPartyJobSuccessResultRequest&, const Model::PutThirdPartyJobSuccessResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutThirdPartyJobSuccessResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutWebhookRequest&, const Model::PutWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutWebhookResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::RegisterWebhookWithThirdPartyRequest&, const Model::RegisterWebhookWithThirdPartyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterWebhookWithThirdPartyResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::RetryStageExecutionRequest&, const Model::RetryStageExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryStageExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::StartPipelineExecutionRequest&, const Model::StartPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::StopPipelineExecutionRequest&, const Model::StopPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::UpdateActionTypeRequest&, const Model::UpdateActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodePipeline
} // namespace Aws
