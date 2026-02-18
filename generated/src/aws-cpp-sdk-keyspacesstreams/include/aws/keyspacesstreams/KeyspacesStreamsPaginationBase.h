/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/keyspacesstreams/model/GetStreamPaginationTraits.h>
#include <aws/keyspacesstreams/model/ListStreamsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace KeyspacesStreams {

class KeyspacesStreamsClient;

template <typename DerivedClient>
class KeyspacesStreamsPaginationBase {
 public:
  /**
   * Create a paginator for GetStream operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetStreamRequest, Pagination::GetStreamPaginationTraits<DerivedClient>>
  GetStreamPaginator(const Model::GetStreamRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetStreamRequest, Pagination::GetStreamPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStreams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamsRequest, Pagination::ListStreamsPaginationTraits<DerivedClient>>
  ListStreamsPaginator(const Model::ListStreamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamsRequest,
                                             Pagination::ListStreamsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace KeyspacesStreams
}  // namespace Aws
