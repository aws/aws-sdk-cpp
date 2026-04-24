/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/MaterializedViewRefreshState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace MaterializedViewRefreshStateMapper {

static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

MaterializedViewRefreshState GetMaterializedViewRefreshStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTING_HASH) {
    return MaterializedViewRefreshState::STARTING;
  } else if (hashCode == RUNNING_HASH) {
    return MaterializedViewRefreshState::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return MaterializedViewRefreshState::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return MaterializedViewRefreshState::FAILED;
  } else if (hashCode == STOPPED_HASH) {
    return MaterializedViewRefreshState::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MaterializedViewRefreshState>(hashCode);
  }

  return MaterializedViewRefreshState::NOT_SET;
}

Aws::String GetNameForMaterializedViewRefreshState(MaterializedViewRefreshState enumValue) {
  switch (enumValue) {
    case MaterializedViewRefreshState::NOT_SET:
      return {};
    case MaterializedViewRefreshState::STARTING:
      return "STARTING";
    case MaterializedViewRefreshState::RUNNING:
      return "RUNNING";
    case MaterializedViewRefreshState::SUCCEEDED:
      return "SUCCEEDED";
    case MaterializedViewRefreshState::FAILED:
      return "FAILED";
    case MaterializedViewRefreshState::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MaterializedViewRefreshStateMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
