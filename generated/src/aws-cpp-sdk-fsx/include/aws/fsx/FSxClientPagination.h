/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/fsx/FSxClient.h>
#include <aws/fsx/model/DescribeBackupsPaginationTraits.h>
#include <aws/fsx/model/DescribeDataRepositoryAssociationsPaginationTraits.h>
#include <aws/fsx/model/DescribeDataRepositoryTasksPaginationTraits.h>
#include <aws/fsx/model/DescribeFileCachesPaginationTraits.h>
#include <aws/fsx/model/DescribeFileSystemAliasesPaginationTraits.h>
#include <aws/fsx/model/DescribeFileSystemsPaginationTraits.h>
#include <aws/fsx/model/DescribeS3AccessPointAttachmentsPaginationTraits.h>
#include <aws/fsx/model/DescribeSnapshotsPaginationTraits.h>
#include <aws/fsx/model/DescribeStorageVirtualMachinesPaginationTraits.h>
#include <aws/fsx/model/DescribeVolumesPaginationTraits.h>
#include <aws/fsx/model/ListTagsForResourcePaginationTraits.h>

namespace Aws {
namespace FSx {

using DescribeBackupsPaginator =
    Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeBackupsRequest, Pagination::DescribeBackupsPaginationTraits<FSxClient>>;
using DescribeDataRepositoryAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeDataRepositoryAssociationsRequest,
                                      Pagination::DescribeDataRepositoryAssociationsPaginationTraits<FSxClient>>;
using DescribeDataRepositoryTasksPaginator =
    Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeDataRepositoryTasksRequest,
                                      Pagination::DescribeDataRepositoryTasksPaginationTraits<FSxClient>>;
using DescribeFileCachesPaginator = Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeFileCachesRequest,
                                                                      Pagination::DescribeFileCachesPaginationTraits<FSxClient>>;
using DescribeFileSystemAliasesPaginator =
    Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeFileSystemAliasesRequest,
                                      Pagination::DescribeFileSystemAliasesPaginationTraits<FSxClient>>;
using DescribeFileSystemsPaginator = Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeFileSystemsRequest,
                                                                       Pagination::DescribeFileSystemsPaginationTraits<FSxClient>>;
using DescribeS3AccessPointAttachmentsPaginator =
    Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeS3AccessPointAttachmentsRequest,
                                      Pagination::DescribeS3AccessPointAttachmentsPaginationTraits<FSxClient>>;
using DescribeSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeSnapshotsRequest, Pagination::DescribeSnapshotsPaginationTraits<FSxClient>>;
using DescribeStorageVirtualMachinesPaginator =
    Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeStorageVirtualMachinesRequest,
                                      Pagination::DescribeStorageVirtualMachinesPaginationTraits<FSxClient>>;
using DescribeVolumesPaginator =
    Aws::Utils::Pagination::Paginator<FSxClient, Model::DescribeVolumesRequest, Pagination::DescribeVolumesPaginationTraits<FSxClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<FSxClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<FSxClient>>;

}  // namespace FSx
}  // namespace Aws
