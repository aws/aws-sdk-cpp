/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/AssociateTrackerConsumerResult.h>
#include <aws/location/model/BatchDeleteGeofenceResult.h>
#include <aws/location/model/BatchEvaluateGeofencesResult.h>
#include <aws/location/model/BatchGetDevicePositionResult.h>
#include <aws/location/model/BatchPutGeofenceResult.h>
#include <aws/location/model/BatchUpdateDevicePositionResult.h>
#include <aws/location/model/CreateGeofenceCollectionResult.h>
#include <aws/location/model/CreateMapResult.h>
#include <aws/location/model/CreatePlaceIndexResult.h>
#include <aws/location/model/CreateTrackerResult.h>
#include <aws/location/model/DeleteGeofenceCollectionResult.h>
#include <aws/location/model/DeleteMapResult.h>
#include <aws/location/model/DeletePlaceIndexResult.h>
#include <aws/location/model/DeleteTrackerResult.h>
#include <aws/location/model/DescribeGeofenceCollectionResult.h>
#include <aws/location/model/DescribeMapResult.h>
#include <aws/location/model/DescribePlaceIndexResult.h>
#include <aws/location/model/DescribeTrackerResult.h>
#include <aws/location/model/DisassociateTrackerConsumerResult.h>
#include <aws/location/model/GetDevicePositionResult.h>
#include <aws/location/model/GetDevicePositionHistoryResult.h>
#include <aws/location/model/GetGeofenceResult.h>
#include <aws/location/model/GetMapGlyphsResult.h>
#include <aws/location/model/GetMapSpritesResult.h>
#include <aws/location/model/GetMapStyleDescriptorResult.h>
#include <aws/location/model/GetMapTileResult.h>
#include <aws/location/model/ListGeofenceCollectionsResult.h>
#include <aws/location/model/ListGeofencesResult.h>
#include <aws/location/model/ListMapsResult.h>
#include <aws/location/model/ListPlaceIndexesResult.h>
#include <aws/location/model/ListTrackerConsumersResult.h>
#include <aws/location/model/ListTrackersResult.h>
#include <aws/location/model/PutGeofenceResult.h>
#include <aws/location/model/SearchPlaceIndexForPositionResult.h>
#include <aws/location/model/SearchPlaceIndexForTextResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace LocationService
{

namespace Model
{
        class AssociateTrackerConsumerRequest;
        class BatchDeleteGeofenceRequest;
        class BatchEvaluateGeofencesRequest;
        class BatchGetDevicePositionRequest;
        class BatchPutGeofenceRequest;
        class BatchUpdateDevicePositionRequest;
        class CreateGeofenceCollectionRequest;
        class CreateMapRequest;
        class CreatePlaceIndexRequest;
        class CreateTrackerRequest;
        class DeleteGeofenceCollectionRequest;
        class DeleteMapRequest;
        class DeletePlaceIndexRequest;
        class DeleteTrackerRequest;
        class DescribeGeofenceCollectionRequest;
        class DescribeMapRequest;
        class DescribePlaceIndexRequest;
        class DescribeTrackerRequest;
        class DisassociateTrackerConsumerRequest;
        class GetDevicePositionRequest;
        class GetDevicePositionHistoryRequest;
        class GetGeofenceRequest;
        class GetMapGlyphsRequest;
        class GetMapSpritesRequest;
        class GetMapStyleDescriptorRequest;
        class GetMapTileRequest;
        class ListGeofenceCollectionsRequest;
        class ListGeofencesRequest;
        class ListMapsRequest;
        class ListPlaceIndexesRequest;
        class ListTrackerConsumersRequest;
        class ListTrackersRequest;
        class PutGeofenceRequest;
        class SearchPlaceIndexForPositionRequest;
        class SearchPlaceIndexForTextRequest;

        typedef Aws::Utils::Outcome<AssociateTrackerConsumerResult, LocationServiceError> AssociateTrackerConsumerOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteGeofenceResult, LocationServiceError> BatchDeleteGeofenceOutcome;
        typedef Aws::Utils::Outcome<BatchEvaluateGeofencesResult, LocationServiceError> BatchEvaluateGeofencesOutcome;
        typedef Aws::Utils::Outcome<BatchGetDevicePositionResult, LocationServiceError> BatchGetDevicePositionOutcome;
        typedef Aws::Utils::Outcome<BatchPutGeofenceResult, LocationServiceError> BatchPutGeofenceOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateDevicePositionResult, LocationServiceError> BatchUpdateDevicePositionOutcome;
        typedef Aws::Utils::Outcome<CreateGeofenceCollectionResult, LocationServiceError> CreateGeofenceCollectionOutcome;
        typedef Aws::Utils::Outcome<CreateMapResult, LocationServiceError> CreateMapOutcome;
        typedef Aws::Utils::Outcome<CreatePlaceIndexResult, LocationServiceError> CreatePlaceIndexOutcome;
        typedef Aws::Utils::Outcome<CreateTrackerResult, LocationServiceError> CreateTrackerOutcome;
        typedef Aws::Utils::Outcome<DeleteGeofenceCollectionResult, LocationServiceError> DeleteGeofenceCollectionOutcome;
        typedef Aws::Utils::Outcome<DeleteMapResult, LocationServiceError> DeleteMapOutcome;
        typedef Aws::Utils::Outcome<DeletePlaceIndexResult, LocationServiceError> DeletePlaceIndexOutcome;
        typedef Aws::Utils::Outcome<DeleteTrackerResult, LocationServiceError> DeleteTrackerOutcome;
        typedef Aws::Utils::Outcome<DescribeGeofenceCollectionResult, LocationServiceError> DescribeGeofenceCollectionOutcome;
        typedef Aws::Utils::Outcome<DescribeMapResult, LocationServiceError> DescribeMapOutcome;
        typedef Aws::Utils::Outcome<DescribePlaceIndexResult, LocationServiceError> DescribePlaceIndexOutcome;
        typedef Aws::Utils::Outcome<DescribeTrackerResult, LocationServiceError> DescribeTrackerOutcome;
        typedef Aws::Utils::Outcome<DisassociateTrackerConsumerResult, LocationServiceError> DisassociateTrackerConsumerOutcome;
        typedef Aws::Utils::Outcome<GetDevicePositionResult, LocationServiceError> GetDevicePositionOutcome;
        typedef Aws::Utils::Outcome<GetDevicePositionHistoryResult, LocationServiceError> GetDevicePositionHistoryOutcome;
        typedef Aws::Utils::Outcome<GetGeofenceResult, LocationServiceError> GetGeofenceOutcome;
        typedef Aws::Utils::Outcome<GetMapGlyphsResult, LocationServiceError> GetMapGlyphsOutcome;
        typedef Aws::Utils::Outcome<GetMapSpritesResult, LocationServiceError> GetMapSpritesOutcome;
        typedef Aws::Utils::Outcome<GetMapStyleDescriptorResult, LocationServiceError> GetMapStyleDescriptorOutcome;
        typedef Aws::Utils::Outcome<GetMapTileResult, LocationServiceError> GetMapTileOutcome;
        typedef Aws::Utils::Outcome<ListGeofenceCollectionsResult, LocationServiceError> ListGeofenceCollectionsOutcome;
        typedef Aws::Utils::Outcome<ListGeofencesResult, LocationServiceError> ListGeofencesOutcome;
        typedef Aws::Utils::Outcome<ListMapsResult, LocationServiceError> ListMapsOutcome;
        typedef Aws::Utils::Outcome<ListPlaceIndexesResult, LocationServiceError> ListPlaceIndexesOutcome;
        typedef Aws::Utils::Outcome<ListTrackerConsumersResult, LocationServiceError> ListTrackerConsumersOutcome;
        typedef Aws::Utils::Outcome<ListTrackersResult, LocationServiceError> ListTrackersOutcome;
        typedef Aws::Utils::Outcome<PutGeofenceResult, LocationServiceError> PutGeofenceOutcome;
        typedef Aws::Utils::Outcome<SearchPlaceIndexForPositionResult, LocationServiceError> SearchPlaceIndexForPositionOutcome;
        typedef Aws::Utils::Outcome<SearchPlaceIndexForTextResult, LocationServiceError> SearchPlaceIndexForTextOutcome;

        typedef std::future<AssociateTrackerConsumerOutcome> AssociateTrackerConsumerOutcomeCallable;
        typedef std::future<BatchDeleteGeofenceOutcome> BatchDeleteGeofenceOutcomeCallable;
        typedef std::future<BatchEvaluateGeofencesOutcome> BatchEvaluateGeofencesOutcomeCallable;
        typedef std::future<BatchGetDevicePositionOutcome> BatchGetDevicePositionOutcomeCallable;
        typedef std::future<BatchPutGeofenceOutcome> BatchPutGeofenceOutcomeCallable;
        typedef std::future<BatchUpdateDevicePositionOutcome> BatchUpdateDevicePositionOutcomeCallable;
        typedef std::future<CreateGeofenceCollectionOutcome> CreateGeofenceCollectionOutcomeCallable;
        typedef std::future<CreateMapOutcome> CreateMapOutcomeCallable;
        typedef std::future<CreatePlaceIndexOutcome> CreatePlaceIndexOutcomeCallable;
        typedef std::future<CreateTrackerOutcome> CreateTrackerOutcomeCallable;
        typedef std::future<DeleteGeofenceCollectionOutcome> DeleteGeofenceCollectionOutcomeCallable;
        typedef std::future<DeleteMapOutcome> DeleteMapOutcomeCallable;
        typedef std::future<DeletePlaceIndexOutcome> DeletePlaceIndexOutcomeCallable;
        typedef std::future<DeleteTrackerOutcome> DeleteTrackerOutcomeCallable;
        typedef std::future<DescribeGeofenceCollectionOutcome> DescribeGeofenceCollectionOutcomeCallable;
        typedef std::future<DescribeMapOutcome> DescribeMapOutcomeCallable;
        typedef std::future<DescribePlaceIndexOutcome> DescribePlaceIndexOutcomeCallable;
        typedef std::future<DescribeTrackerOutcome> DescribeTrackerOutcomeCallable;
        typedef std::future<DisassociateTrackerConsumerOutcome> DisassociateTrackerConsumerOutcomeCallable;
        typedef std::future<GetDevicePositionOutcome> GetDevicePositionOutcomeCallable;
        typedef std::future<GetDevicePositionHistoryOutcome> GetDevicePositionHistoryOutcomeCallable;
        typedef std::future<GetGeofenceOutcome> GetGeofenceOutcomeCallable;
        typedef std::future<GetMapGlyphsOutcome> GetMapGlyphsOutcomeCallable;
        typedef std::future<GetMapSpritesOutcome> GetMapSpritesOutcomeCallable;
        typedef std::future<GetMapStyleDescriptorOutcome> GetMapStyleDescriptorOutcomeCallable;
        typedef std::future<GetMapTileOutcome> GetMapTileOutcomeCallable;
        typedef std::future<ListGeofenceCollectionsOutcome> ListGeofenceCollectionsOutcomeCallable;
        typedef std::future<ListGeofencesOutcome> ListGeofencesOutcomeCallable;
        typedef std::future<ListMapsOutcome> ListMapsOutcomeCallable;
        typedef std::future<ListPlaceIndexesOutcome> ListPlaceIndexesOutcomeCallable;
        typedef std::future<ListTrackerConsumersOutcome> ListTrackerConsumersOutcomeCallable;
        typedef std::future<ListTrackersOutcome> ListTrackersOutcomeCallable;
        typedef std::future<PutGeofenceOutcome> PutGeofenceOutcomeCallable;
        typedef std::future<SearchPlaceIndexForPositionOutcome> SearchPlaceIndexForPositionOutcomeCallable;
        typedef std::future<SearchPlaceIndexForTextOutcome> SearchPlaceIndexForTextOutcomeCallable;
} // namespace Model

  class LocationServiceClient;

    typedef std::function<void(const LocationServiceClient*, const Model::AssociateTrackerConsumerRequest&, const Model::AssociateTrackerConsumerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrackerConsumerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchDeleteGeofenceRequest&, const Model::BatchDeleteGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchEvaluateGeofencesRequest&, const Model::BatchEvaluateGeofencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEvaluateGeofencesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchGetDevicePositionRequest&, const Model::BatchGetDevicePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDevicePositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchPutGeofenceRequest&, const Model::BatchPutGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchUpdateDevicePositionRequest&, const Model::BatchUpdateDevicePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateDevicePositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreateGeofenceCollectionRequest&, const Model::CreateGeofenceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGeofenceCollectionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreateMapRequest&, const Model::CreateMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMapResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreatePlaceIndexRequest&, const Model::CreatePlaceIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlaceIndexResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreateTrackerRequest&, const Model::CreateTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrackerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeleteGeofenceCollectionRequest&, const Model::DeleteGeofenceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGeofenceCollectionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeleteMapRequest&, const Model::DeleteMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMapResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeletePlaceIndexRequest&, const Model::DeletePlaceIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlaceIndexResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeleteTrackerRequest&, const Model::DeleteTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrackerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribeGeofenceCollectionRequest&, const Model::DescribeGeofenceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGeofenceCollectionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribeMapRequest&, const Model::DescribeMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMapResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribePlaceIndexRequest&, const Model::DescribePlaceIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlaceIndexResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribeTrackerRequest&, const Model::DescribeTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrackerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DisassociateTrackerConsumerRequest&, const Model::DisassociateTrackerConsumerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTrackerConsumerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetDevicePositionRequest&, const Model::GetDevicePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicePositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetDevicePositionHistoryRequest&, const Model::GetDevicePositionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicePositionHistoryResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetGeofenceRequest&, const Model::GetGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetMapGlyphsRequest&, Model::GetMapGlyphsOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMapGlyphsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetMapSpritesRequest&, Model::GetMapSpritesOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMapSpritesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetMapStyleDescriptorRequest&, Model::GetMapStyleDescriptorOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMapStyleDescriptorResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetMapTileRequest&, Model::GetMapTileOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMapTileResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListGeofenceCollectionsRequest&, const Model::ListGeofenceCollectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeofenceCollectionsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListGeofencesRequest&, const Model::ListGeofencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeofencesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListMapsRequest&, const Model::ListMapsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMapsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListPlaceIndexesRequest&, const Model::ListPlaceIndexesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlaceIndexesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListTrackerConsumersRequest&, const Model::ListTrackerConsumersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrackerConsumersResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListTrackersRequest&, const Model::ListTrackersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrackersResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::PutGeofenceRequest&, const Model::PutGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::SearchPlaceIndexForPositionRequest&, const Model::SearchPlaceIndexForPositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchPlaceIndexForPositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::SearchPlaceIndexForTextRequest&, const Model::SearchPlaceIndexForTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchPlaceIndexForTextResponseReceivedHandler;

  /**
   * <p>Suite of geospatial services including Maps, Places, Tracking, and
   * Geofencing</p>
   */
  class AWS_LOCATIONSERVICE_API LocationServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LocationServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LocationServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LocationServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LocationServiceClient();


        /**
         * <p>Creates an association between a geofence collection and a tracker resource.
         * This allows the tracker resource to communicate location data to the linked
         * geofence collection.</p>  <p>Currently not supported — Cross-account
         * configurations, such as creating associations between a tracker resource in one
         * account and a geofence collection in another account.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/AssociateTrackerConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrackerConsumerOutcome AssociateTrackerConsumer(const Model::AssociateTrackerConsumerRequest& request) const;

        /**
         * <p>Creates an association between a geofence collection and a tracker resource.
         * This allows the tracker resource to communicate location data to the linked
         * geofence collection.</p>  <p>Currently not supported — Cross-account
         * configurations, such as creating associations between a tracker resource in one
         * account and a geofence collection in another account.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/AssociateTrackerConsumer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTrackerConsumerOutcomeCallable AssociateTrackerConsumerCallable(const Model::AssociateTrackerConsumerRequest& request) const;

        /**
         * <p>Creates an association between a geofence collection and a tracker resource.
         * This allows the tracker resource to communicate location data to the linked
         * geofence collection.</p>  <p>Currently not supported — Cross-account
         * configurations, such as creating associations between a tracker resource in one
         * account and a geofence collection in another account.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/AssociateTrackerConsumer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTrackerConsumerAsync(const Model::AssociateTrackerConsumerRequest& request, const AssociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a batch of geofences from a geofence collection.</p>  <p>This
         * action deletes the resource permanently. You can't undo this action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteGeofenceOutcome BatchDeleteGeofence(const Model::BatchDeleteGeofenceRequest& request) const;

        /**
         * <p>Deletes a batch of geofences from a geofence collection.</p>  <p>This
         * action deletes the resource permanently. You can't undo this action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteGeofence">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteGeofenceOutcomeCallable BatchDeleteGeofenceCallable(const Model::BatchDeleteGeofenceRequest& request) const;

        /**
         * <p>Deletes a batch of geofences from a geofence collection.</p>  <p>This
         * action deletes the resource permanently. You can't undo this action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteGeofence">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteGeofenceAsync(const Model::BatchDeleteGeofenceRequest& request, const BatchDeleteGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Evaluates device positions against the geofence geometries from a given
         * geofence collection. The evaluation determines if the device has entered or
         * exited a geofenced area, which publishes ENTER or EXIT geofence events to Amazon
         * EventBridge.</p>  <p>The last geofence that a device was observed within,
         * if any, is tracked for 30 days after the most recent device position update</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchEvaluateGeofences">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEvaluateGeofencesOutcome BatchEvaluateGeofences(const Model::BatchEvaluateGeofencesRequest& request) const;

        /**
         * <p>Evaluates device positions against the geofence geometries from a given
         * geofence collection. The evaluation determines if the device has entered or
         * exited a geofenced area, which publishes ENTER or EXIT geofence events to Amazon
         * EventBridge.</p>  <p>The last geofence that a device was observed within,
         * if any, is tracked for 30 days after the most recent device position update</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchEvaluateGeofences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchEvaluateGeofencesOutcomeCallable BatchEvaluateGeofencesCallable(const Model::BatchEvaluateGeofencesRequest& request) const;

        /**
         * <p>Evaluates device positions against the geofence geometries from a given
         * geofence collection. The evaluation determines if the device has entered or
         * exited a geofenced area, which publishes ENTER or EXIT geofence events to Amazon
         * EventBridge.</p>  <p>The last geofence that a device was observed within,
         * if any, is tracked for 30 days after the most recent device position update</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchEvaluateGeofences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchEvaluateGeofencesAsync(const Model::BatchEvaluateGeofencesRequest& request, const BatchEvaluateGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A batch request to retrieve all device positions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchGetDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDevicePositionOutcome BatchGetDevicePosition(const Model::BatchGetDevicePositionRequest& request) const;

        /**
         * <p>A batch request to retrieve all device positions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchGetDevicePosition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDevicePositionOutcomeCallable BatchGetDevicePositionCallable(const Model::BatchGetDevicePositionRequest& request) const;

        /**
         * <p>A batch request to retrieve all device positions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchGetDevicePosition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDevicePositionAsync(const Model::BatchGetDevicePositionRequest& request, const BatchGetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A batch request for storing geofence geometries into a given geofence
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchPutGeofence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutGeofenceOutcome BatchPutGeofence(const Model::BatchPutGeofenceRequest& request) const;

        /**
         * <p>A batch request for storing geofence geometries into a given geofence
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchPutGeofence">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutGeofenceOutcomeCallable BatchPutGeofenceCallable(const Model::BatchPutGeofenceRequest& request) const;

        /**
         * <p>A batch request for storing geofence geometries into a given geofence
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchPutGeofence">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutGeofenceAsync(const Model::BatchPutGeofenceRequest& request, const BatchPutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads position update data for one or more devices to a tracker resource.
         * Amazon Location uses the data when reporting the last known device position and
         * position history.</p>  <p>Only one position update is stored per sample
         * time. Location data is sampled at a fixed rate of one position per 30-second
         * interval, and retained for one year before it is deleted.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchUpdateDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateDevicePositionOutcome BatchUpdateDevicePosition(const Model::BatchUpdateDevicePositionRequest& request) const;

        /**
         * <p>Uploads position update data for one or more devices to a tracker resource.
         * Amazon Location uses the data when reporting the last known device position and
         * position history.</p>  <p>Only one position update is stored per sample
         * time. Location data is sampled at a fixed rate of one position per 30-second
         * interval, and retained for one year before it is deleted.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchUpdateDevicePosition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateDevicePositionOutcomeCallable BatchUpdateDevicePositionCallable(const Model::BatchUpdateDevicePositionRequest& request) const;

        /**
         * <p>Uploads position update data for one or more devices to a tracker resource.
         * Amazon Location uses the data when reporting the last known device position and
         * position history.</p>  <p>Only one position update is stored per sample
         * time. Location data is sampled at a fixed rate of one position per 30-second
         * interval, and retained for one year before it is deleted.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchUpdateDevicePosition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateDevicePositionAsync(const Model::BatchUpdateDevicePositionRequest& request, const BatchUpdateDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a geofence collection, which manages and stores
         * geofences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGeofenceCollectionOutcome CreateGeofenceCollection(const Model::CreateGeofenceCollectionRequest& request) const;

        /**
         * <p>Creates a geofence collection, which manages and stores
         * geofences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGeofenceCollectionOutcomeCallable CreateGeofenceCollectionCallable(const Model::CreateGeofenceCollectionRequest& request) const;

        /**
         * <p>Creates a geofence collection, which manages and stores
         * geofences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGeofenceCollectionAsync(const Model::CreateGeofenceCollectionRequest& request, const CreateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a map resource in your AWS account, which provides map tiles of
         * different styles sourced from global location data providers.</p>  <p>By
         * using Maps, you agree that AWS may transmit your API queries to your selected
         * third party provider for processing, which may be outside the AWS region you are
         * currently using. For more information, see the <a
         * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
         * Location Service. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateMap">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMapOutcome CreateMap(const Model::CreateMapRequest& request) const;

        /**
         * <p>Creates a map resource in your AWS account, which provides map tiles of
         * different styles sourced from global location data providers.</p>  <p>By
         * using Maps, you agree that AWS may transmit your API queries to your selected
         * third party provider for processing, which may be outside the AWS region you are
         * currently using. For more information, see the <a
         * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
         * Location Service. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateMap">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMapOutcomeCallable CreateMapCallable(const Model::CreateMapRequest& request) const;

        /**
         * <p>Creates a map resource in your AWS account, which provides map tiles of
         * different styles sourced from global location data providers.</p>  <p>By
         * using Maps, you agree that AWS may transmit your API queries to your selected
         * third party provider for processing, which may be outside the AWS region you are
         * currently using. For more information, see the <a
         * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
         * Location Service. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateMap">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMapAsync(const Model::CreateMapRequest& request, const CreateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Place index resource in your AWS account, which supports Places
         * functions with geospatial data sourced from your chosen data provider.</p>
         *  <p>By using Places, you agree that AWS may transmit your API queries to
         * your selected third party provider for processing, which may be outside the AWS
         * region you are currently using. </p> <p>Because of licensing limitations, you
         * may not use HERE to store results for locations in Japan. For more information,
         * see the <a href="https://aws.amazon.com/service-terms/">AWS Service Terms</a>
         * for Amazon Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreatePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlaceIndexOutcome CreatePlaceIndex(const Model::CreatePlaceIndexRequest& request) const;

        /**
         * <p>Creates a Place index resource in your AWS account, which supports Places
         * functions with geospatial data sourced from your chosen data provider.</p>
         *  <p>By using Places, you agree that AWS may transmit your API queries to
         * your selected third party provider for processing, which may be outside the AWS
         * region you are currently using. </p> <p>Because of licensing limitations, you
         * may not use HERE to store results for locations in Japan. For more information,
         * see the <a href="https://aws.amazon.com/service-terms/">AWS Service Terms</a>
         * for Amazon Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreatePlaceIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlaceIndexOutcomeCallable CreatePlaceIndexCallable(const Model::CreatePlaceIndexRequest& request) const;

        /**
         * <p>Creates a Place index resource in your AWS account, which supports Places
         * functions with geospatial data sourced from your chosen data provider.</p>
         *  <p>By using Places, you agree that AWS may transmit your API queries to
         * your selected third party provider for processing, which may be outside the AWS
         * region you are currently using. </p> <p>Because of licensing limitations, you
         * may not use HERE to store results for locations in Japan. For more information,
         * see the <a href="https://aws.amazon.com/service-terms/">AWS Service Terms</a>
         * for Amazon Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreatePlaceIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlaceIndexAsync(const Model::CreatePlaceIndexRequest& request, const CreatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a tracker resource in your AWS account, which lets you retrieve
         * current and historical location of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrackerOutcome CreateTracker(const Model::CreateTrackerRequest& request) const;

        /**
         * <p>Creates a tracker resource in your AWS account, which lets you retrieve
         * current and historical location of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateTracker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrackerOutcomeCallable CreateTrackerCallable(const Model::CreateTrackerRequest& request) const;

        /**
         * <p>Creates a tracker resource in your AWS account, which lets you retrieve
         * current and historical location of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateTracker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrackerAsync(const Model::CreateTrackerRequest& request, const CreateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a geofence collection from your AWS account.</p>  <p>This
         * action deletes the resource permanently. You can't undo this action. If the
         * geofence collection is the target of a tracker resource, the devices will no
         * longer be monitored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGeofenceCollectionOutcome DeleteGeofenceCollection(const Model::DeleteGeofenceCollectionRequest& request) const;

        /**
         * <p>Deletes a geofence collection from your AWS account.</p>  <p>This
         * action deletes the resource permanently. You can't undo this action. If the
         * geofence collection is the target of a tracker resource, the devices will no
         * longer be monitored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGeofenceCollectionOutcomeCallable DeleteGeofenceCollectionCallable(const Model::DeleteGeofenceCollectionRequest& request) const;

        /**
         * <p>Deletes a geofence collection from your AWS account.</p>  <p>This
         * action deletes the resource permanently. You can't undo this action. If the
         * geofence collection is the target of a tracker resource, the devices will no
         * longer be monitored.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGeofenceCollectionAsync(const Model::DeleteGeofenceCollectionRequest& request, const DeleteGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a map resource from your AWS account.</p>  <p>This action
         * deletes the resource permanently. You cannot undo this action. If the map is
         * being used in an application, the map may not render.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteMap">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMapOutcome DeleteMap(const Model::DeleteMapRequest& request) const;

        /**
         * <p>Deletes a map resource from your AWS account.</p>  <p>This action
         * deletes the resource permanently. You cannot undo this action. If the map is
         * being used in an application, the map may not render.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteMap">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMapOutcomeCallable DeleteMapCallable(const Model::DeleteMapRequest& request) const;

        /**
         * <p>Deletes a map resource from your AWS account.</p>  <p>This action
         * deletes the resource permanently. You cannot undo this action. If the map is
         * being used in an application, the map may not render.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteMap">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMapAsync(const Model::DeleteMapRequest& request, const DeleteMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Place index resource from your AWS account.</p>  <p>This
         * action deletes the resource permanently. You cannot undo this action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeletePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaceIndexOutcome DeletePlaceIndex(const Model::DeletePlaceIndexRequest& request) const;

        /**
         * <p>Deletes a Place index resource from your AWS account.</p>  <p>This
         * action deletes the resource permanently. You cannot undo this action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeletePlaceIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlaceIndexOutcomeCallable DeletePlaceIndexCallable(const Model::DeletePlaceIndexRequest& request) const;

        /**
         * <p>Deletes a Place index resource from your AWS account.</p>  <p>This
         * action deletes the resource permanently. You cannot undo this action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeletePlaceIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlaceIndexAsync(const Model::DeletePlaceIndexRequest& request, const DeletePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a tracker resource from your AWS account.</p>  <p>This action
         * deletes the resource permanently. You can't undo this action. If the tracker
         * resource is in use, you may encounter an error. Make sure that the target
         * resource is not a dependency for your applications.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrackerOutcome DeleteTracker(const Model::DeleteTrackerRequest& request) const;

        /**
         * <p>Deletes a tracker resource from your AWS account.</p>  <p>This action
         * deletes the resource permanently. You can't undo this action. If the tracker
         * resource is in use, you may encounter an error. Make sure that the target
         * resource is not a dependency for your applications.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteTracker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrackerOutcomeCallable DeleteTrackerCallable(const Model::DeleteTrackerRequest& request) const;

        /**
         * <p>Deletes a tracker resource from your AWS account.</p>  <p>This action
         * deletes the resource permanently. You can't undo this action. If the tracker
         * resource is in use, you may encounter an error. Make sure that the target
         * resource is not a dependency for your applications.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteTracker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrackerAsync(const Model::DeleteTrackerRequest& request, const DeleteTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the geofence collection details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGeofenceCollectionOutcome DescribeGeofenceCollection(const Model::DescribeGeofenceCollectionRequest& request) const;

        /**
         * <p>Retrieves the geofence collection details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGeofenceCollectionOutcomeCallable DescribeGeofenceCollectionCallable(const Model::DescribeGeofenceCollectionRequest& request) const;

        /**
         * <p>Retrieves the geofence collection details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGeofenceCollectionAsync(const Model::DescribeGeofenceCollectionRequest& request, const DescribeGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the map resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeMap">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMapOutcome DescribeMap(const Model::DescribeMapRequest& request) const;

        /**
         * <p>Retrieves the map resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeMap">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMapOutcomeCallable DescribeMapCallable(const Model::DescribeMapRequest& request) const;

        /**
         * <p>Retrieves the map resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeMap">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMapAsync(const Model::DescribeMapRequest& request, const DescribeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Place index resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlaceIndexOutcome DescribePlaceIndex(const Model::DescribePlaceIndexRequest& request) const;

        /**
         * <p>Retrieves the Place index resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribePlaceIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlaceIndexOutcomeCallable DescribePlaceIndexCallable(const Model::DescribePlaceIndexRequest& request) const;

        /**
         * <p>Retrieves the Place index resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribePlaceIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlaceIndexAsync(const Model::DescribePlaceIndexRequest& request, const DescribePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the tracker resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrackerOutcome DescribeTracker(const Model::DescribeTrackerRequest& request) const;

        /**
         * <p>Retrieves the tracker resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeTracker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrackerOutcomeCallable DescribeTrackerCallable(const Model::DescribeTrackerRequest& request) const;

        /**
         * <p>Retrieves the tracker resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeTracker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes the association between a tracker resource and a geofence
         * collection.</p>  <p>Once you unlink a tracker resource from a geofence
         * collection, the tracker positions will no longer be automatically evaluated
         * against geofences.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DisassociateTrackerConsumer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTrackerConsumerOutcomeCallable DisassociateTrackerConsumerCallable(const Model::DisassociateTrackerConsumerRequest& request) const;

        /**
         * <p>Removes the association between a tracker resource and a geofence
         * collection.</p>  <p>Once you unlink a tracker resource from a geofence
         * collection, the tracker positions will no longer be automatically evaluated
         * against geofences.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DisassociateTrackerConsumer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTrackerConsumerAsync(const Model::DisassociateTrackerConsumerRequest& request, const DisassociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a device's most recent position according to its sample time.</p>
         *  <p>Device positions are deleted after one year.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePositionOutcome GetDevicePosition(const Model::GetDevicePositionRequest& request) const;

        /**
         * <p>Retrieves a device's most recent position according to its sample time.</p>
         *  <p>Device positions are deleted after one year.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePosition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePositionOutcomeCallable GetDevicePositionCallable(const Model::GetDevicePositionRequest& request) const;

        /**
         * <p>Retrieves a device's most recent position according to its sample time.</p>
         *  <p>Device positions are deleted after one year.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePosition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePositionAsync(const Model::GetDevicePositionRequest& request, const GetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the device position history from a tracker resource within a
         * specified range of time.</p>  <p>Device positions are deleted after 1
         * year.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePositionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePositionHistoryOutcome GetDevicePositionHistory(const Model::GetDevicePositionHistoryRequest& request) const;

        /**
         * <p>Retrieves the device position history from a tracker resource within a
         * specified range of time.</p>  <p>Device positions are deleted after 1
         * year.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePositionHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePositionHistoryOutcomeCallable GetDevicePositionHistoryCallable(const Model::GetDevicePositionHistoryRequest& request) const;

        /**
         * <p>Retrieves the device position history from a tracker resource within a
         * specified range of time.</p>  <p>Device positions are deleted after 1
         * year.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePositionHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the geofence details from a geofence collection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetGeofence">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGeofenceOutcomeCallable GetGeofenceCallable(const Model::GetGeofenceRequest& request) const;

        /**
         * <p>Retrieves the geofence details from a geofence collection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetGeofence">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves glyphs used to display labels on a map.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapGlyphs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMapGlyphsOutcomeCallable GetMapGlyphsCallable(const Model::GetMapGlyphsRequest& request) const;

        /**
         * <p>Retrieves glyphs used to display labels on a map.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapGlyphs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the sprite sheet corresponding to a map resource. The sprite sheet
         * is a PNG image paired with a JSON document describing the offsets of individual
         * icons that will be displayed on a rendered map.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapSprites">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMapSpritesOutcomeCallable GetMapSpritesCallable(const Model::GetMapSpritesRequest& request) const;

        /**
         * <p>Retrieves the sprite sheet corresponding to a map resource. The sprite sheet
         * is a PNG image paired with a JSON document describing the offsets of individual
         * icons that will be displayed on a rendered map.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapSprites">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the map style descriptor from a map resource. </p> <p>The style
         * descriptor contains speciﬁcations on how features render on a map. For example,
         * what data to display, what order to display the data in, and the style for the
         * data. Style descriptors follow the Mapbox Style Specification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapStyleDescriptor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMapStyleDescriptorOutcomeCallable GetMapStyleDescriptorCallable(const Model::GetMapStyleDescriptorRequest& request) const;

        /**
         * <p>Retrieves the map style descriptor from a map resource. </p> <p>The style
         * descriptor contains speciﬁcations on how features render on a map. For example,
         * what data to display, what order to display the data in, and the style for the
         * data. Style descriptors follow the Mapbox Style Specification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapStyleDescriptor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMapStyleDescriptorAsync(const Model::GetMapStyleDescriptorRequest& request, const GetMapStyleDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a vector data tile from the map resource. Map tiles are used by
         * clients to render a map. They are addressed using a grid arrangement with an X
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
         * <p>Retrieves a vector data tile from the map resource. Map tiles are used by
         * clients to render a map. They are addressed using a grid arrangement with an X
         * coordinate, Y coordinate, and Z (zoom) level. </p> <p>The origin (0, 0) is the
         * top left of the map. Increasing the zoom level by 1 doubles both the X and Y
         * dimensions, so a tile containing data for the entire world at (0/0/0) will be
         * split into 4 tiles at zoom 1 (1/0/0, 1/0/1, 1/1/0, 1/1/1).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapTile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMapTileOutcomeCallable GetMapTileCallable(const Model::GetMapTileRequest& request) const;

        /**
         * <p>Retrieves a vector data tile from the map resource. Map tiles are used by
         * clients to render a map. They are addressed using a grid arrangement with an X
         * coordinate, Y coordinate, and Z (zoom) level. </p> <p>The origin (0, 0) is the
         * top left of the map. Increasing the zoom level by 1 doubles both the X and Y
         * dimensions, so a tile containing data for the entire world at (0/0/0) will be
         * split into 4 tiles at zoom 1 (1/0/0, 1/0/1, 1/1/0, 1/1/1).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetMapTile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMapTileAsync(const Model::GetMapTileRequest& request, const GetMapTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists geofence collections in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofenceCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeofenceCollectionsOutcome ListGeofenceCollections(const Model::ListGeofenceCollectionsRequest& request) const;

        /**
         * <p>Lists geofence collections in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofenceCollections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeofenceCollectionsOutcomeCallable ListGeofenceCollectionsCallable(const Model::ListGeofenceCollectionsRequest& request) const;

        /**
         * <p>Lists geofence collections in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofenceCollections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists geofences stored in a given geofence collection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeofencesOutcomeCallable ListGeofencesCallable(const Model::ListGeofencesRequest& request) const;

        /**
         * <p>Lists geofences stored in a given geofence collection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGeofencesAsync(const Model::ListGeofencesRequest& request, const ListGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists map resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListMaps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMapsOutcome ListMaps(const Model::ListMapsRequest& request) const;

        /**
         * <p>Lists map resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListMaps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMapsOutcomeCallable ListMapsCallable(const Model::ListMapsRequest& request) const;

        /**
         * <p>Lists map resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListMaps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMapsAsync(const Model::ListMapsRequest& request, const ListMapsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists Place index resources in your AWS account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListPlaceIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaceIndexesOutcome ListPlaceIndexes(const Model::ListPlaceIndexesRequest& request) const;

        /**
         * <p>Lists Place index resources in your AWS account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListPlaceIndexes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlaceIndexesOutcomeCallable ListPlaceIndexesCallable(const Model::ListPlaceIndexesRequest& request) const;

        /**
         * <p>Lists Place index resources in your AWS account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListPlaceIndexes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlaceIndexesAsync(const Model::ListPlaceIndexesRequest& request, const ListPlaceIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists geofence collections currently associated to the given tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackerConsumers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrackerConsumersOutcome ListTrackerConsumers(const Model::ListTrackerConsumersRequest& request) const;

        /**
         * <p>Lists geofence collections currently associated to the given tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackerConsumers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrackerConsumersOutcomeCallable ListTrackerConsumersCallable(const Model::ListTrackerConsumersRequest& request) const;

        /**
         * <p>Lists geofence collections currently associated to the given tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackerConsumers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrackerConsumersAsync(const Model::ListTrackerConsumersRequest& request, const ListTrackerConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tracker resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrackersOutcome ListTrackers(const Model::ListTrackersRequest& request) const;

        /**
         * <p>Lists tracker resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrackersOutcomeCallable ListTrackersCallable(const Model::ListTrackersRequest& request) const;

        /**
         * <p>Lists tracker resources in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTrackers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Stores a geofence geometry in a given geofence collection, or updates the
         * geometry of an existing geofence if a geofence ID is included in the request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/PutGeofence">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutGeofenceOutcomeCallable PutGeofenceCallable(const Model::PutGeofenceRequest& request) const;

        /**
         * <p>Stores a geofence geometry in a given geofence collection, or updates the
         * geometry of an existing geofence if a geofence ID is included in the request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/PutGeofence">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutGeofenceAsync(const Model::PutGeofenceRequest& request, const PutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reverse geocodes a given coordinate and returns a legible address. Allows you
         * to search for Places or points of interest near a given position.</p> 
         * <p>By using Places, you agree that AWS may transmit your API queries to your
         * selected third party provider for processing, which may be outside the AWS
         * region you are currently using. </p> <p>Because of licensing limitations, you
         * may not use HERE to store results for locations in Japan. For more information,
         * see the <a href="https://aws.amazon.com/service-terms/">AWS Service Terms</a>
         * for Amazon Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPosition">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPlaceIndexForPositionOutcome SearchPlaceIndexForPosition(const Model::SearchPlaceIndexForPositionRequest& request) const;

        /**
         * <p>Reverse geocodes a given coordinate and returns a legible address. Allows you
         * to search for Places or points of interest near a given position.</p> 
         * <p>By using Places, you agree that AWS may transmit your API queries to your
         * selected third party provider for processing, which may be outside the AWS
         * region you are currently using. </p> <p>Because of licensing limitations, you
         * may not use HERE to store results for locations in Japan. For more information,
         * see the <a href="https://aws.amazon.com/service-terms/">AWS Service Terms</a>
         * for Amazon Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPosition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchPlaceIndexForPositionOutcomeCallable SearchPlaceIndexForPositionCallable(const Model::SearchPlaceIndexForPositionRequest& request) const;

        /**
         * <p>Reverse geocodes a given coordinate and returns a legible address. Allows you
         * to search for Places or points of interest near a given position.</p> 
         * <p>By using Places, you agree that AWS may transmit your API queries to your
         * selected third party provider for processing, which may be outside the AWS
         * region you are currently using. </p> <p>Because of licensing limitations, you
         * may not use HERE to store results for locations in Japan. For more information,
         * see the <a href="https://aws.amazon.com/service-terms/">AWS Service Terms</a>
         * for Amazon Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPosition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchPlaceIndexForPositionAsync(const Model::SearchPlaceIndexForPositionRequest& request, const SearchPlaceIndexForPositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Geocodes free-form text, such as an address, name, city, or region to allow
         * you to search for Places or points of interest. </p> <p>Includes the option to
         * apply additional parameters to narrow your list of results.</p>  <p>You
         * can search for places near a given position using <code>BiasPosition</code>, or
         * filter results within a bounding box using <code>FilterBBox</code>. Providing
         * both parameters simultaneously returns an error.</p>   <p>By using
         * Places, you agree that AWS may transmit your API queries to your selected third
         * party provider for processing, which may be outside the AWS region you are
         * currently using. </p> <p>Also, when using HERE as your data provider, you may
         * not (a) use HERE Places for Asset Management, or (b) select the
         * <code>Storage</code> option for the <code>IntendedUse</code> parameter when
         * requesting Places in Japan. For more information, see the <a
         * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
         * Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForText">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPlaceIndexForTextOutcome SearchPlaceIndexForText(const Model::SearchPlaceIndexForTextRequest& request) const;

        /**
         * <p>Geocodes free-form text, such as an address, name, city, or region to allow
         * you to search for Places or points of interest. </p> <p>Includes the option to
         * apply additional parameters to narrow your list of results.</p>  <p>You
         * can search for places near a given position using <code>BiasPosition</code>, or
         * filter results within a bounding box using <code>FilterBBox</code>. Providing
         * both parameters simultaneously returns an error.</p>   <p>By using
         * Places, you agree that AWS may transmit your API queries to your selected third
         * party provider for processing, which may be outside the AWS region you are
         * currently using. </p> <p>Also, when using HERE as your data provider, you may
         * not (a) use HERE Places for Asset Management, or (b) select the
         * <code>Storage</code> option for the <code>IntendedUse</code> parameter when
         * requesting Places in Japan. For more information, see the <a
         * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
         * Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForText">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchPlaceIndexForTextOutcomeCallable SearchPlaceIndexForTextCallable(const Model::SearchPlaceIndexForTextRequest& request) const;

        /**
         * <p>Geocodes free-form text, such as an address, name, city, or region to allow
         * you to search for Places or points of interest. </p> <p>Includes the option to
         * apply additional parameters to narrow your list of results.</p>  <p>You
         * can search for places near a given position using <code>BiasPosition</code>, or
         * filter results within a bounding box using <code>FilterBBox</code>. Providing
         * both parameters simultaneously returns an error.</p>   <p>By using
         * Places, you agree that AWS may transmit your API queries to your selected third
         * party provider for processing, which may be outside the AWS region you are
         * currently using. </p> <p>Also, when using HERE as your data provider, you may
         * not (a) use HERE Places for Asset Management, or (b) select the
         * <code>Storage</code> option for the <code>IntendedUse</code> parameter when
         * requesting Places in Japan. For more information, see the <a
         * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
         * Location Service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchPlaceIndexForTextAsync(const Model::SearchPlaceIndexForTextRequest& request, const SearchPlaceIndexForTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateTrackerConsumerAsyncHelper(const Model::AssociateTrackerConsumerRequest& request, const AssociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteGeofenceAsyncHelper(const Model::BatchDeleteGeofenceRequest& request, const BatchDeleteGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchEvaluateGeofencesAsyncHelper(const Model::BatchEvaluateGeofencesRequest& request, const BatchEvaluateGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDevicePositionAsyncHelper(const Model::BatchGetDevicePositionRequest& request, const BatchGetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchPutGeofenceAsyncHelper(const Model::BatchPutGeofenceRequest& request, const BatchPutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateDevicePositionAsyncHelper(const Model::BatchUpdateDevicePositionRequest& request, const BatchUpdateDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGeofenceCollectionAsyncHelper(const Model::CreateGeofenceCollectionRequest& request, const CreateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMapAsyncHelper(const Model::CreateMapRequest& request, const CreateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlaceIndexAsyncHelper(const Model::CreatePlaceIndexRequest& request, const CreatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrackerAsyncHelper(const Model::CreateTrackerRequest& request, const CreateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGeofenceCollectionAsyncHelper(const Model::DeleteGeofenceCollectionRequest& request, const DeleteGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMapAsyncHelper(const Model::DeleteMapRequest& request, const DeleteMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlaceIndexAsyncHelper(const Model::DeletePlaceIndexRequest& request, const DeletePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrackerAsyncHelper(const Model::DeleteTrackerRequest& request, const DeleteTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGeofenceCollectionAsyncHelper(const Model::DescribeGeofenceCollectionRequest& request, const DescribeGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMapAsyncHelper(const Model::DescribeMapRequest& request, const DescribeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlaceIndexAsyncHelper(const Model::DescribePlaceIndexRequest& request, const DescribePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrackerAsyncHelper(const Model::DescribeTrackerRequest& request, const DescribeTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateTrackerConsumerAsyncHelper(const Model::DisassociateTrackerConsumerRequest& request, const DisassociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicePositionAsyncHelper(const Model::GetDevicePositionRequest& request, const GetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicePositionHistoryAsyncHelper(const Model::GetDevicePositionHistoryRequest& request, const GetDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGeofenceAsyncHelper(const Model::GetGeofenceRequest& request, const GetGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMapGlyphsAsyncHelper(const Model::GetMapGlyphsRequest& request, const GetMapGlyphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMapSpritesAsyncHelper(const Model::GetMapSpritesRequest& request, const GetMapSpritesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMapStyleDescriptorAsyncHelper(const Model::GetMapStyleDescriptorRequest& request, const GetMapStyleDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMapTileAsyncHelper(const Model::GetMapTileRequest& request, const GetMapTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGeofenceCollectionsAsyncHelper(const Model::ListGeofenceCollectionsRequest& request, const ListGeofenceCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGeofencesAsyncHelper(const Model::ListGeofencesRequest& request, const ListGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMapsAsyncHelper(const Model::ListMapsRequest& request, const ListMapsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlaceIndexesAsyncHelper(const Model::ListPlaceIndexesRequest& request, const ListPlaceIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrackerConsumersAsyncHelper(const Model::ListTrackerConsumersRequest& request, const ListTrackerConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrackersAsyncHelper(const Model::ListTrackersRequest& request, const ListTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutGeofenceAsyncHelper(const Model::PutGeofenceRequest& request, const PutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchPlaceIndexForPositionAsyncHelper(const Model::SearchPlaceIndexForPositionRequest& request, const SearchPlaceIndexForPositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchPlaceIndexForTextAsyncHelper(const Model::SearchPlaceIndexForTextRequest& request, const SearchPlaceIndexForTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_baseUri;
      Aws::String m_scheme;
      bool m_enableHostPrefixInjection;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LocationService
} // namespace Aws
