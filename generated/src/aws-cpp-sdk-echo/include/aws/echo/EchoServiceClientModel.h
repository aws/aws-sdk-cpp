/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/echo/EchoErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/echo/EchoEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EchoClient header */
#include <aws/echo/model/EchoOperationResult.h>
#include <aws/echo/model/EchoOperationRequest.h>
/* End of service model headers required in EchoClient header */

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

  namespace Echo
  {
    using EchoClientConfiguration = Aws::Client::GenericClientConfiguration;
    using EchoEndpointProviderBase = Aws::Echo::Endpoint::EchoEndpointProviderBase;
    using EchoEndpointProvider = Aws::Echo::Endpoint::EchoEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EchoClient header */
      class EchoOperationRequest;
      /* End of service model forward declarations required in EchoClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<EchoOperationResult, EchoError> EchoOperationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<EchoOperationOutcome> EchoOperationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EchoClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EchoClient*, const Model::EchoOperationRequest&, const Model::EchoOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EchoOperationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Echo
} // namespace Aws
