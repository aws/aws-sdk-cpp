/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lex/LexRuntimeServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lex/LexRuntimeServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LexRuntimeServiceClient header */
#include <aws/lex/model/DeleteSessionResult.h>
#include <aws/lex/model/GetSessionResult.h>
#include <aws/lex/model/PostContentResult.h>
#include <aws/lex/model/PostTextResult.h>
#include <aws/lex/model/PutSessionResult.h>
/* End of service model headers required in LexRuntimeServiceClient header */

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

  namespace LexRuntimeService
  {
    using LexRuntimeServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LexRuntimeServiceEndpointProviderBase = Aws::LexRuntimeService::Endpoint::LexRuntimeServiceEndpointProviderBase;
    using LexRuntimeServiceEndpointProvider = Aws::LexRuntimeService::Endpoint::LexRuntimeServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LexRuntimeServiceClient header */
      class DeleteSessionRequest;
      class GetSessionRequest;
      class PostContentRequest;
      class PostTextRequest;
      class PutSessionRequest;
      /* End of service model forward declarations required in LexRuntimeServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteSessionResult, LexRuntimeServiceError> DeleteSessionOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, LexRuntimeServiceError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<PostContentResult, LexRuntimeServiceError> PostContentOutcome;
      typedef Aws::Utils::Outcome<PostTextResult, LexRuntimeServiceError> PostTextOutcome;
      typedef Aws::Utils::Outcome<PutSessionResult, LexRuntimeServiceError> PutSessionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<PostContentOutcome> PostContentOutcomeCallable;
      typedef std::future<PostTextOutcome> PostTextOutcomeCallable;
      typedef std::future<PutSessionOutcome> PutSessionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LexRuntimeServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LexRuntimeServiceClient*, const Model::DeleteSessionRequest&, const Model::DeleteSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSessionResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeServiceClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeServiceClient*, const Model::PostContentRequest&, Model::PostContentOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostContentResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeServiceClient*, const Model::PostTextRequest&, const Model::PostTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostTextResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeServiceClient*, const Model::PutSessionRequest&, Model::PutSessionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSessionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LexRuntimeService
} // namespace Aws
