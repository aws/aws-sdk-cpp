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
  enum class ProtocolType
  {
    NOT_SET,
    WEBSOCKET,
    HTTP
  };

namespace ProtocolTypeMapper
{
AWS_APIGATEWAYV2_API ProtocolType GetProtocolTypeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForProtocolType(ProtocolType value);
} // namespace ProtocolTypeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
