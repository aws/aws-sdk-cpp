/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/appconfigdata/AppConfigDataErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/appconfigdata/AppConfigDataEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppConfigDataClient header */
#include <aws/appconfigdata/model/GetLatestConfigurationResult.h>
#include <aws/appconfigdata/model/StartConfigurationSessionResult.h>
/* End of service model headers required in AppConfigDataClient header */

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

  namespace AppConfigData
  {
    using AppConfigDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppConfigDataEndpointProviderBase = Aws::AppConfigData::Endpoint::AppConfigDataEndpointProviderBase;
    using AppConfigDataEndpointProvider = Aws::AppConfigData::Endpoint::AppConfigDataEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppConfigDataClient header */
      class GetLatestConfigurationRequest;
      class StartConfigurationSessionRequest;
      /* End of service model forward declarations required in AppConfigDataClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetLatestConfigurationResult, AppConfigDataError> GetLatestConfigurationOutcome;
      typedef Aws::Utils::Outcome<StartConfigurationSessionResult, AppConfigDataError> StartConfigurationSessionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetLatestConfigurationOutcome> GetLatestConfigurationOutcomeCallable;
      typedef std::future<StartConfigurationSessionOutcome> StartConfigurationSessionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppConfigDataClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppConfigDataClient*, const Model::GetLatestConfigurationRequest&, Model::GetLatestConfigurationOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLatestConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppConfigDataClient*, const Model::StartConfigurationSessionRequest&, const Model::StartConfigurationSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigurationSessionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppConfigData
} // namespace Aws
