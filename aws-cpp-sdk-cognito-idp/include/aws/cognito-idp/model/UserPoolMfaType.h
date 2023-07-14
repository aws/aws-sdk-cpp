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
  enum class UserPoolMfaType
  {
    NOT_SET,
    OFF,
    ON,
    OPTIONAL
  };

namespace UserPoolMfaTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API UserPoolMfaType GetUserPoolMfaTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForUserPoolMfaType(UserPoolMfaType value);
} // namespace UserPoolMfaTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
