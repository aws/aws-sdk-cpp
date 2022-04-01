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
  enum class PassthroughBehavior
  {
    NOT_SET,
    WHEN_NO_MATCH,
    NEVER,
    WHEN_NO_TEMPLATES
  };

namespace PassthroughBehaviorMapper
{
AWS_APIGATEWAYV2_API PassthroughBehavior GetPassthroughBehaviorForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForPassthroughBehavior(PassthroughBehavior value);
} // namespace PassthroughBehaviorMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
