/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/apigatewayv2/model/ListRoutingRulesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ApiGatewayV2 {

class ApiGatewayV2Client;

template <typename DerivedClient>
class ApiGatewayV2PaginationBase {
 public:
  /**
   * Create a paginator for ListRoutingRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingRulesRequest,
                                    Pagination::ListRoutingRulesPaginationTraits<DerivedClient>>
  ListRoutingRulesPaginator(const Model::ListRoutingRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutingRulesRequest,
                                             Pagination::ListRoutingRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace ApiGatewayV2
}  // namespace Aws
