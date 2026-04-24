/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DeletionProtection.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {
namespace DeletionProtectionMapper {

static const int none_HASH = HashingUtils::HashString("none");
static const int prevent_force_deletion_HASH = HashingUtils::HashString("prevent-force-deletion");
static const int prevent_all_deletion_HASH = HashingUtils::HashString("prevent-all-deletion");

DeletionProtection GetDeletionProtectionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == none_HASH) {
    return DeletionProtection::none;
  } else if (hashCode == prevent_force_deletion_HASH) {
    return DeletionProtection::prevent_force_deletion;
  } else if (hashCode == prevent_all_deletion_HASH) {
    return DeletionProtection::prevent_all_deletion;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeletionProtection>(hashCode);
  }

  return DeletionProtection::NOT_SET;
}

Aws::String GetNameForDeletionProtection(DeletionProtection enumValue) {
  switch (enumValue) {
    case DeletionProtection::NOT_SET:
      return {};
    case DeletionProtection::none:
      return "none";
    case DeletionProtection::prevent_force_deletion:
      return "prevent-force-deletion";
    case DeletionProtection::prevent_all_deletion:
      return "prevent-all-deletion";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeletionProtectionMapper
}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
