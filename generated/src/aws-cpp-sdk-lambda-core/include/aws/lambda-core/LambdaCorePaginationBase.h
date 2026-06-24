/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda-core/model/ListNetworkConnectorsPaginationTraits.h>

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
};
}  // namespace LambdaCore
}  // namespace Aws
