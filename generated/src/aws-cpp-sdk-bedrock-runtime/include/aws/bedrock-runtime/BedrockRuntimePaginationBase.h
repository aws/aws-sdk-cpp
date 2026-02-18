/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-runtime/model/ListAsyncInvokesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BedrockRuntime {

class BedrockRuntimeClient;

template <typename DerivedClient>
class BedrockRuntimePaginationBase {
 public:
  /**
   * Create a paginator for ListAsyncInvokes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAsyncInvokesRequest,
                                    Pagination::ListAsyncInvokesPaginationTraits<DerivedClient>>
  ListAsyncInvokesPaginator(const Model::ListAsyncInvokesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAsyncInvokesRequest,
                                             Pagination::ListAsyncInvokesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace BedrockRuntime
}  // namespace Aws
