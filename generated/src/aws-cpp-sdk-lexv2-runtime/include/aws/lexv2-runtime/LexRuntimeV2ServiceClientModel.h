/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lexv2-runtime/LexRuntimeV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lexv2-runtime/LexRuntimeV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LexRuntimeV2Client header */
#include <aws/lexv2-runtime/model/DeleteSessionResult.h>
#include <aws/lexv2-runtime/model/GetSessionResult.h>
#include <aws/lexv2-runtime/model/PutSessionResult.h>
#include <aws/lexv2-runtime/model/RecognizeTextResult.h>
#include <aws/lexv2-runtime/model/RecognizeUtteranceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in LexRuntimeV2Client header */

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

  namespace LexRuntimeV2
  {
    using LexRuntimeV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LexRuntimeV2EndpointProviderBase = Aws::LexRuntimeV2::Endpoint::LexRuntimeV2EndpointProviderBase;
    using LexRuntimeV2EndpointProvider = Aws::LexRuntimeV2::Endpoint::LexRuntimeV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LexRuntimeV2Client header */
      class DeleteSessionRequest;
      class GetSessionRequest;
      class PutSessionRequest;
      class RecognizeTextRequest;
      class RecognizeUtteranceRequest;
      class StartConversationRequest;
      class StartConversationRequestEventStream;
      /* End of service model forward declarations required in LexRuntimeV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteSessionResult, LexRuntimeV2Error> DeleteSessionOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, LexRuntimeV2Error> GetSessionOutcome;
      typedef Aws::Utils::Outcome<PutSessionResult, LexRuntimeV2Error> PutSessionOutcome;
      typedef Aws::Utils::Outcome<RecognizeTextResult, LexRuntimeV2Error> RecognizeTextOutcome;
      typedef Aws::Utils::Outcome<RecognizeUtteranceResult, LexRuntimeV2Error> RecognizeUtteranceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexRuntimeV2Error> StartConversationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<PutSessionOutcome> PutSessionOutcomeCallable;
      typedef std::future<RecognizeTextOutcome> RecognizeTextOutcomeCallable;
      typedef std::future<RecognizeUtteranceOutcome> RecognizeUtteranceOutcomeCallable;
      typedef std::future<StartConversationOutcome> StartConversationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LexRuntimeV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const LexRuntimeV2Client*, const Model::DeleteSessionRequest&, const Model::DeleteSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSessionResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::PutSessionRequest&, Model::PutSessionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSessionResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::RecognizeTextRequest&, const Model::RecognizeTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecognizeTextResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::RecognizeUtteranceRequest&, Model::RecognizeUtteranceOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecognizeUtteranceResponseReceivedHandler;
    typedef std::function<void(Model::StartConversationRequestEventStream&)> StartConversationStreamReadyHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::StartConversationRequest&, const Model::StartConversationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConversationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LexRuntimeV2
} // namespace Aws
