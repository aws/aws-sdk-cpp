/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/dsql/model/ListClustersPaginationTraits.h>
#include <aws/dsql/model/ListStreamsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DSQL {

template <typename DerivedClient>
class DSQLPaginationBase {
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
   * Create a paginator for ListStreams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamsRequest, Pagination::ListStreamsPaginationTraits<DerivedClient>>
  ListStreamsPaginator(const Model::ListStreamsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamsRequest,
                                             Pagination::ListStreamsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace DSQL
}  // namespace Aws
