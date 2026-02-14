/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/docdb-elastic/DocDBElasticClient.h>
#include <aws/docdb-elastic/model/ListClusterSnapshotsPaginationTraits.h>
#include <aws/docdb-elastic/model/ListClustersPaginationTraits.h>
#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsPaginationTraits.h>

namespace Aws {
namespace DocDBElastic {

using ListClustersPaginator = Aws::Utils::Pagination::Paginator<DocDBElasticClient, Model::ListClustersRequest,
                                                                Pagination::ListClustersPaginationTraits<DocDBElasticClient>>;
using ListClusterSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBElasticClient, Model::ListClusterSnapshotsRequest,
                                      Pagination::ListClusterSnapshotsPaginationTraits<DocDBElasticClient>>;
using ListPendingMaintenanceActionsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBElasticClient, Model::ListPendingMaintenanceActionsRequest,
                                      Pagination::ListPendingMaintenanceActionsPaginationTraits<DocDBElasticClient>>;

}  // namespace DocDBElastic
}  // namespace Aws
