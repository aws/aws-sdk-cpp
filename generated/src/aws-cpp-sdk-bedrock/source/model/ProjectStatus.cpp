/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ProjectStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace ProjectStatusMapper {

static const int active_HASH = HashingUtils::HashString("active");
static const int archived_HASH = HashingUtils::HashString("archived");

ProjectStatus GetProjectStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == active_HASH) {
    return ProjectStatus::active;
  } else if (hashCode == archived_HASH) {
    return ProjectStatus::archived;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProjectStatus>(hashCode);
  }

  return ProjectStatus::NOT_SET;
}

Aws::String GetNameForProjectStatus(ProjectStatus enumValue) {
  switch (enumValue) {
    case ProjectStatus::NOT_SET:
      return {};
    case ProjectStatus::active:
      return "active";
    case ProjectStatus::archived:
      return "archived";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProjectStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
