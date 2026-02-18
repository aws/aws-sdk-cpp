/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Lambda {

class LambdaClient;

template <typename DerivedClient>
class LambdaPaginationBase {
 public:
  /**
   * Create a paginator for GetDurableExecutionHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDurableExecutionHistoryRequest,
                                    Pagination::GetDurableExecutionHistoryPaginationTraits<DerivedClient>>
  GetDurableExecutionHistoryPaginator(const Model::GetDurableExecutionHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDurableExecutionHistoryRequest,
                                             Pagination::GetDurableExecutionHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetDurableExecutionState operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDurableExecutionStateRequest,
                                    Pagination::GetDurableExecutionStatePaginationTraits<DerivedClient>>
  GetDurableExecutionStatePaginator(const Model::GetDurableExecutionStateRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDurableExecutionStateRequest,
                                             Pagination::GetDurableExecutionStatePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<DerivedClient>>
  ListAliasesPaginator(const Model::ListAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest,
                                             Pagination::ListAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListCapacityProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapacityProvidersRequest,
                                    Pagination::ListCapacityProvidersPaginationTraits<DerivedClient>>
  ListCapacityProvidersPaginator(const Model::ListCapacityProvidersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapacityProvidersRequest,
                                             Pagination::ListCapacityProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCodeSigningConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeSigningConfigsRequest,
                                    Pagination::ListCodeSigningConfigsPaginationTraits<DerivedClient>>
  ListCodeSigningConfigsPaginator(const Model::ListCodeSigningConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeSigningConfigsRequest,
                                             Pagination::ListCodeSigningConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDurableExecutionsByFunction operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDurableExecutionsByFunctionRequest,
                                    Pagination::ListDurableExecutionsByFunctionPaginationTraits<DerivedClient>>
  ListDurableExecutionsByFunctionPaginator(const Model::ListDurableExecutionsByFunctionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDurableExecutionsByFunctionRequest,
                                             Pagination::ListDurableExecutionsByFunctionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventSourceMappings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventSourceMappingsRequest,
                                    Pagination::ListEventSourceMappingsPaginationTraits<DerivedClient>>
  ListEventSourceMappingsPaginator(const Model::ListEventSourceMappingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventSourceMappingsRequest,
                                             Pagination::ListEventSourceMappingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFunctionEventInvokeConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionEventInvokeConfigsRequest,
                                    Pagination::ListFunctionEventInvokeConfigsPaginationTraits<DerivedClient>>
  ListFunctionEventInvokeConfigsPaginator(const Model::ListFunctionEventInvokeConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionEventInvokeConfigsRequest,
                                             Pagination::ListFunctionEventInvokeConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFunctions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionsRequest, Pagination::ListFunctionsPaginationTraits<DerivedClient>>
  ListFunctionsPaginator(const Model::ListFunctionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionsRequest,
                                             Pagination::ListFunctionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListFunctionsByCodeSigningConfig operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionsByCodeSigningConfigRequest,
                                    Pagination::ListFunctionsByCodeSigningConfigPaginationTraits<DerivedClient>>
  ListFunctionsByCodeSigningConfigPaginator(const Model::ListFunctionsByCodeSigningConfigRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionsByCodeSigningConfigRequest,
                                             Pagination::ListFunctionsByCodeSigningConfigPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFunctionUrlConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionUrlConfigsRequest,
                                    Pagination::ListFunctionUrlConfigsPaginationTraits<DerivedClient>>
  ListFunctionUrlConfigsPaginator(const Model::ListFunctionUrlConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionUrlConfigsRequest,
                                             Pagination::ListFunctionUrlConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFunctionVersionsByCapacityProvider operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionVersionsByCapacityProviderRequest,
                                    Pagination::ListFunctionVersionsByCapacityProviderPaginationTraits<DerivedClient>>
  ListFunctionVersionsByCapacityProviderPaginator(const Model::ListFunctionVersionsByCapacityProviderRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionVersionsByCapacityProviderRequest,
                                             Pagination::ListFunctionVersionsByCapacityProviderPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLayers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLayersRequest, Pagination::ListLayersPaginationTraits<DerivedClient>>
  ListLayersPaginator(const Model::ListLayersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLayersRequest,
                                             Pagination::ListLayersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListLayerVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLayerVersionsRequest,
                                    Pagination::ListLayerVersionsPaginationTraits<DerivedClient>>
  ListLayerVersionsPaginator(const Model::ListLayerVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLayerVersionsRequest,
                                             Pagination::ListLayerVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProvisionedConcurrencyConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisionedConcurrencyConfigsRequest,
                                    Pagination::ListProvisionedConcurrencyConfigsPaginationTraits<DerivedClient>>
  ListProvisionedConcurrencyConfigsPaginator(const Model::ListProvisionedConcurrencyConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisionedConcurrencyConfigsRequest,
                                             Pagination::ListProvisionedConcurrencyConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVersionsByFunction operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVersionsByFunctionRequest,
                                    Pagination::ListVersionsByFunctionPaginationTraits<DerivedClient>>
  ListVersionsByFunctionPaginator(const Model::ListVersionsByFunctionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVersionsByFunctionRequest,
                                             Pagination::ListVersionsByFunctionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Lambda
}  // namespace Aws
