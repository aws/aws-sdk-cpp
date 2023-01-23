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
  enum class EventFilterType
  {
    NOT_SET,
    SIGN_IN,
    PASSWORD_CHANGE,
    SIGN_UP
  };

namespace EventFilterTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API EventFilterType GetEventFilterTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForEventFilterType(EventFilterType value);
} // namespace EventFilterTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
