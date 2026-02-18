/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace FSx {

class FSxClient;

template <typename DerivedClient>
class FSxPaginationBase {
 public:
  /**
   * Create a paginator for DescribeBackups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBackupsRequest,
                                    Pagination::DescribeBackupsPaginationTraits<DerivedClient>>
  DescribeBackupsPaginator(const Model::DescribeBackupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBackupsRequest,
                                             Pagination::DescribeBackupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for DescribeDataRepositoryAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataRepositoryAssociationsRequest,
                                    Pagination::DescribeDataRepositoryAssociationsPaginationTraits<DerivedClient>>
  DescribeDataRepositoryAssociationsPaginator(const Model::DescribeDataRepositoryAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataRepositoryAssociationsRequest,
                                             Pagination::DescribeDataRepositoryAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDataRepositoryTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataRepositoryTasksRequest,
                                    Pagination::DescribeDataRepositoryTasksPaginationTraits<DerivedClient>>
  DescribeDataRepositoryTasksPaginator(const Model::DescribeDataRepositoryTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataRepositoryTasksRequest,
                                             Pagination::DescribeDataRepositoryTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFileCaches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFileCachesRequest,
                                    Pagination::DescribeFileCachesPaginationTraits<DerivedClient>>
  DescribeFileCachesPaginator(const Model::DescribeFileCachesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFileCachesRequest,
                                             Pagination::DescribeFileCachesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFileSystemAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFileSystemAliasesRequest,
                                    Pagination::DescribeFileSystemAliasesPaginationTraits<DerivedClient>>
  DescribeFileSystemAliasesPaginator(const Model::DescribeFileSystemAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFileSystemAliasesRequest,
                                             Pagination::DescribeFileSystemAliasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFileSystems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFileSystemsRequest,
                                    Pagination::DescribeFileSystemsPaginationTraits<DerivedClient>>
  DescribeFileSystemsPaginator(const Model::DescribeFileSystemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFileSystemsRequest,
                                             Pagination::DescribeFileSystemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeS3AccessPointAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeS3AccessPointAttachmentsRequest,
                                    Pagination::DescribeS3AccessPointAttachmentsPaginationTraits<DerivedClient>>
  DescribeS3AccessPointAttachmentsPaginator(const Model::DescribeS3AccessPointAttachmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeS3AccessPointAttachmentsRequest,
                                             Pagination::DescribeS3AccessPointAttachmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                    Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>
  DescribeSnapshotsPaginator(const Model::DescribeSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                             Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeStorageVirtualMachines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStorageVirtualMachinesRequest,
                                    Pagination::DescribeStorageVirtualMachinesPaginationTraits<DerivedClient>>
  DescribeStorageVirtualMachinesPaginator(const Model::DescribeStorageVirtualMachinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStorageVirtualMachinesRequest,
                                             Pagination::DescribeStorageVirtualMachinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVolumes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVolumesRequest,
                                    Pagination::DescribeVolumesPaginationTraits<DerivedClient>>
  DescribeVolumesPaginator(const Model::DescribeVolumesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVolumesRequest,
                                             Pagination::DescribeVolumesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace FSx
}  // namespace Aws
