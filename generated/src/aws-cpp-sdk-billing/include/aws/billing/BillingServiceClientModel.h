/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/billing/BillingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/billing/BillingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BillingClient header */
#include <aws/billing/model/ListBillingViewsResult.h>
/* End of service model headers required in BillingClient header */

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

  namespace Billing
  {
    using BillingClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BillingEndpointProviderBase = Aws::Billing::Endpoint::BillingEndpointProviderBase;
    using BillingEndpointProvider = Aws::Billing::Endpoint::BillingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BillingClient header */
      class ListBillingViewsRequest;
      /* End of service model forward declarations required in BillingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ListBillingViewsResult, BillingError> ListBillingViewsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ListBillingViewsOutcome> ListBillingViewsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BillingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BillingClient*, const Model::ListBillingViewsRequest&, const Model::ListBillingViewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillingViewsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Billing
} // namespace Aws
