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
  enum class CustomEmailSenderLambdaVersionType
  {
    NOT_SET,
    V1_0
  };

namespace CustomEmailSenderLambdaVersionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API CustomEmailSenderLambdaVersionType GetCustomEmailSenderLambdaVersionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForCustomEmailSenderLambdaVersionType(CustomEmailSenderLambdaVersionType value);
} // namespace CustomEmailSenderLambdaVersionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
