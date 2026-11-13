/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda-core/model/ListNetworkConnectorVersionsPaginationTraits.h>
#include <aws/lambda-core/model/ListNetworkConnectorsPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimeAliasesPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimeVersionsPaginationTraits.h>
#include <aws/lambda-core/model/ListRuntimesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace LambdaCore {

template <typename DerivedClient>
class LambdaCorePaginationBase {
 public:
  /**
   * Create a paginator for ListNetworkConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkConnectorsRequest,
                                    Pagination::ListNetworkConnectorsPaginationTraits<DerivedClient>>
  ListNetworkConnectorsPaginator(const Model::ListNetworkConnectorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkConnectorsRequest,
                                             Pagination::ListNetworkConnectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkConnectorVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkConnectorVersionsRequest,
                                    Pagination::ListNetworkConnectorVersionsPaginationTraits<DerivedClient>>
  ListNetworkConnectorVersionsPaginator(const Model::ListNetworkConnectorVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkConnectorVersionsRequest,
                                             Pagination::ListNetworkConnectorVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRuntimeAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuntimeAliasesRequest,
                                    Pagination::ListRuntimeAliasesPaginationTraits<DerivedClient>>
  ListRuntimeAliasesPaginator(const Model::ListRuntimeAliasesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuntimeAliasesRequest,
                                             Pagination::ListRuntimeAliasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRuntimes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuntimesRequest, Pagination::ListRuntimesPaginationTraits<DerivedClient>>
  ListRuntimesPaginator(const Model::ListRuntimesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuntimesRequest,
                                             Pagination::ListRuntimesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListRuntimeVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuntimeVersionsRequest,
                                    Pagination::ListRuntimeVersionsPaginationTraits<DerivedClient>>
  ListRuntimeVersionsPaginator(const Model::ListRuntimeVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuntimeVersionsRequest,
                                             Pagination::ListRuntimeVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace LambdaCore
}  // namespace Aws
