/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AccountVpcEncryptionControlMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AccountVpcEncryptionControlModeMapper {

static const int unmanaged_HASH = HashingUtils::HashString("unmanaged");
static const int attempt_monitor_HASH = HashingUtils::HashString("attempt-monitor");
static const int attempt_enforce_HASH = HashingUtils::HashString("attempt-enforce");

AccountVpcEncryptionControlMode GetAccountVpcEncryptionControlModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == unmanaged_HASH) {
    return AccountVpcEncryptionControlMode::unmanaged;
  } else if (hashCode == attempt_monitor_HASH) {
    return AccountVpcEncryptionControlMode::attempt_monitor;
  } else if (hashCode == attempt_enforce_HASH) {
    return AccountVpcEncryptionControlMode::attempt_enforce;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccountVpcEncryptionControlMode>(hashCode);
  }

  return AccountVpcEncryptionControlMode::NOT_SET;
}

Aws::String GetNameForAccountVpcEncryptionControlMode(AccountVpcEncryptionControlMode enumValue) {
  switch (enumValue) {
    case AccountVpcEncryptionControlMode::NOT_SET:
      return {};
    case AccountVpcEncryptionControlMode::unmanaged:
      return "unmanaged";
    case AccountVpcEncryptionControlMode::attempt_monitor:
      return "attempt-monitor";
    case AccountVpcEncryptionControlMode::attempt_enforce:
      return "attempt-enforce";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccountVpcEncryptionControlModeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
