/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-places/GeoPlacesServiceClientModel.h>

namespace Aws
{
namespace GeoPlaces
{
  /**
   * <p> The Places API enables powerful location search and geocoding capabilities
   * for your applications, offering global coverage with rich, detailed information.
   * Key features include: </p> <ul> <li> <p>Forward and reverse geocoding for
   * addresses and coordinates</p> </li> <li> <p>Comprehensive place searches with
   * detailed information, including:</p> <ul> <li> <p>Business names and
   * addresses</p> </li> <li> <p>Contact information</p> </li> <li> <p>Hours of
   * operation</p> </li> <li> <p>POI (Points of Interest) categories</p> </li> <li>
   * <p>Food types for restaurants</p> </li> <li> <p>Chain affiliation for relevant
   * businesses</p> </li> </ul> </li> <li> <p>Global data coverage with a wide range
   * of POI categories</p> </li> <li> <p>Regular data updates to ensure accuracy and
   * relevance</p> </li> </ul>
   */
  class AWS_GEOPLACES_API GeoPlacesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GeoPlacesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GeoPlacesClientConfiguration ClientConfigurationType;
      typedef GeoPlacesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoPlacesClient(const Aws::GeoPlaces::GeoPlacesClientConfiguration& clientConfiguration = Aws::GeoPlaces::GeoPlacesClientConfiguration(),
                        std::shared_ptr<GeoPlacesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoPlacesClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<GeoPlacesEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::GeoPlaces::GeoPlacesClientConfiguration& clientConfiguration = Aws::GeoPlaces::GeoPlacesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GeoPlacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<GeoPlacesEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::GeoPlaces::GeoPlacesClientConfiguration& clientConfiguration = Aws::GeoPlaces::GeoPlacesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoPlacesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoPlacesClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GeoPlacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GeoPlacesClient();

        /**
         * <p> <code>Autocomplete</code> completes potential places and addresses as the
         * user types, based on the partial input. The API enhances the efficiency and
         * accuracy of address by completing query based on a few entered keystrokes. It
         * helps you by completing partial queries with valid address completion. Also, the
         * API supports the filtering of results based on geographic location, country, or
         * specific place types, and can be tailored using optional parameters like
         * language and political views.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Autocomplete">AWS
         * API Reference</a></p>
         */
        virtual Model::AutocompleteOutcome Autocomplete(const Model::AutocompleteRequest& request) const;

        /**
         * A Callable wrapper for Autocomplete that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AutocompleteRequestT = Model::AutocompleteRequest>
        Model::AutocompleteOutcomeCallable AutocompleteCallable(const AutocompleteRequestT& request) const
        {
            return SubmitCallable(&GeoPlacesClient::Autocomplete, request);
        }

        /**
         * An Async wrapper for Autocomplete that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AutocompleteRequestT = Model::AutocompleteRequest>
        void AutocompleteAsync(const AutocompleteRequestT& request, const AutocompleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoPlacesClient::Autocomplete, request, handler, context);
        }

        /**
         * <p> <code>Geocode</code> converts a textual address or place into geographic
         * coordinates. You can obtain geographic coordinates, address component, and other
         * related information. It supports flexible queries, including free-form text or
         * structured queries with components like street names, postal codes, and regions.
         * The Geocode API can also provide additional features such as time zone
         * information and the inclusion of political views.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Geocode">AWS
         * API Reference</a></p>
         */
        virtual Model::GeocodeOutcome Geocode(const Model::GeocodeRequest& request = {}) const;

        /**
         * A Callable wrapper for Geocode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GeocodeRequestT = Model::GeocodeRequest>
        Model::GeocodeOutcomeCallable GeocodeCallable(const GeocodeRequestT& request = {}) const
        {
            return SubmitCallable(&GeoPlacesClient::Geocode, request);
        }

        /**
         * An Async wrapper for Geocode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GeocodeRequestT = Model::GeocodeRequest>
        void GeocodeAsync(const GeocodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GeocodeRequestT& request = {}) const
        {
            return SubmitAsync(&GeoPlacesClient::Geocode, request, handler, context);
        }

        /**
         * <p> <code>GetPlace</code> finds a place by its unique ID. A <code>PlaceId</code>
         * is returned by other place operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/GetPlace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlaceOutcome GetPlace(const Model::GetPlaceRequest& request) const;

        /**
         * A Callable wrapper for GetPlace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPlaceRequestT = Model::GetPlaceRequest>
        Model::GetPlaceOutcomeCallable GetPlaceCallable(const GetPlaceRequestT& request) const
        {
            return SubmitCallable(&GeoPlacesClient::GetPlace, request);
        }

        /**
         * An Async wrapper for GetPlace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPlaceRequestT = Model::GetPlaceRequest>
        void GetPlaceAsync(const GetPlaceRequestT& request, const GetPlaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoPlacesClient::GetPlace, request, handler, context);
        }

        /**
         * <p> <code>ReverseGeocode</code> converts geographic coordinates into a
         * human-readable address or place. You can obtain address component, and other
         * related information such as place type, category, street information. The
         * Reverse Geocode API supports filtering to on place type so that you can refine
         * result based on your need. Also, The Reverse Geocode API can also provide
         * additional features such as time zone information and the inclusion of political
         * views.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/ReverseGeocode">AWS
         * API Reference</a></p>
         */
        virtual Model::ReverseGeocodeOutcome ReverseGeocode(const Model::ReverseGeocodeRequest& request) const;

        /**
         * A Callable wrapper for ReverseGeocode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReverseGeocodeRequestT = Model::ReverseGeocodeRequest>
        Model::ReverseGeocodeOutcomeCallable ReverseGeocodeCallable(const ReverseGeocodeRequestT& request) const
        {
            return SubmitCallable(&GeoPlacesClient::ReverseGeocode, request);
        }

        /**
         * An Async wrapper for ReverseGeocode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReverseGeocodeRequestT = Model::ReverseGeocodeRequest>
        void ReverseGeocodeAsync(const ReverseGeocodeRequestT& request, const ReverseGeocodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoPlacesClient::ReverseGeocode, request, handler, context);
        }

        /**
         * <p> <code>SearchNearby</code> queries for points of interest within a radius
         * from a central coordinates, returning place results with optional filters such
         * as categories, business chains, food types and more. The API returns details
         * such as a place name, address, phone, category, food type, contact, opening
         * hours. Also, the API can return phonemes, time zones and more based on requested
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SearchNearby">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchNearbyOutcome SearchNearby(const Model::SearchNearbyRequest& request) const;

        /**
         * A Callable wrapper for SearchNearby that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchNearbyRequestT = Model::SearchNearbyRequest>
        Model::SearchNearbyOutcomeCallable SearchNearbyCallable(const SearchNearbyRequestT& request) const
        {
            return SubmitCallable(&GeoPlacesClient::SearchNearby, request);
        }

        /**
         * An Async wrapper for SearchNearby that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchNearbyRequestT = Model::SearchNearbyRequest>
        void SearchNearbyAsync(const SearchNearbyRequestT& request, const SearchNearbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoPlacesClient::SearchNearby, request, handler, context);
        }

        /**
         * <p> <code>SearchText</code> searches for geocode and place information. You can
         * then complete a follow-up query suggested from the <code>Suggest</code> API via
         * a query id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/SearchText">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTextOutcome SearchText(const Model::SearchTextRequest& request = {}) const;

        /**
         * A Callable wrapper for SearchText that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchTextRequestT = Model::SearchTextRequest>
        Model::SearchTextOutcomeCallable SearchTextCallable(const SearchTextRequestT& request = {}) const
        {
            return SubmitCallable(&GeoPlacesClient::SearchText, request);
        }

        /**
         * An Async wrapper for SearchText that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchTextRequestT = Model::SearchTextRequest>
        void SearchTextAsync(const SearchTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const SearchTextRequestT& request = {}) const
        {
            return SubmitAsync(&GeoPlacesClient::SearchText, request, handler, context);
        }

        /**
         * <p> <code>Suggest</code> provides intelligent predictions or recommendations
         * based on the user's input or context, such as relevant places, points of
         * interest, query terms or search category. It is designed to help users find
         * places or point of interests candidates or identify a follow on query based on
         * incomplete or misspelled queries. It returns a list of possible matches or
         * refinements that can be used to formulate a more accurate query. Users can
         * select the most appropriate suggestion and use it for further searching. The API
         * provides options for filtering results by location and other attributes, and
         * allows for additional features like phonemes and timezones. The response
         * includes refined query terms and detailed place information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Suggest">AWS
         * API Reference</a></p>
         */
        virtual Model::SuggestOutcome Suggest(const Model::SuggestRequest& request) const;

        /**
         * A Callable wrapper for Suggest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SuggestRequestT = Model::SuggestRequest>
        Model::SuggestOutcomeCallable SuggestCallable(const SuggestRequestT& request) const
        {
            return SubmitCallable(&GeoPlacesClient::Suggest, request);
        }

        /**
         * An Async wrapper for Suggest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SuggestRequestT = Model::SuggestRequest>
        void SuggestAsync(const SuggestRequestT& request, const SuggestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoPlacesClient::Suggest, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GeoPlacesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GeoPlacesClient>;
      void init(const GeoPlacesClientConfiguration& clientConfiguration);

      GeoPlacesClientConfiguration m_clientConfiguration;
      std::shared_ptr<GeoPlacesEndpointProviderBase> m_endpointProvider;
  };

} // namespace GeoPlaces
} // namespace Aws
