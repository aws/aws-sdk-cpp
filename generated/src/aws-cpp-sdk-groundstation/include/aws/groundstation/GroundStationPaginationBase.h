/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/groundstation/model/ListConfigsPaginationTraits.h>
#include <aws/groundstation/model/ListContactsPaginationTraits.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsPaginationTraits.h>
#include <aws/groundstation/model/ListEphemeridesPaginationTraits.h>
#include <aws/groundstation/model/ListGroundStationsPaginationTraits.h>
#include <aws/groundstation/model/ListMissionProfilesPaginationTraits.h>
#include <aws/groundstation/model/ListSatellitesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace GroundStation {

class GroundStationClient;

template <typename DerivedClient>
class GroundStationPaginationBase {
 public:
  /**
   * Create a paginator for ListConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigsRequest, Pagination::ListConfigsPaginationTraits<DerivedClient>>
  ListConfigsPaginator(const Model::ListConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigsRequest,
                                             Pagination::ListConfigsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListContacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactsRequest, Pagination::ListContactsPaginationTraits<DerivedClient>>
  ListContactsPaginator(const Model::ListContactsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactsRequest,
                                             Pagination::ListContactsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListDataflowEndpointGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataflowEndpointGroupsRequest,
                                    Pagination::ListDataflowEndpointGroupsPaginationTraits<DerivedClient>>
  ListDataflowEndpointGroupsPaginator(const Model::ListDataflowEndpointGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataflowEndpointGroupsRequest,
                                             Pagination::ListDataflowEndpointGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEphemerides operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEphemeridesRequest,
                                    Pagination::ListEphemeridesPaginationTraits<DerivedClient>>
  ListEphemeridesPaginator(const Model::ListEphemeridesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEphemeridesRequest,
                                             Pagination::ListEphemeridesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListGroundStations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroundStationsRequest,
                                    Pagination::ListGroundStationsPaginationTraits<DerivedClient>>
  ListGroundStationsPaginator(const Model::ListGroundStationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroundStationsRequest,
                                             Pagination::ListGroundStationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMissionProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMissionProfilesRequest,
                                    Pagination::ListMissionProfilesPaginationTraits<DerivedClient>>
  ListMissionProfilesPaginator(const Model::ListMissionProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMissionProfilesRequest,
                                             Pagination::ListMissionProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSatellites operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSatellitesRequest, Pagination::ListSatellitesPaginationTraits<DerivedClient>>
  ListSatellitesPaginator(const Model::ListSatellitesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSatellitesRequest,
                                             Pagination::ListSatellitesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace GroundStation
}  // namespace Aws
