/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
enum class TokenTypeIdentifierType { NOT_SET, ACCESS_TOKEN, ID_TOKEN, SAML2 };

namespace TokenTypeIdentifierTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API TokenTypeIdentifierType GetTokenTypeIdentifierTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForTokenTypeIdentifierType(TokenTypeIdentifierType value);
}  // namespace TokenTypeIdentifierTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
