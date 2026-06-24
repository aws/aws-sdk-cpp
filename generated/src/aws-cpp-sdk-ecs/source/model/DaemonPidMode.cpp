/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonPidMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonPidModeMapper {

static const int none_HASH = HashingUtils::HashString("none");
static const int shared_HASH = HashingUtils::HashString("shared");

DaemonPidMode GetDaemonPidModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == none_HASH) {
    return DaemonPidMode::none;
  } else if (hashCode == shared_HASH) {
    return DaemonPidMode::shared;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonPidMode>(hashCode);
  }

  return DaemonPidMode::NOT_SET;
}

Aws::String GetNameForDaemonPidMode(DaemonPidMode enumValue) {
  switch (enumValue) {
    case DaemonPidMode::NOT_SET:
      return {};
    case DaemonPidMode::none:
      return "none";
    case DaemonPidMode::shared:
      return "shared";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonPidModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
