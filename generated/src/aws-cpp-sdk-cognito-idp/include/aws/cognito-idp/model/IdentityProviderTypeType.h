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
  enum class IdentityProviderTypeType
  {
    NOT_SET,
    SAML,
    Facebook,
    Google,
    LoginWithAmazon,
    SignInWithApple,
    OIDC
  };

namespace IdentityProviderTypeTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API IdentityProviderTypeType GetIdentityProviderTypeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForIdentityProviderTypeType(IdentityProviderTypeType value);
} // namespace IdentityProviderTypeTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
