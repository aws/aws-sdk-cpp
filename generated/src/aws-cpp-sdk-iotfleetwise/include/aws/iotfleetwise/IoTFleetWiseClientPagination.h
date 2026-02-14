/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotfleetwise/IoTFleetWiseClient.h>
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

namespace Aws {
namespace IoTFleetWise {

using GetVehicleStatusPaginator = Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::GetVehicleStatusRequest,
                                                                    Pagination::GetVehicleStatusPaginationTraits<IoTFleetWiseClient>>;
using ListCampaignsPaginator = Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListCampaignsRequest,
                                                                 Pagination::ListCampaignsPaginationTraits<IoTFleetWiseClient>>;
using ListDecoderManifestNetworkInterfacesPaginator =
    Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListDecoderManifestNetworkInterfacesRequest,
                                      Pagination::ListDecoderManifestNetworkInterfacesPaginationTraits<IoTFleetWiseClient>>;
using ListDecoderManifestsPaginator =
    Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListDecoderManifestsRequest,
                                      Pagination::ListDecoderManifestsPaginationTraits<IoTFleetWiseClient>>;
using ListDecoderManifestSignalsPaginator =
    Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListDecoderManifestSignalsRequest,
                                      Pagination::ListDecoderManifestSignalsPaginationTraits<IoTFleetWiseClient>>;
using ListFleetsPaginator = Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListFleetsRequest,
                                                              Pagination::ListFleetsPaginationTraits<IoTFleetWiseClient>>;
using ListFleetsForVehiclePaginator =
    Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListFleetsForVehicleRequest,
                                      Pagination::ListFleetsForVehiclePaginationTraits<IoTFleetWiseClient>>;
using ListModelManifestNodesPaginator =
    Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListModelManifestNodesRequest,
                                      Pagination::ListModelManifestNodesPaginationTraits<IoTFleetWiseClient>>;
using ListModelManifestsPaginator = Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListModelManifestsRequest,
                                                                      Pagination::ListModelManifestsPaginationTraits<IoTFleetWiseClient>>;
using ListSignalCatalogNodesPaginator =
    Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListSignalCatalogNodesRequest,
                                      Pagination::ListSignalCatalogNodesPaginationTraits<IoTFleetWiseClient>>;
using ListSignalCatalogsPaginator = Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListSignalCatalogsRequest,
                                                                      Pagination::ListSignalCatalogsPaginationTraits<IoTFleetWiseClient>>;
using ListStateTemplatesPaginator = Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListStateTemplatesRequest,
                                                                      Pagination::ListStateTemplatesPaginationTraits<IoTFleetWiseClient>>;
using ListVehiclesPaginator = Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListVehiclesRequest,
                                                                Pagination::ListVehiclesPaginationTraits<IoTFleetWiseClient>>;
using ListVehiclesInFleetPaginator = Aws::Utils::Pagination::Paginator<IoTFleetWiseClient, Model::ListVehiclesInFleetRequest,
                                                                       Pagination::ListVehiclesInFleetPaginationTraits<IoTFleetWiseClient>>;

}  // namespace IoTFleetWise
}  // namespace Aws
