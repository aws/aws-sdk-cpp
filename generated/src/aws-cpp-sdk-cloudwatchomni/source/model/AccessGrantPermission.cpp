/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AccessGrantPermission.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace AccessGrantPermissionMapper {

static const int SPACE_ADMIN_HASH = HashingUtils::HashString("SPACE_ADMIN");
static const int READ_HASH = HashingUtils::HashString("READ");
static const int READ_WRITE_DELETE_HASH = HashingUtils::HashString("READ_WRITE_DELETE");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");

AccessGrantPermission GetAccessGrantPermissionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SPACE_ADMIN_HASH) {
    return AccessGrantPermission::SPACE_ADMIN;
  } else if (hashCode == READ_HASH) {
    return AccessGrantPermission::READ;
  } else if (hashCode == READ_WRITE_DELETE_HASH) {
    return AccessGrantPermission::READ_WRITE_DELETE;
  } else if (hashCode == CUSTOM_HASH) {
    return AccessGrantPermission::CUSTOM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessGrantPermission>(hashCode);
  }

  return AccessGrantPermission::NOT_SET;
}

Aws::String GetNameForAccessGrantPermission(AccessGrantPermission enumValue) {
  switch (enumValue) {
    case AccessGrantPermission::NOT_SET:
      return {};
    case AccessGrantPermission::SPACE_ADMIN:
      return "SPACE_ADMIN";
    case AccessGrantPermission::READ:
      return "READ";
    case AccessGrantPermission::READ_WRITE_DELETE:
      return "READ_WRITE_DELETE";
    case AccessGrantPermission::CUSTOM:
      return "CUSTOM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessGrantPermissionMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
