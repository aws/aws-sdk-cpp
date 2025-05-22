/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BedrockAgentRuntimeClient header */
#include <aws/bedrock-agent-runtime/model/CreateInvocationResult.h>
#include <aws/bedrock-agent-runtime/model/CreateSessionResult.h>
#include <aws/bedrock-agent-runtime/model/DeleteAgentMemoryResult.h>
#include <aws/bedrock-agent-runtime/model/DeleteSessionResult.h>
#include <aws/bedrock-agent-runtime/model/EndSessionResult.h>
#include <aws/bedrock-agent-runtime/model/GenerateQueryResult.h>
#include <aws/bedrock-agent-runtime/model/GetAgentMemoryResult.h>
#include <aws/bedrock-agent-runtime/model/GetExecutionFlowSnapshotResult.h>
#include <aws/bedrock-agent-runtime/model/GetFlowExecutionResult.h>
#include <aws/bedrock-agent-runtime/model/GetInvocationStepResult.h>
#include <aws/bedrock-agent-runtime/model/GetSessionResult.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionEventsResult.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionsResult.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationStepsResult.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationsResult.h>
#include <aws/bedrock-agent-runtime/model/ListSessionsResult.h>
#include <aws/bedrock-agent-runtime/model/ListTagsForResourceResult.h>
#include <aws/bedrock-agent-runtime/model/PutInvocationStepResult.h>
#include <aws/bedrock-agent-runtime/model/RerankSdkResult.h>
#include <aws/bedrock-agent-runtime/model/RetrieveResult.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateResult.h>
#include <aws/bedrock-agent-runtime/model/StartFlowExecutionResult.h>
#include <aws/bedrock-agent-runtime/model/StopFlowExecutionResult.h>
#include <aws/bedrock-agent-runtime/model/TagResourceResult.h>
#include <aws/bedrock-agent-runtime/model/UntagResourceResult.h>
#include <aws/bedrock-agent-runtime/model/UpdateSessionResult.h>
#include <aws/bedrock-agent-runtime/model/CreateSessionRequest.h>
#include <aws/bedrock-agent-runtime/model/ListSessionsRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in BedrockAgentRuntimeClient header */

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

  namespace BedrockAgentRuntime
  {
    using BedrockAgentRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BedrockAgentRuntimeEndpointProviderBase = Aws::BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeEndpointProviderBase;
    using BedrockAgentRuntimeEndpointProvider = Aws::BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BedrockAgentRuntimeClient header */
      class CreateInvocationRequest;
      class CreateSessionRequest;
      class DeleteAgentMemoryRequest;
      class DeleteSessionRequest;
      class EndSessionRequest;
      class GenerateQueryRequest;
      class GetAgentMemoryRequest;
      class GetExecutionFlowSnapshotRequest;
      class GetFlowExecutionRequest;
      class GetInvocationStepRequest;
      class GetSessionRequest;
      class InvokeAgentRequest;
      class InvokeFlowRequest;
      class InvokeInlineAgentRequest;
      class ListFlowExecutionEventsRequest;
      class ListFlowExecutionsRequest;
      class ListInvocationStepsRequest;
      class ListInvocationsRequest;
      class ListSessionsRequest;
      class ListTagsForResourceRequest;
      class OptimizePromptRequest;
      class PutInvocationStepRequest;
      class RerankRequest;
      class RetrieveRequest;
      class RetrieveAndGenerateRequest;
      class RetrieveAndGenerateStreamRequest;
      class StartFlowExecutionRequest;
      class StopFlowExecutionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateSessionRequest;
      /* End of service model forward declarations required in BedrockAgentRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateInvocationResult, BedrockAgentRuntimeError> CreateInvocationOutcome;
      typedef Aws::Utils::Outcome<CreateSessionResult, BedrockAgentRuntimeError> CreateSessionOutcome;
      typedef Aws::Utils::Outcome<DeleteAgentMemoryResult, BedrockAgentRuntimeError> DeleteAgentMemoryOutcome;
      typedef Aws::Utils::Outcome<DeleteSessionResult, BedrockAgentRuntimeError> DeleteSessionOutcome;
      typedef Aws::Utils::Outcome<EndSessionResult, BedrockAgentRuntimeError> EndSessionOutcome;
      typedef Aws::Utils::Outcome<GenerateQueryResult, BedrockAgentRuntimeError> GenerateQueryOutcome;
      typedef Aws::Utils::Outcome<GetAgentMemoryResult, BedrockAgentRuntimeError> GetAgentMemoryOutcome;
      typedef Aws::Utils::Outcome<GetExecutionFlowSnapshotResult, BedrockAgentRuntimeError> GetExecutionFlowSnapshotOutcome;
      typedef Aws::Utils::Outcome<GetFlowExecutionResult, BedrockAgentRuntimeError> GetFlowExecutionOutcome;
      typedef Aws::Utils::Outcome<GetInvocationStepResult, BedrockAgentRuntimeError> GetInvocationStepOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, BedrockAgentRuntimeError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentRuntimeError> InvokeAgentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentRuntimeError> InvokeFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentRuntimeError> InvokeInlineAgentOutcome;
      typedef Aws::Utils::Outcome<ListFlowExecutionEventsResult, BedrockAgentRuntimeError> ListFlowExecutionEventsOutcome;
      typedef Aws::Utils::Outcome<ListFlowExecutionsResult, BedrockAgentRuntimeError> ListFlowExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListInvocationStepsResult, BedrockAgentRuntimeError> ListInvocationStepsOutcome;
      typedef Aws::Utils::Outcome<ListInvocationsResult, BedrockAgentRuntimeError> ListInvocationsOutcome;
      typedef Aws::Utils::Outcome<ListSessionsResult, BedrockAgentRuntimeError> ListSessionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BedrockAgentRuntimeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentRuntimeError> OptimizePromptOutcome;
      typedef Aws::Utils::Outcome<PutInvocationStepResult, BedrockAgentRuntimeError> PutInvocationStepOutcome;
      typedef Aws::Utils::Outcome<RerankSdkResult, BedrockAgentRuntimeError> RerankOutcome;
      typedef Aws::Utils::Outcome<RetrieveResult, BedrockAgentRuntimeError> RetrieveOutcome;
      typedef Aws::Utils::Outcome<RetrieveAndGenerateResult, BedrockAgentRuntimeError> RetrieveAndGenerateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentRuntimeError> RetrieveAndGenerateStreamOutcome;
      typedef Aws::Utils::Outcome<StartFlowExecutionResult, BedrockAgentRuntimeError> StartFlowExecutionOutcome;
      typedef Aws::Utils::Outcome<StopFlowExecutionResult, BedrockAgentRuntimeError> StopFlowExecutionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BedrockAgentRuntimeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BedrockAgentRuntimeError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateSessionResult, BedrockAgentRuntimeError> UpdateSessionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateInvocationOutcome> CreateInvocationOutcomeCallable;
      typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
      typedef std::future<DeleteAgentMemoryOutcome> DeleteAgentMemoryOutcomeCallable;
      typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
      typedef std::future<EndSessionOutcome> EndSessionOutcomeCallable;
      typedef std::future<GenerateQueryOutcome> GenerateQueryOutcomeCallable;
      typedef std::future<GetAgentMemoryOutcome> GetAgentMemoryOutcomeCallable;
      typedef std::future<GetExecutionFlowSnapshotOutcome> GetExecutionFlowSnapshotOutcomeCallable;
      typedef std::future<GetFlowExecutionOutcome> GetFlowExecutionOutcomeCallable;
      typedef std::future<GetInvocationStepOutcome> GetInvocationStepOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<InvokeAgentOutcome> InvokeAgentOutcomeCallable;
      typedef std::future<InvokeFlowOutcome> InvokeFlowOutcomeCallable;
      typedef std::future<InvokeInlineAgentOutcome> InvokeInlineAgentOutcomeCallable;
      typedef std::future<ListFlowExecutionEventsOutcome> ListFlowExecutionEventsOutcomeCallable;
      typedef std::future<ListFlowExecutionsOutcome> ListFlowExecutionsOutcomeCallable;
      typedef std::future<ListInvocationStepsOutcome> ListInvocationStepsOutcomeCallable;
      typedef std::future<ListInvocationsOutcome> ListInvocationsOutcomeCallable;
      typedef std::future<ListSessionsOutcome> ListSessionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<OptimizePromptOutcome> OptimizePromptOutcomeCallable;
      typedef std::future<PutInvocationStepOutcome> PutInvocationStepOutcomeCallable;
      typedef std::future<RerankOutcome> RerankOutcomeCallable;
      typedef std::future<RetrieveOutcome> RetrieveOutcomeCallable;
      typedef std::future<RetrieveAndGenerateOutcome> RetrieveAndGenerateOutcomeCallable;
      typedef std::future<RetrieveAndGenerateStreamOutcome> RetrieveAndGenerateStreamOutcomeCallable;
      typedef std::future<StartFlowExecutionOutcome> StartFlowExecutionOutcomeCallable;
      typedef std::future<StopFlowExecutionOutcome> StopFlowExecutionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateSessionOutcome> UpdateSessionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockAgentRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::CreateInvocationRequest&, const Model::CreateInvocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvocationResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::CreateSessionRequest&, const Model::CreateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSessionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::DeleteAgentMemoryRequest&, const Model::DeleteAgentMemoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentMemoryResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::DeleteSessionRequest&, const Model::DeleteSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSessionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::EndSessionRequest&, const Model::EndSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EndSessionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::GenerateQueryRequest&, const Model::GenerateQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateQueryResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::GetAgentMemoryRequest&, const Model::GetAgentMemoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgentMemoryResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::GetExecutionFlowSnapshotRequest&, const Model::GetExecutionFlowSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExecutionFlowSnapshotResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::GetFlowExecutionRequest&, const Model::GetFlowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFlowExecutionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::GetInvocationStepRequest&, const Model::GetInvocationStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvocationStepResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::InvokeAgentRequest&, const Model::InvokeAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeAgentResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::InvokeFlowRequest&, const Model::InvokeFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeFlowResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::InvokeInlineAgentRequest&, const Model::InvokeInlineAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeInlineAgentResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::ListFlowExecutionEventsRequest&, const Model::ListFlowExecutionEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowExecutionEventsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::ListFlowExecutionsRequest&, const Model::ListFlowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowExecutionsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::ListInvocationStepsRequest&, const Model::ListInvocationStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvocationStepsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::ListInvocationsRequest&, const Model::ListInvocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvocationsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::ListSessionsRequest&, const Model::ListSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::OptimizePromptRequest&, const Model::OptimizePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OptimizePromptResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::PutInvocationStepRequest&, const Model::PutInvocationStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInvocationStepResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::RerankRequest&, const Model::RerankOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RerankResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::RetrieveRequest&, const Model::RetrieveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::RetrieveAndGenerateRequest&, const Model::RetrieveAndGenerateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveAndGenerateResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::RetrieveAndGenerateStreamRequest&, const Model::RetrieveAndGenerateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveAndGenerateStreamResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::StartFlowExecutionRequest&, const Model::StartFlowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFlowExecutionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::StopFlowExecutionRequest&, const Model::StopFlowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFlowExecutionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::UpdateSessionRequest&, const Model::UpdateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSessionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BedrockAgentRuntime
} // namespace Aws
