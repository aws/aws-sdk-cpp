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
enum class RevokeAssociatedSessionsType { NOT_SET, NONE, LINKED };

namespace RevokeAssociatedSessionsTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API RevokeAssociatedSessionsType GetRevokeAssociatedSessionsTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForRevokeAssociatedSessionsType(RevokeAssociatedSessionsType value);
}  // namespace RevokeAssociatedSessionsTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
