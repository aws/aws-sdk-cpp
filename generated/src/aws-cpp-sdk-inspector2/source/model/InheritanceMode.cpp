/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/InheritanceMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace InheritanceModeMapper {

static const int INHERIT_FROM_ADMIN_HASH = HashingUtils::HashString("INHERIT_FROM_ADMIN");

InheritanceMode GetInheritanceModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INHERIT_FROM_ADMIN_HASH) {
    return InheritanceMode::INHERIT_FROM_ADMIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InheritanceMode>(hashCode);
  }

  return InheritanceMode::NOT_SET;
}

Aws::String GetNameForInheritanceMode(InheritanceMode enumValue) {
  switch (enumValue) {
    case InheritanceMode::NOT_SET:
      return {};
    case InheritanceMode::INHERIT_FROM_ADMIN:
      return "INHERIT_FROM_ADMIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InheritanceModeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
