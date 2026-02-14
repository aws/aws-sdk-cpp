/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ivschat/IvschatClient.h>
#include <aws/ivschat/model/ListLoggingConfigurationsPaginationTraits.h>
#include <aws/ivschat/model/ListRoomsPaginationTraits.h>

namespace Aws {
namespace ivschat {

using ListLoggingConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IvschatClient, Model::ListLoggingConfigurationsRequest,
                                      Pagination::ListLoggingConfigurationsPaginationTraits<IvschatClient>>;
using ListRoomsPaginator =
    Aws::Utils::Pagination::Paginator<IvschatClient, Model::ListRoomsRequest, Pagination::ListRoomsPaginationTraits<IvschatClient>>;

}  // namespace ivschat
}  // namespace Aws
