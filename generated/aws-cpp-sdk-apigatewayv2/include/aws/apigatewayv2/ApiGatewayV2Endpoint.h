/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ApiGatewayV2
{
namespace ApiGatewayV2Endpoint
{
AWS_APIGATEWAYV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ApiGatewayV2Endpoint
} // namespace ApiGatewayV2
} // namespace Aws
