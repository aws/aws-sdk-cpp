/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elementalinference/model/ListFeedsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ElementalInference {

template <typename DerivedClient>
class ElementalInferencePaginationBase {
 public:
  /**
   * Create a paginator for ListFeeds operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFeedsRequest, Pagination::ListFeedsPaginationTraits<DerivedClient>>
  ListFeedsPaginator(const Model::ListFeedsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFeedsRequest, Pagination::ListFeedsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ElementalInference
}  // namespace Aws
