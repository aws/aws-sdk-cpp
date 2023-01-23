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
  enum class CustomSMSSenderLambdaVersionType
  {
    NOT_SET,
    V1_0
  };

namespace CustomSMSSenderLambdaVersionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API CustomSMSSenderLambdaVersionType GetCustomSMSSenderLambdaVersionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForCustomSMSSenderLambdaVersionType(CustomSMSSenderLambdaVersionType value);
} // namespace CustomSMSSenderLambdaVersionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
