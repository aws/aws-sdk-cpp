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
  enum class UserStatusType
  {
    NOT_SET,
    UNCONFIRMED,
    CONFIRMED,
    ARCHIVED,
    COMPROMISED,
    UNKNOWN,
    RESET_REQUIRED,
    FORCE_CHANGE_PASSWORD,
    EXTERNAL_PROVIDER
  };

namespace UserStatusTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API UserStatusType GetUserStatusTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForUserStatusType(UserStatusType value);
} // namespace UserStatusTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
