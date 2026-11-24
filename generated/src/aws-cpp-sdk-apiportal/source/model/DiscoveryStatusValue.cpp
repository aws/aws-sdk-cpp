/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DiscoveryStatusValue.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace DiscoveryStatusValueMapper {

static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DiscoveryStatusValue GetDiscoveryStatusValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STOPPED_HASH) {
    return DiscoveryStatusValue::STOPPED;
  } else if (hashCode == PROVISIONING_HASH) {
    return DiscoveryStatusValue::PROVISIONING;
  } else if (hashCode == RUNNING_HASH) {
    return DiscoveryStatusValue::RUNNING;
  } else if (hashCode == FAILED_HASH) {
    return DiscoveryStatusValue::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiscoveryStatusValue>(hashCode);
  }

  return DiscoveryStatusValue::NOT_SET;
}

Aws::String GetNameForDiscoveryStatusValue(DiscoveryStatusValue enumValue) {
  switch (enumValue) {
    case DiscoveryStatusValue::NOT_SET:
      return {};
    case DiscoveryStatusValue::STOPPED:
      return "STOPPED";
    case DiscoveryStatusValue::PROVISIONING:
      return "PROVISIONING";
    case DiscoveryStatusValue::RUNNING:
      return "RUNNING";
    case DiscoveryStatusValue::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiscoveryStatusValueMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
