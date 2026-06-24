/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UserControlMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace UserControlModeMapper {

static const int VIEW_ONLY_HASH = HashingUtils::HashString("VIEW_ONLY");
static const int VIEW_STOP_HASH = HashingUtils::HashString("VIEW_STOP");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

UserControlMode GetUserControlModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VIEW_ONLY_HASH) {
    return UserControlMode::VIEW_ONLY;
  } else if (hashCode == VIEW_STOP_HASH) {
    return UserControlMode::VIEW_STOP;
  } else if (hashCode == DISABLED_HASH) {
    return UserControlMode::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UserControlMode>(hashCode);
  }

  return UserControlMode::NOT_SET;
}

Aws::String GetNameForUserControlMode(UserControlMode enumValue) {
  switch (enumValue) {
    case UserControlMode::NOT_SET:
      return {};
    case UserControlMode::VIEW_ONLY:
      return "VIEW_ONLY";
    case UserControlMode::VIEW_STOP:
      return "VIEW_STOP";
    case UserControlMode::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UserControlModeMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
