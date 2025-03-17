/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-maps/GeoMapsServiceClientModel.h>

namespace Aws
{
namespace GeoMaps
{
  /**
   * <p> Integrate high-quality base map data into your applications using <a
   * href="https://maplibre.org">MapLibre</a>. Capabilities include: </p> <ul> <li>
   * <p>Access to comprehensive base map data, allowing you to tailor the map display
   * to your specific needs.</p> </li> <li> <p>Multiple pre-designed map styles
   * suited for various application types, such as navigation, logistics, or data
   * visualization.</p> </li> <li> <p>Generation of static map images for scenarios
   * where interactive maps aren't suitable, such as:</p> <ul> <li> <p>Embedding in
   * emails or documents</p> </li> <li> <p>Displaying in low-bandwidth
   * environments</p> </li> <li> <p>Creating printable maps</p> </li> <li>
   * <p>Enhancing application performance by reducing client-side rendering</p> </li>
   * </ul> </li> </ul>
   */
  class AWS_GEOMAPS_API GeoMapsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GeoMapsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GeoMapsClientConfiguration ClientConfigurationType;
      typedef GeoMapsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoMapsClient(const Aws::GeoMaps::GeoMapsClientConfiguration& clientConfiguration = Aws::GeoMaps::GeoMapsClientConfiguration(),
                      std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoMapsClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::GeoMaps::GeoMapsClientConfiguration& clientConfiguration = Aws::GeoMaps::GeoMapsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GeoMapsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::GeoMaps::GeoMapsClientConfiguration& clientConfiguration = Aws::GeoMaps::GeoMapsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoMapsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoMapsClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GeoMapsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GeoMapsClient();

        /**
         * <p> <code>GetGlyphs</code> returns the map's glyphs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-maps-2020-11-19/GetGlyphs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGlyphsOutcome GetGlyphs(const Model::GetGlyphsRequest& request) const;

        /**
         * A Callable wrapper for GetGlyphs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGlyphsRequestT = Model::GetGlyphsRequest>
        Model::GetGlyphsOutcomeCallable GetGlyphsCallable(const GetGlyphsRequestT& request) const
        {
            return SubmitCallable(&GeoMapsClient::GetGlyphs, request);
        }

        /**
         * An Async wrapper for GetGlyphs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGlyphsRequestT = Model::GetGlyphsRequest>
        void GetGlyphsAsync(const GetGlyphsRequestT& request, const GetGlyphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoMapsClient::GetGlyphs, request, handler, context);
        }

        /**
         * <p> <code>GetSprites</code> returns the map's sprites.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-maps-2020-11-19/GetSprites">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSpritesOutcome GetSprites(const Model::GetSpritesRequest& request) const;

        /**
         * A Callable wrapper for GetSprites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSpritesRequestT = Model::GetSpritesRequest>
        Model::GetSpritesOutcomeCallable GetSpritesCallable(const GetSpritesRequestT& request) const
        {
            return SubmitCallable(&GeoMapsClient::GetSprites, request);
        }

        /**
         * An Async wrapper for GetSprites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSpritesRequestT = Model::GetSpritesRequest>
        void GetSpritesAsync(const GetSpritesRequestT& request, const GetSpritesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoMapsClient::GetSprites, request, handler, context);
        }

        /**
         * <p> <code>GetStaticMap</code> provides high-quality static map images with
         * customizable options. You can modify the map's appearance and overlay additional
         * information. It's an ideal solution for applications requiring tailored static
         * map snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-maps-2020-11-19/GetStaticMap">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStaticMapOutcome GetStaticMap(const Model::GetStaticMapRequest& request) const;

        /**
         * A Callable wrapper for GetStaticMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStaticMapRequestT = Model::GetStaticMapRequest>
        Model::GetStaticMapOutcomeCallable GetStaticMapCallable(const GetStaticMapRequestT& request) const
        {
            return SubmitCallable(&GeoMapsClient::GetStaticMap, request);
        }

        /**
         * An Async wrapper for GetStaticMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStaticMapRequestT = Model::GetStaticMapRequest>
        void GetStaticMapAsync(const GetStaticMapRequestT& request, const GetStaticMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoMapsClient::GetStaticMap, request, handler, context);
        }

        /**
         * <p> <code>GetStyleDescriptor</code> returns information about the
         * style.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-maps-2020-11-19/GetStyleDescriptor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStyleDescriptorOutcome GetStyleDescriptor(const Model::GetStyleDescriptorRequest& request) const;

        /**
         * A Callable wrapper for GetStyleDescriptor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStyleDescriptorRequestT = Model::GetStyleDescriptorRequest>
        Model::GetStyleDescriptorOutcomeCallable GetStyleDescriptorCallable(const GetStyleDescriptorRequestT& request) const
        {
            return SubmitCallable(&GeoMapsClient::GetStyleDescriptor, request);
        }

        /**
         * An Async wrapper for GetStyleDescriptor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStyleDescriptorRequestT = Model::GetStyleDescriptorRequest>
        void GetStyleDescriptorAsync(const GetStyleDescriptorRequestT& request, const GetStyleDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoMapsClient::GetStyleDescriptor, request, handler, context);
        }

        /**
         * <p> <code>GetTile</code> returns a tile. Map tiles are used by clients to render
         * a map. they're addressed using a grid arrangement with an X coordinate, Y
         * coordinate, and Z (zoom) level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-maps-2020-11-19/GetTile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTileOutcome GetTile(const Model::GetTileRequest& request) const;

        /**
         * A Callable wrapper for GetTile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTileRequestT = Model::GetTileRequest>
        Model::GetTileOutcomeCallable GetTileCallable(const GetTileRequestT& request) const
        {
            return SubmitCallable(&GeoMapsClient::GetTile, request);
        }

        /**
         * An Async wrapper for GetTile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTileRequestT = Model::GetTileRequest>
        void GetTileAsync(const GetTileRequestT& request, const GetTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoMapsClient::GetTile, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GeoMapsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GeoMapsClient>;
      void init(const GeoMapsClientConfiguration& clientConfiguration);

      GeoMapsClientConfiguration m_clientConfiguration;
      std::shared_ptr<GeoMapsEndpointProviderBase> m_endpointProvider;
  };

} // namespace GeoMaps
} // namespace Aws
