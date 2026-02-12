/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticfilesystem/EFSClient.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsPaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsPaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsPaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsPaginationTraits.h>
#include <aws/elasticfilesystem/model/ListTagsForResourcePaginationTraits.h>

namespace Aws {
namespace EFS {

using DescribeAccessPointsPaginator = Aws::Utils::Pagination::Paginator<EFSClient, Model::DescribeAccessPointsRequest,
                                                                        Pagination::DescribeAccessPointsPaginationTraits<EFSClient>>;
using DescribeFileSystemsPaginator = Aws::Utils::Pagination::Paginator<EFSClient, Model::DescribeFileSystemsRequest,
                                                                       Pagination::DescribeFileSystemsPaginationTraits<EFSClient>>;
using DescribeMountTargetsPaginator = Aws::Utils::Pagination::Paginator<EFSClient, Model::DescribeMountTargetsRequest,
                                                                        Pagination::DescribeMountTargetsPaginationTraits<EFSClient>>;
using DescribeReplicationConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<EFSClient, Model::DescribeReplicationConfigurationsRequest,
                                      Pagination::DescribeReplicationConfigurationsPaginationTraits<EFSClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<EFSClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<EFSClient>>;

}  // namespace EFS
}  // namespace Aws
