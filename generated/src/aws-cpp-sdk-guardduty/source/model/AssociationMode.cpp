/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/AssociationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace AssociationModeMapper {

static const int LIVE_HASH = HashingUtils::HashString("LIVE");
static const int DRY_RUN_HASH = HashingUtils::HashString("DRY_RUN");

AssociationMode GetAssociationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LIVE_HASH) {
    return AssociationMode::LIVE;
  } else if (hashCode == DRY_RUN_HASH) {
    return AssociationMode::DRY_RUN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssociationMode>(hashCode);
  }

  return AssociationMode::NOT_SET;
}

Aws::String GetNameForAssociationMode(AssociationMode enumValue) {
  switch (enumValue) {
    case AssociationMode::NOT_SET:
      return {};
    case AssociationMode::LIVE:
      return "LIVE";
    case AssociationMode::DRY_RUN:
      return "DRY_RUN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssociationModeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
