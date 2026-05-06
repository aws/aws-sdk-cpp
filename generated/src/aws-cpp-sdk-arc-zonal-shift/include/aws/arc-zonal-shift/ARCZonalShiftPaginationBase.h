/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/arc-zonal-shift/model/ListAutoshiftsPaginationTraits.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesPaginationTraits.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ARCZonalShift {

template <typename DerivedClient>
class ARCZonalShiftPaginationBase {
 public:
  /**
   * Create a paginator for ListAutoshifts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutoshiftsRequest, Pagination::ListAutoshiftsPaginationTraits<DerivedClient>>
  ListAutoshiftsPaginator(const Model::ListAutoshiftsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutoshiftsRequest,
                                             Pagination::ListAutoshiftsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListManagedResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedResourcesRequest,
                                    Pagination::ListManagedResourcesPaginationTraits<DerivedClient>>
  ListManagedResourcesPaginator(const Model::ListManagedResourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedResourcesRequest,
                                             Pagination::ListManagedResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListZonalShifts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListZonalShiftsRequest,
                                    Pagination::ListZonalShiftsPaginationTraits<DerivedClient>>
  ListZonalShiftsPaginator(const Model::ListZonalShiftsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListZonalShiftsRequest,
                                             Pagination::ListZonalShiftsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace ARCZonalShift
}  // namespace Aws
