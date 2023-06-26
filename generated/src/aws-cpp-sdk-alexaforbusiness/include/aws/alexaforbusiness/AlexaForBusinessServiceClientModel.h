/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/alexaforbusiness/AlexaForBusinessErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/alexaforbusiness/AlexaForBusinessEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AlexaForBusinessClient header */
#include <aws/alexaforbusiness/model/SendAnnouncementResult.h>
/* End of service model headers required in AlexaForBusinessClient header */

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

  namespace AlexaForBusiness
  {
    using AlexaForBusinessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AlexaForBusinessEndpointProviderBase = Aws::AlexaForBusiness::Endpoint::AlexaForBusinessEndpointProviderBase;
    using AlexaForBusinessEndpointProvider = Aws::AlexaForBusiness::Endpoint::AlexaForBusinessEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AlexaForBusinessClient header */
      class SendAnnouncementRequest;
      /* End of service model forward declarations required in AlexaForBusinessClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<SendAnnouncementResult, AlexaForBusinessError> SendAnnouncementOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<SendAnnouncementOutcome> SendAnnouncementOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AlexaForBusinessClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AlexaForBusinessClient*, const Model::SendAnnouncementRequest&, const Model::SendAnnouncementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendAnnouncementResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AlexaForBusiness
} // namespace Aws
