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
  enum class AttributeDataType
  {
    NOT_SET,
    String,
    Number,
    DateTime,
    Boolean
  };

namespace AttributeDataTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AttributeDataType GetAttributeDataTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAttributeDataType(AttributeDataType value);
} // namespace AttributeDataTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
