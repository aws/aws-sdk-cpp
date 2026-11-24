/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalClient.h>
#include <aws/apiportal/model/ListApiInventoryItemsPaginationTraits.h>
#include <aws/apiportal/model/ListDiscoveryStatusesPaginationTraits.h>
#include <aws/apiportal/model/ListManagedApiEventsPaginationTraits.h>
#include <aws/apiportal/model/ListManagedApisPaginationTraits.h>
#include <aws/apiportal/model/ListPortalsPaginationTraits.h>
#include <aws/apiportal/model/ListProductApiPagesPaginationTraits.h>
#include <aws/apiportal/model/ListProductPagesPaginationTraits.h>
#include <aws/apiportal/model/ListProductsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace APIPortal {

using ListApiInventoryItemsPaginator =
    Aws::Utils::Pagination::Paginator<APIPortalClient, Model::ListApiInventoryItemsRequest,
                                      Pagination::ListApiInventoryItemsPaginationTraits<APIPortalClient>>;
using ListDiscoveryStatusesPaginator =
    Aws::Utils::Pagination::Paginator<APIPortalClient, Model::ListDiscoveryStatusesRequest,
                                      Pagination::ListDiscoveryStatusesPaginationTraits<APIPortalClient>>;
using ListManagedApiEventsPaginator = Aws::Utils::Pagination::Paginator<APIPortalClient, Model::ListManagedApiEventsRequest,
                                                                        Pagination::ListManagedApiEventsPaginationTraits<APIPortalClient>>;
using ListManagedApisPaginator = Aws::Utils::Pagination::Paginator<APIPortalClient, Model::ListManagedApisRequest,
                                                                   Pagination::ListManagedApisPaginationTraits<APIPortalClient>>;
using ListPortalsPaginator =
    Aws::Utils::Pagination::Paginator<APIPortalClient, Model::ListPortalsRequest, Pagination::ListPortalsPaginationTraits<APIPortalClient>>;
using ListProductApiPagesPaginator = Aws::Utils::Pagination::Paginator<APIPortalClient, Model::ListProductApiPagesRequest,
                                                                       Pagination::ListProductApiPagesPaginationTraits<APIPortalClient>>;
using ListProductPagesPaginator = Aws::Utils::Pagination::Paginator<APIPortalClient, Model::ListProductPagesRequest,
                                                                    Pagination::ListProductPagesPaginationTraits<APIPortalClient>>;
using ListProductsPaginator = Aws::Utils::Pagination::Paginator<APIPortalClient, Model::ListProductsRequest,
                                                                Pagination::ListProductsPaginationTraits<APIPortalClient>>;

}  // namespace APIPortal
}  // namespace Aws
