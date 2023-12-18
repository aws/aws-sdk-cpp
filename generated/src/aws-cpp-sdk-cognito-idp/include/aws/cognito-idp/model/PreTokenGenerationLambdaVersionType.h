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
  enum class PreTokenGenerationLambdaVersionType
  {
    NOT_SET,
    V1_0,
    V2_0
  };

namespace PreTokenGenerationLambdaVersionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API PreTokenGenerationLambdaVersionType GetPreTokenGenerationLambdaVersionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForPreTokenGenerationLambdaVersionType(PreTokenGenerationLambdaVersionType value);
} // namespace PreTokenGenerationLambdaVersionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
