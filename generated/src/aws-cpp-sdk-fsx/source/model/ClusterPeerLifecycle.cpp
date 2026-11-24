/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/ClusterPeerLifecycle.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace ClusterPeerLifecycleMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ClusterPeerLifecycle GetClusterPeerLifecycleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ClusterPeerLifecycle::CREATING;
  } else if (hashCode == CREATED_HASH) {
    return ClusterPeerLifecycle::CREATED;
  } else if (hashCode == DELETING_HASH) {
    return ClusterPeerLifecycle::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return ClusterPeerLifecycle::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterPeerLifecycle>(hashCode);
  }

  return ClusterPeerLifecycle::NOT_SET;
}

Aws::String GetNameForClusterPeerLifecycle(ClusterPeerLifecycle enumValue) {
  switch (enumValue) {
    case ClusterPeerLifecycle::NOT_SET:
      return {};
    case ClusterPeerLifecycle::CREATING:
      return "CREATING";
    case ClusterPeerLifecycle::CREATED:
      return "CREATED";
    case ClusterPeerLifecycle::DELETING:
      return "DELETING";
    case ClusterPeerLifecycle::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterPeerLifecycleMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
