/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotsecuretunneling/IoTSecureTunnelingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTSecureTunnelingClient header */
#include <aws/iotsecuretunneling/model/CloseTunnelResult.h>
#include <aws/iotsecuretunneling/model/DescribeTunnelResult.h>
#include <aws/iotsecuretunneling/model/ListTagsForResourceResult.h>
#include <aws/iotsecuretunneling/model/ListTunnelsResult.h>
#include <aws/iotsecuretunneling/model/OpenTunnelResult.h>
#include <aws/iotsecuretunneling/model/RotateTunnelAccessTokenResult.h>
#include <aws/iotsecuretunneling/model/TagResourceResult.h>
#include <aws/iotsecuretunneling/model/UntagResourceResult.h>
/* End of service model headers required in IoTSecureTunnelingClient header */

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

  namespace IoTSecureTunneling
  {
    using IoTSecureTunnelingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTSecureTunnelingEndpointProviderBase = Aws::IoTSecureTunneling::Endpoint::IoTSecureTunnelingEndpointProviderBase;
    using IoTSecureTunnelingEndpointProvider = Aws::IoTSecureTunneling::Endpoint::IoTSecureTunnelingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTSecureTunnelingClient header */
      class CloseTunnelRequest;
      class DescribeTunnelRequest;
      class ListTagsForResourceRequest;
      class ListTunnelsRequest;
      class OpenTunnelRequest;
      class RotateTunnelAccessTokenRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in IoTSecureTunnelingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CloseTunnelResult, IoTSecureTunnelingError> CloseTunnelOutcome;
      typedef Aws::Utils::Outcome<DescribeTunnelResult, IoTSecureTunnelingError> DescribeTunnelOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTSecureTunnelingError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTunnelsResult, IoTSecureTunnelingError> ListTunnelsOutcome;
      typedef Aws::Utils::Outcome<OpenTunnelResult, IoTSecureTunnelingError> OpenTunnelOutcome;
      typedef Aws::Utils::Outcome<RotateTunnelAccessTokenResult, IoTSecureTunnelingError> RotateTunnelAccessTokenOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTSecureTunnelingError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTSecureTunnelingError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CloseTunnelOutcome> CloseTunnelOutcomeCallable;
      typedef std::future<DescribeTunnelOutcome> DescribeTunnelOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTunnelsOutcome> ListTunnelsOutcomeCallable;
      typedef std::future<OpenTunnelOutcome> OpenTunnelOutcomeCallable;
      typedef std::future<RotateTunnelAccessTokenOutcome> RotateTunnelAccessTokenOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTSecureTunnelingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::CloseTunnelRequest&, const Model::CloseTunnelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloseTunnelResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::DescribeTunnelRequest&, const Model::DescribeTunnelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTunnelResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::ListTunnelsRequest&, const Model::ListTunnelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTunnelsResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::OpenTunnelRequest&, const Model::OpenTunnelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OpenTunnelResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::RotateTunnelAccessTokenRequest&, const Model::RotateTunnelAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RotateTunnelAccessTokenResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTSecureTunnelingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTSecureTunneling
} // namespace Aws
