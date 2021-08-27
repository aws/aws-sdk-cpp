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
  enum class ExplicitAuthFlowsType
  {
    NOT_SET,
    ADMIN_NO_SRP_AUTH,
    CUSTOM_AUTH_FLOW_ONLY,
    USER_PASSWORD_AUTH,
    ALLOW_ADMIN_USER_PASSWORD_AUTH,
    ALLOW_CUSTOM_AUTH,
    ALLOW_USER_PASSWORD_AUTH,
    ALLOW_USER_SRP_AUTH,
    ALLOW_REFRESH_TOKEN_AUTH
  };

namespace ExplicitAuthFlowsTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API ExplicitAuthFlowsType GetExplicitAuthFlowsTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForExplicitAuthFlowsType(ExplicitAuthFlowsType value);
} // namespace ExplicitAuthFlowsTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
