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
  enum class VerifiedAttributeType
  {
    NOT_SET,
    phone_number,
    email
  };

namespace VerifiedAttributeTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API VerifiedAttributeType GetVerifiedAttributeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForVerifiedAttributeType(VerifiedAttributeType value);
} // namespace VerifiedAttributeTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
