/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kms/model/DryRunModifierType.h>

using namespace Aws::Utils;

namespace Aws {
namespace KMS {
namespace Model {
namespace DryRunModifierTypeMapper {

static const int IGNORE_CIPHERTEXT_HASH = HashingUtils::HashString("IGNORE_CIPHERTEXT");

DryRunModifierType GetDryRunModifierTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IGNORE_CIPHERTEXT_HASH) {
    return DryRunModifierType::IGNORE_CIPHERTEXT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DryRunModifierType>(hashCode);
  }

  return DryRunModifierType::NOT_SET;
}

Aws::String GetNameForDryRunModifierType(DryRunModifierType enumValue) {
  switch (enumValue) {
    case DryRunModifierType::NOT_SET:
      return {};
    case DryRunModifierType::IGNORE_CIPHERTEXT:
      return "IGNORE_CIPHERTEXT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DryRunModifierTypeMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
