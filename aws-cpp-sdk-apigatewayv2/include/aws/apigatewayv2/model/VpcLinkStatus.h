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
  enum class VpcLinkStatus
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    FAILED,
    INACTIVE
  };

namespace VpcLinkStatusMapper
{
AWS_APIGATEWAYV2_API VpcLinkStatus GetVpcLinkStatusForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForVpcLinkStatus(VpcLinkStatus value);
} // namespace VpcLinkStatusMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
