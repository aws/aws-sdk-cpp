/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/docdb-elastic/model/ListClusterSnapshotsPaginationTraits.h>
#include <aws/docdb-elastic/model/ListClustersPaginationTraits.h>
#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DocDBElastic {

class DocDBElasticClient;

template <typename DerivedClient>
class DocDBElasticPaginationBase {
 public:
  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListClusterSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterSnapshotsRequest,
                                    Pagination::ListClusterSnapshotsPaginationTraits<DerivedClient>>
  ListClusterSnapshotsPaginator(const Model::ListClusterSnapshotsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterSnapshotsRequest,
                                             Pagination::ListClusterSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPendingMaintenanceActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPendingMaintenanceActionsRequest,
                                    Pagination::ListPendingMaintenanceActionsPaginationTraits<DerivedClient>>
  ListPendingMaintenanceActionsPaginator(const Model::ListPendingMaintenanceActionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPendingMaintenanceActionsRequest,
                                             Pagination::ListPendingMaintenanceActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace DocDBElastic
}  // namespace Aws
