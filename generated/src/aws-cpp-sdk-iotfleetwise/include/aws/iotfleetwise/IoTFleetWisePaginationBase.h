/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotfleetwise/model/GetVehicleStatusPaginationTraits.h>
#include <aws/iotfleetwise/model/ListCampaignsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListDecoderManifestNetworkInterfacesPaginationTraits.h>
#include <aws/iotfleetwise/model/ListDecoderManifestSignalsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListDecoderManifestsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListFleetsForVehiclePaginationTraits.h>
#include <aws/iotfleetwise/model/ListFleetsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListModelManifestNodesPaginationTraits.h>
#include <aws/iotfleetwise/model/ListModelManifestsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListSignalCatalogNodesPaginationTraits.h>
#include <aws/iotfleetwise/model/ListSignalCatalogsPaginationTraits.h>
#include <aws/iotfleetwise/model/ListStateTemplatesPaginationTraits.h>
#include <aws/iotfleetwise/model/ListVehiclesInFleetPaginationTraits.h>
#include <aws/iotfleetwise/model/ListVehiclesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IoTFleetWise {

class IoTFleetWiseClient;

template <typename DerivedClient>
class IoTFleetWisePaginationBase {
 public:
  /**
   * Create a paginator for GetVehicleStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetVehicleStatusRequest,
                                    Pagination::GetVehicleStatusPaginationTraits<DerivedClient>>
  GetVehicleStatusPaginator(const Model::GetVehicleStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetVehicleStatusRequest,
                                             Pagination::GetVehicleStatusPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCampaigns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignsRequest, Pagination::ListCampaignsPaginationTraits<DerivedClient>>
  ListCampaignsPaginator(const Model::ListCampaignsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignsRequest,
                                             Pagination::ListCampaignsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListDecoderManifestNetworkInterfaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDecoderManifestNetworkInterfacesRequest,
                                    Pagination::ListDecoderManifestNetworkInterfacesPaginationTraits<DerivedClient>>
  ListDecoderManifestNetworkInterfacesPaginator(const Model::ListDecoderManifestNetworkInterfacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDecoderManifestNetworkInterfacesRequest,
                                             Pagination::ListDecoderManifestNetworkInterfacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDecoderManifests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDecoderManifestsRequest,
                                    Pagination::ListDecoderManifestsPaginationTraits<DerivedClient>>
  ListDecoderManifestsPaginator(const Model::ListDecoderManifestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDecoderManifestsRequest,
                                             Pagination::ListDecoderManifestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDecoderManifestSignals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDecoderManifestSignalsRequest,
                                    Pagination::ListDecoderManifestSignalsPaginationTraits<DerivedClient>>
  ListDecoderManifestSignalsPaginator(const Model::ListDecoderManifestSignalsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDecoderManifestSignalsRequest,
                                             Pagination::ListDecoderManifestSignalsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsRequest, Pagination::ListFleetsPaginationTraits<DerivedClient>>
  ListFleetsPaginator(const Model::ListFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsRequest,
                                             Pagination::ListFleetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListFleetsForVehicle operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsForVehicleRequest,
                                    Pagination::ListFleetsForVehiclePaginationTraits<DerivedClient>>
  ListFleetsForVehiclePaginator(const Model::ListFleetsForVehicleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsForVehicleRequest,
                                             Pagination::ListFleetsForVehiclePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelManifestNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelManifestNodesRequest,
                                    Pagination::ListModelManifestNodesPaginationTraits<DerivedClient>>
  ListModelManifestNodesPaginator(const Model::ListModelManifestNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelManifestNodesRequest,
                                             Pagination::ListModelManifestNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelManifests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelManifestsRequest,
                                    Pagination::ListModelManifestsPaginationTraits<DerivedClient>>
  ListModelManifestsPaginator(const Model::ListModelManifestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelManifestsRequest,
                                             Pagination::ListModelManifestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSignalCatalogNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSignalCatalogNodesRequest,
                                    Pagination::ListSignalCatalogNodesPaginationTraits<DerivedClient>>
  ListSignalCatalogNodesPaginator(const Model::ListSignalCatalogNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSignalCatalogNodesRequest,
                                             Pagination::ListSignalCatalogNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSignalCatalogs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSignalCatalogsRequest,
                                    Pagination::ListSignalCatalogsPaginationTraits<DerivedClient>>
  ListSignalCatalogsPaginator(const Model::ListSignalCatalogsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSignalCatalogsRequest,
                                             Pagination::ListSignalCatalogsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStateTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStateTemplatesRequest,
                                    Pagination::ListStateTemplatesPaginationTraits<DerivedClient>>
  ListStateTemplatesPaginator(const Model::ListStateTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStateTemplatesRequest,
                                             Pagination::ListStateTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVehicles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVehiclesRequest, Pagination::ListVehiclesPaginationTraits<DerivedClient>>
  ListVehiclesPaginator(const Model::ListVehiclesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVehiclesRequest,
                                             Pagination::ListVehiclesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListVehiclesInFleet operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVehiclesInFleetRequest,
                                    Pagination::ListVehiclesInFleetPaginationTraits<DerivedClient>>
  ListVehiclesInFleetPaginator(const Model::ListVehiclesInFleetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVehiclesInFleetRequest,
                                             Pagination::ListVehiclesInFleetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IoTFleetWise
}  // namespace Aws
