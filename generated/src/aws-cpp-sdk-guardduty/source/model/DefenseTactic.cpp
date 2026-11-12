/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/DefenseTactic.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace DefenseTacticMapper {

static const int Isolate_HASH = HashingUtils::HashString("Isolate");
static const int Evict_HASH = HashingUtils::HashString("Evict");
static const int Restore_HASH = HashingUtils::HashString("Restore");
static const int Harden_HASH = HashingUtils::HashString("Harden");
static const int Detect_HASH = HashingUtils::HashString("Detect");

DefenseTactic GetDefenseTacticForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Isolate_HASH) {
    return DefenseTactic::Isolate;
  } else if (hashCode == Evict_HASH) {
    return DefenseTactic::Evict;
  } else if (hashCode == Restore_HASH) {
    return DefenseTactic::Restore;
  } else if (hashCode == Harden_HASH) {
    return DefenseTactic::Harden;
  } else if (hashCode == Detect_HASH) {
    return DefenseTactic::Detect;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DefenseTactic>(hashCode);
  }

  return DefenseTactic::NOT_SET;
}

Aws::String GetNameForDefenseTactic(DefenseTactic enumValue) {
  switch (enumValue) {
    case DefenseTactic::NOT_SET:
      return {};
    case DefenseTactic::Isolate:
      return "Isolate";
    case DefenseTactic::Evict:
      return "Evict";
    case DefenseTactic::Restore:
      return "Restore";
    case DefenseTactic::Harden:
      return "Harden";
    case DefenseTactic::Detect:
      return "Detect";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DefenseTacticMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
