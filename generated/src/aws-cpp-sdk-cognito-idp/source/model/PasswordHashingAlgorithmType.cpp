/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/PasswordHashingAlgorithmType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace PasswordHashingAlgorithmTypeMapper {

static const int BCRYPT_HASH = HashingUtils::HashString("BCRYPT");
static const int SCRYPT_HASH = HashingUtils::HashString("SCRYPT");
static const int ARGON2ID_HASH = HashingUtils::HashString("ARGON2ID");
static const int PBKDF2_SHA256_HASH = HashingUtils::HashString("PBKDF2_SHA256");

PasswordHashingAlgorithmType GetPasswordHashingAlgorithmTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BCRYPT_HASH) {
    return PasswordHashingAlgorithmType::BCRYPT;
  } else if (hashCode == SCRYPT_HASH) {
    return PasswordHashingAlgorithmType::SCRYPT;
  } else if (hashCode == ARGON2ID_HASH) {
    return PasswordHashingAlgorithmType::ARGON2ID;
  } else if (hashCode == PBKDF2_SHA256_HASH) {
    return PasswordHashingAlgorithmType::PBKDF2_SHA256;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PasswordHashingAlgorithmType>(hashCode);
  }

  return PasswordHashingAlgorithmType::NOT_SET;
}

Aws::String GetNameForPasswordHashingAlgorithmType(PasswordHashingAlgorithmType enumValue) {
  switch (enumValue) {
    case PasswordHashingAlgorithmType::NOT_SET:
      return {};
    case PasswordHashingAlgorithmType::BCRYPT:
      return "BCRYPT";
    case PasswordHashingAlgorithmType::SCRYPT:
      return "SCRYPT";
    case PasswordHashingAlgorithmType::ARGON2ID:
      return "ARGON2ID";
    case PasswordHashingAlgorithmType::PBKDF2_SHA256:
      return "PBKDF2_SHA256";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PasswordHashingAlgorithmTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
