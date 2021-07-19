﻿/**
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
#include <aws/location/model/BatchDeleteDevicePositionHistoryResult.h>
#include <aws/location/model/BatchDeleteGeofenceResult.h>
#include <aws/location/model/BatchEvaluateGeofencesResult.h>
#include <aws/location/model/BatchGetDevicePositionResult.h>
#include <aws/location/model/BatchPutGeofenceResult.h>
#include <aws/location/model/BatchUpdateDevicePositionResult.h>
#include <aws/location/model/CalculateRouteResult.h>
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
#include <aws/location/model/SearchPlaceIndexForTextResult.h>
#include <aws/location/model/TagResourceResult.h>
#include <aws/location/model/UntagResourceResult.h>
#include <aws/location/model/UpdateGeofenceCollectionResult.h>
#include <aws/location/model/UpdateMapResult.h>
#include <aws/location/model/UpdatePlaceIndexResult.h>
#include <aws/location/model/UpdateRouteCalculatorResult.h>
#include <aws/location/model/UpdateTrackerResult.h>
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
        class BatchDeleteDevicePositionHistoryRequest;
        class BatchDeleteGeofenceRequest;
        class BatchEvaluateGeofencesRequest;
        class BatchGetDevicePositionRequest;
        class BatchPutGeofenceRequest;
        class BatchUpdateDevicePositionRequest;
        class CalculateRouteRequest;
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
        class SearchPlaceIndexForTextRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateGeofenceCollectionRequest;
        class UpdateMapRequest;
        class UpdatePlaceIndexRequest;
        class UpdateRouteCalculatorRequest;
        class UpdateTrackerRequest;

        typedef Aws::Utils::Outcome<AssociateTrackerConsumerResult, LocationServiceError> AssociateTrackerConsumerOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteDevicePositionHistoryResult, LocationServiceError> BatchDeleteDevicePositionHistoryOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteGeofenceResult, LocationServiceError> BatchDeleteGeofenceOutcome;
        typedef Aws::Utils::Outcome<BatchEvaluateGeofencesResult, LocationServiceError> BatchEvaluateGeofencesOutcome;
        typedef Aws::Utils::Outcome<BatchGetDevicePositionResult, LocationServiceError> BatchGetDevicePositionOutcome;
        typedef Aws::Utils::Outcome<BatchPutGeofenceResult, LocationServiceError> BatchPutGeofenceOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateDevicePositionResult, LocationServiceError> BatchUpdateDevicePositionOutcome;
        typedef Aws::Utils::Outcome<CalculateRouteResult, LocationServiceError> CalculateRouteOutcome;
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
        typedef Aws::Utils::Outcome<SearchPlaceIndexForTextResult, LocationServiceError> SearchPlaceIndexForTextOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LocationServiceError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LocationServiceError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateGeofenceCollectionResult, LocationServiceError> UpdateGeofenceCollectionOutcome;
        typedef Aws::Utils::Outcome<UpdateMapResult, LocationServiceError> UpdateMapOutcome;
        typedef Aws::Utils::Outcome<UpdatePlaceIndexResult, LocationServiceError> UpdatePlaceIndexOutcome;
        typedef Aws::Utils::Outcome<UpdateRouteCalculatorResult, LocationServiceError> UpdateRouteCalculatorOutcome;
        typedef Aws::Utils::Outcome<UpdateTrackerResult, LocationServiceError> UpdateTrackerOutcome;

        typedef std::future<AssociateTrackerConsumerOutcome> AssociateTrackerConsumerOutcomeCallable;
        typedef std::future<BatchDeleteDevicePositionHistoryOutcome> BatchDeleteDevicePositionHistoryOutcomeCallable;
        typedef std::future<BatchDeleteGeofenceOutcome> BatchDeleteGeofenceOutcomeCallable;
        typedef std::future<BatchEvaluateGeofencesOutcome> BatchEvaluateGeofencesOutcomeCallable;
        typedef std::future<BatchGetDevicePositionOutcome> BatchGetDevicePositionOutcomeCallable;
        typedef std::future<BatchPutGeofenceOutcome> BatchPutGeofenceOutcomeCallable;
        typedef std::future<BatchUpdateDevicePositionOutcome> BatchUpdateDevicePositionOutcomeCallable;
        typedef std::future<CalculateRouteOutcome> CalculateRouteOutcomeCallable;
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
        typedef std::future<SearchPlaceIndexForTextOutcome> SearchPlaceIndexForTextOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateGeofenceCollectionOutcome> UpdateGeofenceCollectionOutcomeCallable;
        typedef std::future<UpdateMapOutcome> UpdateMapOutcomeCallable;
        typedef std::future<UpdatePlaceIndexOutcome> UpdatePlaceIndexOutcomeCallable;
        typedef std::future<UpdateRouteCalculatorOutcome> UpdateRouteCalculatorOutcomeCallable;
        typedef std::future<UpdateTrackerOutcome> UpdateTrackerOutcomeCallable;
} // namespace Model

  class LocationServiceClient;

    typedef std::function<void(const LocationServiceClient*, const Model::AssociateTrackerConsumerRequest&, const Model::AssociateTrackerConsumerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrackerConsumerResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchDeleteDevicePositionHistoryRequest&, const Model::BatchDeleteDevicePositionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteDevicePositionHistoryResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchDeleteGeofenceRequest&, const Model::BatchDeleteGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchEvaluateGeofencesRequest&, const Model::BatchEvaluateGeofencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEvaluateGeofencesResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchGetDevicePositionRequest&, const Model::BatchGetDevicePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDevicePositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchPutGeofenceRequest&, const Model::BatchPutGeofenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutGeofenceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::BatchUpdateDevicePositionRequest&, const Model::BatchUpdateDevicePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateDevicePositionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::CalculateRouteRequest&, const Model::CalculateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CalculateRouteResponseReceivedHandler;
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
    typedef std::function<void(const LocationServiceClient*, const Model::SearchPlaceIndexForTextRequest&, const Model::SearchPlaceIndexForTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchPlaceIndexForTextResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdateGeofenceCollectionRequest&, const Model::UpdateGeofenceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGeofenceCollectionResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdateMapRequest&, const Model::UpdateMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMapResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdatePlaceIndexRequest&, const Model::UpdatePlaceIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePlaceIndexResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdateRouteCalculatorRequest&, const Model::UpdateRouteCalculatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRouteCalculatorResponseReceivedHandler;
    typedef std::function<void(const LocationServiceClient*, const Model::UpdateTrackerRequest&, const Model::UpdateTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrackerResponseReceivedHandler;

  /**
   * <p>Suite of geospatial services including Maps, Places, Routes, Tracking, and
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
         * <p>Creates an association between a geofence collection and a tracker resource.
         * This allows the tracker resource to communicate location data to the linked
         * geofence collection. </p> <p>You can associate up to five geofence collections
         * to each tracker resource.</p>  <p>Currently not supported — Cross-account
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
         * geofence collection. </p> <p>You can associate up to five geofence collections
         * to each tracker resource.</p>  <p>Currently not supported — Cross-account
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
         * <p>Deletes the position history of one or more devices from a tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteDevicePositionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDevicePositionHistoryOutcome BatchDeleteDevicePositionHistory(const Model::BatchDeleteDevicePositionHistoryRequest& request) const;

        /**
         * <p>Deletes the position history of one or more devices from a tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteDevicePositionHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteDevicePositionHistoryOutcomeCallable BatchDeleteDevicePositionHistoryCallable(const Model::BatchDeleteDevicePositionHistoryRequest& request) const;

        /**
         * <p>Deletes the position history of one or more devices from a tracker
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteDevicePositionHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a batch of geofences from a geofence collection.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteGeofence">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteGeofenceOutcomeCallable BatchDeleteGeofenceCallable(const Model::BatchDeleteGeofenceRequest& request) const;

        /**
         * <p>Deletes a batch of geofences from a geofence collection.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchDeleteGeofence">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * most recent device position update.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchEvaluateGeofences">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEvaluateGeofencesOutcome BatchEvaluateGeofences(const Model::BatchEvaluateGeofencesRequest& request) const;

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
         * most recent device position update.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchEvaluateGeofences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchEvaluateGeofencesOutcomeCallable BatchEvaluateGeofencesCallable(const Model::BatchEvaluateGeofencesRequest& request) const;

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
         * most recent device position update.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchEvaluateGeofences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the latest device positions for requested devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchGetDevicePosition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDevicePositionOutcomeCallable BatchGetDevicePositionCallable(const Model::BatchGetDevicePositionRequest& request) const;

        /**
         * <p>Lists the latest device positions for requested devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchGetDevicePosition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>A batch request for storing geofence geometries into a given geofence
         * collection, or updates the geometry of an existing geofence if a geofence ID is
         * included in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchPutGeofence">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutGeofenceOutcomeCallable BatchPutGeofenceCallable(const Model::BatchPutGeofenceRequest& request) const;

        /**
         * <p>A batch request for storing geofence geometries into a given geofence
         * collection, or updates the geometry of an existing geofence if a geofence ID is
         * included in the request.</p><p><h3>See Also:</h3>   <a
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
         * interval and retained for 30 days before it's deleted.</p> <p><h3>See
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
         * interval and retained for 30 days before it's deleted.</p> <p><h3>See
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
         * interval and retained for 30 days before it's deleted.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchUpdateDevicePosition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateDevicePositionAsync(const Model::BatchUpdateDevicePositionRequest& request, const BatchUpdateDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html">Calculates
         * a route</a> given the following required parameters:
         * <code>DeparturePostiton</code> and <code>DestinationPosition</code>. Requires
         * that you first <a
         * href="https://docs.aws.amazon.com/location-routes/latest/APIReference/API_CreateRouteCalculator.html">create
         * a route calculator resource</a> </p> <p>By default, a request that doesn't
         * specify a departure time uses the best time of day to travel with the best
         * traffic conditions when calculating the route.</p> <p>Additional options
         * include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html#departure-time">Specifying
         * a departure time</a> using either <code>DepartureTime</code> or
         * <code>DepartureNow</code>. This calculates a route based on predictive traffic
         * data at the given time. </p>  <p>You can't specify both
         * <code>DepartureTime</code> and <code>DepartureNow</code> in a single request.
         * Specifying both parameters returns an error message.</p>  </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html#travel-mode">Specifying
         * a travel mode</a> using TravelMode. This lets you specify an additional route
         * preference such as <code>CarModeOptions</code> if traveling by <code>Car</code>,
         * or <code>TruckModeOptions</code> if traveling by <code>Truck</code>.</p> </li>
         * </ul> <p> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CalculateRouteOutcome CalculateRoute(const Model::CalculateRouteRequest& request) const;

        /**
         * <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html">Calculates
         * a route</a> given the following required parameters:
         * <code>DeparturePostiton</code> and <code>DestinationPosition</code>. Requires
         * that you first <a
         * href="https://docs.aws.amazon.com/location-routes/latest/APIReference/API_CreateRouteCalculator.html">create
         * a route calculator resource</a> </p> <p>By default, a request that doesn't
         * specify a departure time uses the best time of day to travel with the best
         * traffic conditions when calculating the route.</p> <p>Additional options
         * include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html#departure-time">Specifying
         * a departure time</a> using either <code>DepartureTime</code> or
         * <code>DepartureNow</code>. This calculates a route based on predictive traffic
         * data at the given time. </p>  <p>You can't specify both
         * <code>DepartureTime</code> and <code>DepartureNow</code> in a single request.
         * Specifying both parameters returns an error message.</p>  </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html#travel-mode">Specifying
         * a travel mode</a> using TravelMode. This lets you specify an additional route
         * preference such as <code>CarModeOptions</code> if traveling by <code>Car</code>,
         * or <code>TruckModeOptions</code> if traveling by <code>Truck</code>.</p> </li>
         * </ul> <p> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CalculateRouteOutcomeCallable CalculateRouteCallable(const Model::CalculateRouteRequest& request) const;

        /**
         * <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html">Calculates
         * a route</a> given the following required parameters:
         * <code>DeparturePostiton</code> and <code>DestinationPosition</code>. Requires
         * that you first <a
         * href="https://docs.aws.amazon.com/location-routes/latest/APIReference/API_CreateRouteCalculator.html">create
         * a route calculator resource</a> </p> <p>By default, a request that doesn't
         * specify a departure time uses the best time of day to travel with the best
         * traffic conditions when calculating the route.</p> <p>Additional options
         * include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html#departure-time">Specifying
         * a departure time</a> using either <code>DepartureTime</code> or
         * <code>DepartureNow</code>. This calculates a route based on predictive traffic
         * data at the given time. </p>  <p>You can't specify both
         * <code>DepartureTime</code> and <code>DepartureNow</code> in a single request.
         * Specifying both parameters returns an error message.</p>  </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html#travel-mode">Specifying
         * a travel mode</a> using TravelMode. This lets you specify an additional route
         * preference such as <code>CarModeOptions</code> if traveling by <code>Car</code>,
         * or <code>TruckModeOptions</code> if traveling by <code>Truck</code>.</p> </li>
         * </ul> <p> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CalculateRouteAsync(const Model::CalculateRouteRequest& request, const CalculateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * different styles sourced from global location data providers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateMap">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMapOutcome CreateMap(const Model::CreateMapRequest& request) const;

        /**
         * <p>Creates a map resource in your AWS account, which provides map tiles of
         * different styles sourced from global location data providers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateMap">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMapOutcomeCallable CreateMapCallable(const Model::CreateMapRequest& request) const;

        /**
         * <p>Creates a map resource in your AWS account, which provides map tiles of
         * different styles sourced from global location data providers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateMap">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMapAsync(const Model::CreateMapRequest& request, const CreateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a place index resource in your AWS account, which supports functions
         * with geospatial data sourced from your chosen data provider.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreatePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlaceIndexOutcome CreatePlaceIndex(const Model::CreatePlaceIndexRequest& request) const;

        /**
         * <p>Creates a place index resource in your AWS account, which supports functions
         * with geospatial data sourced from your chosen data provider.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreatePlaceIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlaceIndexOutcomeCallable CreatePlaceIndexCallable(const Model::CreatePlaceIndexRequest& request) const;

        /**
         * <p>Creates a place index resource in your AWS account, which supports functions
         * with geospatial data sourced from your chosen data provider.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreatePlaceIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlaceIndexAsync(const Model::CreatePlaceIndexRequest& request, const CreatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route calculator resource in your AWS account.</p> <p>You can send
         * requests to a route calculator resource to estimate travel time, distance, and
         * get directions. A route calculator sources traffic and road network data from
         * your chosen data provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateRouteCalculator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteCalculatorOutcome CreateRouteCalculator(const Model::CreateRouteCalculatorRequest& request) const;

        /**
         * <p>Creates a route calculator resource in your AWS account.</p> <p>You can send
         * requests to a route calculator resource to estimate travel time, distance, and
         * get directions. A route calculator sources traffic and road network data from
         * your chosen data provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateRouteCalculator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteCalculatorOutcomeCallable CreateRouteCalculatorCallable(const Model::CreateRouteCalculatorRequest& request) const;

        /**
         * <p>Creates a route calculator resource in your AWS account.</p> <p>You can send
         * requests to a route calculator resource to estimate travel time, distance, and
         * get directions. A route calculator sources traffic and road network data from
         * your chosen data provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CreateRouteCalculator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * operation deletes the resource permanently. If the geofence collection is the
         * target of a tracker resource, the devices will no longer be monitored.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteGeofenceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGeofenceCollectionOutcome DeleteGeofenceCollection(const Model::DeleteGeofenceCollectionRequest& request) const;

        /**
         * <p>Deletes a geofence collection from your AWS account.</p>  <p>This
         * operation deletes the resource permanently. If the geofence collection is the
         * target of a tracker resource, the devices will no longer be monitored.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGeofenceCollectionOutcomeCallable DeleteGeofenceCollectionCallable(const Model::DeleteGeofenceCollectionRequest& request) const;

        /**
         * <p>Deletes a geofence collection from your AWS account.</p>  <p>This
         * operation deletes the resource permanently. If the geofence collection is the
         * target of a tracker resource, the devices will no longer be monitored.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a map resource from your AWS account.</p>  <p>This operation
         * deletes the resource permanently. If the map is being used in an application,
         * the map may not render.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteMap">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMapOutcomeCallable DeleteMapCallable(const Model::DeleteMapRequest& request) const;

        /**
         * <p>Deletes a map resource from your AWS account.</p>  <p>This operation
         * deletes the resource permanently. If the map is being used in an application,
         * the map may not render.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteMap">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a place index resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeletePlaceIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlaceIndexOutcomeCallable DeletePlaceIndexCallable(const Model::DeletePlaceIndexRequest& request) const;

        /**
         * <p>Deletes a place index resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeletePlaceIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a route calculator resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteRouteCalculator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteCalculatorOutcomeCallable DeleteRouteCalculatorCallable(const Model::DeleteRouteCalculatorRequest& request) const;

        /**
         * <p>Deletes a route calculator resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteRouteCalculator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a tracker resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently. If the tracker resource is in use,
         * you may encounter an error. Make sure that the target resource isn't a
         * dependency for your applications.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DeleteTracker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrackerOutcomeCallable DeleteTrackerCallable(const Model::DeleteTrackerRequest& request) const;

        /**
         * <p>Deletes a tracker resource from your AWS account.</p>  <p>This
         * operation deletes the resource permanently. If the tracker resource is in use,
         * you may encounter an error. Make sure that the target resource isn't a
         * dependency for your applications.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the place index resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribePlaceIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlaceIndexOutcome DescribePlaceIndex(const Model::DescribePlaceIndexRequest& request) const;

        /**
         * <p>Retrieves the place index resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribePlaceIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlaceIndexOutcomeCallable DescribePlaceIndexCallable(const Model::DescribePlaceIndexRequest& request) const;

        /**
         * <p>Retrieves the place index resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribePlaceIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the route calculator resource details.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeRouteCalculator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRouteCalculatorOutcomeCallable DescribeRouteCalculatorCallable(const Model::DescribeRouteCalculatorRequest& request) const;

        /**
         * <p>Retrieves the route calculator resource details.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DescribeRouteCalculator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRouteCalculatorAsync(const Model::DescribeRouteCalculatorRequest& request, const DescribeRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *  <p>Device positions are deleted after 30 days.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePositionOutcome GetDevicePosition(const Model::GetDevicePositionRequest& request) const;

        /**
         * <p>Retrieves a device's most recent position according to its sample time.</p>
         *  <p>Device positions are deleted after 30 days.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePosition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePositionOutcomeCallable GetDevicePositionCallable(const Model::GetDevicePositionRequest& request) const;

        /**
         * <p>Retrieves a device's most recent position according to its sample time.</p>
         *  <p>Device positions are deleted after 30 days.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePosition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the device position history from a tracker resource within a
         * specified range of time.</p>  <p>Device positions are deleted after 30
         * days.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/GetDevicePositionHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePositionHistoryOutcomeCallable GetDevicePositionHistoryCallable(const Model::GetDevicePositionHistoryRequest& request) const;

        /**
         * <p>Retrieves the device position history from a tracker resource within a
         * specified range of time.</p>  <p>Device positions are deleted after 30
         * days.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Retrieves a vector data tile from the map resource. Map tiles are used by
         * clients to render a map. they're addressed using a grid arrangement with an X
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
         * clients to render a map. they're addressed using a grid arrangement with an X
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
         * <p>A batch request to retrieve all device positions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListDevicePositions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicePositionsOutcome ListDevicePositions(const Model::ListDevicePositionsRequest& request) const;

        /**
         * <p>A batch request to retrieve all device positions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListDevicePositions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicePositionsOutcomeCallable ListDevicePositionsCallable(const Model::ListDevicePositionsRequest& request) const;

        /**
         * <p>A batch request to retrieve all device positions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListDevicePositions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicePositionsAsync(const Model::ListDevicePositionsRequest& request, const ListDevicePositionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists place index resources in your AWS account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListPlaceIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaceIndexesOutcome ListPlaceIndexes(const Model::ListPlaceIndexesRequest& request) const;

        /**
         * <p>Lists place index resources in your AWS account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListPlaceIndexes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlaceIndexesOutcomeCallable ListPlaceIndexesCallable(const Model::ListPlaceIndexesRequest& request) const;

        /**
         * <p>Lists place index resources in your AWS account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListPlaceIndexes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists route calculator resources in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListRouteCalculators">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRouteCalculatorsOutcomeCallable ListRouteCalculatorsCallable(const Model::ListRouteCalculatorsRequest& request) const;

        /**
         * <p>Lists route calculator resources in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListRouteCalculators">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of tags that are applied to the specified Amazon Location
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags that are applied to the specified Amazon Location
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * to search for Places or points of interest near a given position.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPosition">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPlaceIndexForPositionOutcome SearchPlaceIndexForPosition(const Model::SearchPlaceIndexForPositionRequest& request) const;

        /**
         * <p>Reverse geocodes a given coordinate and returns a legible address. Allows you
         * to search for Places or points of interest near a given position.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForPosition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchPlaceIndexForPositionOutcomeCallable SearchPlaceIndexForPositionCallable(const Model::SearchPlaceIndexForPositionRequest& request) const;

        /**
         * <p>Reverse geocodes a given coordinate and returns a legible address. Allows you
         * to search for Places or points of interest near a given position.</p><p><h3>See
         * Also:</h3>   <a
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
         * both parameters simultaneously returns an error.</p> <p><h3>See
         * Also:</h3>   <a
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
         * both parameters simultaneously returns an error.</p> <p><h3>See
         * Also:</h3>   <a
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
         * both parameters simultaneously returns an error.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchPlaceIndexForText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes one or more tags from the specified Amazon Location
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified Amazon Location
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the specified properties of a given geofence
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGeofenceCollectionOutcomeCallable UpdateGeofenceCollectionCallable(const Model::UpdateGeofenceCollectionRequest& request) const;

        /**
         * <p>Updates the specified properties of a given geofence
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateGeofenceCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the specified properties of a given map resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateMap">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMapOutcomeCallable UpdateMapCallable(const Model::UpdateMapRequest& request) const;

        /**
         * <p>Updates the specified properties of a given map resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateMap">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the specified properties of a given place index
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdatePlaceIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePlaceIndexOutcomeCallable UpdatePlaceIndexCallable(const Model::UpdatePlaceIndexRequest& request) const;

        /**
         * <p>Updates the specified properties of a given place index
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdatePlaceIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the specified properties for a given route calculator
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateRouteCalculator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRouteCalculatorOutcomeCallable UpdateRouteCalculatorCallable(const Model::UpdateRouteCalculatorRequest& request) const;

        /**
         * <p>Updates the specified properties for a given route calculator
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateRouteCalculator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the specified properties of a given tracker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateTracker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrackerOutcomeCallable UpdateTrackerCallable(const Model::UpdateTrackerRequest& request) const;

        /**
         * <p>Updates the specified properties of a given tracker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/UpdateTracker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrackerAsync(const Model::UpdateTrackerRequest& request, const UpdateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateTrackerConsumerAsyncHelper(const Model::AssociateTrackerConsumerRequest& request, const AssociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteDevicePositionHistoryAsyncHelper(const Model::BatchDeleteDevicePositionHistoryRequest& request, const BatchDeleteDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteGeofenceAsyncHelper(const Model::BatchDeleteGeofenceRequest& request, const BatchDeleteGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchEvaluateGeofencesAsyncHelper(const Model::BatchEvaluateGeofencesRequest& request, const BatchEvaluateGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDevicePositionAsyncHelper(const Model::BatchGetDevicePositionRequest& request, const BatchGetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchPutGeofenceAsyncHelper(const Model::BatchPutGeofenceRequest& request, const BatchPutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateDevicePositionAsyncHelper(const Model::BatchUpdateDevicePositionRequest& request, const BatchUpdateDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CalculateRouteAsyncHelper(const Model::CalculateRouteRequest& request, const CalculateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGeofenceCollectionAsyncHelper(const Model::CreateGeofenceCollectionRequest& request, const CreateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMapAsyncHelper(const Model::CreateMapRequest& request, const CreateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlaceIndexAsyncHelper(const Model::CreatePlaceIndexRequest& request, const CreatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteCalculatorAsyncHelper(const Model::CreateRouteCalculatorRequest& request, const CreateRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrackerAsyncHelper(const Model::CreateTrackerRequest& request, const CreateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGeofenceCollectionAsyncHelper(const Model::DeleteGeofenceCollectionRequest& request, const DeleteGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMapAsyncHelper(const Model::DeleteMapRequest& request, const DeleteMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlaceIndexAsyncHelper(const Model::DeletePlaceIndexRequest& request, const DeletePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteCalculatorAsyncHelper(const Model::DeleteRouteCalculatorRequest& request, const DeleteRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrackerAsyncHelper(const Model::DeleteTrackerRequest& request, const DeleteTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGeofenceCollectionAsyncHelper(const Model::DescribeGeofenceCollectionRequest& request, const DescribeGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMapAsyncHelper(const Model::DescribeMapRequest& request, const DescribeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlaceIndexAsyncHelper(const Model::DescribePlaceIndexRequest& request, const DescribePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRouteCalculatorAsyncHelper(const Model::DescribeRouteCalculatorRequest& request, const DescribeRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrackerAsyncHelper(const Model::DescribeTrackerRequest& request, const DescribeTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateTrackerConsumerAsyncHelper(const Model::DisassociateTrackerConsumerRequest& request, const DisassociateTrackerConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicePositionAsyncHelper(const Model::GetDevicePositionRequest& request, const GetDevicePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicePositionHistoryAsyncHelper(const Model::GetDevicePositionHistoryRequest& request, const GetDevicePositionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGeofenceAsyncHelper(const Model::GetGeofenceRequest& request, const GetGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMapGlyphsAsyncHelper(const Model::GetMapGlyphsRequest& request, const GetMapGlyphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMapSpritesAsyncHelper(const Model::GetMapSpritesRequest& request, const GetMapSpritesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMapStyleDescriptorAsyncHelper(const Model::GetMapStyleDescriptorRequest& request, const GetMapStyleDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMapTileAsyncHelper(const Model::GetMapTileRequest& request, const GetMapTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicePositionsAsyncHelper(const Model::ListDevicePositionsRequest& request, const ListDevicePositionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGeofenceCollectionsAsyncHelper(const Model::ListGeofenceCollectionsRequest& request, const ListGeofenceCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGeofencesAsyncHelper(const Model::ListGeofencesRequest& request, const ListGeofencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMapsAsyncHelper(const Model::ListMapsRequest& request, const ListMapsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlaceIndexesAsyncHelper(const Model::ListPlaceIndexesRequest& request, const ListPlaceIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRouteCalculatorsAsyncHelper(const Model::ListRouteCalculatorsRequest& request, const ListRouteCalculatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrackerConsumersAsyncHelper(const Model::ListTrackerConsumersRequest& request, const ListTrackerConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrackersAsyncHelper(const Model::ListTrackersRequest& request, const ListTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutGeofenceAsyncHelper(const Model::PutGeofenceRequest& request, const PutGeofenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchPlaceIndexForPositionAsyncHelper(const Model::SearchPlaceIndexForPositionRequest& request, const SearchPlaceIndexForPositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchPlaceIndexForTextAsyncHelper(const Model::SearchPlaceIndexForTextRequest& request, const SearchPlaceIndexForTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGeofenceCollectionAsyncHelper(const Model::UpdateGeofenceCollectionRequest& request, const UpdateGeofenceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMapAsyncHelper(const Model::UpdateMapRequest& request, const UpdateMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePlaceIndexAsyncHelper(const Model::UpdatePlaceIndexRequest& request, const UpdatePlaceIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRouteCalculatorAsyncHelper(const Model::UpdateRouteCalculatorRequest& request, const UpdateRouteCalculatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrackerAsyncHelper(const Model::UpdateTrackerRequest& request, const UpdateTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_baseUri;
      Aws::String m_scheme;
      bool m_enableHostPrefixInjection;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LocationService
} // namespace Aws
