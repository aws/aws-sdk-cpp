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
  enum class DefaultEmailOptionType
  {
    NOT_SET,
    CONFIRM_WITH_LINK,
    CONFIRM_WITH_CODE
  };

namespace DefaultEmailOptionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API DefaultEmailOptionType GetDefaultEmailOptionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForDefaultEmailOptionType(DefaultEmailOptionType value);
} // namespace DefaultEmailOptionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
