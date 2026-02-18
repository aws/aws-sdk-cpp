/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/drs/DrsClient.h>
#include <aws/drs/model/DescribeJobLogItemsPaginationTraits.h>
#include <aws/drs/model/DescribeJobsPaginationTraits.h>
#include <aws/drs/model/DescribeLaunchConfigurationTemplatesPaginationTraits.h>
#include <aws/drs/model/DescribeRecoveryInstancesPaginationTraits.h>
#include <aws/drs/model/DescribeRecoverySnapshotsPaginationTraits.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesPaginationTraits.h>
#include <aws/drs/model/DescribeSourceNetworksPaginationTraits.h>
#include <aws/drs/model/DescribeSourceServersPaginationTraits.h>
#include <aws/drs/model/ListExtensibleSourceServersPaginationTraits.h>
#include <aws/drs/model/ListLaunchActionsPaginationTraits.h>
#include <aws/drs/model/ListStagingAccountsPaginationTraits.h>

namespace Aws {
namespace drs {

using DescribeJobLogItemsPaginator = Aws::Utils::Pagination::Paginator<DrsClient, Model::DescribeJobLogItemsRequest,
                                                                       Pagination::DescribeJobLogItemsPaginationTraits<DrsClient>>;
using DescribeJobsPaginator =
    Aws::Utils::Pagination::Paginator<DrsClient, Model::DescribeJobsRequest, Pagination::DescribeJobsPaginationTraits<DrsClient>>;
using DescribeLaunchConfigurationTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<DrsClient, Model::DescribeLaunchConfigurationTemplatesRequest,
                                      Pagination::DescribeLaunchConfigurationTemplatesPaginationTraits<DrsClient>>;
using DescribeRecoveryInstancesPaginator =
    Aws::Utils::Pagination::Paginator<DrsClient, Model::DescribeRecoveryInstancesRequest,
                                      Pagination::DescribeRecoveryInstancesPaginationTraits<DrsClient>>;
using DescribeRecoverySnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<DrsClient, Model::DescribeRecoverySnapshotsRequest,
                                      Pagination::DescribeRecoverySnapshotsPaginationTraits<DrsClient>>;
using DescribeReplicationConfigurationTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<DrsClient, Model::DescribeReplicationConfigurationTemplatesRequest,
                                      Pagination::DescribeReplicationConfigurationTemplatesPaginationTraits<DrsClient>>;
using DescribeSourceNetworksPaginator = Aws::Utils::Pagination::Paginator<DrsClient, Model::DescribeSourceNetworksRequest,
                                                                          Pagination::DescribeSourceNetworksPaginationTraits<DrsClient>>;
using DescribeSourceServersPaginator = Aws::Utils::Pagination::Paginator<DrsClient, Model::DescribeSourceServersRequest,
                                                                         Pagination::DescribeSourceServersPaginationTraits<DrsClient>>;
using ListExtensibleSourceServersPaginator =
    Aws::Utils::Pagination::Paginator<DrsClient, Model::ListExtensibleSourceServersRequest,
                                      Pagination::ListExtensibleSourceServersPaginationTraits<DrsClient>>;
using ListLaunchActionsPaginator =
    Aws::Utils::Pagination::Paginator<DrsClient, Model::ListLaunchActionsRequest, Pagination::ListLaunchActionsPaginationTraits<DrsClient>>;
using ListStagingAccountsPaginator = Aws::Utils::Pagination::Paginator<DrsClient, Model::ListStagingAccountsRequest,
                                                                       Pagination::ListStagingAccountsPaginationTraits<DrsClient>>;

}  // namespace drs
}  // namespace Aws
