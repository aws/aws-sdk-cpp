/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/groundstation/GroundStationClient.h>
#include <aws/groundstation/model/ListConfigsPaginationTraits.h>
#include <aws/groundstation/model/ListContactsPaginationTraits.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsPaginationTraits.h>
#include <aws/groundstation/model/ListEphemeridesPaginationTraits.h>
#include <aws/groundstation/model/ListGroundStationsPaginationTraits.h>
#include <aws/groundstation/model/ListMissionProfilesPaginationTraits.h>
#include <aws/groundstation/model/ListSatellitesPaginationTraits.h>

namespace Aws {
namespace GroundStation {

using ListConfigsPaginator = Aws::Utils::Pagination::Paginator<GroundStationClient, Model::ListConfigsRequest,
                                                               Pagination::ListConfigsPaginationTraits<GroundStationClient>>;
using ListContactsPaginator = Aws::Utils::Pagination::Paginator<GroundStationClient, Model::ListContactsRequest,
                                                                Pagination::ListContactsPaginationTraits<GroundStationClient>>;
using ListDataflowEndpointGroupsPaginator =
    Aws::Utils::Pagination::Paginator<GroundStationClient, Model::ListDataflowEndpointGroupsRequest,
                                      Pagination::ListDataflowEndpointGroupsPaginationTraits<GroundStationClient>>;
using ListEphemeridesPaginator = Aws::Utils::Pagination::Paginator<GroundStationClient, Model::ListEphemeridesRequest,
                                                                   Pagination::ListEphemeridesPaginationTraits<GroundStationClient>>;
using ListGroundStationsPaginator = Aws::Utils::Pagination::Paginator<GroundStationClient, Model::ListGroundStationsRequest,
                                                                      Pagination::ListGroundStationsPaginationTraits<GroundStationClient>>;
using ListMissionProfilesPaginator =
    Aws::Utils::Pagination::Paginator<GroundStationClient, Model::ListMissionProfilesRequest,
                                      Pagination::ListMissionProfilesPaginationTraits<GroundStationClient>>;
using ListSatellitesPaginator = Aws::Utils::Pagination::Paginator<GroundStationClient, Model::ListSatellitesRequest,
                                                                  Pagination::ListSatellitesPaginationTraits<GroundStationClient>>;

}  // namespace GroundStation
}  // namespace Aws
