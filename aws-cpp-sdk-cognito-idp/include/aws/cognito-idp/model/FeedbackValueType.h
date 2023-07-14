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
  enum class FeedbackValueType
  {
    NOT_SET,
    Valid,
    Invalid
  };

namespace FeedbackValueTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API FeedbackValueType GetFeedbackValueTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForFeedbackValueType(FeedbackValueType value);
} // namespace FeedbackValueTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
