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
  enum class CompromisedCredentialsEventActionType
  {
    NOT_SET,
    BLOCK,
    NO_ACTION
  };

namespace CompromisedCredentialsEventActionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsEventActionType GetCompromisedCredentialsEventActionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForCompromisedCredentialsEventActionType(CompromisedCredentialsEventActionType value);
} // namespace CompromisedCredentialsEventActionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
