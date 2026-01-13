/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationOperationsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace KinesisAnalyticsV2 {

class KinesisAnalyticsV2Client;

template <typename DerivedClient>
class KinesisAnalyticsV2PaginationBase {
 public:
  /**
   * Create a paginator for ListApplicationOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationOperationsRequest,
                                    Pagination::ListApplicationOperationsPaginationTraits<DerivedClient>>
  ListApplicationOperationsPaginator(const Model::ListApplicationOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationOperationsRequest,
                                             Pagination::ListApplicationOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListApplicationSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationSnapshotsRequest,
                                    Pagination::ListApplicationSnapshotsPaginationTraits<DerivedClient>>
  ListApplicationSnapshotsPaginator(const Model::ListApplicationSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationSnapshotsRequest,
                                             Pagination::ListApplicationSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationVersionsRequest,
                                    Pagination::ListApplicationVersionsPaginationTraits<DerivedClient>>
  ListApplicationVersionsPaginator(const Model::ListApplicationVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationVersionsRequest,
                                             Pagination::ListApplicationVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
