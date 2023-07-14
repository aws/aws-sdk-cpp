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
  enum class AliasAttributeType
  {
    NOT_SET,
    phone_number,
    email,
    preferred_username
  };

namespace AliasAttributeTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AliasAttributeType GetAliasAttributeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAliasAttributeType(AliasAttributeType value);
} // namespace AliasAttributeTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
