/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/EncryptionStateValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace EncryptionStateValueMapper {

static const int enabling_HASH = HashingUtils::HashString("enabling");
static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabling_HASH = HashingUtils::HashString("disabling");
static const int disabled_HASH = HashingUtils::HashString("disabled");

EncryptionStateValue GetEncryptionStateValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabling_HASH) {
    return EncryptionStateValue::enabling;
  } else if (hashCode == enabled_HASH) {
    return EncryptionStateValue::enabled;
  } else if (hashCode == disabling_HASH) {
    return EncryptionStateValue::disabling;
  } else if (hashCode == disabled_HASH) {
    return EncryptionStateValue::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionStateValue>(hashCode);
  }

  return EncryptionStateValue::NOT_SET;
}

Aws::String GetNameForEncryptionStateValue(EncryptionStateValue enumValue) {
  switch (enumValue) {
    case EncryptionStateValue::NOT_SET:
      return {};
    case EncryptionStateValue::enabling:
      return "enabling";
    case EncryptionStateValue::enabled:
      return "enabled";
    case EncryptionStateValue::disabling:
      return "disabling";
    case EncryptionStateValue::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionStateValueMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
