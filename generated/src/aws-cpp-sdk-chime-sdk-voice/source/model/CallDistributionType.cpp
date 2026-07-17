/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CallDistributionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ChimeSDKVoice {
namespace Model {
namespace CallDistributionTypeMapper {

static const int PriorityWeightedDistribution_HASH = HashingUtils::HashString("PriorityWeightedDistribution");
static const int LoadBalancedDistribution_HASH = HashingUtils::HashString("LoadBalancedDistribution");

CallDistributionType GetCallDistributionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PriorityWeightedDistribution_HASH) {
    return CallDistributionType::PriorityWeightedDistribution;
  } else if (hashCode == LoadBalancedDistribution_HASH) {
    return CallDistributionType::LoadBalancedDistribution;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CallDistributionType>(hashCode);
  }

  return CallDistributionType::NOT_SET;
}

Aws::String GetNameForCallDistributionType(CallDistributionType enumValue) {
  switch (enumValue) {
    case CallDistributionType::NOT_SET:
      return {};
    case CallDistributionType::PriorityWeightedDistribution:
      return "PriorityWeightedDistribution";
    case CallDistributionType::LoadBalancedDistribution:
      return "LoadBalancedDistribution";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CallDistributionTypeMapper
}  // namespace Model
}  // namespace ChimeSDKVoice
}  // namespace Aws
