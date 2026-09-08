/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ChannelWorkloadBehaviorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ChannelWorkloadBehaviorTypeMapper {

static const int ROUTE_CURRENT_CHANNEL_CURRENT_WORKLOADTYPE_ONLY_HASH =
    HashingUtils::HashString("ROUTE_CURRENT_CHANNEL_CURRENT_WORKLOADTYPE_ONLY");
static const int ROUTE_CURRENT_CHANNEL_ANY_WORKLOADTYPE_ONLY_HASH = HashingUtils::HashString("ROUTE_CURRENT_CHANNEL_ANY_WORKLOADTYPE_ONLY");
static const int ROUTE_ANY_CHANNEL_ANY_WORKLOAD_TYPE_HASH = HashingUtils::HashString("ROUTE_ANY_CHANNEL_ANY_WORKLOAD_TYPE");

ChannelWorkloadBehaviorType GetChannelWorkloadBehaviorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ROUTE_CURRENT_CHANNEL_CURRENT_WORKLOADTYPE_ONLY_HASH) {
    return ChannelWorkloadBehaviorType::ROUTE_CURRENT_CHANNEL_CURRENT_WORKLOADTYPE_ONLY;
  } else if (hashCode == ROUTE_CURRENT_CHANNEL_ANY_WORKLOADTYPE_ONLY_HASH) {
    return ChannelWorkloadBehaviorType::ROUTE_CURRENT_CHANNEL_ANY_WORKLOADTYPE_ONLY;
  } else if (hashCode == ROUTE_ANY_CHANNEL_ANY_WORKLOAD_TYPE_HASH) {
    return ChannelWorkloadBehaviorType::ROUTE_ANY_CHANNEL_ANY_WORKLOAD_TYPE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelWorkloadBehaviorType>(hashCode);
  }

  return ChannelWorkloadBehaviorType::NOT_SET;
}

Aws::String GetNameForChannelWorkloadBehaviorType(ChannelWorkloadBehaviorType enumValue) {
  switch (enumValue) {
    case ChannelWorkloadBehaviorType::NOT_SET:
      return {};
    case ChannelWorkloadBehaviorType::ROUTE_CURRENT_CHANNEL_CURRENT_WORKLOADTYPE_ONLY:
      return "ROUTE_CURRENT_CHANNEL_CURRENT_WORKLOADTYPE_ONLY";
    case ChannelWorkloadBehaviorType::ROUTE_CURRENT_CHANNEL_ANY_WORKLOADTYPE_ONLY:
      return "ROUTE_CURRENT_CHANNEL_ANY_WORKLOADTYPE_ONLY";
    case ChannelWorkloadBehaviorType::ROUTE_ANY_CHANNEL_ANY_WORKLOAD_TYPE:
      return "ROUTE_ANY_CHANNEL_ANY_WORKLOAD_TYPE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelWorkloadBehaviorTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
