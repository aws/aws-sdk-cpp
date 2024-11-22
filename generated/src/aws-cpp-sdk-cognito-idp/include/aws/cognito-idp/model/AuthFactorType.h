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
  enum class AuthFactorType
  {
    NOT_SET,
    PASSWORD,
    EMAIL_OTP,
    SMS_OTP,
    WEB_AUTHN
  };

namespace AuthFactorTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AuthFactorType GetAuthFactorTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAuthFactorType(AuthFactorType value);
} // namespace AuthFactorTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
