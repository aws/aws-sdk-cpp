/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabricClient.h>
#include <aws/appfabric/model/ListAppAuthorizationsPaginationTraits.h>
#include <aws/appfabric/model/ListAppBundlesPaginationTraits.h>
#include <aws/appfabric/model/ListIngestionDestinationsPaginationTraits.h>
#include <aws/appfabric/model/ListIngestionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AppFabric {

using ListAppAuthorizationsPaginator =
    Aws::Utils::Pagination::Paginator<AppFabricClient, Model::ListAppAuthorizationsRequest,
                                      Pagination::ListAppAuthorizationsPaginationTraits<AppFabricClient>>;
using ListAppBundlesPaginator = Aws::Utils::Pagination::Paginator<AppFabricClient, Model::ListAppBundlesRequest,
                                                                  Pagination::ListAppBundlesPaginationTraits<AppFabricClient>>;
using ListIngestionDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<AppFabricClient, Model::ListIngestionDestinationsRequest,
                                      Pagination::ListIngestionDestinationsPaginationTraits<AppFabricClient>>;
using ListIngestionsPaginator = Aws::Utils::Pagination::Paginator<AppFabricClient, Model::ListIngestionsRequest,
                                                                  Pagination::ListIngestionsPaginationTraits<AppFabricClient>>;

}  // namespace AppFabric
}  // namespace Aws
