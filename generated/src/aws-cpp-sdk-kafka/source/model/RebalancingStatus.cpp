/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/RebalancingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace RebalancingStatusMapper {

static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

RebalancingStatus GetRebalancingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PAUSED_HASH) {
    return RebalancingStatus::PAUSED;
  } else if (hashCode == ACTIVE_HASH) {
    return RebalancingStatus::ACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RebalancingStatus>(hashCode);
  }

  return RebalancingStatus::NOT_SET;
}

Aws::String GetNameForRebalancingStatus(RebalancingStatus enumValue) {
  switch (enumValue) {
    case RebalancingStatus::NOT_SET:
      return {};
    case RebalancingStatus::PAUSED:
      return "PAUSED";
    case RebalancingStatus::ACTIVE:
      return "ACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RebalancingStatusMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
