/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTowerClient.h>
#include <aws/controltower/model/ListBaselinesPaginationTraits.h>
#include <aws/controltower/model/ListControlOperationsPaginationTraits.h>
#include <aws/controltower/model/ListEnabledBaselinesPaginationTraits.h>
#include <aws/controltower/model/ListEnabledControlsPaginationTraits.h>
#include <aws/controltower/model/ListLandingZoneOperationsPaginationTraits.h>
#include <aws/controltower/model/ListLandingZonesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ControlTower {

using ListBaselinesPaginator = Aws::Utils::Pagination::Paginator<ControlTowerClient, Model::ListBaselinesRequest,
                                                                 Pagination::ListBaselinesPaginationTraits<ControlTowerClient>>;
using ListControlOperationsPaginator =
    Aws::Utils::Pagination::Paginator<ControlTowerClient, Model::ListControlOperationsRequest,
                                      Pagination::ListControlOperationsPaginationTraits<ControlTowerClient>>;
using ListEnabledBaselinesPaginator =
    Aws::Utils::Pagination::Paginator<ControlTowerClient, Model::ListEnabledBaselinesRequest,
                                      Pagination::ListEnabledBaselinesPaginationTraits<ControlTowerClient>>;
using ListEnabledControlsPaginator = Aws::Utils::Pagination::Paginator<ControlTowerClient, Model::ListEnabledControlsRequest,
                                                                       Pagination::ListEnabledControlsPaginationTraits<ControlTowerClient>>;
using ListLandingZoneOperationsPaginator =
    Aws::Utils::Pagination::Paginator<ControlTowerClient, Model::ListLandingZoneOperationsRequest,
                                      Pagination::ListLandingZoneOperationsPaginationTraits<ControlTowerClient>>;
using ListLandingZonesPaginator = Aws::Utils::Pagination::Paginator<ControlTowerClient, Model::ListLandingZonesRequest,
                                                                    Pagination::ListLandingZonesPaginationTraits<ControlTowerClient>>;

}  // namespace ControlTower
}  // namespace Aws
