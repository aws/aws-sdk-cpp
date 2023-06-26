/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KinesisVideoWebRTCStorageClient header */
#include <aws/core/NoResult.h>
/* End of service model headers required in KinesisVideoWebRTCStorageClient header */

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

  namespace KinesisVideoWebRTCStorage
  {
    using KinesisVideoWebRTCStorageClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KinesisVideoWebRTCStorageEndpointProviderBase = Aws::KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageEndpointProviderBase;
    using KinesisVideoWebRTCStorageEndpointProvider = Aws::KinesisVideoWebRTCStorage::Endpoint::KinesisVideoWebRTCStorageEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KinesisVideoWebRTCStorageClient header */
      class JoinStorageSessionRequest;
      /* End of service model forward declarations required in KinesisVideoWebRTCStorageClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, KinesisVideoWebRTCStorageError> JoinStorageSessionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<JoinStorageSessionOutcome> JoinStorageSessionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KinesisVideoWebRTCStorageClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KinesisVideoWebRTCStorageClient*, const Model::JoinStorageSessionRequest&, const Model::JoinStorageSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > JoinStorageSessionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KinesisVideoWebRTCStorage
} // namespace Aws
