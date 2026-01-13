/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/datasync/DataSyncClient.h>
#include <aws/datasync/model/ListAgentsPaginationTraits.h>
#include <aws/datasync/model/ListLocationsPaginationTraits.h>
#include <aws/datasync/model/ListTagsForResourcePaginationTraits.h>
#include <aws/datasync/model/ListTaskExecutionsPaginationTraits.h>
#include <aws/datasync/model/ListTasksPaginationTraits.h>

namespace Aws {
namespace DataSync {

using ListAgentsPaginator =
    Aws::Utils::Pagination::Paginator<DataSyncClient, Model::ListAgentsRequest, Pagination::ListAgentsPaginationTraits<DataSyncClient>>;
using ListLocationsPaginator = Aws::Utils::Pagination::Paginator<DataSyncClient, Model::ListLocationsRequest,
                                                                 Pagination::ListLocationsPaginationTraits<DataSyncClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<DataSyncClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<DataSyncClient>>;
using ListTaskExecutionsPaginator = Aws::Utils::Pagination::Paginator<DataSyncClient, Model::ListTaskExecutionsRequest,
                                                                      Pagination::ListTaskExecutionsPaginationTraits<DataSyncClient>>;
using ListTasksPaginator =
    Aws::Utils::Pagination::Paginator<DataSyncClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DataSyncClient>>;

}  // namespace DataSync
}  // namespace Aws
