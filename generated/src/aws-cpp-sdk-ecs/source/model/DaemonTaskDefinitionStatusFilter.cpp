/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonTaskDefinitionStatusFilter.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonTaskDefinitionStatusFilterMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
static const int ALL_HASH = HashingUtils::HashString("ALL");

DaemonTaskDefinitionStatusFilter GetDaemonTaskDefinitionStatusFilterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return DaemonTaskDefinitionStatusFilter::ACTIVE;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return DaemonTaskDefinitionStatusFilter::DELETE_IN_PROGRESS;
  } else if (hashCode == ALL_HASH) {
    return DaemonTaskDefinitionStatusFilter::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonTaskDefinitionStatusFilter>(hashCode);
  }

  return DaemonTaskDefinitionStatusFilter::NOT_SET;
}

Aws::String GetNameForDaemonTaskDefinitionStatusFilter(DaemonTaskDefinitionStatusFilter enumValue) {
  switch (enumValue) {
    case DaemonTaskDefinitionStatusFilter::NOT_SET:
      return {};
    case DaemonTaskDefinitionStatusFilter::ACTIVE:
      return "ACTIVE";
    case DaemonTaskDefinitionStatusFilter::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    case DaemonTaskDefinitionStatusFilter::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonTaskDefinitionStatusFilterMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
