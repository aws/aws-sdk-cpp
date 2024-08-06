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
  enum class EventSourceName
  {
    NOT_SET,
    userNotification,
    userAuthEvents
  };

namespace EventSourceNameMapper
{
AWS_COGNITOIDENTITYPROVIDER_API EventSourceName GetEventSourceNameForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForEventSourceName(EventSourceName value);
} // namespace EventSourceNameMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
