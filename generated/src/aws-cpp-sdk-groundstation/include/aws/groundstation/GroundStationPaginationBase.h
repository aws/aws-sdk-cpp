/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/groundstation/model/ListAntennasPaginationTraits.h>
#include <aws/groundstation/model/ListConfigsPaginationTraits.h>
#include <aws/groundstation/model/ListContactVersionsPaginationTraits.h>
#include <aws/groundstation/model/ListContactsPaginationTraits.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsPaginationTraits.h>
#include <aws/groundstation/model/ListEphemeridesPaginationTraits.h>
#include <aws/groundstation/model/ListGroundStationReservationsPaginationTraits.h>
#include <aws/groundstation/model/ListGroundStationsPaginationTraits.h>
#include <aws/groundstation/model/ListMissionProfilesPaginationTraits.h>
#include <aws/groundstation/model/ListSatellitesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace GroundStation {

template <typename DerivedClient>
class GroundStationPaginationBase {
 public:
  /**
   * Create a paginator for ListAntennas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAntennasRequest, Pagination::ListAntennasPaginationTraits<DerivedClient>>
  ListAntennasPaginator(const Model::ListAntennasRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAntennasRequest,
                                             Pagination::ListAntennasPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigsRequest, Pagination::ListConfigsPaginationTraits<DerivedClient>>
  ListConfigsPaginator(const Model::ListConfigsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigsRequest,
                                             Pagination::ListConfigsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListContacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactsRequest, Pagination::ListContactsPaginationTraits<DerivedClient>>
  ListContactsPaginator(const Model::ListContactsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactsRequest,
                                             Pagination::ListContactsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListContactVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactVersionsRequest,
                                    Pagination::ListContactVersionsPaginationTraits<DerivedClient>>
  ListContactVersionsPaginator(const Model::ListContactVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactVersionsRequest,
                                             Pagination::ListContactVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataflowEndpointGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataflowEndpointGroupsRequest,
                                    Pagination::ListDataflowEndpointGroupsPaginationTraits<DerivedClient>>
  ListDataflowEndpointGroupsPaginator(const Model::ListDataflowEndpointGroupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
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
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEphemeridesRequest,
                                             Pagination::ListEphemeridesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListGroundStationReservations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroundStationReservationsRequest,
                                    Pagination::ListGroundStationReservationsPaginationTraits<DerivedClient>>
  ListGroundStationReservationsPaginator(const Model::ListGroundStationReservationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroundStationReservationsRequest,
                                             Pagination::ListGroundStationReservationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroundStations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroundStationsRequest,
                                    Pagination::ListGroundStationsPaginationTraits<DerivedClient>>
  ListGroundStationsPaginator(const Model::ListGroundStationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
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
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMissionProfilesRequest,
                                             Pagination::ListMissionProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSatellites operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSatellitesRequest, Pagination::ListSatellitesPaginationTraits<DerivedClient>>
  ListSatellitesPaginator(const Model::ListSatellitesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSatellitesRequest,
                                             Pagination::ListSatellitesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace GroundStation
}  // namespace Aws
