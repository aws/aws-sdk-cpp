/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cloudhsmv2/model/DescribeBackupsPaginationTraits.h>
#include <aws/cloudhsmv2/model/DescribeClustersPaginationTraits.h>
#include <aws/cloudhsmv2/model/ListTagsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudHSMV2 {

class CloudHSMV2Client;

template <typename DerivedClient>
class CloudHSMV2PaginationBase {
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
   * Create a paginator for DescribeClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClustersRequest,
                                    Pagination::DescribeClustersPaginationTraits<DerivedClient>>
  DescribeClustersPaginator(const Model::DescribeClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClustersRequest,
                                             Pagination::DescribeClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>
  ListTagsPaginator(const Model::ListTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CloudHSMV2
}  // namespace Aws
