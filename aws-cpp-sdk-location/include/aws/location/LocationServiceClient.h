/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/LocationServiceServiceClientModel.h>
#include <aws/location/LocationServiceLegacyAsyncMacros.h>

namespace Aws
{
namespace LocationService
{
  /**
   * <p>"Suite of geospatial services including Maps, Places, Routes, Tracking, and
   * Geofencing"</p>
   */
  class AWS_LOCATIONSERVICE_API LocationServiceClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Deletes the position history of one or more devices from a tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteDevicePositionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDevicePositionHistoryOutcome BatchDeleteDevicePositionHistory(const Model::BatchDeleteDevicePositionHistoryRequest& request) const;


        /**
         * <p>Deletes a batch of geofences from a geofence collection.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteGeofenceOutcome BatchDeleteGeofence(const Model::BatchDeleteGeofenceRequest& request) const;


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
         * <p>Lists the latest device positions for requested devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchGetDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDevicePositionOutcome BatchGetDevicePosition(const Model::BatchGetDevicePositionRequest& request) const;


        /**
         * <p>A batch request for storing geofence geometries into a given geofence
         * collection, or updates the geometry of an existing geofence if a geofence ID is
         * included in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchPutGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutGeofenceOutcome BatchPutGeofence(const Model::BatchPutGeofenceRequest& request) const;


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
         * <p>Creates a geofence collection, which manages and stores
         * geofences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGeofenceCollectionOutcome CreateGeofenceCollection(const Model::CreateGeofenceCollectionRequest& request) const;


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
         * <p>Creates a tracker resource in your AWS account, which lets you retrieve
         * current and historical location of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrackerOutcome CreateTracker(const Model::CreateTrackerRequest& request) const;


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
         * <p>Deletes a map resource from your AWS account.</p>  <p>This operation
         * deletes the resource permanently. If the map is being used in an application,
         * the map may not render.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteMap">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMapOutcome DeleteMap(const Model::DeleteMapRequest& request) const;


        /**
         * <p>Deletes a place index resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeletePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaceIndexOutcome DeletePlaceIndex(const Model::DeletePlaceIndexRequest& request) const;


        /**
         * <p>Deletes a route calculator resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteRouteCalculator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteCalculatorOutcome DeleteRouteCalculator(const Model::DeleteRouteCalculatorRequest& request) const;


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
         * <p>Retrieves the geofence collection details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGeofenceCollectionOutcome DescribeGeofenceCollection(const Model::DescribeGeofenceCollectionRequest& request) const;


        /**
         * <p>Retrieves the map resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeMap">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMapOutcome DescribeMap(const Model::DescribeMapRequest& request) const;


        /**
         * <p>Retrieves the place index resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlaceIndexOutcome DescribePlaceIndex(const Model::DescribePlaceIndexRequest& request) const;


        /**
         * <p>Retrieves the route calculator resource details.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeRouteCalculator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteCalculatorOutcome DescribeRouteCalculator(const Model::DescribeRouteCalculatorRequest& request) const;


        /**
         * <p>Retrieves the tracker resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrackerOutcome DescribeTracker(const Model::DescribeTrackerRequest& request) const;


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
         * <p>Retrieves a device's most recent position according to its sample time.</p>
         *  <p>Device positions are deleted after 30 days.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePositionOutcome GetDevicePosition(const Model::GetDevicePositionRequest& request) const;


        /**
         * <p>Retrieves the device position history from a tracker resource within a
         * specified range of time.</p>  <p>Device positions are deleted after 30
         * days.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePositionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePositionHistoryOutcome GetDevicePositionHistory(const Model::GetDevicePositionHistoryRequest& request) const;


        /**
         * <p>Retrieves the geofence details from a geofence collection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeofenceOutcome GetGeofence(const Model::GetGeofenceRequest& request) const;


        /**
         * <p>Retrieves glyphs used to display labels on a map.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapGlyphs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMapGlyphsOutcome GetMapGlyphs(const Model::GetMapGlyphsRequest& request) const;


        /**
         * <p>Retrieves the sprite sheet corresponding to a map resource. The sprite sheet
         * is a PNG image paired with a JSON document describing the offsets of individual
         * icons that will be displayed on a rendered map.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapSprites">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMapSpritesOutcome GetMapSprites(const Model::GetMapSpritesRequest& request) const;


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
         * <p>A batch request to retrieve all device positions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListDevicePositions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicePositionsOutcome ListDevicePositions(const Model::ListDevicePositionsRequest& request) const;


        /**
         * <p>Lists geofence collections in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofenceCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeofenceCollectionsOutcome ListGeofenceCollections(const Model::ListGeofenceCollectionsRequest& request) const;


        /**
         * <p>Lists geofences stored in a given geofence collection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeofencesOutcome ListGeofences(const Model::ListGeofencesRequest& request) const;


        /**
         * <p>Lists map resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListMaps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMapsOutcome ListMaps(const Model::ListMapsRequest& request) const;


        /**
         * <p>Lists place index resources in your AWS account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListPlaceIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaceIndexesOutcome ListPlaceIndexes(const Model::ListPlaceIndexesRequest& request) const;


        /**
         * <p>Lists route calculator resources in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListRouteCalculators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRouteCalculatorsOutcome ListRouteCalculators(const Model::ListRouteCalculatorsRequest& request) const;


        /**
         * <p>Returns a list of tags that are applied to the specified Amazon Location
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists geofence collections currently associated to the given tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackerConsumers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrackerConsumersOutcome ListTrackerConsumers(const Model::ListTrackerConsumersRequest& request) const;


        /**
         * <p>Lists tracker resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrackersOutcome ListTrackers(const Model::ListTrackersRequest& request) const;


        /**
         * <p>Stores a geofence geometry in a given geofence collection, or updates the
         * geometry of an existing geofence if a geofence ID is included in the request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/PutGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGeofenceOutcome PutGeofence(const Model::PutGeofenceRequest& request) const;


        /**
         * <p>Reverse geocodes a given coordinate and returns a legible address. Allows you
         * to search for Places or points of interest near a given position.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPosition">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPlaceIndexForPositionOutcome SearchPlaceIndexForPosition(const Model::SearchPlaceIndexForPositionRequest& request) const;


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
         * <p>Removes one or more tags from the specified Amazon Location
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the specified properties of a given geofence
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGeofenceCollectionOutcome UpdateGeofenceCollection(const Model::UpdateGeofenceCollectionRequest& request) const;


        /**
         * <p>Updates the specified properties of a given map resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateMap">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMapOutcome UpdateMap(const Model::UpdateMapRequest& request) const;


        /**
         * <p>Updates the specified properties of a given place index
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdatePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePlaceIndexOutcome UpdatePlaceIndex(const Model::UpdatePlaceIndexRequest& request) const;


        /**
         * <p>Updates the specified properties for a given route calculator
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateRouteCalculator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteCalculatorOutcome UpdateRouteCalculator(const Model::UpdateRouteCalculatorRequest& request) const;


        /**
         * <p>Updates the specified properties of a given tracker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrackerOutcome UpdateTracker(const Model::UpdateTrackerRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LocationServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LocationServiceClientConfiguration& clientConfiguration);

      LocationServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LocationServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace LocationService
} // namespace Aws
