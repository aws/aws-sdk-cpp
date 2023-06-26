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
  enum class DeletionProtectionType
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace DeletionProtectionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API DeletionProtectionType GetDeletionProtectionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForDeletionProtectionType(DeletionProtectionType value);
} // namespace DeletionProtectionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
