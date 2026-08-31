/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AutoDetectionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace AutoDetectionStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

AutoDetectionStatus GetAutoDetectionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AutoDetectionStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return AutoDetectionStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoDetectionStatus>(hashCode);
  }

  return AutoDetectionStatus::NOT_SET;
}

Aws::String GetNameForAutoDetectionStatus(AutoDetectionStatus enumValue) {
  switch (enumValue) {
    case AutoDetectionStatus::NOT_SET:
      return {};
    case AutoDetectionStatus::ACTIVE:
      return "ACTIVE";
    case AutoDetectionStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoDetectionStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
