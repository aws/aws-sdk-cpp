/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/TriggerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace TriggerTypeMapper {

static const int BACKUP_HASH = HashingUtils::HashString("BACKUP");
static const int GUARDDUTY_HASH = HashingUtils::HashString("GUARDDUTY");

TriggerType GetTriggerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BACKUP_HASH) {
    return TriggerType::BACKUP;
  } else if (hashCode == GUARDDUTY_HASH) {
    return TriggerType::GUARDDUTY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TriggerType>(hashCode);
  }

  return TriggerType::NOT_SET;
}

Aws::String GetNameForTriggerType(TriggerType enumValue) {
  switch (enumValue) {
    case TriggerType::NOT_SET:
      return {};
    case TriggerType::BACKUP:
      return "BACKUP";
    case TriggerType::GUARDDUTY:
      return "GUARDDUTY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TriggerTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
