/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda-core/LambdaCoreClient.h>
#include <aws/lambda-core/model/ListNetworkConnectorsPaginationTraits.h>

namespace Aws {
namespace LambdaCore {

using ListNetworkConnectorsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaCoreClient, Model::ListNetworkConnectorsRequest,
                                      Pagination::ListNetworkConnectorsPaginationTraits<LambdaCoreClient>>;

}  // namespace LambdaCore
}  // namespace Aws
