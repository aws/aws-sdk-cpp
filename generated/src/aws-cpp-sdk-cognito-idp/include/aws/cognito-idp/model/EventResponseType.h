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
  enum class EventResponseType
  {
    NOT_SET,
    Pass,
    Fail,
    InProgress
  };

namespace EventResponseTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API EventResponseType GetEventResponseTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForEventResponseType(EventResponseType value);
} // namespace EventResponseTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
