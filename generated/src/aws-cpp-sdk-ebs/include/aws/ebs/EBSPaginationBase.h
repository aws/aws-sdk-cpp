/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ebs/model/ListChangedBlocksPaginationTraits.h>
#include <aws/ebs/model/ListSnapshotBlocksPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EBS {

class EBSClient;

template <typename DerivedClient>
class EBSPaginationBase {
 public:
  /**
   * Create a paginator for ListChangedBlocks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChangedBlocksRequest,
                                    Pagination::ListChangedBlocksPaginationTraits<DerivedClient>>
  ListChangedBlocksPaginator(const Model::ListChangedBlocksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChangedBlocksRequest,
                                             Pagination::ListChangedBlocksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSnapshotBlocks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSnapshotBlocksRequest,
                                    Pagination::ListSnapshotBlocksPaginationTraits<DerivedClient>>
  ListSnapshotBlocksPaginator(const Model::ListSnapshotBlocksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSnapshotBlocksRequest,
                                             Pagination::ListSnapshotBlocksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace EBS
}  // namespace Aws
