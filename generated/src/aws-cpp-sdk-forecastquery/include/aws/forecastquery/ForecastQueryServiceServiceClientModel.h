/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/forecastquery/ForecastQueryServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/forecastquery/ForecastQueryServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ForecastQueryServiceClient header */
#include <aws/forecastquery/model/QueryForecastResult.h>
#include <aws/forecastquery/model/QueryWhatIfForecastResult.h>
/* End of service model headers required in ForecastQueryServiceClient header */

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

  namespace ForecastQueryService
  {
    using ForecastQueryServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ForecastQueryServiceEndpointProviderBase = Aws::ForecastQueryService::Endpoint::ForecastQueryServiceEndpointProviderBase;
    using ForecastQueryServiceEndpointProvider = Aws::ForecastQueryService::Endpoint::ForecastQueryServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ForecastQueryServiceClient header */
      class QueryForecastRequest;
      class QueryWhatIfForecastRequest;
      /* End of service model forward declarations required in ForecastQueryServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<QueryForecastResult, ForecastQueryServiceError> QueryForecastOutcome;
      typedef Aws::Utils::Outcome<QueryWhatIfForecastResult, ForecastQueryServiceError> QueryWhatIfForecastOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<QueryForecastOutcome> QueryForecastOutcomeCallable;
      typedef std::future<QueryWhatIfForecastOutcome> QueryWhatIfForecastOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ForecastQueryServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ForecastQueryServiceClient*, const Model::QueryForecastRequest&, const Model::QueryForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastQueryServiceClient*, const Model::QueryWhatIfForecastRequest&, const Model::QueryWhatIfForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryWhatIfForecastResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ForecastQueryService
} // namespace Aws
