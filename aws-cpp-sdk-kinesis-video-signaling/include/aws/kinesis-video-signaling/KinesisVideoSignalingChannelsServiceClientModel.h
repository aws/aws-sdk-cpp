/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KinesisVideoSignalingChannelsClient header */
#include <aws/kinesis-video-signaling/model/GetIceServerConfigResult.h>
#include <aws/kinesis-video-signaling/model/SendAlexaOfferToMasterResult.h>
/* End of service model headers required in KinesisVideoSignalingChannelsClient header */

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

  namespace KinesisVideoSignalingChannels
  {
    using KinesisVideoSignalingChannelsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KinesisVideoSignalingChannelsEndpointProviderBase = Aws::KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsEndpointProviderBase;
    using KinesisVideoSignalingChannelsEndpointProvider = Aws::KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KinesisVideoSignalingChannelsClient header */
      class GetIceServerConfigRequest;
      class SendAlexaOfferToMasterRequest;
      /* End of service model forward declarations required in KinesisVideoSignalingChannelsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetIceServerConfigResult, KinesisVideoSignalingChannelsError> GetIceServerConfigOutcome;
      typedef Aws::Utils::Outcome<SendAlexaOfferToMasterResult, KinesisVideoSignalingChannelsError> SendAlexaOfferToMasterOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetIceServerConfigOutcome> GetIceServerConfigOutcomeCallable;
      typedef std::future<SendAlexaOfferToMasterOutcome> SendAlexaOfferToMasterOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KinesisVideoSignalingChannelsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KinesisVideoSignalingChannelsClient*, const Model::GetIceServerConfigRequest&, const Model::GetIceServerConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIceServerConfigResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoSignalingChannelsClient*, const Model::SendAlexaOfferToMasterRequest&, const Model::SendAlexaOfferToMasterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendAlexaOfferToMasterResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KinesisVideoSignalingChannels
} // namespace Aws
