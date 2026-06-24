/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonIpcMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonIpcModeMapper {

static const int none_HASH = HashingUtils::HashString("none");
static const int shared_HASH = HashingUtils::HashString("shared");

DaemonIpcMode GetDaemonIpcModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == none_HASH) {
    return DaemonIpcMode::none;
  } else if (hashCode == shared_HASH) {
    return DaemonIpcMode::shared;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonIpcMode>(hashCode);
  }

  return DaemonIpcMode::NOT_SET;
}

Aws::String GetNameForDaemonIpcMode(DaemonIpcMode enumValue) {
  switch (enumValue) {
    case DaemonIpcMode::NOT_SET:
      return {};
    case DaemonIpcMode::none:
      return "none";
    case DaemonIpcMode::shared:
      return "shared";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonIpcModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
