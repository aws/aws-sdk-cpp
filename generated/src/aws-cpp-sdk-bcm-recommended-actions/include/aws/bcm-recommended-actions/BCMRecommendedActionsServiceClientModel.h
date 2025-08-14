/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bcm-recommended-actions/BCMRecommendedActionsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BCMRecommendedActionsClient header */
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsResult.h>
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsRequest.h>
/* End of service model headers required in BCMRecommendedActionsClient header */

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

  namespace BCMRecommendedActions
  {
    using BCMRecommendedActionsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BCMRecommendedActionsEndpointProviderBase = Aws::BCMRecommendedActions::Endpoint::BCMRecommendedActionsEndpointProviderBase;
    using BCMRecommendedActionsEndpointProvider = Aws::BCMRecommendedActions::Endpoint::BCMRecommendedActionsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BCMRecommendedActionsClient header */
      class ListRecommendedActionsRequest;
      /* End of service model forward declarations required in BCMRecommendedActionsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ListRecommendedActionsResult, BCMRecommendedActionsError> ListRecommendedActionsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ListRecommendedActionsOutcome> ListRecommendedActionsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BCMRecommendedActionsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BCMRecommendedActionsClient*, const Model::ListRecommendedActionsRequest&, const Model::ListRecommendedActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendedActionsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BCMRecommendedActions
} // namespace Aws
