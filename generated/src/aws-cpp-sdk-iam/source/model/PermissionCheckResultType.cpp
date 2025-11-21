/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/PermissionCheckResultType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace PermissionCheckResultTypeMapper {

static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");
static const int DENIED_HASH = HashingUtils::HashString("DENIED");
static const int UNSURE_HASH = HashingUtils::HashString("UNSURE");

PermissionCheckResultType GetPermissionCheckResultTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOWED_HASH) {
    return PermissionCheckResultType::ALLOWED;
  } else if (hashCode == DENIED_HASH) {
    return PermissionCheckResultType::DENIED;
  } else if (hashCode == UNSURE_HASH) {
    return PermissionCheckResultType::UNSURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PermissionCheckResultType>(hashCode);
  }

  return PermissionCheckResultType::NOT_SET;
}

Aws::String GetNameForPermissionCheckResultType(PermissionCheckResultType enumValue) {
  switch (enumValue) {
    case PermissionCheckResultType::NOT_SET:
      return {};
    case PermissionCheckResultType::ALLOWED:
      return "ALLOWED";
    case PermissionCheckResultType::DENIED:
      return "DENIED";
    case PermissionCheckResultType::UNSURE:
      return "UNSURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PermissionCheckResultTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
