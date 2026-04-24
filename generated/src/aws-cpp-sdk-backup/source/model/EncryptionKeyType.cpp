/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/EncryptionKeyType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace EncryptionKeyTypeMapper {

static const int AWS_OWNED_KMS_KEY_HASH = HashingUtils::HashString("AWS_OWNED_KMS_KEY");
static const int CUSTOMER_MANAGED_KMS_KEY_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KMS_KEY");

EncryptionKeyType GetEncryptionKeyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_OWNED_KMS_KEY_HASH) {
    return EncryptionKeyType::AWS_OWNED_KMS_KEY;
  } else if (hashCode == CUSTOMER_MANAGED_KMS_KEY_HASH) {
    return EncryptionKeyType::CUSTOMER_MANAGED_KMS_KEY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionKeyType>(hashCode);
  }

  return EncryptionKeyType::NOT_SET;
}

Aws::String GetNameForEncryptionKeyType(EncryptionKeyType enumValue) {
  switch (enumValue) {
    case EncryptionKeyType::NOT_SET:
      return {};
    case EncryptionKeyType::AWS_OWNED_KMS_KEY:
      return "AWS_OWNED_KMS_KEY";
    case EncryptionKeyType::CUSTOMER_MANAGED_KMS_KEY:
      return "CUSTOMER_MANAGED_KMS_KEY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionKeyTypeMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
