/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/OverwriteChildResourcePermissionsWithDefaultEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace OverwriteChildResourcePermissionsWithDefaultEnumMapper {

static const int Accept_HASH = HashingUtils::HashString("Accept");
static const int Deny_HASH = HashingUtils::HashString("Deny");

OverwriteChildResourcePermissionsWithDefaultEnum GetOverwriteChildResourcePermissionsWithDefaultEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Accept_HASH) {
    return OverwriteChildResourcePermissionsWithDefaultEnum::Accept;
  } else if (hashCode == Deny_HASH) {
    return OverwriteChildResourcePermissionsWithDefaultEnum::Deny;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OverwriteChildResourcePermissionsWithDefaultEnum>(hashCode);
  }

  return OverwriteChildResourcePermissionsWithDefaultEnum::NOT_SET;
}

Aws::String GetNameForOverwriteChildResourcePermissionsWithDefaultEnum(OverwriteChildResourcePermissionsWithDefaultEnum enumValue) {
  switch (enumValue) {
    case OverwriteChildResourcePermissionsWithDefaultEnum::NOT_SET:
      return {};
    case OverwriteChildResourcePermissionsWithDefaultEnum::Accept:
      return "Accept";
    case OverwriteChildResourcePermissionsWithDefaultEnum::Deny:
      return "Deny";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OverwriteChildResourcePermissionsWithDefaultEnumMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
