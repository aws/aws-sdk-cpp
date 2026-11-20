/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DiscoveryConfigurationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace DiscoveryConfigurationStatusMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");

DiscoveryConfigurationStatus GetDiscoveryConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return DiscoveryConfigurationStatus::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return DiscoveryConfigurationStatus::ENABLED;
  } else if (hashCode == UPDATING_HASH) {
    return DiscoveryConfigurationStatus::UPDATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiscoveryConfigurationStatus>(hashCode);
  }

  return DiscoveryConfigurationStatus::NOT_SET;
}

Aws::String GetNameForDiscoveryConfigurationStatus(DiscoveryConfigurationStatus enumValue) {
  switch (enumValue) {
    case DiscoveryConfigurationStatus::NOT_SET:
      return {};
    case DiscoveryConfigurationStatus::DISABLED:
      return "DISABLED";
    case DiscoveryConfigurationStatus::ENABLED:
      return "ENABLED";
    case DiscoveryConfigurationStatus::UPDATING:
      return "UPDATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiscoveryConfigurationStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
