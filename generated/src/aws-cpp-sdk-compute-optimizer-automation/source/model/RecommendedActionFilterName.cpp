/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/RecommendedActionFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace RecommendedActionFilterNameMapper {

static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
static const int RecommendedActionType_HASH = HashingUtils::HashString("RecommendedActionType");
static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
static const int LookBackPeriodInDays_HASH = HashingUtils::HashString("LookBackPeriodInDays");
static const int CurrentResourceDetailsEbsVolumeType_HASH = HashingUtils::HashString("CurrentResourceDetailsEbsVolumeType");
static const int ResourceTagsKey_HASH = HashingUtils::HashString("ResourceTagsKey");
static const int ResourceTagsValue_HASH = HashingUtils::HashString("ResourceTagsValue");
static const int AccountId_HASH = HashingUtils::HashString("AccountId");
static const int RestartNeeded_HASH = HashingUtils::HashString("RestartNeeded");

RecommendedActionFilterName GetRecommendedActionFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ResourceType_HASH) {
    return RecommendedActionFilterName::ResourceType;
  } else if (hashCode == RecommendedActionType_HASH) {
    return RecommendedActionFilterName::RecommendedActionType;
  } else if (hashCode == ResourceId_HASH) {
    return RecommendedActionFilterName::ResourceId;
  } else if (hashCode == LookBackPeriodInDays_HASH) {
    return RecommendedActionFilterName::LookBackPeriodInDays;
  } else if (hashCode == CurrentResourceDetailsEbsVolumeType_HASH) {
    return RecommendedActionFilterName::CurrentResourceDetailsEbsVolumeType;
  } else if (hashCode == ResourceTagsKey_HASH) {
    return RecommendedActionFilterName::ResourceTagsKey;
  } else if (hashCode == ResourceTagsValue_HASH) {
    return RecommendedActionFilterName::ResourceTagsValue;
  } else if (hashCode == AccountId_HASH) {
    return RecommendedActionFilterName::AccountId;
  } else if (hashCode == RestartNeeded_HASH) {
    return RecommendedActionFilterName::RestartNeeded;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendedActionFilterName>(hashCode);
  }

  return RecommendedActionFilterName::NOT_SET;
}

Aws::String GetNameForRecommendedActionFilterName(RecommendedActionFilterName enumValue) {
  switch (enumValue) {
    case RecommendedActionFilterName::NOT_SET:
      return {};
    case RecommendedActionFilterName::ResourceType:
      return "ResourceType";
    case RecommendedActionFilterName::RecommendedActionType:
      return "RecommendedActionType";
    case RecommendedActionFilterName::ResourceId:
      return "ResourceId";
    case RecommendedActionFilterName::LookBackPeriodInDays:
      return "LookBackPeriodInDays";
    case RecommendedActionFilterName::CurrentResourceDetailsEbsVolumeType:
      return "CurrentResourceDetailsEbsVolumeType";
    case RecommendedActionFilterName::ResourceTagsKey:
      return "ResourceTagsKey";
    case RecommendedActionFilterName::ResourceTagsValue:
      return "ResourceTagsValue";
    case RecommendedActionFilterName::AccountId:
      return "AccountId";
    case RecommendedActionFilterName::RestartNeeded:
      return "RestartNeeded";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendedActionFilterNameMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
