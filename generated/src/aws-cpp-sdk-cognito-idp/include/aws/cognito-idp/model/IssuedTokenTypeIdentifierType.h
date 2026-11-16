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
enum class IssuedTokenTypeIdentifierType { NOT_SET, ACCESS_TOKEN, ID_TOKEN };

namespace IssuedTokenTypeIdentifierTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API IssuedTokenTypeIdentifierType GetIssuedTokenTypeIdentifierTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForIssuedTokenTypeIdentifierType(IssuedTokenTypeIdentifierType value);
}  // namespace IssuedTokenTypeIdentifierTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
