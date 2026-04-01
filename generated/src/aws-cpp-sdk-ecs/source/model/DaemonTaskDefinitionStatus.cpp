/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonTaskDefinitionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonTaskDefinitionStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

DaemonTaskDefinitionStatus GetDaemonTaskDefinitionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return DaemonTaskDefinitionStatus::ACTIVE;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return DaemonTaskDefinitionStatus::DELETE_IN_PROGRESS;
  } else if (hashCode == DELETED_HASH) {
    return DaemonTaskDefinitionStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonTaskDefinitionStatus>(hashCode);
  }

  return DaemonTaskDefinitionStatus::NOT_SET;
}

Aws::String GetNameForDaemonTaskDefinitionStatus(DaemonTaskDefinitionStatus enumValue) {
  switch (enumValue) {
    case DaemonTaskDefinitionStatus::NOT_SET:
      return {};
    case DaemonTaskDefinitionStatus::ACTIVE:
      return "ACTIVE";
    case DaemonTaskDefinitionStatus::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    case DaemonTaskDefinitionStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonTaskDefinitionStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
