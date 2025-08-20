/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock-runtime/BedrockRuntimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bedrock-runtime/BedrockRuntimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BedrockRuntimeClient header */
#include <aws/bedrock-runtime/model/ApplyGuardrailResult.h>
#include <aws/bedrock-runtime/model/ConverseResult.h>
#include <aws/bedrock-runtime/model/CountTokensResult.h>
#include <aws/bedrock-runtime/model/GetAsyncInvokeResult.h>
#include <aws/bedrock-runtime/model/InvokeModelResult.h>
#include <aws/bedrock-runtime/model/ListAsyncInvokesResult.h>
#include <aws/bedrock-runtime/model/StartAsyncInvokeResult.h>
#include <aws/bedrock-runtime/model/ListAsyncInvokesRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in BedrockRuntimeClient header */

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

    namespace Event
    {
      class EventEncoderStream;
    } // namespace Event

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

  namespace BedrockRuntime
  {
    using BedrockRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BedrockRuntimeEndpointProviderBase = Aws::BedrockRuntime::Endpoint::BedrockRuntimeEndpointProviderBase;
    using BedrockRuntimeEndpointProvider = Aws::BedrockRuntime::Endpoint::BedrockRuntimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BedrockRuntimeClient header */
      class ApplyGuardrailRequest;
      class ConverseRequest;
      class ConverseStreamRequest;
      class CountTokensRequest;
      class GetAsyncInvokeRequest;
      class InvokeModelRequest;
      class InvokeModelWithBidirectionalStreamRequest;
      class InvokeModelWithBidirectionalStreamInput;
      class InvokeModelWithResponseStreamRequest;
      class ListAsyncInvokesRequest;
      class StartAsyncInvokeRequest;
      /* End of service model forward declarations required in BedrockRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ApplyGuardrailResult, BedrockRuntimeError> ApplyGuardrailOutcome;
      typedef Aws::Utils::Outcome<ConverseResult, BedrockRuntimeError> ConverseOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockRuntimeError> ConverseStreamOutcome;
      typedef Aws::Utils::Outcome<CountTokensResult, BedrockRuntimeError> CountTokensOutcome;
      typedef Aws::Utils::Outcome<GetAsyncInvokeResult, BedrockRuntimeError> GetAsyncInvokeOutcome;
      typedef Aws::Utils::Outcome<InvokeModelResult, BedrockRuntimeError> InvokeModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockRuntimeError> InvokeModelWithBidirectionalStreamOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockRuntimeError> InvokeModelWithResponseStreamOutcome;
      typedef Aws::Utils::Outcome<ListAsyncInvokesResult, BedrockRuntimeError> ListAsyncInvokesOutcome;
      typedef Aws::Utils::Outcome<StartAsyncInvokeResult, BedrockRuntimeError> StartAsyncInvokeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ApplyGuardrailOutcome> ApplyGuardrailOutcomeCallable;
      typedef std::future<ConverseOutcome> ConverseOutcomeCallable;
      typedef std::future<ConverseStreamOutcome> ConverseStreamOutcomeCallable;
      typedef std::future<CountTokensOutcome> CountTokensOutcomeCallable;
      typedef std::future<GetAsyncInvokeOutcome> GetAsyncInvokeOutcomeCallable;
      typedef std::future<InvokeModelOutcome> InvokeModelOutcomeCallable;
      typedef std::future<InvokeModelWithBidirectionalStreamOutcome> InvokeModelWithBidirectionalStreamOutcomeCallable;
      typedef std::future<InvokeModelWithResponseStreamOutcome> InvokeModelWithResponseStreamOutcomeCallable;
      typedef std::future<ListAsyncInvokesOutcome> ListAsyncInvokesOutcomeCallable;
      typedef std::future<StartAsyncInvokeOutcome> StartAsyncInvokeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockRuntimeClient*, const Model::ApplyGuardrailRequest&, const Model::ApplyGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyGuardrailResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::ConverseRequest&, const Model::ConverseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConverseResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::ConverseStreamRequest&, const Model::ConverseStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConverseStreamResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::CountTokensRequest&, const Model::CountTokensOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CountTokensResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::GetAsyncInvokeRequest&, const Model::GetAsyncInvokeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAsyncInvokeResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::InvokeModelRequest&, Model::InvokeModelOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeModelResponseReceivedHandler;
    typedef std::function<void(Model::InvokeModelWithBidirectionalStreamInput&)> InvokeModelWithBidirectionalStreamStreamReadyHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::InvokeModelWithBidirectionalStreamRequest&, const Model::InvokeModelWithBidirectionalStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeModelWithBidirectionalStreamResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::InvokeModelWithResponseStreamRequest&, const Model::InvokeModelWithResponseStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeModelWithResponseStreamResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::ListAsyncInvokesRequest&, const Model::ListAsyncInvokesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAsyncInvokesResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::StartAsyncInvokeRequest&, const Model::StartAsyncInvokeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAsyncInvokeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BedrockRuntime
} // namespace Aws
