/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/model/GlobalTableSettingsReplicationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace GlobalTableSettingsReplicationModeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_WITH_OVERRIDES_HASH = HashingUtils::HashString("ENABLED_WITH_OVERRIDES");

GlobalTableSettingsReplicationMode GetGlobalTableSettingsReplicationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return GlobalTableSettingsReplicationMode::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return GlobalTableSettingsReplicationMode::DISABLED;
  } else if (hashCode == ENABLED_WITH_OVERRIDES_HASH) {
    return GlobalTableSettingsReplicationMode::ENABLED_WITH_OVERRIDES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GlobalTableSettingsReplicationMode>(hashCode);
  }

  return GlobalTableSettingsReplicationMode::NOT_SET;
}

Aws::String GetNameForGlobalTableSettingsReplicationMode(GlobalTableSettingsReplicationMode enumValue) {
  switch (enumValue) {
    case GlobalTableSettingsReplicationMode::NOT_SET:
      return {};
    case GlobalTableSettingsReplicationMode::ENABLED:
      return "ENABLED";
    case GlobalTableSettingsReplicationMode::DISABLED:
      return "DISABLED";
    case GlobalTableSettingsReplicationMode::ENABLED_WITH_OVERRIDES:
      return "ENABLED_WITH_OVERRIDES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GlobalTableSettingsReplicationModeMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
