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
  enum class VpcLinkVersion
  {
    NOT_SET,
    V2
  };

namespace VpcLinkVersionMapper
{
AWS_APIGATEWAYV2_API VpcLinkVersion GetVpcLinkVersionForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForVpcLinkVersion(VpcLinkVersion value);
} // namespace VpcLinkVersionMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
