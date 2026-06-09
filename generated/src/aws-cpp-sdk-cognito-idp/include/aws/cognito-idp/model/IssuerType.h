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
enum class IssuerType { NOT_SET, ORIGINAL, UPDATED };

namespace IssuerTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API IssuerType GetIssuerTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForIssuerType(IssuerType value);
}  // namespace IssuerTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
