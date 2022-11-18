/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateTrackerConsumerAsync(...)  SubmitAsync(&LocationServiceClient::AssociateTrackerConsumer, __VA_ARGS__)
#define AssociateTrackerConsumerCallable(REQUEST)  SubmitCallable(&LocationServiceClient::AssociateTrackerConsumer, REQUEST)

#define BatchDeleteDevicePositionHistoryAsync(...)  SubmitAsync(&LocationServiceClient::BatchDeleteDevicePositionHistory, __VA_ARGS__)
#define BatchDeleteDevicePositionHistoryCallable(REQUEST)  SubmitCallable(&LocationServiceClient::BatchDeleteDevicePositionHistory, REQUEST)

#define BatchDeleteGeofenceAsync(...)  SubmitAsync(&LocationServiceClient::BatchDeleteGeofence, __VA_ARGS__)
#define BatchDeleteGeofenceCallable(REQUEST)  SubmitCallable(&LocationServiceClient::BatchDeleteGeofence, REQUEST)

#define BatchEvaluateGeofencesAsync(...)  SubmitAsync(&LocationServiceClient::BatchEvaluateGeofences, __VA_ARGS__)
#define BatchEvaluateGeofencesCallable(REQUEST)  SubmitCallable(&LocationServiceClient::BatchEvaluateGeofences, REQUEST)

#define BatchGetDevicePositionAsync(...)  SubmitAsync(&LocationServiceClient::BatchGetDevicePosition, __VA_ARGS__)
#define BatchGetDevicePositionCallable(REQUEST)  SubmitCallable(&LocationServiceClient::BatchGetDevicePosition, REQUEST)

#define BatchPutGeofenceAsync(...)  SubmitAsync(&LocationServiceClient::BatchPutGeofence, __VA_ARGS__)
#define BatchPutGeofenceCallable(REQUEST)  SubmitCallable(&LocationServiceClient::BatchPutGeofence, REQUEST)

#define BatchUpdateDevicePositionAsync(...)  SubmitAsync(&LocationServiceClient::BatchUpdateDevicePosition, __VA_ARGS__)
#define BatchUpdateDevicePositionCallable(REQUEST)  SubmitCallable(&LocationServiceClient::BatchUpdateDevicePosition, REQUEST)

#define CalculateRouteAsync(...)  SubmitAsync(&LocationServiceClient::CalculateRoute, __VA_ARGS__)
#define CalculateRouteCallable(REQUEST)  SubmitCallable(&LocationServiceClient::CalculateRoute, REQUEST)

#define CalculateRouteMatrixAsync(...)  SubmitAsync(&LocationServiceClient::CalculateRouteMatrix, __VA_ARGS__)
#define CalculateRouteMatrixCallable(REQUEST)  SubmitCallable(&LocationServiceClient::CalculateRouteMatrix, REQUEST)

#define CreateGeofenceCollectionAsync(...)  SubmitAsync(&LocationServiceClient::CreateGeofenceCollection, __VA_ARGS__)
#define CreateGeofenceCollectionCallable(REQUEST)  SubmitCallable(&LocationServiceClient::CreateGeofenceCollection, REQUEST)

#define CreateMapAsync(...)  SubmitAsync(&LocationServiceClient::CreateMap, __VA_ARGS__)
#define CreateMapCallable(REQUEST)  SubmitCallable(&LocationServiceClient::CreateMap, REQUEST)

#define CreatePlaceIndexAsync(...)  SubmitAsync(&LocationServiceClient::CreatePlaceIndex, __VA_ARGS__)
#define CreatePlaceIndexCallable(REQUEST)  SubmitCallable(&LocationServiceClient::CreatePlaceIndex, REQUEST)

#define CreateRouteCalculatorAsync(...)  SubmitAsync(&LocationServiceClient::CreateRouteCalculator, __VA_ARGS__)
#define CreateRouteCalculatorCallable(REQUEST)  SubmitCallable(&LocationServiceClient::CreateRouteCalculator, REQUEST)

#define CreateTrackerAsync(...)  SubmitAsync(&LocationServiceClient::CreateTracker, __VA_ARGS__)
#define CreateTrackerCallable(REQUEST)  SubmitCallable(&LocationServiceClient::CreateTracker, REQUEST)

#define DeleteGeofenceCollectionAsync(...)  SubmitAsync(&LocationServiceClient::DeleteGeofenceCollection, __VA_ARGS__)
#define DeleteGeofenceCollectionCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DeleteGeofenceCollection, REQUEST)

