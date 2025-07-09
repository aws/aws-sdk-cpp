/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/freetier/FreeTierErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/freetier/FreeTierEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in FreeTierClient header */
#include <aws/freetier/model/GetAccountActivityResult.h>
#include <aws/freetier/model/GetAccountPlanStateResult.h>
#include <aws/freetier/model/GetFreeTierUsageResult.h>
#include <aws/freetier/model/ListAccountActivitiesResult.h>
#include <aws/freetier/model/UpgradeAccountPlanResult.h>
#include <aws/freetier/model/GetFreeTierUsageRequest.h>
#include <aws/freetier/model/GetAccountPlanStateRequest.h>
#include <aws/freetier/model/ListAccountActivitiesRequest.h>
/* End of service model headers required in FreeTierClient header */

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

  namespace FreeTier
  {
    using FreeTierClientConfiguration = Aws::Client::GenericClientConfiguration;
    using FreeTierEndpointProviderBase = Aws::FreeTier::Endpoint::FreeTierEndpointProviderBase;
    using FreeTierEndpointProvider = Aws::FreeTier::Endpoint::FreeTierEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in FreeTierClient header */
      class GetAccountActivityRequest;
      class GetAccountPlanStateRequest;
      class GetFreeTierUsageRequest;
      class ListAccountActivitiesRequest;
      class UpgradeAccountPlanRequest;
      /* End of service model forward declarations required in FreeTierClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetAccountActivityResult, FreeTierError> GetAccountActivityOutcome;
      typedef Aws::Utils::Outcome<GetAccountPlanStateResult, FreeTierError> GetAccountPlanStateOutcome;
      typedef Aws::Utils::Outcome<GetFreeTierUsageResult, FreeTierError> GetFreeTierUsageOutcome;
      typedef Aws::Utils::Outcome<ListAccountActivitiesResult, FreeTierError> ListAccountActivitiesOutcome;
      typedef Aws::Utils::Outcome<UpgradeAccountPlanResult, FreeTierError> UpgradeAccountPlanOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetAccountActivityOutcome> GetAccountActivityOutcomeCallable;
      typedef std::future<GetAccountPlanStateOutcome> GetAccountPlanStateOutcomeCallable;
      typedef std::future<GetFreeTierUsageOutcome> GetFreeTierUsageOutcomeCallable;
      typedef std::future<ListAccountActivitiesOutcome> ListAccountActivitiesOutcomeCallable;
      typedef std::future<UpgradeAccountPlanOutcome> UpgradeAccountPlanOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FreeTierClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FreeTierClient*, const Model::GetAccountActivityRequest&, const Model::GetAccountActivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountActivityResponseReceivedHandler;
    typedef std::function<void(const FreeTierClient*, const Model::GetAccountPlanStateRequest&, const Model::GetAccountPlanStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountPlanStateResponseReceivedHandler;
    typedef std::function<void(const FreeTierClient*, const Model::GetFreeTierUsageRequest&, const Model::GetFreeTierUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFreeTierUsageResponseReceivedHandler;
    typedef std::function<void(const FreeTierClient*, const Model::ListAccountActivitiesRequest&, const Model::ListAccountActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountActivitiesResponseReceivedHandler;
    typedef std::function<void(const FreeTierClient*, const Model::UpgradeAccountPlanRequest&, const Model::UpgradeAccountPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradeAccountPlanResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace FreeTier
} // namespace Aws
