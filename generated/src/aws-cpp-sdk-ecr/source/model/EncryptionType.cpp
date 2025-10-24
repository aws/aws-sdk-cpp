﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/EncryptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace EncryptionTypeMapper {

static const int AES256_HASH = HashingUtils::HashString("AES256");
static const int KMS_HASH = HashingUtils::HashString("KMS");
static const int KMS_DSSE_HASH = HashingUtils::HashString("KMS_DSSE");

EncryptionType GetEncryptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AES256_HASH) {
    return EncryptionType::AES256;
  } else if (hashCode == KMS_HASH) {
    return EncryptionType::KMS;
  } else if (hashCode == KMS_DSSE_HASH) {
    return EncryptionType::KMS_DSSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionType>(hashCode);
  }

  return EncryptionType::NOT_SET;
}

Aws::String GetNameForEncryptionType(EncryptionType enumValue) {
  switch (enumValue) {
    case EncryptionType::NOT_SET:
      return {};
    case EncryptionType::AES256:
      return "AES256";
    case EncryptionType::KMS:
      return "KMS";
    case EncryptionType::KMS_DSSE:
      return "KMS_DSSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
