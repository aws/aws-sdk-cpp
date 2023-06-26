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
  enum class AuthorizationType
  {
    NOT_SET,
    NONE,
    AWS_IAM,
    CUSTOM,
    JWT
  };

namespace AuthorizationTypeMapper
{
AWS_APIGATEWAYV2_API AuthorizationType GetAuthorizationTypeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForAuthorizationType(AuthorizationType value);
} // namespace AuthorizationTypeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
