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
  enum class ContentHandlingStrategy
  {
    NOT_SET,
    CONVERT_TO_BINARY,
    CONVERT_TO_TEXT
  };

namespace ContentHandlingStrategyMapper
{
AWS_APIGATEWAYV2_API ContentHandlingStrategy GetContentHandlingStrategyForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForContentHandlingStrategy(ContentHandlingStrategy value);
} // namespace ContentHandlingStrategyMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
