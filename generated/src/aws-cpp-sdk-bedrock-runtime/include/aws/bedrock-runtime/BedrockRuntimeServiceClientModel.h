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
#include <aws/bedrock-runtime/model/InvokeModelResult.h>
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
    using BedrockRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BedrockRuntimeEndpointProviderBase = Aws::BedrockRuntime::Endpoint::BedrockRuntimeEndpointProviderBase;
    using BedrockRuntimeEndpointProvider = Aws::BedrockRuntime::Endpoint::BedrockRuntimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BedrockRuntimeClient header */
      class InvokeModelRequest;
      class InvokeModelWithResponseStreamRequest;
      /* End of service model forward declarations required in BedrockRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<InvokeModelResult, BedrockRuntimeError> InvokeModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, BedrockRuntimeError> InvokeModelWithResponseStreamOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<InvokeModelOutcome> InvokeModelOutcomeCallable;
      typedef std::future<InvokeModelWithResponseStreamOutcome> InvokeModelWithResponseStreamOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockRuntimeClient*, const Model::InvokeModelRequest&, Model::InvokeModelOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeModelResponseReceivedHandler;
    typedef std::function<void(const BedrockRuntimeClient*, const Model::InvokeModelWithResponseStreamRequest&, const Model::InvokeModelWithResponseStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeModelWithResponseStreamResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BedrockRuntime
} // namespace Aws
