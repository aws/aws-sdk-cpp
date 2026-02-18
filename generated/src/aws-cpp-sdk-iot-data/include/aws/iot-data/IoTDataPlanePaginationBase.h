/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iot-data/model/ListRetainedMessagesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IoTDataPlane {

class IoTDataPlaneClient;

template <typename DerivedClient>
class IoTDataPlanePaginationBase {
 public:
  /**
   * Create a paginator for ListRetainedMessages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRetainedMessagesRequest,
                                    Pagination::ListRetainedMessagesPaginationTraits<DerivedClient>>
  ListRetainedMessagesPaginator(const Model::ListRetainedMessagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRetainedMessagesRequest,
                                             Pagination::ListRetainedMessagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IoTDataPlane
}  // namespace Aws
