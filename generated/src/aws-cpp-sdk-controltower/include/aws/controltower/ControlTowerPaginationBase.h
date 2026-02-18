/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/controltower/model/ListBaselinesPaginationTraits.h>
#include <aws/controltower/model/ListControlOperationsPaginationTraits.h>
#include <aws/controltower/model/ListEnabledBaselinesPaginationTraits.h>
#include <aws/controltower/model/ListEnabledControlsPaginationTraits.h>
#include <aws/controltower/model/ListLandingZoneOperationsPaginationTraits.h>
#include <aws/controltower/model/ListLandingZonesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ControlTower {

class ControlTowerClient;

template <typename DerivedClient>
class ControlTowerPaginationBase {
 public:
  /**
   * Create a paginator for ListBaselines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBaselinesRequest, Pagination::ListBaselinesPaginationTraits<DerivedClient>>
  ListBaselinesPaginator(const Model::ListBaselinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBaselinesRequest,
                                             Pagination::ListBaselinesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListControlOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlOperationsRequest,
                                    Pagination::ListControlOperationsPaginationTraits<DerivedClient>>
  ListControlOperationsPaginator(const Model::ListControlOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlOperationsRequest,
                                             Pagination::ListControlOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnabledBaselines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnabledBaselinesRequest,
                                    Pagination::ListEnabledBaselinesPaginationTraits<DerivedClient>>
  ListEnabledBaselinesPaginator(const Model::ListEnabledBaselinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnabledBaselinesRequest,
                                             Pagination::ListEnabledBaselinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnabledControls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnabledControlsRequest,
                                    Pagination::ListEnabledControlsPaginationTraits<DerivedClient>>
  ListEnabledControlsPaginator(const Model::ListEnabledControlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnabledControlsRequest,
                                             Pagination::ListEnabledControlsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLandingZoneOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLandingZoneOperationsRequest,
                                    Pagination::ListLandingZoneOperationsPaginationTraits<DerivedClient>>
  ListLandingZoneOperationsPaginator(const Model::ListLandingZoneOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLandingZoneOperationsRequest,
                                             Pagination::ListLandingZoneOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLandingZones operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLandingZonesRequest,
                                    Pagination::ListLandingZonesPaginationTraits<DerivedClient>>
  ListLandingZonesPaginator(const Model::ListLandingZonesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLandingZonesRequest,
                                             Pagination::ListLandingZonesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace ControlTower
}  // namespace Aws
