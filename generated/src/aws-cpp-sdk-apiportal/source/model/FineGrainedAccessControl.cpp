/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/FineGrainedAccessControl.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace FineGrainedAccessControlMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

FineGrainedAccessControl GetFineGrainedAccessControlForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return FineGrainedAccessControl::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return FineGrainedAccessControl::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FineGrainedAccessControl>(hashCode);
  }

  return FineGrainedAccessControl::NOT_SET;
}

Aws::String GetNameForFineGrainedAccessControl(FineGrainedAccessControl enumValue) {
  switch (enumValue) {
    case FineGrainedAccessControl::NOT_SET:
      return {};
    case FineGrainedAccessControl::ENABLED:
      return "ENABLED";
    case FineGrainedAccessControl::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FineGrainedAccessControlMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