#define DeleteMapAsync(...)  SubmitAsync(&LocationServiceClient::DeleteMap, __VA_ARGS__)
#define DeleteMapCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DeleteMap, REQUEST)

#define DeletePlaceIndexAsync(...)  SubmitAsync(&LocationServiceClient::DeletePlaceIndex, __VA_ARGS__)
#define DeletePlaceIndexCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DeletePlaceIndex, REQUEST)

#define DeleteRouteCalculatorAsync(...)  SubmitAsync(&LocationServiceClient::DeleteRouteCalculator, __VA_ARGS__)
#define DeleteRouteCalculatorCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DeleteRouteCalculator, REQUEST)

#define DeleteTrackerAsync(...)  SubmitAsync(&LocationServiceClient::DeleteTracker, __VA_ARGS__)
#define DeleteTrackerCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DeleteTracker, REQUEST)

#define DescribeGeofenceCollectionAsync(...)  SubmitAsync(&LocationServiceClient::DescribeGeofenceCollection, __VA_ARGS__)
#define DescribeGeofenceCollectionCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DescribeGeofenceCollection, REQUEST)

#define DescribeMapAsync(...)  SubmitAsync(&LocationServiceClient::DescribeMap, __VA_ARGS__)
#define DescribeMapCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DescribeMap, REQUEST)

#define DescribePlaceIndexAsync(...)  SubmitAsync(&LocationServiceClient::DescribePlaceIndex, __VA_ARGS__)
#define DescribePlaceIndexCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DescribePlaceIndex, REQUEST)

#define DescribeRouteCalculatorAsync(...)  SubmitAsync(&LocationServiceClient::DescribeRouteCalculator, __VA_ARGS__)
#define DescribeRouteCalculatorCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DescribeRouteCalculator, REQUEST)

#define DescribeTrackerAsync(...)  SubmitAsync(&LocationServiceClient::DescribeTracker, __VA_ARGS__)
#define DescribeTrackerCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DescribeTracker, REQUEST)

#define DisassociateTrackerConsumerAsync(...)  SubmitAsync(&LocationServiceClient::DisassociateTrackerConsumer, __VA_ARGS__)
#define DisassociateTrackerConsumerCallable(REQUEST)  SubmitCallable(&LocationServiceClient::DisassociateTrackerConsumer, REQUEST)

#define GetDevicePositionAsync(...)  SubmitAsync(&LocationServiceClient::GetDevicePosition, __VA_ARGS__)
#define GetDevicePositionCallable(REQUEST)  SubmitCallable(&LocationServiceClient::GetDevicePosition, REQUEST)

#define GetDevicePositionHistoryAsync(...)  SubmitAsync(&LocationServiceClient::GetDevicePositionHistory, __VA_ARGS__)
#define GetDevicePositionHistoryCallable(REQUEST)  SubmitCallable(&LocationServiceClient::GetDevicePositionHistory, REQUEST)

#define GetGeofenceAsync(...)  SubmitAsync(&LocationServiceClient::GetGeofence, __VA_ARGS__)
#define GetGeofenceCallable(REQUEST)  SubmitCallable(&LocationServiceClient::GetGeofence, REQUEST)

#define GetMapGlyphsAsync(...)  SubmitAsync(&LocationServiceClient::GetMapGlyphs, __VA_ARGS__)
#define GetMapGlyphsCallable(REQUEST)  SubmitCallable(&LocationServiceClient::GetMapGlyphs, REQUEST)

#define GetMapSpritesAsync(...)  SubmitAsync(&LocationServiceClient::GetMapSprites, __VA_ARGS__)
#define GetMapSpritesCallable(REQUEST)  SubmitCallable(&LocationServiceClient::GetMapSprites, REQUEST)

#define GetMapStyleDescriptorAsync(...)  SubmitAsync(&LocationServiceClient::GetMapStyleDescriptor, __VA_ARGS__)
#define GetMapStyleDescriptorCallable(REQUEST)  SubmitCallable(&LocationServiceClient::GetMapStyleDescriptor, REQUEST)

#define GetMapTileAsync(...)  SubmitAsync(&LocationServiceClient::GetMapTile, __VA_ARGS__)
#define GetMapTileCallable(REQUEST)  SubmitCallable(&LocationServiceClient::GetMapTile, REQUEST)

#define GetPlaceAsync(...)  SubmitAsync(&LocationServiceClient::GetPlace, __VA_ARGS__)
#define GetPlaceCallable(REQUEST)  SubmitCallable(&LocationServiceClient::GetPlace, REQUEST)

