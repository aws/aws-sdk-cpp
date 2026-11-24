/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapshotPolicyLifecycle.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapshotPolicyLifecycleMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

SnapshotPolicyLifecycle GetSnapshotPolicyLifecycleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return SnapshotPolicyLifecycle::CREATING;
  } else if (hashCode == CREATED_HASH) {
    return SnapshotPolicyLifecycle::CREATED;
  } else if (hashCode == DELETING_HASH) {
    return SnapshotPolicyLifecycle::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return SnapshotPolicyLifecycle::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotPolicyLifecycle>(hashCode);
  }

  return SnapshotPolicyLifecycle::NOT_SET;
}

Aws::String GetNameForSnapshotPolicyLifecycle(SnapshotPolicyLifecycle enumValue) {
  switch (enumValue) {
    case SnapshotPolicyLifecycle::NOT_SET:
      return {};
    case SnapshotPolicyLifecycle::CREATING:
      return "CREATING";
    case SnapshotPolicyLifecycle::CREATED:
      return "CREATED";
    case SnapshotPolicyLifecycle::DELETING:
      return "DELETING";
    case SnapshotPolicyLifecycle::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotPolicyLifecycleMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
