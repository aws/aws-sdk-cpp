/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnectionsClient.h>
#include <aws/codeconnections/model/ListConnectionsPaginationTraits.h>
#include <aws/codeconnections/model/ListHostsPaginationTraits.h>
#include <aws/codeconnections/model/ListRepositoryLinksPaginationTraits.h>
#include <aws/codeconnections/model/ListSyncConfigurationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeConnections {

using ListConnectionsPaginator = Aws::Utils::Pagination::Paginator<CodeConnectionsClient, Model::ListConnectionsRequest,
                                                                   Pagination::ListConnectionsPaginationTraits<CodeConnectionsClient>>;
using ListHostsPaginator = Aws::Utils::Pagination::Paginator<CodeConnectionsClient, Model::ListHostsRequest,
                                                             Pagination::ListHostsPaginationTraits<CodeConnectionsClient>>;
using ListRepositoryLinksPaginator =
    Aws::Utils::Pagination::Paginator<CodeConnectionsClient, Model::ListRepositoryLinksRequest,
                                      Pagination::ListRepositoryLinksPaginationTraits<CodeConnectionsClient>>;
using ListSyncConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<CodeConnectionsClient, Model::ListSyncConfigurationsRequest,
                                      Pagination::ListSyncConfigurationsPaginationTraits<CodeConnectionsClient>>;

}  // namespace CodeConnections
}  // namespace Aws
