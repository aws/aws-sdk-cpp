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
  enum class EndpointType
  {
    NOT_SET,
    REGIONAL,
    EDGE
  };

namespace EndpointTypeMapper
{
AWS_APIGATEWAYV2_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForEndpointType(EndpointType value);
} // namespace EndpointTypeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
