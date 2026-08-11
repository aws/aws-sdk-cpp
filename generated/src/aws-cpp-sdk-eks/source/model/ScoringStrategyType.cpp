/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/ScoringStrategyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace ScoringStrategyTypeMapper {

static const int LeastAllocated_HASH = HashingUtils::HashString("LeastAllocated");
static const int MostAllocated_HASH = HashingUtils::HashString("MostAllocated");

ScoringStrategyType GetScoringStrategyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LeastAllocated_HASH) {
    return ScoringStrategyType::LeastAllocated;
  } else if (hashCode == MostAllocated_HASH) {
    return ScoringStrategyType::MostAllocated;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScoringStrategyType>(hashCode);
  }

  return ScoringStrategyType::NOT_SET;
}

Aws::String GetNameForScoringStrategyType(ScoringStrategyType enumValue) {
  switch (enumValue) {
    case ScoringStrategyType::NOT_SET:
      return {};
    case ScoringStrategyType::LeastAllocated:
      return "LeastAllocated";
    case ScoringStrategyType::MostAllocated:
      return "MostAllocated";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScoringStrategyTypeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
