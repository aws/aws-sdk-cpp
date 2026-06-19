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
enum class SecurityPolicyType { NOT_SET, TLS_V1, TLS_V1_2_2021, TLS_V1_3_2025 };

namespace SecurityPolicyTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API SecurityPolicyType GetSecurityPolicyTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForSecurityPolicyType(SecurityPolicyType value);
}  // namespace SecurityPolicyTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
