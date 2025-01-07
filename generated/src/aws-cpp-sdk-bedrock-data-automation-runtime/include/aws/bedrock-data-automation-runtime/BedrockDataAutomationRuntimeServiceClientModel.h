﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BedrockDataAutomationRuntimeClient header */
#include <aws/bedrock-data-automation-runtime/model/GetDataAutomationStatusResult.h>
#include <aws/bedrock-data-automation-runtime/model/InvokeDataAutomationAsyncResult.h>
/* End of service model headers required in BedrockDataAutomationRuntimeClient header */

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

  namespace BedrockDataAutomationRuntime
  {
    using BedrockDataAutomationRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BedrockDataAutomationRuntimeEndpointProviderBase = Aws::BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeEndpointProviderBase;
    using BedrockDataAutomationRuntimeEndpointProvider = Aws::BedrockDataAutomationRuntime::Endpoint::BedrockDataAutomationRuntimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BedrockDataAutomationRuntimeClient header */
      class GetDataAutomationStatusRequest;
      class InvokeDataAutomationAsyncRequest;
      /* End of service model forward declarations required in BedrockDataAutomationRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetDataAutomationStatusResult, BedrockDataAutomationRuntimeError> GetDataAutomationStatusOutcome;
      typedef Aws::Utils::Outcome<InvokeDataAutomationAsyncResult, BedrockDataAutomationRuntimeError> InvokeDataAutomationAsyncOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetDataAutomationStatusOutcome> GetDataAutomationStatusOutcomeCallable;
      typedef std::future<InvokeDataAutomationAsyncOutcome> InvokeDataAutomationAsyncOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockDataAutomationRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockDataAutomationRuntimeClient*, const Model::GetDataAutomationStatusRequest&, const Model::GetDataAutomationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataAutomationStatusResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationRuntimeClient*, const Model::InvokeDataAutomationAsyncRequest&, const Model::InvokeDataAutomationAsyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeDataAutomationAsyncResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BedrockDataAutomationRuntime
} // namespace Aws
