/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ClusteringFrequency.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ClusteringFrequencyMapper {

static const int DAILY_HASH = HashingUtils::HashString("DAILY");
static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");

ClusteringFrequency GetClusteringFrequencyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DAILY_HASH) {
    return ClusteringFrequency::DAILY;
  } else if (hashCode == WEEKLY_HASH) {
    return ClusteringFrequency::WEEKLY;
  } else if (hashCode == MONTHLY_HASH) {
    return ClusteringFrequency::MONTHLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusteringFrequency>(hashCode);
  }

  return ClusteringFrequency::NOT_SET;
}

Aws::String GetNameForClusteringFrequency(ClusteringFrequency enumValue) {
  switch (enumValue) {
    case ClusteringFrequency::NOT_SET:
      return {};
    case ClusteringFrequency::DAILY:
      return "DAILY";
    case ClusteringFrequency::WEEKLY:
      return "WEEKLY";
    case ClusteringFrequency::MONTHLY:
      return "MONTHLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusteringFrequencyMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
