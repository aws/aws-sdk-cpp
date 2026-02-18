/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kinesis/model/ListStreamConsumersPaginationTraits.h>
#include <aws/kinesis/model/ListStreamsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Kinesis {

class KinesisClient;

template <typename DerivedClient>
class KinesisPaginationBase {
 public:
  /**
   * Create a paginator for ListStreamConsumers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamConsumersRequest,
                                    Pagination::ListStreamConsumersPaginationTraits<DerivedClient>>
  ListStreamConsumersPaginator(const Model::ListStreamConsumersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamConsumersRequest,
                                             Pagination::ListStreamConsumersPaginationTraits<DerivedClient>>{
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
}  // namespace Kinesis
}  // namespace Aws
