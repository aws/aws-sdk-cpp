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
  enum class MessageActionType
  {
    NOT_SET,
    RESEND,
    SUPPRESS
  };

namespace MessageActionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API MessageActionType GetMessageActionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForMessageActionType(MessageActionType value);
} // namespace MessageActionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
