/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/docdb/DocDBClient.h>
#include <aws/docdb/model/DescribeCertificatesPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClusterParameterGroupsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClusterParametersPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClustersPaginationTraits.h>
#include <aws/docdb/model/DescribeDBEngineVersionsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBInstancesPaginationTraits.h>
#include <aws/docdb/model/DescribeDBSubnetGroupsPaginationTraits.h>
#include <aws/docdb/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/docdb/model/DescribeEventsPaginationTraits.h>
#include <aws/docdb/model/DescribeGlobalClustersPaginationTraits.h>
#include <aws/docdb/model/DescribeOrderableDBInstanceOptionsPaginationTraits.h>
#include <aws/docdb/model/DescribePendingMaintenanceActionsPaginationTraits.h>

namespace Aws {
namespace DocDB {

using DescribeCertificatesPaginator = Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeCertificatesRequest,
                                                                        Pagination::DescribeCertificatesPaginationTraits<DocDBClient>>;
using DescribeDBClusterParameterGroupsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeDBClusterParameterGroupsRequest,
                                      Pagination::DescribeDBClusterParameterGroupsPaginationTraits<DocDBClient>>;
using DescribeDBClusterParametersPaginator =
    Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeDBClusterParametersRequest,
                                      Pagination::DescribeDBClusterParametersPaginationTraits<DocDBClient>>;
using DescribeDBClustersPaginator = Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeDBClustersRequest,
                                                                      Pagination::DescribeDBClustersPaginationTraits<DocDBClient>>;
using DescribeDBClusterSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeDBClusterSnapshotsRequest,
                                      Pagination::DescribeDBClusterSnapshotsPaginationTraits<DocDBClient>>;
using DescribeDBEngineVersionsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeDBEngineVersionsRequest,
                                      Pagination::DescribeDBEngineVersionsPaginationTraits<DocDBClient>>;
using DescribeDBInstancesPaginator = Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeDBInstancesRequest,
                                                                       Pagination::DescribeDBInstancesPaginationTraits<DocDBClient>>;
using DescribeDBSubnetGroupsPaginator = Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeDBSubnetGroupsRequest,
                                                                          Pagination::DescribeDBSubnetGroupsPaginationTraits<DocDBClient>>;
using DescribeEventsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DocDBClient>>;
using DescribeEventSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeEventSubscriptionsRequest,
                                      Pagination::DescribeEventSubscriptionsPaginationTraits<DocDBClient>>;
using DescribeGlobalClustersPaginator = Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeGlobalClustersRequest,
                                                                          Pagination::DescribeGlobalClustersPaginationTraits<DocDBClient>>;
using DescribeOrderableDBInstanceOptionsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribeOrderableDBInstanceOptionsRequest,
                                      Pagination::DescribeOrderableDBInstanceOptionsPaginationTraits<DocDBClient>>;
using DescribePendingMaintenanceActionsPaginator =
    Aws::Utils::Pagination::Paginator<DocDBClient, Model::DescribePendingMaintenanceActionsRequest,
                                      Pagination::DescribePendingMaintenanceActionsPaginationTraits<DocDBClient>>;

}  // namespace DocDB
}  // namespace Aws
