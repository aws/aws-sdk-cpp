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
  enum class EventType
  {
    NOT_SET,
    SignIn,
    SignUp,
    ForgotPassword,
    PasswordChange,
    ResendCode
  };

namespace EventTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API EventType GetEventTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
