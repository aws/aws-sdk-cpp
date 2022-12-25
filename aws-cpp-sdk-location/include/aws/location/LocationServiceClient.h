/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/LocationServiceServiceClientModel.h>

namespace Aws
{
namespace LocationService
{
  /**
   * <p>"Suite of geospatial services including Maps, Places, Routes, Tracking, and
   * Geofencing"</p>
   */
  class AWS_LOCATIONSERVICE_API LocationServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LocationServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LocationServiceClient(const Aws::LocationService::LocationServiceClientConfiguration& clientConfiguration = Aws::LocationService::LocationServiceClientConfiguration(),
                              std::shared_ptr<LocationServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LocationServiceClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<LocationServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG),
                              const Aws::LocationService::LocationServiceClientConfiguration& clientConfiguration = Aws::LocationService::LocationServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LocationServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<LocationServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<LocationServiceEndpointProvider>(ALLOCATION_TAG),
                              const Aws::LocationService::LocationServiceClientConfiguration& clientConfiguration = Aws::LocationService::LocationServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LocationServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LocationServiceClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LocationServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LocationServiceClient();

        /**
         * <p>Creates an association between a geofence collection and a tracker resource.
         * This allows the tracker resource to communicate location data to the linked
         * geofence collection. </p> <p>You can associate up to five geofence collections
         * to each tracker resource.</p>  <p>Currently not supported — Cross-account
         * configurations, such as creating associations between a tracker resource in one
         * account and a geofence collection in another account.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/AssociateTrackerConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrackerConsumerOutcome AssociateTrackerConsumer(const Model::AssociateTrackerConsumerRequest& request) const;

        /**
         * A Callable wrapper for AssociateTrackerConsumer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTrackerConsumerOutcomeCallable AssociateTrackerConsumerCallable(const Model::AssociateTrackerConsumerRequest& request) const;

        /**
         * An Async wrapper for AssociateTrackerConsumer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTrackerConsumerAsync(const Model::AssociateTrackerConsumerRequest& request, const AssociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the position history of one or more devices from a tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteDevicePositionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDevicePositionHistoryOutcome BatchDeleteDevicePositionHistory(const Model::BatchDeleteDevicePositionHistoryRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteDevicePositionHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteDevicePositionHistoryOutcomeCallable BatchDeleteDevicePositionHistoryCallable(const Model::BatchDeleteDevicePositionHistoryRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteDevicePositionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteDevicePositionHistoryAsync(const Model::BatchDeleteDevicePositionHistoryRequest& request, const BatchDeleteDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a batch of geofences from a geofence collection.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteGeofenceOutcome BatchDeleteGeofence(const Model::BatchDeleteGeofenceRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteGeofence that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteGeofenceOutcomeCallable BatchDeleteGeofenceCallable(const Model::BatchDeleteGeofenceRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteGeofence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteGeofenceAsync(const Model::BatchDeleteGeofenceRequest& request, const BatchDeleteGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Evaluates device positions against the geofence geometries from a given
         * geofence collection.</p> <p>This operation always returns an empty response
         * because geofences are asynchronously evaluated. The evaluation determines if the
         * device has entered or exited a geofenced area, and then publishes one of the
         * following events to Amazon EventBridge:</p> <ul> <li> <p> <code>ENTER</code> if
         * Amazon Location determines that the tracked device has entered a geofenced
         * area.</p> </li> <li> <p> <code>EXIT</code> if Amazon Location determines that
         * the tracked device has exited a geofenced area.</p> </li> </ul>  <p>The
         * last geofence that a device was observed within is tracked for 30 days after the
         * most recent device position update.</p>   <p>Geofence evaluation
         * uses the given device position. It does not account for the optional
         * <code>Accuracy</code> of a <code>DevicePositionUpdate</code>.</p>  
         * <p>The <code>DeviceID</code> is used as a string to represent the device. You do
         * not need to have a <code>Tracker</code> associated with the
         * <code>DeviceID</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchEvaluateGeofences">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEvaluateGeofencesOutcome BatchEvaluateGeofences(const Model::BatchEvaluateGeofencesRequest& request) const;

        /**
         * A Callable wrapper for BatchEvaluateGeofences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchEvaluateGeofencesOutcomeCallable BatchEvaluateGeofencesCallable(const Model::BatchEvaluateGeofencesRequest& request) const;

        /**
         * An Async wrapper for BatchEvaluateGeofences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchEvaluateGeofencesAsync(const Model::BatchEvaluateGeofencesRequest& request, const BatchEvaluateGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the latest device positions for requested devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchGetDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDevicePositionOutcome BatchGetDevicePosition(const Model::BatchGetDevicePositionRequest& request) const;

        /**
         * A Callable wrapper for BatchGetDevicePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDevicePositionOutcomeCallable BatchGetDevicePositionCallable(const Model::BatchGetDevicePositionRequest& request) const;

        /**
         * An Async wrapper for BatchGetDevicePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDevicePositionAsync(const Model::BatchGetDevicePositionRequest& request, const BatchGetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A batch request for storing geofence geometries into a given geofence
         * collection, or updates the geometry of an existing geofence if a geofence ID is
         * included in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchPutGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutGeofenceOutcome BatchPutGeofence(const Model::BatchPutGeofenceRequest& request) const;

        /**
         * A Callable wrapper for BatchPutGeofence that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutGeofenceOutcomeCallable BatchPutGeofenceCallable(const Model::BatchPutGeofenceRequest& request) const;

        /**
         * An Async wrapper for BatchPutGeofence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutGeofenceAsync(const Model::BatchPutGeofenceRequest& request, const BatchPutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads position update data for one or more devices to a tracker resource.
         * Amazon Location uses the data when it reports the last known device position and
         * position history. Amazon Location retains location data for 30 days.</p> 
         * <p>Position updates are handled based on the <code>PositionFiltering</code>
         * property of the tracker. When <code>PositionFiltering</code> is set to
         * <code>TimeBased</code>, updates are evaluated against linked geofence
         * collections, and location data is stored at a maximum of one position per 30
         * second interval. If your update frequency is more often than every 30 seconds,
         * only one update per 30 seconds is stored for each unique device ID.</p> <p>When
         * <code>PositionFiltering</code> is set to <code>DistanceBased</code> filtering,
         * location data is stored and evaluated against linked geofence collections only
         * if the device has moved more than 30 m (98.4 ft).</p> <p>When
         * <code>PositionFiltering</code> is set to <code>AccuracyBased</code> filtering,
         * location data is stored and evaluated against linked geofence collections only
         * if the device has moved more than the measured accuracy. For example, if two
         * consecutive updates from a device have a horizontal accuracy of 5 m and 10 m,
         * the second update is neither stored or evaluated if the device has moved less
         * than 15 m. If <code>PositionFiltering</code> is set to
         * <code>AccuracyBased</code> filtering, Amazon Location uses the default value
         * <code>{ "Horizontal": 0}</code> when accuracy is not provided on a
         * <code>DevicePositionUpdate</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchUpdateDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateDevicePositionOutcome BatchUpdateDevicePosition(const Model::BatchUpdateDevicePositionRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateDevicePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateDevicePositionOutcomeCallable BatchUpdateDevicePositionCallable(const Model::BatchUpdateDevicePositionRequest& request) const;

        /**
         * An Async wrapper for BatchUpdateDevicePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateDevicePositionAsync(const Model::BatchUpdateDevicePositionRequest& request, const BatchUpdateDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html">Calculates
         * a route</a> given the following required parameters:
         * <code>DeparturePosition</code> and <code>DestinationPosition</code>. Requires
         * that you first <a
         * href="https://docs.aws.amazon.com/location-routes/latest/APIReference/API_CreateRouteCalculator.html">create
         * a route calculator resource</a>.</p> <p>By default, a request that doesn't
         * specify a departure time uses the best time of day to travel with the best
         * traffic conditions when calculating the route.</p> <p>Additional options
         * include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/departure-time.html">Specifying
         * a departure time</a> using either <code>DepartureTime</code> or
         * <code>DepartNow</code>. This calculates a route based on predictive traffic data
         * at the given time. </p>  <p>You can't specify both
         * <code>DepartureTime</code> and <code>DepartNow</code> in a single request.
         * Specifying both parameters returns a validation error.</p>  </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/travel-mode.html">Specifying
         * a travel mode</a> using TravelMode sets the transportation mode used to
         * calculate the routes. This also lets you specify additional route preferences in
         * <code>CarModeOptions</code> if traveling by <code>Car</code>, or
         * <code>TruckModeOptions</code> if traveling by <code>Truck</code>.</p> 
         * <p>If you specify <code>walking</code> for the travel mode and your data
         * provider is Esri, the start and destination must be within 40km.</p> 
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CalculateRouteOutcome CalculateRoute(const Model::CalculateRouteRequest& request) const;

        /**
         * A Callable wrapper for CalculateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CalculateRouteOutcomeCallable CalculateRouteCallable(const Model::CalculateRouteRequest& request) const;

        /**
         * An Async wrapper for CalculateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CalculateRouteAsync(const Model::CalculateRouteRequest& request, const CalculateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route-matrix.html">
         * Calculates a route matrix</a> given the following required parameters:
         * <code>DeparturePositions</code> and <code>DestinationPositions</code>.
         * <code>CalculateRouteMatrix</code> calculates routes and returns the travel time
         * and travel distance from each departure position to each destination position in
         * the request. For example, given departure positions A and B, and destination
         * positions X and Y, <code>CalculateRouteMatrix</code> will return time and
         * distance for routes from A to X, A to Y, B to X, and B to Y (in that order). The
         * number of results returned (and routes calculated) will be the number of
         * <code>DeparturePositions</code> times the number of
         * <code>DestinationPositions</code>.</p>  <p>Your account is charged for
         * each route calculated, not the number of requests.</p>  <p>Requires that
         * you first <a
         * href="https://docs.aws.amazon.com/location-routes/latest/APIReference/API_CreateRouteCalculator.html">create
         * a route calculator resource</a>.</p> <p>By default, a request that doesn't
         * specify a departure time uses the best time of day to travel with the best
         * traffic conditions when calculating routes.</p> <p>Additional options
         * include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/departure-time.html">
         * Specifying a departure time</a> using either <code>DepartureTime</code> or
         * <code>DepartNow</code>. This calculates routes based on predictive traffic data
         * at the given time. </p>  <p>You can't specify both
         * <code>DepartureTime</code> and <code>DepartNow</code> in a single request.
         * Specifying both parameters returns a validation error.</p>  </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/travel-mode.html">Specifying
         * a travel mode</a> using TravelMode sets the transportation mode used to
         * calculate the routes. This also lets you specify additional route preferences in
         * <code>CarModeOptions</code> if traveling by <code>Car</code>, or
         * <code>TruckModeOptions</code> if traveling by <code>Truck</code>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRouteMatrix">AWS
         * API Reference</a></p>
         */
        virtual Model::CalculateRouteMatrixOutcome CalculateRouteMatrix(const Model::CalculateRouteMatrixRequest& request) const;

