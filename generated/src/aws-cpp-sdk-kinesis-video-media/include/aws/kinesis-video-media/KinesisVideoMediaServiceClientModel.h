/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kinesis-video-media/KinesisVideoMediaErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kinesis-video-media/KinesisVideoMediaEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KinesisVideoMediaClient header */
#include <aws/kinesis-video-media/model/GetMediaResult.h>
/* End of service model headers required in KinesisVideoMediaClient header */

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

  namespace KinesisVideoMedia
  {
    using KinesisVideoMediaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KinesisVideoMediaEndpointProviderBase = Aws::KinesisVideoMedia::Endpoint::KinesisVideoMediaEndpointProviderBase;
    using KinesisVideoMediaEndpointProvider = Aws::KinesisVideoMedia::Endpoint::KinesisVideoMediaEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KinesisVideoMediaClient header */
      class GetMediaRequest;
      /* End of service model forward declarations required in KinesisVideoMediaClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetMediaResult, KinesisVideoMediaError> GetMediaOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetMediaOutcome> GetMediaOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KinesisVideoMediaClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KinesisVideoMediaClient*, const Model::GetMediaRequest&, Model::GetMediaOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KinesisVideoMedia
} // namespace Aws
