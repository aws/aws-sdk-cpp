/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ivschat/model/ListLoggingConfigurationsPaginationTraits.h>
#include <aws/ivschat/model/ListRoomsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ivschat {

class IvschatClient;

template <typename DerivedClient>
class IvschatPaginationBase {
 public:
  /**
   * Create a paginator for ListLoggingConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLoggingConfigurationsRequest,
                                    Pagination::ListLoggingConfigurationsPaginationTraits<DerivedClient>>
  ListLoggingConfigurationsPaginator(const Model::ListLoggingConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLoggingConfigurationsRequest,
                                             Pagination::ListLoggingConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRooms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoomsRequest, Pagination::ListRoomsPaginationTraits<DerivedClient>>
  ListRoomsPaginator(const Model::ListRoomsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoomsRequest, Pagination::ListRoomsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ivschat
}  // namespace Aws
