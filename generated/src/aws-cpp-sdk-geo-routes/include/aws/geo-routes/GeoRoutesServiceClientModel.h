/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/geo-routes/GeoRoutesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/geo-routes/GeoRoutesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GeoRoutesClient header */
#include <aws/geo-routes/model/CalculateIsolinesResult.h>
#include <aws/geo-routes/model/CalculateRouteMatrixResult.h>
#include <aws/geo-routes/model/CalculateRoutesResult.h>
#include <aws/geo-routes/model/OptimizeWaypointsResult.h>
#include <aws/geo-routes/model/SnapToRoadsResult.h>
/* End of service model headers required in GeoRoutesClient header */

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

  namespace GeoRoutes
  {
    using GeoRoutesClientConfiguration = Aws::Client::GenericClientConfiguration;
    using GeoRoutesEndpointProviderBase = Aws::GeoRoutes::Endpoint::GeoRoutesEndpointProviderBase;
    using GeoRoutesEndpointProvider = Aws::GeoRoutes::Endpoint::GeoRoutesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GeoRoutesClient header */
      class CalculateIsolinesRequest;
      class CalculateRouteMatrixRequest;
      class CalculateRoutesRequest;
      class OptimizeWaypointsRequest;
      class SnapToRoadsRequest;
      /* End of service model forward declarations required in GeoRoutesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CalculateIsolinesResult, GeoRoutesError> CalculateIsolinesOutcome;
      typedef Aws::Utils::Outcome<CalculateRouteMatrixResult, GeoRoutesError> CalculateRouteMatrixOutcome;
      typedef Aws::Utils::Outcome<CalculateRoutesResult, GeoRoutesError> CalculateRoutesOutcome;
      typedef Aws::Utils::Outcome<OptimizeWaypointsResult, GeoRoutesError> OptimizeWaypointsOutcome;
      typedef Aws::Utils::Outcome<SnapToRoadsResult, GeoRoutesError> SnapToRoadsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CalculateIsolinesOutcome> CalculateIsolinesOutcomeCallable;
      typedef std::future<CalculateRouteMatrixOutcome> CalculateRouteMatrixOutcomeCallable;
      typedef std::future<CalculateRoutesOutcome> CalculateRoutesOutcomeCallable;
      typedef std::future<OptimizeWaypointsOutcome> OptimizeWaypointsOutcomeCallable;
      typedef std::future<SnapToRoadsOutcome> SnapToRoadsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GeoRoutesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GeoRoutesClient*, const Model::CalculateIsolinesRequest&, const Model::CalculateIsolinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CalculateIsolinesResponseReceivedHandler;
    typedef std::function<void(const GeoRoutesClient*, const Model::CalculateRouteMatrixRequest&, const Model::CalculateRouteMatrixOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CalculateRouteMatrixResponseReceivedHandler;
    typedef std::function<void(const GeoRoutesClient*, const Model::CalculateRoutesRequest&, const Model::CalculateRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CalculateRoutesResponseReceivedHandler;
    typedef std::function<void(const GeoRoutesClient*, const Model::OptimizeWaypointsRequest&, const Model::OptimizeWaypointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OptimizeWaypointsResponseReceivedHandler;
    typedef std::function<void(const GeoRoutesClient*, const Model::SnapToRoadsRequest&, const Model::SnapToRoadsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SnapToRoadsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GeoRoutes
} // namespace Aws
