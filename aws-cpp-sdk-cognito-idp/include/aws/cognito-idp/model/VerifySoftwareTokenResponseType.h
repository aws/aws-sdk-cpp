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
  enum class VerifySoftwareTokenResponseType
  {
    NOT_SET,
    SUCCESS,
    ERROR_
  };

namespace VerifySoftwareTokenResponseTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResponseType GetVerifySoftwareTokenResponseTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForVerifySoftwareTokenResponseType(VerifySoftwareTokenResponseType value);
} // namespace VerifySoftwareTokenResponseTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
