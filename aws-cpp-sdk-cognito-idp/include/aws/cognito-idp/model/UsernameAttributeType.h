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
  enum class UsernameAttributeType
  {
    NOT_SET,
    phone_number,
    email
  };

namespace UsernameAttributeTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API UsernameAttributeType GetUsernameAttributeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForUsernameAttributeType(UsernameAttributeType value);
} // namespace UsernameAttributeTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
