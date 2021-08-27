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
  enum class AuthorizerType
  {
    NOT_SET,
    REQUEST,
    JWT
  };

namespace AuthorizerTypeMapper
{
AWS_APIGATEWAYV2_API AuthorizerType GetAuthorizerTypeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForAuthorizerType(AuthorizerType value);
} // namespace AuthorizerTypeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
