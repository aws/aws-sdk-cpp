/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/OrganizationGrantPermission.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace OrganizationGrantPermissionMapper {

static const int ADMIN_HASH = HashingUtils::HashString("ADMIN");

OrganizationGrantPermission GetOrganizationGrantPermissionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADMIN_HASH) {
    return OrganizationGrantPermission::ADMIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationGrantPermission>(hashCode);
  }

  return OrganizationGrantPermission::NOT_SET;
}

Aws::String GetNameForOrganizationGrantPermission(OrganizationGrantPermission enumValue) {
  switch (enumValue) {
    case OrganizationGrantPermission::NOT_SET:
      return {};
    case OrganizationGrantPermission::ADMIN:
      return "ADMIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationGrantPermissionMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
