/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/GeoRoutesServiceClientModel.h>

namespace Aws
{
namespace GeoRoutes
{
  /**
   * <p>With the Amazon Location Routes API you can calculate routes and estimate
   * travel time based on up-to-date road network and live traffic information.</p>
   * <p>Calculate optimal travel routes and estimate travel times using up-to-date
   * road network and traffic data. Key features include:</p> <ul> <li>
   * <p>Point-to-point routing with estimated travel time, distance, and turn-by-turn
   * directions</p> </li> <li> <p>Multi-point route optimization to minimize travel
   * time or distance</p> </li> <li> <p>Route matrices for efficient
   * multi-destination planning</p> </li> <li> <p>Isoline calculations to determine
   * reachable areas within specified time or distance thresholds</p> </li> <li>
   * <p>Map-matching to align GPS traces with the road network</p> </li> </ul>
   */
  class AWS_GEOROUTES_API GeoRoutesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GeoRoutesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GeoRoutesClientConfiguration ClientConfigurationType;
      typedef GeoRoutesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoRoutesClient(const Aws::GeoRoutes::GeoRoutesClientConfiguration& clientConfiguration = Aws::GeoRoutes::GeoRoutesClientConfiguration(),
                        std::shared_ptr<GeoRoutesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoRoutesClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<GeoRoutesEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::GeoRoutes::GeoRoutesClientConfiguration& clientConfiguration = Aws::GeoRoutes::GeoRoutesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GeoRoutesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<GeoRoutesEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::GeoRoutes::GeoRoutesClientConfiguration& clientConfiguration = Aws::GeoRoutes::GeoRoutesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoRoutesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GeoRoutesClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GeoRoutesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GeoRoutesClient();

        /**
         * <p>Use the <code>CalculateIsolines</code> action to find service areas that can
         * be reached in a given threshold of time, distance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/CalculateIsolines">AWS
         * API Reference</a></p>
         */
        virtual Model::CalculateIsolinesOutcome CalculateIsolines(const Model::CalculateIsolinesRequest& request) const;

        /**
         * A Callable wrapper for CalculateIsolines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CalculateIsolinesRequestT = Model::CalculateIsolinesRequest>
        Model::CalculateIsolinesOutcomeCallable CalculateIsolinesCallable(const CalculateIsolinesRequestT& request) const
        {
            return SubmitCallable(&GeoRoutesClient::CalculateIsolines, request);
        }

        /**
         * An Async wrapper for CalculateIsolines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CalculateIsolinesRequestT = Model::CalculateIsolinesRequest>
        void CalculateIsolinesAsync(const CalculateIsolinesRequestT& request, const CalculateIsolinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoRoutesClient::CalculateIsolines, request, handler, context);
        }

        /**
         * <p> Use <code>CalculateRouteMatrix</code> to compute results for all pairs of
         * Origins to Destinations. Each row corresponds to one entry in Origins. Each
         * entry in the row corresponds to the route from that entry in Origins to an entry
         * in Destinations positions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/CalculateRouteMatrix">AWS
         * API Reference</a></p>
         */
        virtual Model::CalculateRouteMatrixOutcome CalculateRouteMatrix(const Model::CalculateRouteMatrixRequest& request) const;

        /**
         * A Callable wrapper for CalculateRouteMatrix that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CalculateRouteMatrixRequestT = Model::CalculateRouteMatrixRequest>
        Model::CalculateRouteMatrixOutcomeCallable CalculateRouteMatrixCallable(const CalculateRouteMatrixRequestT& request) const
        {
            return SubmitCallable(&GeoRoutesClient::CalculateRouteMatrix, request);
        }

        /**
         * An Async wrapper for CalculateRouteMatrix that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CalculateRouteMatrixRequestT = Model::CalculateRouteMatrixRequest>
        void CalculateRouteMatrixAsync(const CalculateRouteMatrixRequestT& request, const CalculateRouteMatrixResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoRoutesClient::CalculateRouteMatrix, request, handler, context);
        }

        /**
         * <p> <code>CalculateRoutes</code> computes routes given the following required
         * parameters: <code>Origin</code> and <code>Destination</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/CalculateRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::CalculateRoutesOutcome CalculateRoutes(const Model::CalculateRoutesRequest& request) const;

        /**
         * A Callable wrapper for CalculateRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CalculateRoutesRequestT = Model::CalculateRoutesRequest>
        Model::CalculateRoutesOutcomeCallable CalculateRoutesCallable(const CalculateRoutesRequestT& request) const
        {
            return SubmitCallable(&GeoRoutesClient::CalculateRoutes, request);
        }

        /**
         * An Async wrapper for CalculateRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CalculateRoutesRequestT = Model::CalculateRoutesRequest>
        void CalculateRoutesAsync(const CalculateRoutesRequestT& request, const CalculateRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoRoutesClient::CalculateRoutes, request, handler, context);
        }

        /**
         * <p> <code>OptimizeWaypoints</code> calculates the optimal order to travel
         * between a set of waypoints to minimize either the travel time or the distance
         * travelled during the journey, based on road network restrictions and the traffic
         * pattern data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/OptimizeWaypoints">AWS
         * API Reference</a></p>
         */
        virtual Model::OptimizeWaypointsOutcome OptimizeWaypoints(const Model::OptimizeWaypointsRequest& request) const;

        /**
         * A Callable wrapper for OptimizeWaypoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename OptimizeWaypointsRequestT = Model::OptimizeWaypointsRequest>
        Model::OptimizeWaypointsOutcomeCallable OptimizeWaypointsCallable(const OptimizeWaypointsRequestT& request) const
        {
            return SubmitCallable(&GeoRoutesClient::OptimizeWaypoints, request);
        }

        /**
         * An Async wrapper for OptimizeWaypoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename OptimizeWaypointsRequestT = Model::OptimizeWaypointsRequest>
        void OptimizeWaypointsAsync(const OptimizeWaypointsRequestT& request, const OptimizeWaypointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoRoutesClient::OptimizeWaypoints, request, handler, context);
        }

        /**
         * <p> <code>SnapToRoads</code> matches GPS trace to roads most likely traveled
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/SnapToRoads">AWS
         * API Reference</a></p>
         */
        virtual Model::SnapToRoadsOutcome SnapToRoads(const Model::SnapToRoadsRequest& request) const;

        /**
         * A Callable wrapper for SnapToRoads that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SnapToRoadsRequestT = Model::SnapToRoadsRequest>
        Model::SnapToRoadsOutcomeCallable SnapToRoadsCallable(const SnapToRoadsRequestT& request) const
        {
            return SubmitCallable(&GeoRoutesClient::SnapToRoads, request);
        }

        /**
         * An Async wrapper for SnapToRoads that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SnapToRoadsRequestT = Model::SnapToRoadsRequest>
        void SnapToRoadsAsync(const SnapToRoadsRequestT& request, const SnapToRoadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GeoRoutesClient::SnapToRoads, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GeoRoutesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GeoRoutesClient>;
      void init(const GeoRoutesClientConfiguration& clientConfiguration);

      GeoRoutesClientConfiguration m_clientConfiguration;
      std::shared_ptr<GeoRoutesEndpointProviderBase> m_endpointProvider;
  };

} // namespace GeoRoutes
} // namespace Aws
