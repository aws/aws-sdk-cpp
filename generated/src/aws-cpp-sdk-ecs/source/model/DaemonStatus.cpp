/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");

DaemonStatus GetDaemonStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return DaemonStatus::ACTIVE;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return DaemonStatus::DELETE_IN_PROGRESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonStatus>(hashCode);
  }

  return DaemonStatus::NOT_SET;
}

Aws::String GetNameForDaemonStatus(DaemonStatus enumValue) {
  switch (enumValue) {
    case DaemonStatus::NOT_SET:
      return {};
    case DaemonStatus::ACTIVE:
      return "ACTIVE";
    case DaemonStatus::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
