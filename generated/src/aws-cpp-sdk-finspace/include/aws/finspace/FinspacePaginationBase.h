/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/finspace/model/ListKxChangesetsPaginationTraits.h>
#include <aws/finspace/model/ListKxClusterNodesPaginationTraits.h>
#include <aws/finspace/model/ListKxDatabasesPaginationTraits.h>
#include <aws/finspace/model/ListKxDataviewsPaginationTraits.h>
#include <aws/finspace/model/ListKxEnvironmentsPaginationTraits.h>
#include <aws/finspace/model/ListKxScalingGroupsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace finspace {

class FinspaceClient;

template <typename DerivedClient>
class FinspacePaginationBase {
 public:
  /**
   * Create a paginator for ListKxChangesets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxChangesetsRequest,
                                    Pagination::ListKxChangesetsPaginationTraits<DerivedClient>>
  ListKxChangesetsPaginator(const Model::ListKxChangesetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxChangesetsRequest,
                                             Pagination::ListKxChangesetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListKxClusterNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxClusterNodesRequest,
                                    Pagination::ListKxClusterNodesPaginationTraits<DerivedClient>>
  ListKxClusterNodesPaginator(const Model::ListKxClusterNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxClusterNodesRequest,
                                             Pagination::ListKxClusterNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListKxDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxDatabasesRequest,
                                    Pagination::ListKxDatabasesPaginationTraits<DerivedClient>>
  ListKxDatabasesPaginator(const Model::ListKxDatabasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxDatabasesRequest,
                                             Pagination::ListKxDatabasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListKxDataviews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxDataviewsRequest,
                                    Pagination::ListKxDataviewsPaginationTraits<DerivedClient>>
  ListKxDataviewsPaginator(const Model::ListKxDataviewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxDataviewsRequest,
                                             Pagination::ListKxDataviewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListKxEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxEnvironmentsRequest,
                                    Pagination::ListKxEnvironmentsPaginationTraits<DerivedClient>>
  ListKxEnvironmentsPaginator(const Model::ListKxEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxEnvironmentsRequest,
                                             Pagination::ListKxEnvironmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListKxScalingGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxScalingGroupsRequest,
                                    Pagination::ListKxScalingGroupsPaginationTraits<DerivedClient>>
  ListKxScalingGroupsPaginator(const Model::ListKxScalingGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKxScalingGroupsRequest,
                                             Pagination::ListKxScalingGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace finspace
}  // namespace Aws
