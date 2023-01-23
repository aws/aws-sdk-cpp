/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/location/LocationServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/location/LocationServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LocationServiceClient header */
#include <aws/location/model/AssociateTrackerConsumerResult.h>
#include <aws/location/model/BatchDeleteDevicePositionHistoryResult.h>
#include <aws/location/model/BatchDeleteGeofenceResult.h>
#include <aws/location/model/BatchEvaluateGeofencesResult.h>
#include <aws/location/model/BatchGetDevicePositionResult.h>
#include <aws/location/model/BatchPutGeofenceResult.h>
#include <aws/location/model/BatchUpdateDevicePositionResult.h>
#include <aws/location/model/CalculateRouteResult.h>
#include <aws/location/model/CalculateRouteMatrixResult.h>
#include <aws/location/model/CreateGeofenceCollectionResult.h>
#include <aws/location/model/CreateMapResult.h>
#include <aws/location/model/CreatePlaceIndexResult.h>
#include <aws/location/model/CreateRouteCalculatorResult.h>
#include <aws/location/model/CreateTrackerResult.h>
#include <aws/location/model/DeleteGeofenceCollectionResult.h>
#include <aws/location/model/DeleteMapResult.h>
#include <aws/location/model/DeletePlaceIndexResult.h>
#include <aws/location/model/DeleteRouteCalculatorResult.h>
#include <aws/location/model/DeleteTrackerResult.h>
#include <aws/location/model/DescribeGeofenceCollectionResult.h>
#include <aws/location/model/DescribeMapResult.h>
#include <aws/location/model/DescribePlaceIndexResult.h>
#include <aws/location/model/DescribeRouteCalculatorResult.h>
#include <aws/location/model/DescribeTrackerResult.h>
#include <aws/location/model/DisassociateTrackerConsumerResult.h>
#include <aws/location/model/GetDevicePositionResult.h>
#include <aws/location/model/GetDevicePositionHistoryResult.h>
#include <aws/location/model/GetGeofenceResult.h>
#include <aws/location/model/GetMapGlyphsResult.h>
#include <aws/location/model/GetMapSpritesResult.h>
#include <aws/location/model/GetMapStyleDescriptorResult.h>
#include <aws/location/model/GetMapTileResult.h>
#include <aws/location/model/GetPlaceResult.h>
#include <aws/location/model/ListDevicePositionsResult.h>
#include <aws/location/model/ListGeofenceCollectionsResult.h>
#include <aws/location/model/ListGeofencesResult.h>
#include <aws/location/model/ListMapsResult.h>
#include <aws/location/model/ListPlaceIndexesResult.h>
#include <aws/location/model/ListRouteCalculatorsResult.h>
#include <aws/location/model/ListTagsForResourceResult.h>
#include <aws/location/model/ListTrackerConsumersResult.h>
#include <aws/location/model/ListTrackersResult.h>
#include <aws/location/model/PutGeofenceResult.h>
#include <aws/location/model/SearchPlaceIndexForPositionResult.h>
#include <aws/location/model/SearchPlaceIndexForSuggestionsResult.h>
#include <aws/location/model/SearchPlaceIndexForTextResult.h>
#include <aws/location/model/TagResourceResult.h>
#include <aws/location/model/UntagResourceResult.h>
#include <aws/location/model/UpdateGeofenceCollectionResult.h>
#include <aws/location/model/UpdateMapResult.h>
#include <aws/location/model/UpdatePlaceIndexResult.h>
#include <aws/location/model/UpdateRouteCalculatorResult.h>
#include <aws/location/model/UpdateTrackerResult.h>
/* End of service model headers required in LocationServiceClient header */

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
    using LocationServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LocationServiceEndpointProviderBase = Aws::LocationService::Endpoint::LocationServiceEndpointProviderBase;
    using LocationServiceEndpointProvider = Aws::LocationService::Endpoint::LocationServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LocationServiceClient header */
      class AssociateTrackerConsumerRequest;
      class BatchDeleteDevicePositionHistoryRequest;
      class BatchDeleteGeofenceRequest;
      class BatchEvaluateGeofencesRequest;
      class BatchGetDevicePositionRequest;
      class BatchPutGeofenceRequest;
      class BatchUpdateDevicePositionRequest;
      class CalculateRouteRequest;
      class CalculateRouteMatrixRequest;
      class CreateGeofenceCollectionRequest;
      class CreateMapRequest;
      class CreatePlaceIndexRequest;
      class CreateRouteCalculatorRequest;
      class CreateTrackerRequest;
      class DeleteGeofenceCollectionRequest;
      class DeleteMapRequest;
      class DeletePlaceIndexRequest;
      class DeleteRouteCalculatorRequest;
      class DeleteTrackerRequest;
      class DescribeGeofenceCollectionRequest;
      class DescribeMapRequest;
      class DescribePlaceIndexRequest;
      class DescribeRouteCalculatorRequest;
      class DescribeTrackerRequest;
      class DisassociateTrackerConsumerRequest;
      class GetDevicePositionRequest;
      class GetDevicePositionHistoryRequest;
      class GetGeofenceRequest;
      class GetMapGlyphsRequest;
      class GetMapSpritesRequest;
      class GetMapStyleDescriptorRequest;
      class GetMapTileRequest;
      class GetPlaceRequest;
      class ListDevicePositionsRequest;
      class ListGeofenceCollectionsRequest;
      class ListGeofencesRequest;
      class ListMapsRequest;
      class ListPlaceIndexesRequest;
      class ListRouteCalculatorsRequest;
      class ListTagsForResourceRequest;
      class ListTrackerConsumersRequest;
      class ListTrackersRequest;
      class PutGeofenceRequest;
      class SearchPlaceIndexForPositionRequest;
      class SearchPlaceIndexForSuggestionsRequest;
      class SearchPlaceIndexForTextRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateGeofenceCollectionRequest;
      class UpdateMapRequest;
      class UpdatePlaceIndexRequest;
      class UpdateRouteCalculatorRequest;
      class UpdateTrackerRequest;
      /* End of service model forward declarations required in LocationServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateTrackerConsumerResult, LocationServiceError> AssociateTrackerConsumerOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteDevicePositionHistoryResult, LocationServiceError> BatchDeleteDevicePositionHistoryOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteGeofenceResult, LocationServiceError> BatchDeleteGeofenceOutcome;
      typedef Aws::Utils::Outcome<BatchEvaluateGeofencesResult, LocationServiceError> BatchEvaluateGeofencesOutcome;
      typedef Aws::Utils::Outcome<BatchGetDevicePositionResult, LocationServiceError> BatchGetDevicePositionOutcome;
      typedef Aws::Utils::Outcome<BatchPutGeofenceResult, LocationServiceError> BatchPutGeofenceOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateDevicePositionResult, LocationServiceError> BatchUpdateDevicePositionOutcome;
      typedef Aws::Utils::Outcome<CalculateRouteResult, LocationServiceError> CalculateRouteOutcome;
      typedef Aws::Utils::Outcome<CalculateRouteMatrixResult, LocationServiceError> CalculateRouteMatrixOutcome;
      typedef Aws::Utils::Outcome<CreateGeofenceCollectionResult, LocationServiceError> CreateGeofenceCollectionOutcome;
      typedef Aws::Utils::Outcome<CreateMapResult, LocationServiceError> CreateMapOutcome;
      typedef Aws::Utils::Outcome<CreatePlaceIndexResult, LocationServiceError> CreatePlaceIndexOutcome;
      typedef Aws::Utils::Outcome<CreateRouteCalculatorResult, LocationServiceError> CreateRouteCalculatorOutcome;
      typedef Aws::Utils::Outcome<CreateTrackerResult, LocationServiceError> CreateTrackerOutcome;
      typedef Aws::Utils::Outcome<DeleteGeofenceCollectionResult, LocationServiceError> DeleteGeofenceCollectionOutcome;
      typedef Aws::Utils::Outcome<DeleteMapResult, LocationServiceError> DeleteMapOutcome;
      typedef Aws::Utils::Outcome<DeletePlaceIndexResult, LocationServiceError> DeletePlaceIndexOutcome;
      typedef Aws::Utils::Outcome<DeleteRouteCalculatorResult, LocationServiceError> DeleteRouteCalculatorOutcome;
      typedef Aws::Utils::Outcome<DeleteTrackerResult, LocationServiceError> DeleteTrackerOutcome;
      typedef Aws::Utils::Outcome<DescribeGeofenceCollectionResult, LocationServiceError> DescribeGeofenceCollectionOutcome;
      typedef Aws::Utils::Outcome<DescribeMapResult, LocationServiceError> DescribeMapOutcome;
      typedef Aws::Utils::Outcome<DescribePlaceIndexResult, LocationServiceError> DescribePlaceIndexOutcome;
      typedef Aws::Utils::Outcome<DescribeRouteCalculatorResult, LocationServiceError> DescribeRouteCalculatorOutcome;
      typedef Aws::Utils::Outcome<DescribeTrackerResult, LocationServiceError> DescribeTrackerOutcome;
      typedef Aws::Utils::Outcome<DisassociateTrackerConsumerResult, LocationServiceError> DisassociateTrackerConsumerOutcome;
      typedef Aws::Utils::Outcome<GetDevicePositionResult, LocationServiceError> GetDevicePositionOutcome;
      typedef Aws::Utils::Outcome<GetDevicePositionHistoryResult, LocationServiceError> GetDevicePositionHistoryOutcome;
      typedef Aws::Utils::Outcome<GetGeofenceResult, LocationServiceError> GetGeofenceOutcome;
      typedef Aws::Utils::Outcome<GetMapGlyphsResult, LocationServiceError> GetMapGlyphsOutcome;
      typedef Aws::Utils::Outcome<GetMapSpritesResult, LocationServiceError> GetMapSpritesOutcome;
      typedef Aws::Utils::Outcome<GetMapStyleDescriptorResult, LocationServiceError> GetMapStyleDescriptorOutcome;
      typedef Aws::Utils::Outcome<GetMapTileResult, LocationServiceError> GetMapTileOutcome;
      typedef Aws::Utils::Outcome<GetPlaceResult, LocationServiceError> GetPlaceOutcome;
      typedef Aws::Utils::Outcome<ListDevicePositionsResult, LocationServiceError> ListDevicePositionsOutcome;
      typedef Aws::Utils::Outcome<ListGeofenceCollectionsResult, LocationServiceError> ListGeofenceCollectionsOutcome;
      typedef Aws::Utils::Outcome<ListGeofencesResult, LocationServiceError> ListGeofencesOutcome;
      typedef Aws::Utils::Outcome<ListMapsResult, LocationServiceError> ListMapsOutcome;
      typedef Aws::Utils::Outcome<ListPlaceIndexesResult, LocationServiceError> ListPlaceIndexesOutcome;
      typedef Aws::Utils::Outcome<ListRouteCalculatorsResult, LocationServiceError> ListRouteCalculatorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, LocationServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTrackerConsumersResult, LocationServiceError> ListTrackerConsumersOutcome;
      typedef Aws::Utils::Outcome<ListTrackersResult, LocationServiceError> ListTrackersOutcome;
      typedef Aws::Utils::Outcome<PutGeofenceResult, LocationServiceError> PutGeofenceOutcome;
      typedef Aws::Utils::Outcome<SearchPlaceIndexForPositionResult, LocationServiceError> SearchPlaceIndexForPositionOutcome;
      typedef Aws::Utils::Outcome<SearchPlaceIndexForSuggestionsResult, LocationServiceError> SearchPlaceIndexForSuggestionsOutcome;
      typedef Aws::Utils::Outcome<SearchPlaceIndexForTextResult, LocationServiceError> SearchPlaceIndexForTextOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, LocationServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, LocationServiceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateGeofenceCollectionResult, LocationServiceError> UpdateGeofenceCollectionOutcome;
      typedef Aws::Utils::Outcome<UpdateMapResult, LocationServiceError> UpdateMapOutcome;
      typedef Aws::Utils::Outcome<UpdatePlaceIndexResult, LocationServiceError> UpdatePlaceIndexOutcome;
      typedef Aws::Utils::Outcome<UpdateRouteCalculatorResult, LocationServiceError> UpdateRouteCalculatorOutcome;
      typedef Aws::Utils::Outcome<UpdateTrackerResult, LocationServiceError> UpdateTrackerOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateTrackerConsumerOutcome> AssociateTrackerConsumerOutcomeCallable;
      typedef std::future<BatchDeleteDevicePositionHistoryOutcome> BatchDeleteDevicePositionHistoryOutcomeCallable;
      typedef std::future<BatchDeleteGeofenceOutcome> BatchDeleteGeofenceOutcomeCallable;
      typedef std::future<BatchEvaluateGeofencesOutcome> BatchEvaluateGeofencesOutcomeCallable;
      typedef std::future<BatchGetDevicePositionOutcome> BatchGetDevicePositionOutcomeCallable;
      typedef std::future<BatchPutGeofenceOutcome> BatchPutGeofenceOutcomeCallable;
      typedef std::future<BatchUpdateDevicePositionOutcome> BatchUpdateDevicePositionOutcomeCallable;
      typedef std::future<CalculateRouteOutcome> CalculateRouteOutcomeCallable;
      typedef std::future<CalculateRouteMatrixOutcome> CalculateRouteMatrixOutcomeCallable;
      typedef std::future<CreateGeofenceCollectionOutcome> CreateGeofenceCollectionOutcomeCallable;
      typedef std::future<CreateMapOutcome> CreateMapOutcomeCallable;
      typedef std::future<CreatePlaceIndexOutcome> CreatePlaceIndexOutcomeCallable;
      typedef std::future<CreateRouteCalculatorOutcome> CreateRouteCalculatorOutcomeCallable;
      typedef std::future<CreateTrackerOutcome> CreateTrackerOutcomeCallable;
      typedef std::future<DeleteGeofenceCollectionOutcome> DeleteGeofenceCollectionOutcomeCallable;
      typedef std::future<DeleteMapOutcome> DeleteMapOutcomeCallable;
      typedef std::future<DeletePlaceIndexOutcome> DeletePlaceIndexOutcomeCallable;
      typedef std::future<DeleteRouteCalculatorOutcome> DeleteRouteCalculatorOutcomeCallable;
      typedef std::future<DeleteTrackerOutcome> DeleteTrackerOutcomeCallable;
      typedef std::future<DescribeGeofenceCollectionOutcome> DescribeGeofenceCollectionOutcomeCallable;
      typedef std::future<DescribeMapOutcome> DescribeMapOutcomeCallable;
      typedef std::future<DescribePlaceIndexOutcome> DescribePlaceIndexOutcomeCallable;
      typedef std::future<DescribeRouteCalculatorOutcome> DescribeRouteCalculatorOutcomeCallable;
      typedef std::future<DescribeTrackerOutcome> DescribeTrackerOutcomeCallable;
      typedef std::future<DisassociateTrackerConsumerOutcome> DisassociateTrackerConsumerOutcomeCallable;
      typedef std::future<GetDevicePositionOutcome> GetDevicePositionOutcomeCallable;
      typedef std::future<GetDevicePositionHistoryOutcome> GetDevicePositionHistoryOutcomeCallable;
      typedef std::future<GetGeofenceOutcome> GetGeofenceOutcomeCallable;
      typedef std::future<GetMapGlyphsOutcome> GetMapGlyphsOutcomeCallable;
      typedef std::future<GetMapSpritesOutcome> GetMapSpritesOutcomeCallable;
      typedef std::future<GetMapStyleDescriptorOutcome> GetMapStyleDescriptorOutcomeCallable;
      typedef std::future<GetMapTileOutcome> GetMapTileOutcomeCallable;
      typedef std::future<GetPlaceOutcome> GetPlaceOutcomeCallable;
      typedef std::future<ListDevicePositionsOutcome> ListDevicePositionsOutcomeCallable;
      typedef std::future<ListGeofenceCollectionsOutcome> ListGeofenceCollectionsOutcomeCallable;
      typedef std::future<ListGeofencesOutcome> ListGeofencesOutcomeCallable;
      typedef std::future<ListMapsOutcome> ListMapsOutcomeCallable;
      typedef std::future<ListPlaceIndexesOutcome> ListPlaceIndexesOutcomeCallable;
      typedef std::future<ListRouteCalculatorsOutcome> ListRouteCalculatorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTrackerConsumersOutcome> ListTrackerConsumersOutcomeCallable;
      typedef std::future<ListTrackersOutcome> ListTrackersOutcomeCallable;
      typedef std::future<PutGeofenceOutcome> PutGeofenceOutcomeCallable;
      typedef std::future<SearchPlaceIndexForPositionOutcome> SearchPlaceIndexForPositionOutcomeCallable;
      typedef std::future<SearchPlaceIndexForSuggestionsOutcome> SearchPlaceIndexForSuggestionsOutcomeCallable;
      typedef std::future<SearchPlaceIndexForTextOutcome> SearchPlaceIndexForTextOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateGeofenceCollectionOutcome> UpdateGeofenceCollectionOutcomeCallable;
      typedef std::future<UpdateMapOutcome> UpdateMapOutcomeCallable;
      typedef std::future<UpdatePlaceIndexOutcome> UpdatePlaceIndexOutcomeCallable;
      typedef std::future<UpdateRouteCalculatorOutcome> UpdateRouteCalculatorOutcomeCallable;
      typedef std::future<UpdateTrackerOutcome> UpdateTrackerOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LocationServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LocationServiceClient*, const Model::AssociateTrackerConsumerRequest&, const Model::AssociateTrackerConsumerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrackerConsumerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchDeleteDevicePositionHistoryRequest&, const Model::BatchDeleteDevicePositionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteDevicePositionHistoryResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchDeleteGeofenceRequest&, const Model::BatchDeleteGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchEvaluateGeofencesRequest&, const Model::BatchEvaluateGeofencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEvaluateGeofencesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchGetDevicePositionRequest&, const Model::BatchGetDevicePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDevicePositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchPutGeofenceRequest&, const Model::BatchPutGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchUpdateDevicePositionRequest&, const Model::BatchUpdateDevicePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateDevicePositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CalculateRouteRequest&, const Model::CalculateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CalculateRouteResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CalculateRouteMatrixRequest&, const Model::CalculateRouteMatrixOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CalculateRouteMatrixResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreateGeofenceCollectionRequest&, const Model::CreateGeofenceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGeofenceCollectionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreateMapRequest&, const Model::CreateMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMapResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreatePlaceIndexRequest&, const Model::CreatePlaceIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlaceIndexResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreateRouteCalculatorRequest&, const Model::CreateRouteCalculatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteCalculatorResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CreateTrackerRequest&, const Model::CreateTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrackerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeleteGeofenceCollectionRequest&, const Model::DeleteGeofenceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGeofenceCollectionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeleteMapRequest&, const Model::DeleteMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMapResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeletePlaceIndexRequest&, const Model::DeletePlaceIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlaceIndexResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeleteRouteCalculatorRequest&, const Model::DeleteRouteCalculatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteCalculatorResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DeleteTrackerRequest&, const Model::DeleteTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrackerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribeGeofenceCollectionRequest&, const Model::DescribeGeofenceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGeofenceCollectionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribeMapRequest&, const Model::DescribeMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMapResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribePlaceIndexRequest&, const Model::DescribePlaceIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlaceIndexResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribeRouteCalculatorRequest&, const Model::DescribeRouteCalculatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRouteCalculatorResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DescribeTrackerRequest&, const Model::DescribeTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrackerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::DisassociateTrackerConsumerRequest&, const Model::DisassociateTrackerConsumerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTrackerConsumerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetDevicePositionRequest&, const Model::GetDevicePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicePositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetDevicePositionHistoryRequest&, const Model::GetDevicePositionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicePositionHistoryResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetGeofenceRequest&, const Model::GetGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetMapGlyphsRequest&, Model::GetMapGlyphsOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMapGlyphsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetMapSpritesRequest&, Model::GetMapSpritesOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMapSpritesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetMapStyleDescriptorRequest&, Model::GetMapStyleDescriptorOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMapStyleDescriptorResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetMapTileRequest&, Model::GetMapTileOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMapTileResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::GetPlaceRequest&, const Model::GetPlaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlaceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListDevicePositionsRequest&, const Model::ListDevicePositionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicePositionsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListGeofenceCollectionsRequest&, const Model::ListGeofenceCollectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeofenceCollectionsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListGeofencesRequest&, const Model::ListGeofencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeofencesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListMapsRequest&, const Model::ListMapsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMapsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListPlaceIndexesRequest&, const Model::ListPlaceIndexesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlaceIndexesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListRouteCalculatorsRequest&, const Model::ListRouteCalculatorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRouteCalculatorsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListTrackerConsumersRequest&, const Model::ListTrackerConsumersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrackerConsumersResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::ListTrackersRequest&, const Model::ListTrackersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrackersResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::PutGeofenceRequest&, const Model::PutGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::SearchPlaceIndexForPositionRequest&, const Model::SearchPlaceIndexForPositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchPlaceIndexForPositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::SearchPlaceIndexForSuggestionsRequest&, const Model::SearchPlaceIndexForSuggestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchPlaceIndexForSuggestionsResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::SearchPlaceIndexForTextRequest&, const Model::SearchPlaceIndexForTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchPlaceIndexForTextResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdateGeofenceCollectionRequest&, const Model::UpdateGeofenceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGeofenceCollectionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdateMapRequest&, const Model::UpdateMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMapResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdatePlaceIndexRequest&, const Model::UpdatePlaceIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePlaceIndexResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdateRouteCalculatorRequest&, const Model::UpdateRouteCalculatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRouteCalculatorResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdateTrackerRequest&, const Model::UpdateTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrackerResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LocationService
} // namespace Aws
