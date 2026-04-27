/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kms/model/KeyLastUsageTrackingOperation.h>

using namespace Aws::Utils;

namespace Aws {
namespace KMS {
namespace Model {
namespace KeyLastUsageTrackingOperationMapper {

static const int Decrypt_HASH = HashingUtils::HashString("Decrypt");
static const int DeriveSharedSecret_HASH = HashingUtils::HashString("DeriveSharedSecret");
static const int Encrypt_HASH = HashingUtils::HashString("Encrypt");
static const int GenerateDataKey_HASH = HashingUtils::HashString("GenerateDataKey");
static const int GenerateDataKeyPair_HASH = HashingUtils::HashString("GenerateDataKeyPair");
static const int GenerateDataKeyPairWithoutPlaintext_HASH = HashingUtils::HashString("GenerateDataKeyPairWithoutPlaintext");
static const int GenerateDataKeyWithoutPlaintext_HASH = HashingUtils::HashString("GenerateDataKeyWithoutPlaintext");
static const int GenerateMac_HASH = HashingUtils::HashString("GenerateMac");
static const int ReEncrypt_HASH = HashingUtils::HashString("ReEncrypt");
static const int Sign_HASH = HashingUtils::HashString("Sign");
static const int Verify_HASH = HashingUtils::HashString("Verify");
static const int VerifyMac_HASH = HashingUtils::HashString("VerifyMac");

KeyLastUsageTrackingOperation GetKeyLastUsageTrackingOperationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Decrypt_HASH) {
    return KeyLastUsageTrackingOperation::Decrypt;
  } else if (hashCode == DeriveSharedSecret_HASH) {
    return KeyLastUsageTrackingOperation::DeriveSharedSecret;
  } else if (hashCode == Encrypt_HASH) {
    return KeyLastUsageTrackingOperation::Encrypt;
  } else if (hashCode == GenerateDataKey_HASH) {
    return KeyLastUsageTrackingOperation::GenerateDataKey;
  } else if (hashCode == GenerateDataKeyPair_HASH) {
    return KeyLastUsageTrackingOperation::GenerateDataKeyPair;
  } else if (hashCode == GenerateDataKeyPairWithoutPlaintext_HASH) {
    return KeyLastUsageTrackingOperation::GenerateDataKeyPairWithoutPlaintext;
  } else if (hashCode == GenerateDataKeyWithoutPlaintext_HASH) {
    return KeyLastUsageTrackingOperation::GenerateDataKeyWithoutPlaintext;
  } else if (hashCode == GenerateMac_HASH) {
    return KeyLastUsageTrackingOperation::GenerateMac;
  } else if (hashCode == ReEncrypt_HASH) {
    return KeyLastUsageTrackingOperation::ReEncrypt;
  } else if (hashCode == Sign_HASH) {
    return KeyLastUsageTrackingOperation::Sign;
  } else if (hashCode == Verify_HASH) {
    return KeyLastUsageTrackingOperation::Verify;
  } else if (hashCode == VerifyMac_HASH) {
    return KeyLastUsageTrackingOperation::VerifyMac;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KeyLastUsageTrackingOperation>(hashCode);
  }

  return KeyLastUsageTrackingOperation::NOT_SET;
}

Aws::String GetNameForKeyLastUsageTrackingOperation(KeyLastUsageTrackingOperation enumValue) {
  switch (enumValue) {
    case KeyLastUsageTrackingOperation::NOT_SET:
      return {};
    case KeyLastUsageTrackingOperation::Decrypt:
      return "Decrypt";
    case KeyLastUsageTrackingOperation::DeriveSharedSecret:
      return "DeriveSharedSecret";
    case KeyLastUsageTrackingOperation::Encrypt:
      return "Encrypt";
    case KeyLastUsageTrackingOperation::GenerateDataKey:
      return "GenerateDataKey";
    case KeyLastUsageTrackingOperation::GenerateDataKeyPair:
      return "GenerateDataKeyPair";
    case KeyLastUsageTrackingOperation::GenerateDataKeyPairWithoutPlaintext:
      return "GenerateDataKeyPairWithoutPlaintext";
    case KeyLastUsageTrackingOperation::GenerateDataKeyWithoutPlaintext:
      return "GenerateDataKeyWithoutPlaintext";
    case KeyLastUsageTrackingOperation::GenerateMac:
      return "GenerateMac";
    case KeyLastUsageTrackingOperation::ReEncrypt:
      return "ReEncrypt";
    case KeyLastUsageTrackingOperation::Sign:
      return "Sign";
    case KeyLastUsageTrackingOperation::Verify:
      return "Verify";
    case KeyLastUsageTrackingOperation::VerifyMac:
      return "VerifyMac";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KeyLastUsageTrackingOperationMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
