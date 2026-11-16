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
enum class OAuthTokenTypeType { NOT_SET, Bearer, N_A };

namespace OAuthTokenTypeTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API OAuthTokenTypeType GetOAuthTokenTypeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForOAuthTokenTypeType(OAuthTokenTypeType value);
}  // namespace OAuthTokenTypeTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
