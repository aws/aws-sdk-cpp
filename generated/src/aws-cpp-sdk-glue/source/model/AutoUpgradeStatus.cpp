/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/AutoUpgradeStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace AutoUpgradeStatusMapper {

static const int OBSERVING_HASH = HashingUtils::HashString("OBSERVING");
static const int UPGRADING_HASH = HashingUtils::HashString("UPGRADING");
static const int UPGRADE_SUCCEEDED_HASH = HashingUtils::HashString("UPGRADE_SUCCEEDED");
static const int UPGRADE_FAILED_HASH = HashingUtils::HashString("UPGRADE_FAILED");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int WAITING_FOR_CONSENT_HASH = HashingUtils::HashString("WAITING_FOR_CONSENT");

AutoUpgradeStatus GetAutoUpgradeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OBSERVING_HASH) {
    return AutoUpgradeStatus::OBSERVING;
  } else if (hashCode == UPGRADING_HASH) {
    return AutoUpgradeStatus::UPGRADING;
  } else if (hashCode == UPGRADE_SUCCEEDED_HASH) {
    return AutoUpgradeStatus::UPGRADE_SUCCEEDED;
  } else if (hashCode == UPGRADE_FAILED_HASH) {
    return AutoUpgradeStatus::UPGRADE_FAILED;
  } else if (hashCode == STOPPED_HASH) {
    return AutoUpgradeStatus::STOPPED;
  } else if (hashCode == WAITING_FOR_CONSENT_HASH) {
    return AutoUpgradeStatus::WAITING_FOR_CONSENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoUpgradeStatus>(hashCode);
  }

  return AutoUpgradeStatus::NOT_SET;
}

Aws::String GetNameForAutoUpgradeStatus(AutoUpgradeStatus enumValue) {
  switch (enumValue) {
    case AutoUpgradeStatus::NOT_SET:
      return {};
    case AutoUpgradeStatus::OBSERVING:
      return "OBSERVING";
    case AutoUpgradeStatus::UPGRADING:
      return "UPGRADING";
    case AutoUpgradeStatus::UPGRADE_SUCCEEDED:
      return "UPGRADE_SUCCEEDED";
    case AutoUpgradeStatus::UPGRADE_FAILED:
      return "UPGRADE_FAILED";
    case AutoUpgradeStatus::STOPPED:
      return "STOPPED";
    case AutoUpgradeStatus::WAITING_FOR_CONSENT:
      return "WAITING_FOR_CONSENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoUpgradeStatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
