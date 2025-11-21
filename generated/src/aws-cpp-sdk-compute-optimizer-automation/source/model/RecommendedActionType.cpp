/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/RecommendedActionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace RecommendedActionTypeMapper {

static const int SnapshotAndDeleteUnattachedEbsVolume_HASH = HashingUtils::HashString("SnapshotAndDeleteUnattachedEbsVolume");
static const int UpgradeEbsVolumeType_HASH = HashingUtils::HashString("UpgradeEbsVolumeType");

RecommendedActionType GetRecommendedActionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SnapshotAndDeleteUnattachedEbsVolume_HASH) {
    return RecommendedActionType::SnapshotAndDeleteUnattachedEbsVolume;
  } else if (hashCode == UpgradeEbsVolumeType_HASH) {
    return RecommendedActionType::UpgradeEbsVolumeType;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendedActionType>(hashCode);
  }

  return RecommendedActionType::NOT_SET;
}

Aws::String GetNameForRecommendedActionType(RecommendedActionType enumValue) {
  switch (enumValue) {
    case RecommendedActionType::NOT_SET:
      return {};
    case RecommendedActionType::SnapshotAndDeleteUnattachedEbsVolume:
      return "SnapshotAndDeleteUnattachedEbsVolume";
    case RecommendedActionType::UpgradeEbsVolumeType:
      return "UpgradeEbsVolumeType";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendedActionTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
