/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ManagedBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ManagedByMapper {

static const int GUARDDUTY_POLICY_HASH = HashingUtils::HashString("GUARDDUTY_POLICY");

ManagedBy GetManagedByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GUARDDUTY_POLICY_HASH) {
    return ManagedBy::GUARDDUTY_POLICY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedBy>(hashCode);
  }

  return ManagedBy::NOT_SET;
}

Aws::String GetNameForManagedBy(ManagedBy enumValue) {
  switch (enumValue) {
    case ManagedBy::NOT_SET:
      return {};
    case ManagedBy::GUARDDUTY_POLICY:
      return "GUARDDUTY_POLICY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedByMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
