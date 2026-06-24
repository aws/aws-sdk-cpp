/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/AnalyticsStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace AnalyticsStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
static const int PAUSING_HASH = HashingUtils::HashString("PAUSING");
static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");

AnalyticsStatus GetAnalyticsStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return AnalyticsStatus::ENABLED;
  } else if (hashCode == ENABLING_HASH) {
    return AnalyticsStatus::ENABLING;
  } else if (hashCode == DISABLED_HASH) {
    return AnalyticsStatus::DISABLED;
  } else if (hashCode == DISABLING_HASH) {
    return AnalyticsStatus::DISABLING;
  } else if (hashCode == PAUSING_HASH) {
    return AnalyticsStatus::PAUSING;
  } else if (hashCode == PAUSED_HASH) {
    return AnalyticsStatus::PAUSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalyticsStatus>(hashCode);
  }

  return AnalyticsStatus::NOT_SET;
}

Aws::String GetNameForAnalyticsStatus(AnalyticsStatus enumValue) {
  switch (enumValue) {
    case AnalyticsStatus::NOT_SET:
      return {};
    case AnalyticsStatus::ENABLED:
      return "ENABLED";
    case AnalyticsStatus::ENABLING:
      return "ENABLING";
    case AnalyticsStatus::DISABLED:
      return "DISABLED";
    case AnalyticsStatus::DISABLING:
      return "DISABLING";
    case AnalyticsStatus::PAUSING:
      return "PAUSING";
    case AnalyticsStatus::PAUSED:
      return "PAUSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalyticsStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
