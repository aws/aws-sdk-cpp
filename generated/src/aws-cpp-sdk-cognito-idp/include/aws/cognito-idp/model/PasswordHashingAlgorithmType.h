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
enum class PasswordHashingAlgorithmType { NOT_SET, BCRYPT, SCRYPT, ARGON2ID, PBKDF2_SHA256 };

namespace PasswordHashingAlgorithmTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API PasswordHashingAlgorithmType GetPasswordHashingAlgorithmTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForPasswordHashingAlgorithmType(PasswordHashingAlgorithmType value);
}  // namespace PasswordHashingAlgorithmTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
