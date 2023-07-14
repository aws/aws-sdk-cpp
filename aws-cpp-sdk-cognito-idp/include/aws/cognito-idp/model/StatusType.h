﻿/**
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
  enum class StatusType
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace StatusTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API StatusType GetStatusTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForStatusType(StatusType value);
} // namespace StatusTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