#define ListDevicePositionsAsync(...)  SubmitAsync(&LocationServiceClient::ListDevicePositions, __VA_ARGS__)
#define ListDevicePositionsCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListDevicePositions, REQUEST)

#define ListGeofenceCollectionsAsync(...)  SubmitAsync(&LocationServiceClient::ListGeofenceCollections, __VA_ARGS__)
#define ListGeofenceCollectionsCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListGeofenceCollections, REQUEST)

#define ListGeofencesAsync(...)  SubmitAsync(&LocationServiceClient::ListGeofences, __VA_ARGS__)
#define ListGeofencesCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListGeofences, REQUEST)

#define ListMapsAsync(...)  SubmitAsync(&LocationServiceClient::ListMaps, __VA_ARGS__)
#define ListMapsCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListMaps, REQUEST)

#define ListPlaceIndexesAsync(...)  SubmitAsync(&LocationServiceClient::ListPlaceIndexes, __VA_ARGS__)
#define ListPlaceIndexesCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListPlaceIndexes, REQUEST)

#define ListRouteCalculatorsAsync(...)  SubmitAsync(&LocationServiceClient::ListRouteCalculators, __VA_ARGS__)
#define ListRouteCalculatorsCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListRouteCalculators, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&LocationServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListTagsForResource, REQUEST)

#define ListTrackerConsumersAsync(...)  SubmitAsync(&LocationServiceClient::ListTrackerConsumers, __VA_ARGS__)
#define ListTrackerConsumersCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListTrackerConsumers, REQUEST)

#define ListTrackersAsync(...)  SubmitAsync(&LocationServiceClient::ListTrackers, __VA_ARGS__)
#define ListTrackersCallable(REQUEST)  SubmitCallable(&LocationServiceClient::ListTrackers, REQUEST)

#define PutGeofenceAsync(...)  SubmitAsync(&LocationServiceClient::PutGeofence, __VA_ARGS__)
#define PutGeofenceCallable(REQUEST)  SubmitCallable(&LocationServiceClient::PutGeofence, REQUEST)

#define SearchPlaceIndexForPositionAsync(...)  SubmitAsync(&LocationServiceClient::SearchPlaceIndexForPosition, __VA_ARGS__)
#define SearchPlaceIndexForPositionCallable(REQUEST)  SubmitCallable(&LocationServiceClient::SearchPlaceIndexForPosition, REQUEST)

#define SearchPlaceIndexForSuggestionsAsync(...)  SubmitAsync(&LocationServiceClient::SearchPlaceIndexForSuggestions, __VA_ARGS__)
#define SearchPlaceIndexForSuggestionsCallable(REQUEST)  SubmitCallable(&LocationServiceClient::SearchPlaceIndexForSuggestions, REQUEST)

#define SearchPlaceIndexForTextAsync(...)  SubmitAsync(&LocationServiceClient::SearchPlaceIndexForText, __VA_ARGS__)
#define SearchPlaceIndexForTextCallable(REQUEST)  SubmitCallable(&LocationServiceClient::SearchPlaceIndexForText, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&LocationServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&LocationServiceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&LocationServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&LocationServiceClient::UntagResource, REQUEST)

#define UpdateGeofenceCollectionAsync(...)  SubmitAsync(&LocationServiceClient::UpdateGeofenceCollection, __VA_ARGS__)
#define UpdateGeofenceCollectionCallable(REQUEST)  SubmitCallable(&LocationServiceClient::UpdateGeofenceCollection, REQUEST)

#define UpdateMapAsync(...)  SubmitAsync(&LocationServiceClient::UpdateMap, __VA_ARGS__)
#define UpdateMapCallable(REQUEST)  SubmitCallable(&LocationServiceClient::UpdateMap, REQUEST)

#define UpdatePlaceIndexAsync(...)  SubmitAsync(&LocationServiceClient::UpdatePlaceIndex, __VA_ARGS__)
#define UpdatePlaceIndexCallable(REQUEST)  SubmitCallable(&LocationServiceClient::UpdatePlaceIndex, REQUEST)

#define UpdateRouteCalculatorAsync(...)  SubmitAsync(&LocationServiceClient::UpdateRouteCalculator, __VA_ARGS__)
#define UpdateRouteCalculatorCallable(REQUEST)  SubmitCallable(&LocationServiceClient::UpdateRouteCalculator, REQUEST)

#define UpdateTrackerAsync(...)  SubmitAsync(&LocationServiceClient::UpdateTracker, __VA_ARGS__)
#define UpdateTrackerCallable(REQUEST)  SubmitCallable(&LocationServiceClient::UpdateTracker, REQUEST)

