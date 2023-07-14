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
  enum class DeviceRememberedStatusType
  {
    NOT_SET,
    remembered,
    not_remembered
  };

namespace DeviceRememberedStatusTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API DeviceRememberedStatusType GetDeviceRememberedStatusTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForDeviceRememberedStatusType(DeviceRememberedStatusType value);
} // namespace DeviceRememberedStatusTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
