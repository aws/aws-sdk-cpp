/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/EncryptionSupportOptionValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace EncryptionSupportOptionValueMapper {

static const int enable_HASH = HashingUtils::HashString("enable");
static const int disable_HASH = HashingUtils::HashString("disable");

EncryptionSupportOptionValue GetEncryptionSupportOptionValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enable_HASH) {
    return EncryptionSupportOptionValue::enable;
  } else if (hashCode == disable_HASH) {
    return EncryptionSupportOptionValue::disable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionSupportOptionValue>(hashCode);
  }

  return EncryptionSupportOptionValue::NOT_SET;
}

Aws::String GetNameForEncryptionSupportOptionValue(EncryptionSupportOptionValue enumValue) {
  switch (enumValue) {
    case EncryptionSupportOptionValue::NOT_SET:
      return {};
    case EncryptionSupportOptionValue::enable:
      return "enable";
    case EncryptionSupportOptionValue::disable:
      return "disable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionSupportOptionValueMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
