/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cloudfront-keyvaluestore/model/ListKeysPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudFrontKeyValueStore {

class CloudFrontKeyValueStoreClient;

template <typename DerivedClient>
class CloudFrontKeyValueStorePaginationBase {
 public:
  /**
   * Create a paginator for ListKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeysRequest, Pagination::ListKeysPaginationTraits<DerivedClient>>
  ListKeysPaginator(const Model::ListKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeysRequest, Pagination::ListKeysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
