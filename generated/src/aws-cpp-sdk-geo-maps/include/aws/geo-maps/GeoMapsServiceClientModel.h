/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/geo-maps/GeoMapsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/geo-maps/GeoMapsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GeoMapsClient header */
#include <aws/geo-maps/model/GetGlyphsResult.h>
#include <aws/geo-maps/model/GetSpritesResult.h>
#include <aws/geo-maps/model/GetStaticMapResult.h>
#include <aws/geo-maps/model/GetStyleDescriptorResult.h>
#include <aws/geo-maps/model/GetTileResult.h>
/* End of service model headers required in GeoMapsClient header */

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

  namespace GeoMaps
  {
    using GeoMapsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using GeoMapsEndpointProviderBase = Aws::GeoMaps::Endpoint::GeoMapsEndpointProviderBase;
    using GeoMapsEndpointProvider = Aws::GeoMaps::Endpoint::GeoMapsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GeoMapsClient header */
      class GetGlyphsRequest;
      class GetSpritesRequest;
      class GetStaticMapRequest;
      class GetStyleDescriptorRequest;
      class GetTileRequest;
      /* End of service model forward declarations required in GeoMapsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetGlyphsResult, GeoMapsError> GetGlyphsOutcome;
      typedef Aws::Utils::Outcome<GetSpritesResult, GeoMapsError> GetSpritesOutcome;
      typedef Aws::Utils::Outcome<GetStaticMapResult, GeoMapsError> GetStaticMapOutcome;
      typedef Aws::Utils::Outcome<GetStyleDescriptorResult, GeoMapsError> GetStyleDescriptorOutcome;
      typedef Aws::Utils::Outcome<GetTileResult, GeoMapsError> GetTileOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetGlyphsOutcome> GetGlyphsOutcomeCallable;
      typedef std::future<GetSpritesOutcome> GetSpritesOutcomeCallable;
      typedef std::future<GetStaticMapOutcome> GetStaticMapOutcomeCallable;
      typedef std::future<GetStyleDescriptorOutcome> GetStyleDescriptorOutcomeCallable;
      typedef std::future<GetTileOutcome> GetTileOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GeoMapsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GeoMapsClient*, const Model::GetGlyphsRequest&, Model::GetGlyphsOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlyphsResponseReceivedHandler;
    typedef std::function<void(const GeoMapsClient*, const Model::GetSpritesRequest&, Model::GetSpritesOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSpritesResponseReceivedHandler;
    typedef std::function<void(const GeoMapsClient*, const Model::GetStaticMapRequest&, Model::GetStaticMapOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStaticMapResponseReceivedHandler;
    typedef std::function<void(const GeoMapsClient*, const Model::GetStyleDescriptorRequest&, Model::GetStyleDescriptorOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStyleDescriptorResponseReceivedHandler;
    typedef std::function<void(const GeoMapsClient*, const Model::GetTileRequest&, Model::GetTileOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTileResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GeoMaps
} // namespace Aws
