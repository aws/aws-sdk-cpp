/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/connect-contact-lens/ConnectContactLensErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/connect-contact-lens/ConnectContactLensEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ConnectContactLensClient header */
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsResult.h>
/* End of service model headers required in ConnectContactLensClient header */

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

  namespace ConnectContactLens
  {
    using ConnectContactLensClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ConnectContactLensEndpointProviderBase = Aws::ConnectContactLens::Endpoint::ConnectContactLensEndpointProviderBase;
    using ConnectContactLensEndpointProvider = Aws::ConnectContactLens::Endpoint::ConnectContactLensEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ConnectContactLensClient header */
      class ListRealtimeContactAnalysisSegmentsRequest;
      /* End of service model forward declarations required in ConnectContactLensClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ListRealtimeContactAnalysisSegmentsResult, ConnectContactLensError> ListRealtimeContactAnalysisSegmentsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ListRealtimeContactAnalysisSegmentsOutcome> ListRealtimeContactAnalysisSegmentsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ConnectContactLensClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConnectContactLensClient*, const Model::ListRealtimeContactAnalysisSegmentsRequest&, const Model::ListRealtimeContactAnalysisSegmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRealtimeContactAnalysisSegmentsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ConnectContactLens
} // namespace Aws