        /**
         * A Callable wrapper for CalculateRouteMatrix that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CalculateRouteMatrixOutcomeCallable CalculateRouteMatrixCallable(const Model::CalculateRouteMatrixRequest& request) const;

        /**
         * An Async wrapper for CalculateRouteMatrix that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CalculateRouteMatrixAsync(const Model::CalculateRouteMatrixRequest& request, const CalculateRouteMatrixResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a geofence collection, which manages and stores
         * geofences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGeofenceCollectionOutcome CreateGeofenceCollection(const Model::CreateGeofenceCollectionRequest& request) const;

        /**
         * A Callable wrapper for CreateGeofenceCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGeofenceCollectionOutcomeCallable CreateGeofenceCollectionCallable(const Model::CreateGeofenceCollectionRequest& request) const;

        /**
         * An Async wrapper for CreateGeofenceCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGeofenceCollectionAsync(const Model::CreateGeofenceCollectionRequest& request, const CreateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a map resource in your AWS account, which provides map tiles of
         * different styles sourced from global location data providers.</p>  <p>If
         * your application is tracking or routing assets you use in your business, such as
         * delivery vehicles or employees, you may only use HERE as your geolocation
         * provider. See section 82 of the <a
         * href="http://aws.amazon.com/service-terms">AWS service terms</a> for more
         * details.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateMap">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMapOutcome CreateMap(const Model::CreateMapRequest& request) const;

        /**
         * A Callable wrapper for CreateMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMapOutcomeCallable CreateMapCallable(const Model::CreateMapRequest& request) const;

        /**
         * An Async wrapper for CreateMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMapAsync(const Model::CreateMapRequest& request, const CreateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a place index resource in your AWS account. Use a place index
         * resource to geocode addresses and other text queries by using the
         * <code>SearchPlaceIndexForText</code> operation, and reverse geocode coordinates
         * by using the <code>SearchPlaceIndexForPosition</code> operation, and enable
         * autosuggestions by using the <code>SearchPlaceIndexForSuggestions</code>
         * operation.</p>  <p>If your application is tracking or routing assets you
         * use in your business, such as delivery vehicles or employees, you may only use
         * HERE as your geolocation provider. See section 82 of the <a
         * href="http://aws.amazon.com/service-terms">AWS service terms</a> for more
         * details.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreatePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlaceIndexOutcome CreatePlaceIndex(const Model::CreatePlaceIndexRequest& request) const;

        /**
         * A Callable wrapper for CreatePlaceIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlaceIndexOutcomeCallable CreatePlaceIndexCallable(const Model::CreatePlaceIndexRequest& request) const;

        /**
         * An Async wrapper for CreatePlaceIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlaceIndexAsync(const Model::CreatePlaceIndexRequest& request, const CreatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route calculator resource in your AWS account.</p> <p>You can send
         * requests to a route calculator resource to estimate travel time, distance, and
         * get directions. A route calculator sources traffic and road network data from
         * your chosen data provider.</p>  <p>If your application is tracking or
         * routing assets you use in your business, such as delivery vehicles or employees,
         * you may only use HERE as your geolocation provider. See section 82 of the <a
         * href="http://aws.amazon.com/service-terms">AWS service terms</a> for more
         * details.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateRouteCalculator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteCalculatorOutcome CreateRouteCalculator(const Model::CreateRouteCalculatorRequest& request) const;

        /**
         * A Callable wrapper for CreateRouteCalculator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteCalculatorOutcomeCallable CreateRouteCalculatorCallable(const Model::CreateRouteCalculatorRequest& request) const;

        /**
         * An Async wrapper for CreateRouteCalculator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteCalculatorAsync(const Model::CreateRouteCalculatorRequest& request, const CreateRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a tracker resource in your AWS account, which lets you retrieve
         * current and historical location of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrackerOutcome CreateTracker(const Model::CreateTrackerRequest& request) const;

        /**
         * A Callable wrapper for CreateTracker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrackerOutcomeCallable CreateTrackerCallable(const Model::CreateTrackerRequest& request) const;

        /**
         * An Async wrapper for CreateTracker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrackerAsync(const Model::CreateTrackerRequest& request, const CreateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a geofence collection from your AWS account.</p>  <p>This
         * operation deletes the resource permanently. If the geofence collection is the
         * target of a tracker resource, the devices will no longer be monitored.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGeofenceCollectionOutcome DeleteGeofenceCollection(const Model::DeleteGeofenceCollectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteGeofenceCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGeofenceCollectionOutcomeCallable DeleteGeofenceCollectionCallable(const Model::DeleteGeofenceCollectionRequest& request) const;

        /**
         * An Async wrapper for DeleteGeofenceCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGeofenceCollectionAsync(const Model::DeleteGeofenceCollectionRequest& request, const DeleteGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a map resource from your AWS account.</p>  <p>This operation
         * deletes the resource permanently. If the map is being used in an application,
         * the map may not render.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteMap">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMapOutcome DeleteMap(const Model::DeleteMapRequest& request) const;

        /**
         * A Callable wrapper for DeleteMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMapOutcomeCallable DeleteMapCallable(const Model::DeleteMapRequest& request) const;

        /**
         * An Async wrapper for DeleteMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMapAsync(const Model::DeleteMapRequest& request, const DeleteMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a place index resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeletePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaceIndexOutcome DeletePlaceIndex(const Model::DeletePlaceIndexRequest& request) const;

        /**
         * A Callable wrapper for DeletePlaceIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlaceIndexOutcomeCallable DeletePlaceIndexCallable(const Model::DeletePlaceIndexRequest& request) const;

        /**
         * An Async wrapper for DeletePlaceIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlaceIndexAsync(const Model::DeletePlaceIndexRequest& request, const DeletePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a route calculator resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteRouteCalculator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteCalculatorOutcome DeleteRouteCalculator(const Model::DeleteRouteCalculatorRequest& request) const;

        /**
         * A Callable wrapper for DeleteRouteCalculator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteCalculatorOutcomeCallable DeleteRouteCalculatorCallable(const Model::DeleteRouteCalculatorRequest& request) const;

        /**
         * An Async wrapper for DeleteRouteCalculator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteCalculatorAsync(const Model::DeleteRouteCalculatorRequest& request, const DeleteRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a tracker resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently. If the tracker resource is in use,
         * you may encounter an error. Make sure that the target resource isn't a
         * dependency for your applications.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrackerOutcome DeleteTracker(const Model::DeleteTrackerRequest& request) const;

        /**
         * A Callable wrapper for DeleteTracker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrackerOutcomeCallable DeleteTrackerCallable(const Model::DeleteTrackerRequest& request) const;

        /**
         * An Async wrapper for DeleteTracker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrackerAsync(const Model::DeleteTrackerRequest& request, const DeleteTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the geofence collection details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGeofenceCollectionOutcome DescribeGeofenceCollection(const Model::DescribeGeofenceCollectionRequest& request) const;

        /**
         * A Callable wrapper for DescribeGeofenceCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGeofenceCollectionOutcomeCallable DescribeGeofenceCollectionCallable(const Model::DescribeGeofenceCollectionRequest& request) const;

        /**
         * An Async wrapper for DescribeGeofenceCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGeofenceCollectionAsync(const Model::DescribeGeofenceCollectionRequest& request, const DescribeGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the map resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeMap">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMapOutcome DescribeMap(const Model::DescribeMapRequest& request) const;

        /**
         * A Callable wrapper for DescribeMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMapOutcomeCallable DescribeMapCallable(const Model::DescribeMapRequest& request) const;

        /**
         * An Async wrapper for DescribeMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMapAsync(const Model::DescribeMapRequest& request, const DescribeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the place index resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlaceIndexOutcome DescribePlaceIndex(const Model::DescribePlaceIndexRequest& request) const;

        /**
         * A Callable wrapper for DescribePlaceIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlaceIndexOutcomeCallable DescribePlaceIndexCallable(const Model::DescribePlaceIndexRequest& request) const;

        /**
         * An Async wrapper for DescribePlaceIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlaceIndexAsync(const Model::DescribePlaceIndexRequest& request, const DescribePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the route calculator resource details.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeRouteCalculator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteCalculatorOutcome DescribeRouteCalculator(const Model::DescribeRouteCalculatorRequest& request) const;

        /**
         * A Callable wrapper for DescribeRouteCalculator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRouteCalculatorOutcomeCallable DescribeRouteCalculatorCallable(const Model::DescribeRouteCalculatorRequest& request) const;

        /**
         * An Async wrapper for DescribeRouteCalculator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRouteCalculatorAsync(const Model::DescribeRouteCalculatorRequest& request, const DescribeRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the tracker resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrackerOutcome DescribeTracker(const Model::DescribeTrackerRequest& request) const;

        /**
         * A Callable wrapper for DescribeTracker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrackerOutcomeCallable DescribeTrackerCallable(const Model::DescribeTrackerRequest& request) const;

        /**
         * An Async wrapper for DescribeTracker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrackerAsync(const Model::DescribeTrackerRequest& request, const DescribeTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between a tracker resource and a geofence
         * collection.</p>  <p>Once you unlink a tracker resource from a geofence
         * collection, the tracker positions will no longer be automatically evaluated
         * against geofences.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DisassociateTrackerConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrackerConsumerOutcome DisassociateTrackerConsumer(const Model::DisassociateTrackerConsumerRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTrackerConsumer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTrackerConsumerOutcomeCallable DisassociateTrackerConsumerCallable(const Model::DisassociateTrackerConsumerRequest& request) const;

        /**
         * An Async wrapper for DisassociateTrackerConsumer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTrackerConsumerAsync(const Model::DisassociateTrackerConsumerRequest& request, const DisassociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a device's most recent position according to its sample time.</p>
         *  <p>Device positions are deleted after 30 days.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePositionOutcome GetDevicePosition(const Model::GetDevicePositionRequest& request) const;

        /**
         * A Callable wrapper for GetDevicePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePositionOutcomeCallable GetDevicePositionCallable(const Model::GetDevicePositionRequest& request) const;

        /**
         * An Async wrapper for GetDevicePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePositionAsync(const Model::GetDevicePositionRequest& request, const GetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the device position history from a tracker resource within a
         * specified range of time.</p>  <p>Device positions are deleted after 30
         * days.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePositionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePositionHistoryOutcome GetDevicePositionHistory(const Model::GetDevicePositionHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetDevicePositionHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePositionHistoryOutcomeCallable GetDevicePositionHistoryCallable(const Model::GetDevicePositionHistoryRequest& request) const;

        /**
         * An Async wrapper for GetDevicePositionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePositionHistoryAsync(const Model::GetDevicePositionHistoryRequest& request, const GetDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the geofence details from a geofence collection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeofenceOutcome GetGeofence(const Model::GetGeofenceRequest& request) const;

        /**
         * A Callable wrapper for GetGeofence that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGeofenceOutcomeCallable GetGeofenceCallable(const Model::GetGeofenceRequest& request) const;

        /**
         * An Async wrapper for GetGeofence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGeofenceAsync(const Model::GetGeofenceRequest& request, const GetGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves glyphs used to display labels on a map.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapGlyphs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMapGlyphsOutcome GetMapGlyphs(const Model::GetMapGlyphsRequest& request) const;

        /**
         * A Callable wrapper for GetMapGlyphs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMapGlyphsOutcomeCallable GetMapGlyphsCallable(const Model::GetMapGlyphsRequest& request) const;

        /**
         * An Async wrapper for GetMapGlyphs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMapGlyphsAsync(const Model::GetMapGlyphsRequest& request, const GetMapGlyphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the sprite sheet corresponding to a map resource. The sprite sheet
         * is a PNG image paired with a JSON document describing the offsets of individual
         * icons that will be displayed on a rendered map.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapSprites">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMapSpritesOutcome GetMapSprites(const Model::GetMapSpritesRequest& request) const;

        /**
         * A Callable wrapper for GetMapSprites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMapSpritesOutcomeCallable GetMapSpritesCallable(const Model::GetMapSpritesRequest& request) const;

        /**
         * An Async wrapper for GetMapSprites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMapSpritesAsync(const Model::GetMapSpritesRequest& request, const GetMapSpritesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the map style descriptor from a map resource. </p> <p>The style
         * descriptor contains speciﬁcations on how features render on a map. For example,
         * what data to display, what order to display the data in, and the style for the
         * data. Style descriptors follow the Mapbox Style Specification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapStyleDescriptor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMapStyleDescriptorOutcome GetMapStyleDescriptor(const Model::GetMapStyleDescriptorRequest& request) const;

        /**
         * A Callable wrapper for GetMapStyleDescriptor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMapStyleDescriptorOutcomeCallable GetMapStyleDescriptorCallable(const Model::GetMapStyleDescriptorRequest& request) const;

        /**
         * An Async wrapper for GetMapStyleDescriptor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMapStyleDescriptorAsync(const Model::GetMapStyleDescriptorRequest& request, const GetMapStyleDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a vector data tile from the map resource. Map tiles are used by
         * clients to render a map. they're addressed using a grid arrangement with an X
         * coordinate, Y coordinate, and Z (zoom) level. </p> <p>The origin (0, 0) is the
         * top left of the map. Increasing the zoom level by 1 doubles both the X and Y
         * dimensions, so a tile containing data for the entire world at (0/0/0) will be
         * split into 4 tiles at zoom 1 (1/0/0, 1/0/1, 1/1/0, 1/1/1).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapTile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMapTileOutcome GetMapTile(const Model::GetMapTileRequest& request) const;

        /**
         * A Callable wrapper for GetMapTile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMapTileOutcomeCallable GetMapTileCallable(const Model::GetMapTileRequest& request) const;

        /**
         * An Async wrapper for GetMapTile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMapTileAsync(const Model::GetMapTileRequest& request, const GetMapTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finds a place by its unique ID. A <code>PlaceId</code> is returned by other
         * search operations.</p>  <p>A PlaceId is valid only if all of the following
         * are the same in the original search request and the call to
         * <code>GetPlace</code>.</p> <ul> <li> <p>Customer AWS account</p> </li> <li>
         * <p>AWS Region</p> </li> <li> <p>Data provider specified in the place index
         * resource</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetPlace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlaceOutcome GetPlace(const Model::GetPlaceRequest& request) const;

        /**
         * A Callable wrapper for GetPlace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlaceOutcomeCallable GetPlaceCallable(const Model::GetPlaceRequest& request) const;

        /**
         * An Async wrapper for GetPlace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlaceAsync(const Model::GetPlaceRequest& request, const GetPlaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A batch request to retrieve all device positions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListDevicePositions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicePositionsOutcome ListDevicePositions(const Model::ListDevicePositionsRequest& request) const;

        /**
         * A Callable wrapper for ListDevicePositions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicePositionsOutcomeCallable ListDevicePositionsCallable(const Model::ListDevicePositionsRequest& request) const;

        /**
         * An Async wrapper for ListDevicePositions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicePositionsAsync(const Model::ListDevicePositionsRequest& request, const ListDevicePositionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists geofence collections in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofenceCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeofenceCollectionsOutcome ListGeofenceCollections(const Model::ListGeofenceCollectionsRequest& request) const;

        /**
         * A Callable wrapper for ListGeofenceCollections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeofenceCollectionsOutcomeCallable ListGeofenceCollectionsCallable(const Model::ListGeofenceCollectionsRequest& request) const;

        /**
         * An Async wrapper for ListGeofenceCollections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGeofenceCollectionsAsync(const Model::ListGeofenceCollectionsRequest& request, const ListGeofenceCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists geofences stored in a given geofence collection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeofencesOutcome ListGeofences(const Model::ListGeofencesRequest& request) const;

        /**
         * A Callable wrapper for ListGeofences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeofencesOutcomeCallable ListGeofencesCallable(const Model::ListGeofencesRequest& request) const;

        /**
         * An Async wrapper for ListGeofences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGeofencesAsync(const Model::ListGeofencesRequest& request, const ListGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists map resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListMaps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMapsOutcome ListMaps(const Model::ListMapsRequest& request) const;

        /**
         * A Callable wrapper for ListMaps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMapsOutcomeCallable ListMapsCallable(const Model::ListMapsRequest& request) const;

        /**
         * An Async wrapper for ListMaps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMapsAsync(const Model::ListMapsRequest& request, const ListMapsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists place index resources in your AWS account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListPlaceIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaceIndexesOutcome ListPlaceIndexes(const Model::ListPlaceIndexesRequest& request) const;

        /**
         * A Callable wrapper for ListPlaceIndexes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlaceIndexesOutcomeCallable ListPlaceIndexesCallable(const Model::ListPlaceIndexesRequest& request) const;

        /**
         * An Async wrapper for ListPlaceIndexes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlaceIndexesAsync(const Model::ListPlaceIndexesRequest& request, const ListPlaceIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists route calculator resources in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListRouteCalculators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRouteCalculatorsOutcome ListRouteCalculators(const Model::ListRouteCalculatorsRequest& request) const;

        /**
         * A Callable wrapper for ListRouteCalculators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRouteCalculatorsOutcomeCallable ListRouteCalculatorsCallable(const Model::ListRouteCalculatorsRequest& request) const;

        /**
         * An Async wrapper for ListRouteCalculators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRouteCalculatorsAsync(const Model::ListRouteCalculatorsRequest& request, const ListRouteCalculatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags that are applied to the specified Amazon Location
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists geofence collections currently associated to the given tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackerConsumers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrackerConsumersOutcome ListTrackerConsumers(const Model::ListTrackerConsumersRequest& request) const;

        /**
         * A Callable wrapper for ListTrackerConsumers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrackerConsumersOutcomeCallable ListTrackerConsumersCallable(const Model::ListTrackerConsumersRequest& request) const;

        /**
         * An Async wrapper for ListTrackerConsumers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrackerConsumersAsync(const Model::ListTrackerConsumersRequest& request, const ListTrackerConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tracker resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrackersOutcome ListTrackers(const Model::ListTrackersRequest& request) const;

        /**
         * A Callable wrapper for ListTrackers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrackersOutcomeCallable ListTrackersCallable(const Model::ListTrackersRequest& request) const;

        /**
         * An Async wrapper for ListTrackers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrackersAsync(const Model::ListTrackersRequest& request, const ListTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stores a geofence geometry in a given geofence collection, or updates the
         * geometry of an existing geofence if a geofence ID is included in the request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/PutGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGeofenceOutcome PutGeofence(const Model::PutGeofenceRequest& request) const;

        /**
         * A Callable wrapper for PutGeofence that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutGeofenceOutcomeCallable PutGeofenceCallable(const Model::PutGeofenceRequest& request) const;

        /**
         * An Async wrapper for PutGeofence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutGeofenceAsync(const Model::PutGeofenceRequest& request, const PutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reverse geocodes a given coordinate and returns a legible address. Allows you
         * to search for Places or points of interest near a given position.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPosition">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPlaceIndexForPositionOutcome SearchPlaceIndexForPosition(const Model::SearchPlaceIndexForPositionRequest& request) const;

        /**
         * A Callable wrapper for SearchPlaceIndexForPosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchPlaceIndexForPositionOutcomeCallable SearchPlaceIndexForPositionCallable(const Model::SearchPlaceIndexForPositionRequest& request) const;

        /**
         * An Async wrapper for SearchPlaceIndexForPosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchPlaceIndexForPositionAsync(const Model::SearchPlaceIndexForPositionRequest& request, const SearchPlaceIndexForPositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates suggestions for addresses and points of interest based on partial
         * or misspelled free-form text. This operation is also known as autocomplete,
         * autosuggest, or fuzzy matching.</p> <p>Optional parameters let you narrow your
         * search results by bounding box or country, or bias your search toward a specific
         * position on the globe.</p>  <p>You can search for suggested place names
         * near a specified position by using <code>BiasPosition</code>, or filter results
         * within a bounding box by using <code>FilterBBox</code>. These parameters are
         * mutually exclusive; using both <code>BiasPosition</code> and
         * <code>FilterBBox</code> in the same command returns an error.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForSuggestions">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPlaceIndexForSuggestionsOutcome SearchPlaceIndexForSuggestions(const Model::SearchPlaceIndexForSuggestionsRequest& request) const;

        /**
         * A Callable wrapper for SearchPlaceIndexForSuggestions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchPlaceIndexForSuggestionsOutcomeCallable SearchPlaceIndexForSuggestionsCallable(const Model::SearchPlaceIndexForSuggestionsRequest& request) const;

        /**
         * An Async wrapper for SearchPlaceIndexForSuggestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchPlaceIndexForSuggestionsAsync(const Model::SearchPlaceIndexForSuggestionsRequest& request, const SearchPlaceIndexForSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Geocodes free-form text, such as an address, name, city, or region to allow
         * you to search for Places or points of interest. </p> <p>Optional parameters let
         * you narrow your search results by bounding box or country, or bias your search
         * toward a specific position on the globe.</p>  <p>You can search for places
         * near a given position using <code>BiasPosition</code>, or filter results within
         * a bounding box using <code>FilterBBox</code>. Providing both parameters
         * simultaneously returns an error.</p>  <p>Search results are returned in
         * order of highest to lowest relevance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForText">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPlaceIndexForTextOutcome SearchPlaceIndexForText(const Model::SearchPlaceIndexForTextRequest& request) const;

        /**
         * A Callable wrapper for SearchPlaceIndexForText that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchPlaceIndexForTextOutcomeCallable SearchPlaceIndexForTextCallable(const Model::SearchPlaceIndexForTextRequest& request) const;

        /**
         * An Async wrapper for SearchPlaceIndexForText that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchPlaceIndexForTextAsync(const Model::SearchPlaceIndexForTextRequest& request, const SearchPlaceIndexForTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified Amazon Location
         * Service resource.</p> <pre><code> &lt;p&gt;Tags can help you organize and
         * categorize your resources. You can also use them to scope user permissions, by
         * granting a user permission to access or change only resources with certain tag
         * values.&lt;/p&gt; &lt;p&gt;You can use the &lt;code&gt;TagResource&lt;/code&gt;
         * operation with an Amazon Location Service resource that already has tags. If you
         * specify a new tag key for the resource, this tag is appended to the tags already
         * associated with the resource. If you specify a tag key that's already associated
         * with the resource, the new tag value that you specify replaces the previous
         * value for that tag. &lt;/p&gt; &lt;p&gt;You can associate up to 50 tags with a
         * resource.&lt;/p&gt; </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified Amazon Location
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified properties of a given geofence
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGeofenceCollectionOutcome UpdateGeofenceCollection(const Model::UpdateGeofenceCollectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateGeofenceCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGeofenceCollectionOutcomeCallable UpdateGeofenceCollectionCallable(const Model::UpdateGeofenceCollectionRequest& request) const;

        /**
         * An Async wrapper for UpdateGeofenceCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGeofenceCollectionAsync(const Model::UpdateGeofenceCollectionRequest& request, const UpdateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified properties of a given map resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateMap">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMapOutcome UpdateMap(const Model::UpdateMapRequest& request) const;

        /**
         * A Callable wrapper for UpdateMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMapOutcomeCallable UpdateMapCallable(const Model::UpdateMapRequest& request) const;

        /**
         * An Async wrapper for UpdateMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMapAsync(const Model::UpdateMapRequest& request, const UpdateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified properties of a given place index
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdatePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePlaceIndexOutcome UpdatePlaceIndex(const Model::UpdatePlaceIndexRequest& request) const;

        /**
         * A Callable wrapper for UpdatePlaceIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePlaceIndexOutcomeCallable UpdatePlaceIndexCallable(const Model::UpdatePlaceIndexRequest& request) const;

        /**
         * An Async wrapper for UpdatePlaceIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePlaceIndexAsync(const Model::UpdatePlaceIndexRequest& request, const UpdatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified properties for a given route calculator
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateRouteCalculator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteCalculatorOutcome UpdateRouteCalculator(const Model::UpdateRouteCalculatorRequest& request) const;

        /**
         * A Callable wrapper for UpdateRouteCalculator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRouteCalculatorOutcomeCallable UpdateRouteCalculatorCallable(const Model::UpdateRouteCalculatorRequest& request) const;

        /**
         * An Async wrapper for UpdateRouteCalculator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRouteCalculatorAsync(const Model::UpdateRouteCalculatorRequest& request, const UpdateRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified properties of a given tracker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrackerOutcome UpdateTracker(const Model::UpdateTrackerRequest& request) const;

        /**
         * A Callable wrapper for UpdateTracker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrackerOutcomeCallable UpdateTrackerCallable(const Model::UpdateTrackerRequest& request) const;

        /**
         * An Async wrapper for UpdateTracker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrackerAsync(const Model::UpdateTrackerRequest& request, const UpdateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LocationServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LocationServiceClient>;
      void init(const LocationServiceClientConfiguration& clientConfiguration);

      LocationServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LocationServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace LocationService
} // namespace Aws
