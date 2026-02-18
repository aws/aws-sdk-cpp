/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda/LambdaClient.h>
#include <aws/lambda/model/GetDurableExecutionHistoryPaginationTraits.h>
#include <aws/lambda/model/GetDurableExecutionStatePaginationTraits.h>
#include <aws/lambda/model/ListAliasesPaginationTraits.h>
#include <aws/lambda/model/ListCapacityProvidersPaginationTraits.h>
#include <aws/lambda/model/ListCodeSigningConfigsPaginationTraits.h>
#include <aws/lambda/model/ListDurableExecutionsByFunctionPaginationTraits.h>
#include <aws/lambda/model/ListEventSourceMappingsPaginationTraits.h>
#include <aws/lambda/model/ListFunctionEventInvokeConfigsPaginationTraits.h>
#include <aws/lambda/model/ListFunctionUrlConfigsPaginationTraits.h>
#include <aws/lambda/model/ListFunctionVersionsByCapacityProviderPaginationTraits.h>
#include <aws/lambda/model/ListFunctionsByCodeSigningConfigPaginationTraits.h>
#include <aws/lambda/model/ListFunctionsPaginationTraits.h>
#include <aws/lambda/model/ListLayerVersionsPaginationTraits.h>
#include <aws/lambda/model/ListLayersPaginationTraits.h>
#include <aws/lambda/model/ListProvisionedConcurrencyConfigsPaginationTraits.h>
#include <aws/lambda/model/ListVersionsByFunctionPaginationTraits.h>

namespace Aws {
namespace Lambda {

using GetDurableExecutionHistoryPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::GetDurableExecutionHistoryRequest,
                                      Pagination::GetDurableExecutionHistoryPaginationTraits<LambdaClient>>;
using GetDurableExecutionStatePaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::GetDurableExecutionStateRequest,
                                      Pagination::GetDurableExecutionStatePaginationTraits<LambdaClient>>;
using ListAliasesPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<LambdaClient>>;
using ListCapacityProvidersPaginator = Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListCapacityProvidersRequest,
                                                                         Pagination::ListCapacityProvidersPaginationTraits<LambdaClient>>;
using ListCodeSigningConfigsPaginator = Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListCodeSigningConfigsRequest,
                                                                          Pagination::ListCodeSigningConfigsPaginationTraits<LambdaClient>>;
using ListDurableExecutionsByFunctionPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListDurableExecutionsByFunctionRequest,
                                      Pagination::ListDurableExecutionsByFunctionPaginationTraits<LambdaClient>>;
using ListEventSourceMappingsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListEventSourceMappingsRequest,
                                      Pagination::ListEventSourceMappingsPaginationTraits<LambdaClient>>;
using ListFunctionEventInvokeConfigsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListFunctionEventInvokeConfigsRequest,
                                      Pagination::ListFunctionEventInvokeConfigsPaginationTraits<LambdaClient>>;
using ListFunctionsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListFunctionsRequest, Pagination::ListFunctionsPaginationTraits<LambdaClient>>;
using ListFunctionsByCodeSigningConfigPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListFunctionsByCodeSigningConfigRequest,
                                      Pagination::ListFunctionsByCodeSigningConfigPaginationTraits<LambdaClient>>;
using ListFunctionUrlConfigsPaginator = Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListFunctionUrlConfigsRequest,
                                                                          Pagination::ListFunctionUrlConfigsPaginationTraits<LambdaClient>>;
using ListFunctionVersionsByCapacityProviderPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListFunctionVersionsByCapacityProviderRequest,
                                      Pagination::ListFunctionVersionsByCapacityProviderPaginationTraits<LambdaClient>>;
using ListLayersPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListLayersRequest, Pagination::ListLayersPaginationTraits<LambdaClient>>;
using ListLayerVersionsPaginator = Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListLayerVersionsRequest,
                                                                     Pagination::ListLayerVersionsPaginationTraits<LambdaClient>>;
using ListProvisionedConcurrencyConfigsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListProvisionedConcurrencyConfigsRequest,
                                      Pagination::ListProvisionedConcurrencyConfigsPaginationTraits<LambdaClient>>;
using ListVersionsByFunctionPaginator = Aws::Utils::Pagination::Paginator<LambdaClient, Model::ListVersionsByFunctionRequest,
                                                                          Pagination::ListVersionsByFunctionPaginationTraits<LambdaClient>>;

}  // namespace Lambda
}  // namespace Aws
