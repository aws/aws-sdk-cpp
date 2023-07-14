/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{
  enum class AuthFlowType
  {
    NOT_SET,
    USER_SRP_AUTH,
    REFRESH_TOKEN_AUTH,
    REFRESH_TOKEN,
    CUSTOM_AUTH,
    ADMIN_NO_SRP_AUTH,
    USER_PASSWORD_AUTH,
    ADMIN_USER_PASSWORD_AUTH
  };

namespace AuthFlowTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AuthFlowType GetAuthFlowTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAuthFlowType(AuthFlowType value);
} // namespace AuthFlowTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
