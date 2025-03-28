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
  enum class IpAddressType
  {
    NOT_SET,
    ipv4,
    dualstack
  };

namespace IpAddressTypeMapper
{
AWS_APIGATEWAYV2_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForIpAddressType(IpAddressType value);
} // namespace IpAddressTypeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
