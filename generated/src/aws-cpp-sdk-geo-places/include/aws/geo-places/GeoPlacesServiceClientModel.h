/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/geo-places/GeoPlacesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/geo-places/GeoPlacesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GeoPlacesClient header */
#include <aws/geo-places/model/AutocompleteResult.h>
#include <aws/geo-places/model/GeocodeResult.h>
#include <aws/geo-places/model/GetPlaceResult.h>
#include <aws/geo-places/model/ReverseGeocodeResult.h>
#include <aws/geo-places/model/SearchNearbyResult.h>
#include <aws/geo-places/model/SearchTextResult.h>
#include <aws/geo-places/model/SuggestResult.h>
#include <aws/geo-places/model/GeocodeRequest.h>
#include <aws/geo-places/model/SearchTextRequest.h>
/* End of service model headers required in GeoPlacesClient header */

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

  namespace GeoPlaces
  {
    using GeoPlacesClientConfiguration = Aws::Client::GenericClientConfiguration;
    using GeoPlacesEndpointProviderBase = Aws::GeoPlaces::Endpoint::GeoPlacesEndpointProviderBase;
    using GeoPlacesEndpointProvider = Aws::GeoPlaces::Endpoint::GeoPlacesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GeoPlacesClient header */
      class AutocompleteRequest;
      class GeocodeRequest;
      class GetPlaceRequest;
      class ReverseGeocodeRequest;
      class SearchNearbyRequest;
      class SearchTextRequest;
      class SuggestRequest;
      /* End of service model forward declarations required in GeoPlacesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AutocompleteResult, GeoPlacesError> AutocompleteOutcome;
      typedef Aws::Utils::Outcome<GeocodeResult, GeoPlacesError> GeocodeOutcome;
      typedef Aws::Utils::Outcome<GetPlaceResult, GeoPlacesError> GetPlaceOutcome;
      typedef Aws::Utils::Outcome<ReverseGeocodeResult, GeoPlacesError> ReverseGeocodeOutcome;
      typedef Aws::Utils::Outcome<SearchNearbyResult, GeoPlacesError> SearchNearbyOutcome;
      typedef Aws::Utils::Outcome<SearchTextResult, GeoPlacesError> SearchTextOutcome;
      typedef Aws::Utils::Outcome<SuggestResult, GeoPlacesError> SuggestOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AutocompleteOutcome> AutocompleteOutcomeCallable;
      typedef std::future<GeocodeOutcome> GeocodeOutcomeCallable;
      typedef std::future<GetPlaceOutcome> GetPlaceOutcomeCallable;
      typedef std::future<ReverseGeocodeOutcome> ReverseGeocodeOutcomeCallable;
      typedef std::future<SearchNearbyOutcome> SearchNearbyOutcomeCallable;
      typedef std::future<SearchTextOutcome> SearchTextOutcomeCallable;
      typedef std::future<SuggestOutcome> SuggestOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GeoPlacesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GeoPlacesClient*, const Model::AutocompleteRequest&, const Model::AutocompleteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AutocompleteResponseReceivedHandler;
    typedef std::function<void(const GeoPlacesClient*, const Model::GeocodeRequest&, const Model::GeocodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GeocodeResponseReceivedHandler;
    typedef std::function<void(const GeoPlacesClient*, const Model::GetPlaceRequest&, const Model::GetPlaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlaceResponseReceivedHandler;
    typedef std::function<void(const GeoPlacesClient*, const Model::ReverseGeocodeRequest&, const Model::ReverseGeocodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReverseGeocodeResponseReceivedHandler;
    typedef std::function<void(const GeoPlacesClient*, const Model::SearchNearbyRequest&, const Model::SearchNearbyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchNearbyResponseReceivedHandler;
    typedef std::function<void(const GeoPlacesClient*, const Model::SearchTextRequest&, const Model::SearchTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTextResponseReceivedHandler;
    typedef std::function<void(const GeoPlacesClient*, const Model::SuggestRequest&, const Model::SuggestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuggestResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GeoPlaces
} // namespace Aws
