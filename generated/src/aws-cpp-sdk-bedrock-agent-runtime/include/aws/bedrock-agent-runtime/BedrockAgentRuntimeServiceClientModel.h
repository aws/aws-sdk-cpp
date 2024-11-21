﻿/**
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
#include <aws/bedrock-agent-runtime/model/DeleteAgentMemoryResult.h>
#include <aws/bedrock-agent-runtime/model/GetAgentMemoryResult.h>
#include <aws/bedrock-agent-runtime/model/RetrieveResult.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateResult.h>
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
      class DeleteAgentMemoryRequest;
      class GetAgentMemoryRequest;
      class InvokeAgentRequest;
      class InvokeFlowRequest;
      class OptimizePromptRequest;
      class RetrieveRequest;
      class RetrieveAndGenerateRequest;
      /* End of service model forward declarations required in BedrockAgentRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteAgentMemoryResult, BedrockAgentRuntimeError> DeleteAgentMemoryOutcome;
      typedef Aws::Utils::Outcome<GetAgentMemoryResult, BedrockAgentRuntimeError> GetAgentMemoryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentRuntimeError> InvokeAgentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentRuntimeError> InvokeFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentRuntimeError> OptimizePromptOutcome;
      typedef Aws::Utils::Outcome<RetrieveResult, BedrockAgentRuntimeError> RetrieveOutcome;
      typedef Aws::Utils::Outcome<RetrieveAndGenerateResult, BedrockAgentRuntimeError> RetrieveAndGenerateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteAgentMemoryOutcome> DeleteAgentMemoryOutcomeCallable;
      typedef std::future<GetAgentMemoryOutcome> GetAgentMemoryOutcomeCallable;
      typedef std::future<InvokeAgentOutcome> InvokeAgentOutcomeCallable;
      typedef std::future<InvokeFlowOutcome> InvokeFlowOutcomeCallable;
      typedef std::future<OptimizePromptOutcome> OptimizePromptOutcomeCallable;
      typedef std::future<RetrieveOutcome> RetrieveOutcomeCallable;
      typedef std::future<RetrieveAndGenerateOutcome> RetrieveAndGenerateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockAgentRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::DeleteAgentMemoryRequest&, const Model::DeleteAgentMemoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentMemoryResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::GetAgentMemoryRequest&, const Model::GetAgentMemoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgentMemoryResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::InvokeAgentRequest&, const Model::InvokeAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeAgentResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::InvokeFlowRequest&, const Model::InvokeFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeFlowResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::OptimizePromptRequest&, const Model::OptimizePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OptimizePromptResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::RetrieveRequest&, const Model::RetrieveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentRuntimeClient*, const Model::RetrieveAndGenerateRequest&, const Model::RetrieveAndGenerateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveAndGenerateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BedrockAgentRuntime
} // namespace Aws
