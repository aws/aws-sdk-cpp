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
  enum class RecoveryOptionNameType
  {
    NOT_SET,
    verified_email,
    verified_phone_number,
    admin_only
  };

namespace RecoveryOptionNameTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API RecoveryOptionNameType GetRecoveryOptionNameTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForRecoveryOptionNameType(RecoveryOptionNameType value);
} // namespace RecoveryOptionNameTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
