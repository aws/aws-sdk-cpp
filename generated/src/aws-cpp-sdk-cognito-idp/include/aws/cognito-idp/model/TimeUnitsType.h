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
  enum class TimeUnitsType
  {
    NOT_SET,
    seconds,
    minutes,
    hours,
    days
  };

namespace TimeUnitsTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API TimeUnitsType GetTimeUnitsTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForTimeUnitsType(TimeUnitsType value);
} // namespace TimeUnitsTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
