/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShiftClient.h>
#include <aws/arc-zonal-shift/model/ListAutoshiftsPaginationTraits.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesPaginationTraits.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ARCZonalShift {

using ListAutoshiftsPaginator = Aws::Utils::Pagination::Paginator<ARCZonalShiftClient, Model::ListAutoshiftsRequest,
                                                                  Pagination::ListAutoshiftsPaginationTraits<ARCZonalShiftClient>>;
using ListManagedResourcesPaginator =
    Aws::Utils::Pagination::Paginator<ARCZonalShiftClient, Model::ListManagedResourcesRequest,
                                      Pagination::ListManagedResourcesPaginationTraits<ARCZonalShiftClient>>;
using ListZonalShiftsPaginator = Aws::Utils::Pagination::Paginator<ARCZonalShiftClient, Model::ListZonalShiftsRequest,
                                                                   Pagination::ListZonalShiftsPaginationTraits<ARCZonalShiftClient>>;

}  // namespace ARCZonalShift
}  // namespace Aws
