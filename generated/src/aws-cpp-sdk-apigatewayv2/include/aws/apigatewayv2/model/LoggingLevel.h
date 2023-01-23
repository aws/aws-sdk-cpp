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
  enum class LoggingLevel
  {
    NOT_SET,
    ERROR_,
    INFO,
    OFF
  };

namespace LoggingLevelMapper
{
AWS_APIGATEWAYV2_API LoggingLevel GetLoggingLevelForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForLoggingLevel(LoggingLevel value);
} // namespace LoggingLevelMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
