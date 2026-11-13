/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda-core/LambdaCoreClient.h>
#include <aws/lambda-core/model/ListNetworkConnectorVersionsPaginationTraits.h>
#include <aws/lambda-core/model/ListNetworkConnectorsPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimeAliasesPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimeVersionsPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimesPaginationTraits.h>

namespace Aws {
namespace LambdaCore {

using ListNetworkConnectorsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaCoreClient, Model::ListNetworkConnectorsRequest,
                                      Pagination::ListNetworkConnectorsPaginationTraits<LambdaCoreClient>>;
using ListNetworkConnectorVersionsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaCoreClient, Model::ListNetworkConnectorVersionsRequest,
                                      Pagination::ListNetworkConnectorVersionsPaginationTraits<LambdaCoreClient>>;
using ListRuntimeAliasesPaginator = Aws::Utils::Pagination::Paginator<LambdaCoreClient, Model::ListRuntimeAliasesRequest,
                                                                      Pagination::ListRuntimeAliasesPaginationTraits<LambdaCoreClient>>;
using ListRuntimesPaginator = Aws::Utils::Pagination::Paginator<LambdaCoreClient, Model::ListRuntimesRequest,
                                                                Pagination::ListRuntimesPaginationTraits<LambdaCoreClient>>;
using ListRuntimeVersionsPaginator = Aws::Utils::Pagination::Paginator<LambdaCoreClient, Model::ListRuntimeVersionsRequest,
                                                                       Pagination::ListRuntimeVersionsPaginationTraits<LambdaCoreClient>>;

}  // namespace LambdaCore
}  // namespace Aws
