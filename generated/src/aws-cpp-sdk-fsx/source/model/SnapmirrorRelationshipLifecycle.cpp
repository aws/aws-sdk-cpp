/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapmirrorRelationshipLifecycle.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapmirrorRelationshipLifecycleMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

SnapmirrorRelationshipLifecycle GetSnapmirrorRelationshipLifecycleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return SnapmirrorRelationshipLifecycle::CREATING;
  } else if (hashCode == CREATED_HASH) {
    return SnapmirrorRelationshipLifecycle::CREATED;
  } else if (hashCode == DELETING_HASH) {
    return SnapmirrorRelationshipLifecycle::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return SnapmirrorRelationshipLifecycle::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapmirrorRelationshipLifecycle>(hashCode);
  }

  return SnapmirrorRelationshipLifecycle::NOT_SET;
}

Aws::String GetNameForSnapmirrorRelationshipLifecycle(SnapmirrorRelationshipLifecycle enumValue) {
  switch (enumValue) {
    case SnapmirrorRelationshipLifecycle::NOT_SET:
      return {};
    case SnapmirrorRelationshipLifecycle::CREATING:
      return "CREATING";
    case SnapmirrorRelationshipLifecycle::CREATED:
      return "CREATED";
    case SnapmirrorRelationshipLifecycle::DELETING:
      return "DELETING";
    case SnapmirrorRelationshipLifecycle::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapmirrorRelationshipLifecycleMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
