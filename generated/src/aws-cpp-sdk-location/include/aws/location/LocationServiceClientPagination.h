/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/location/LocationServiceClient.h>
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

namespace Aws {
namespace LocationService {

using ForecastGeofenceEventsPaginator =
    Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ForecastGeofenceEventsRequest,
                                      Pagination::ForecastGeofenceEventsPaginationTraits<LocationServiceClient>>;
using GetDevicePositionHistoryPaginator =
    Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::GetDevicePositionHistoryRequest,
                                      Pagination::GetDevicePositionHistoryPaginationTraits<LocationServiceClient>>;
using ListDevicePositionsPaginator =
    Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListDevicePositionsRequest,
                                      Pagination::ListDevicePositionsPaginationTraits<LocationServiceClient>>;
using ListGeofenceCollectionsPaginator =
    Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListGeofenceCollectionsRequest,
                                      Pagination::ListGeofenceCollectionsPaginationTraits<LocationServiceClient>>;
using ListGeofencesPaginator = Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListGeofencesRequest,
                                                                 Pagination::ListGeofencesPaginationTraits<LocationServiceClient>>;
using ListKeysPaginator = Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListKeysRequest,
                                                            Pagination::ListKeysPaginationTraits<LocationServiceClient>>;
using ListMapsPaginator = Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListMapsRequest,
                                                            Pagination::ListMapsPaginationTraits<LocationServiceClient>>;
using ListPlaceIndexesPaginator = Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListPlaceIndexesRequest,
                                                                    Pagination::ListPlaceIndexesPaginationTraits<LocationServiceClient>>;
using ListRouteCalculatorsPaginator =
    Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListRouteCalculatorsRequest,
                                      Pagination::ListRouteCalculatorsPaginationTraits<LocationServiceClient>>;
using ListTrackerConsumersPaginator =
    Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListTrackerConsumersRequest,
                                      Pagination::ListTrackerConsumersPaginationTraits<LocationServiceClient>>;
using ListTrackersPaginator = Aws::Utils::Pagination::Paginator<LocationServiceClient, Model::ListTrackersRequest,
                                                                Pagination::ListTrackersPaginationTraits<LocationServiceClient>>;

}  // namespace LocationService
}  // namespace Aws
