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
  enum class AccountTakeoverEventActionType
  {
    NOT_SET,
    BLOCK,
    MFA_IF_CONFIGURED,
    MFA_REQUIRED,
    NO_ACTION
  };

namespace AccountTakeoverEventActionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverEventActionType GetAccountTakeoverEventActionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAccountTakeoverEventActionType(AccountTakeoverEventActionType value);
} // namespace AccountTakeoverEventActionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
