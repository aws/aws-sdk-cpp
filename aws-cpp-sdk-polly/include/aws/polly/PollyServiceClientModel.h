/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/polly/PollyErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/polly/PollyEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PollyClient header */
#include <aws/polly/model/DeleteLexiconResult.h>
#include <aws/polly/model/DescribeVoicesResult.h>
#include <aws/polly/model/GetLexiconResult.h>
#include <aws/polly/model/GetSpeechSynthesisTaskResult.h>
#include <aws/polly/model/ListLexiconsResult.h>
#include <aws/polly/model/ListSpeechSynthesisTasksResult.h>
#include <aws/polly/model/PutLexiconResult.h>
#include <aws/polly/model/StartSpeechSynthesisTaskResult.h>
#include <aws/polly/model/SynthesizeSpeechResult.h>
/* End of service model headers required in PollyClient header */

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

  namespace Polly
  {
    using PollyClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PollyEndpointProviderBase = Aws::Polly::Endpoint::PollyEndpointProviderBase;
    using PollyEndpointProvider = Aws::Polly::Endpoint::PollyEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PollyClient header */
      class DeleteLexiconRequest;
      class DescribeVoicesRequest;
      class GetLexiconRequest;
      class GetSpeechSynthesisTaskRequest;
      class ListLexiconsRequest;
      class ListSpeechSynthesisTasksRequest;
      class PutLexiconRequest;
      class StartSpeechSynthesisTaskRequest;
      class SynthesizeSpeechRequest;
      /* End of service model forward declarations required in PollyClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteLexiconResult, PollyError> DeleteLexiconOutcome;
      typedef Aws::Utils::Outcome<DescribeVoicesResult, PollyError> DescribeVoicesOutcome;
      typedef Aws::Utils::Outcome<GetLexiconResult, PollyError> GetLexiconOutcome;
      typedef Aws::Utils::Outcome<GetSpeechSynthesisTaskResult, PollyError> GetSpeechSynthesisTaskOutcome;
      typedef Aws::Utils::Outcome<ListLexiconsResult, PollyError> ListLexiconsOutcome;
      typedef Aws::Utils::Outcome<ListSpeechSynthesisTasksResult, PollyError> ListSpeechSynthesisTasksOutcome;
      typedef Aws::Utils::Outcome<PutLexiconResult, PollyError> PutLexiconOutcome;
      typedef Aws::Utils::Outcome<StartSpeechSynthesisTaskResult, PollyError> StartSpeechSynthesisTaskOutcome;
      typedef Aws::Utils::Outcome<SynthesizeSpeechResult, PollyError> SynthesizeSpeechOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteLexiconOutcome> DeleteLexiconOutcomeCallable;
      typedef std::future<DescribeVoicesOutcome> DescribeVoicesOutcomeCallable;
      typedef std::future<GetLexiconOutcome> GetLexiconOutcomeCallable;
      typedef std::future<GetSpeechSynthesisTaskOutcome> GetSpeechSynthesisTaskOutcomeCallable;
      typedef std::future<ListLexiconsOutcome> ListLexiconsOutcomeCallable;
      typedef std::future<ListSpeechSynthesisTasksOutcome> ListSpeechSynthesisTasksOutcomeCallable;
      typedef std::future<PutLexiconOutcome> PutLexiconOutcomeCallable;
      typedef std::future<StartSpeechSynthesisTaskOutcome> StartSpeechSynthesisTaskOutcomeCallable;
      typedef std::future<SynthesizeSpeechOutcome> SynthesizeSpeechOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PollyClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PollyClient*, const Model::DeleteLexiconRequest&, const Model::DeleteLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::DescribeVoicesRequest&, const Model::DescribeVoicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVoicesResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::GetLexiconRequest&, const Model::GetLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::GetSpeechSynthesisTaskRequest&, const Model::GetSpeechSynthesisTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSpeechSynthesisTaskResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::ListLexiconsRequest&, const Model::ListLexiconsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLexiconsResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::ListSpeechSynthesisTasksRequest&, const Model::ListSpeechSynthesisTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpeechSynthesisTasksResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::PutLexiconRequest&, const Model::PutLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::StartSpeechSynthesisTaskRequest&, const Model::StartSpeechSynthesisTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSpeechSynthesisTaskResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::SynthesizeSpeechRequest&, Model::SynthesizeSpeechOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SynthesizeSpeechResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Polly
} // namespace Aws
