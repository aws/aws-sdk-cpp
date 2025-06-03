/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class RoutingMode
  {
    NOT_SET,
    BASE_PATH_MAPPING_ONLY,
    ROUTING_RULE_ONLY,
    ROUTING_RULE_THEN_BASE_PATH_MAPPING
  };

namespace RoutingModeMapper
{
AWS_APIGATEWAY_API RoutingMode GetRoutingModeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForRoutingMode(RoutingMode value);
} // namespace RoutingModeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
