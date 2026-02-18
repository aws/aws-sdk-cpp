/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2Client.h>
#include <aws/apigatewayv2/model/ListRoutingRulesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ApiGatewayV2 {

using ListRoutingRulesPaginator = Aws::Utils::Pagination::Paginator<ApiGatewayV2Client, Model::ListRoutingRulesRequest,
                                                                    Pagination::ListRoutingRulesPaginationTraits<ApiGatewayV2Client>>;

}  // namespace ApiGatewayV2
}  // namespace Aws
