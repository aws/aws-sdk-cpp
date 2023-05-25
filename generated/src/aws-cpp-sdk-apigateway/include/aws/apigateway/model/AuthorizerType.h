/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class AuthorizerType
  {
    NOT_SET,
    TOKEN,
    REQUEST,
    COGNITO_USER_POOLS
  };

namespace AuthorizerTypeMapper
{
AWS_APIGATEWAY_API AuthorizerType GetAuthorizerTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForAuthorizerType(AuthorizerType value);
} // namespace AuthorizerTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
