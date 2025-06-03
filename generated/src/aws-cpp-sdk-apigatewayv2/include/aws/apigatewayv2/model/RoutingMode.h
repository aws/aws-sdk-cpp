/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{
  enum class RoutingMode
  {
    NOT_SET,
    API_MAPPING_ONLY,
    ROUTING_RULE_ONLY,
    ROUTING_RULE_THEN_API_MAPPING
  };

namespace RoutingModeMapper
{
AWS_APIGATEWAYV2_API RoutingMode GetRoutingModeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForRoutingMode(RoutingMode value);
} // namespace RoutingModeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
