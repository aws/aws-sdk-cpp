/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DiscoveryFailureReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace DiscoveryFailureReasonMapper {

static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int DEPENDENCY_ERROR_HASH = HashingUtils::HashString("DEPENDENCY_ERROR");
static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
static const int INVALID_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_CONFIGURATION");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

DiscoveryFailureReason GetDiscoveryFailureReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_DENIED_HASH) {
    return DiscoveryFailureReason::ACCESS_DENIED;
  } else if (hashCode == DEPENDENCY_ERROR_HASH) {
    return DiscoveryFailureReason::DEPENDENCY_ERROR;
  } else if (hashCode == THROTTLED_HASH) {
    return DiscoveryFailureReason::THROTTLED;
  } else if (hashCode == INVALID_CONFIGURATION_HASH) {
    return DiscoveryFailureReason::INVALID_CONFIGURATION;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return DiscoveryFailureReason::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiscoveryFailureReason>(hashCode);
  }

  return DiscoveryFailureReason::NOT_SET;
}

Aws::String GetNameForDiscoveryFailureReason(DiscoveryFailureReason enumValue) {
  switch (enumValue) {
    case DiscoveryFailureReason::NOT_SET:
      return {};
    case DiscoveryFailureReason::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case DiscoveryFailureReason::DEPENDENCY_ERROR:
      return "DEPENDENCY_ERROR";
    case DiscoveryFailureReason::THROTTLED:
      return "THROTTLED";
    case DiscoveryFailureReason::INVALID_CONFIGURATION:
      return "INVALID_CONFIGURATION";
    case DiscoveryFailureReason::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiscoveryFailureReasonMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
