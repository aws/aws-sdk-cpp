/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/location/model/ForecastGeofenceEventsPaginationTraits.h>
#include <aws/location/model/GetDevicePositionHistoryPaginationTraits.h>
#include <aws/location/model/ListDevicePositionsPaginationTraits.h>
#include <aws/location/model/ListGeofenceCollectionsPaginationTraits.h>
#include <aws/location/model/ListGeofencesPaginationTraits.h>
#include <aws/location/model/ListKeysPaginationTraits.h>
#include <aws/location/model/ListMapsPaginationTraits.h>
#include <aws/location/model/ListPlaceIndexesPaginationTraits.h>
#include <aws/location/model/ListRouteCalculatorsPaginationTraits.h>
#include <aws/location/model/ListTrackerConsumersPaginationTraits.h>
#include <aws/location/model/ListTrackersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace LocationService {

class LocationServiceClient;

template <typename DerivedClient>
class LocationServicePaginationBase {
 public:
  /**
   * Create a paginator for ForecastGeofenceEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ForecastGeofenceEventsRequest,
                                    Pagination::ForecastGeofenceEventsPaginationTraits<DerivedClient>>
  ForecastGeofenceEventsPaginator(const Model::ForecastGeofenceEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ForecastGeofenceEventsRequest,
                                             Pagination::ForecastGeofenceEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetDevicePositionHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDevicePositionHistoryRequest,
                                    Pagination::GetDevicePositionHistoryPaginationTraits<DerivedClient>>
  GetDevicePositionHistoryPaginator(const Model::GetDevicePositionHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDevicePositionHistoryRequest,
                                             Pagination::GetDevicePositionHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDevicePositions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicePositionsRequest,
                                    Pagination::ListDevicePositionsPaginationTraits<DerivedClient>>
  ListDevicePositionsPaginator(const Model::ListDevicePositionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicePositionsRequest,
                                             Pagination::ListDevicePositionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGeofenceCollections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGeofenceCollectionsRequest,
                                    Pagination::ListGeofenceCollectionsPaginationTraits<DerivedClient>>
  ListGeofenceCollectionsPaginator(const Model::ListGeofenceCollectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGeofenceCollectionsRequest,
                                             Pagination::ListGeofenceCollectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGeofences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGeofencesRequest, Pagination::ListGeofencesPaginationTraits<DerivedClient>>
  ListGeofencesPaginator(const Model::ListGeofencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGeofencesRequest,
                                             Pagination::ListGeofencesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeysRequest, Pagination::ListKeysPaginationTraits<DerivedClient>>
  ListKeysPaginator(const Model::ListKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeysRequest, Pagination::ListKeysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMaps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMapsRequest, Pagination::ListMapsPaginationTraits<DerivedClient>>
  ListMapsPaginator(const Model::ListMapsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMapsRequest, Pagination::ListMapsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPlaceIndexes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlaceIndexesRequest,
                                    Pagination::ListPlaceIndexesPaginationTraits<DerivedClient>>
  ListPlaceIndexesPaginator(const Model::ListPlaceIndexesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlaceIndexesRequest,
                                             Pagination::ListPlaceIndexesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRouteCalculators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRouteCalculatorsRequest,
                                    Pagination::ListRouteCalculatorsPaginationTraits<DerivedClient>>
  ListRouteCalculatorsPaginator(const Model::ListRouteCalculatorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRouteCalculatorsRequest,
                                             Pagination::ListRouteCalculatorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrackerConsumers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrackerConsumersRequest,
                                    Pagination::ListTrackerConsumersPaginationTraits<DerivedClient>>
  ListTrackerConsumersPaginator(const Model::ListTrackerConsumersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrackerConsumersRequest,
                                             Pagination::ListTrackerConsumersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrackers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrackersRequest, Pagination::ListTrackersPaginationTraits<DerivedClient>>
  ListTrackersPaginator(const Model::ListTrackersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrackersRequest,
                                             Pagination::ListTrackersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace LocationService
}  // namespace Aws
