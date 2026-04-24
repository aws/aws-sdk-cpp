/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/InstanceDrainStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace InstanceDrainStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DRAINING_HASH = HashingUtils::HashString("DRAINING");
static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");

InstanceDrainStatus GetInstanceDrainStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return InstanceDrainStatus::ACTIVE;
  } else if (hashCode == DRAINING_HASH) {
    return InstanceDrainStatus::DRAINING;
  } else if (hashCode == NOT_APPLICABLE_HASH) {
    return InstanceDrainStatus::NOT_APPLICABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceDrainStatus>(hashCode);
  }

  return InstanceDrainStatus::NOT_SET;
}

Aws::String GetNameForInstanceDrainStatus(InstanceDrainStatus enumValue) {
  switch (enumValue) {
    case InstanceDrainStatus::NOT_SET:
      return {};
    case InstanceDrainStatus::ACTIVE:
      return "ACTIVE";
    case InstanceDrainStatus::DRAINING:
      return "DRAINING";
    case InstanceDrainStatus::NOT_APPLICABLE:
      return "NOT_APPLICABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceDrainStatusMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
