/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsPaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsPaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsPaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsPaginationTraits.h>
#include <aws/elasticfilesystem/model/ListTagsForResourcePaginationTraits.h>

#include <memory>

namespace Aws {
namespace EFS {

class EFSClient;

template <typename DerivedClient>
class EFSPaginationBase {
 public:
  /**
   * Create a paginator for DescribeAccessPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccessPointsRequest,
                                    Pagination::DescribeAccessPointsPaginationTraits<DerivedClient>>
  DescribeAccessPointsPaginator(const Model::DescribeAccessPointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccessPointsRequest,
                                             Pagination::DescribeAccessPointsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for DescribeMountTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMountTargetsRequest,
                                    Pagination::DescribeMountTargetsPaginationTraits<DerivedClient>>
  DescribeMountTargetsPaginator(const Model::DescribeMountTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMountTargetsRequest,
                                             Pagination::DescribeMountTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationConfigurationsRequest,
                                    Pagination::DescribeReplicationConfigurationsPaginationTraits<DerivedClient>>
  DescribeReplicationConfigurationsPaginator(const Model::DescribeReplicationConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationConfigurationsRequest,
                                             Pagination::DescribeReplicationConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
}  // namespace EFS
}  // namespace Aws
