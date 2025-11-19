/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cost-optimization-hub/model/GranularityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CostOptimizationHub {
namespace Model {
namespace GranularityTypeMapper {

static const int Daily_HASH = HashingUtils::HashString("Daily");
static const int Monthly_HASH = HashingUtils::HashString("Monthly");

GranularityType GetGranularityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Daily_HASH) {
    return GranularityType::Daily;
  } else if (hashCode == Monthly_HASH) {
    return GranularityType::Monthly;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GranularityType>(hashCode);
  }

  return GranularityType::NOT_SET;
}

Aws::String GetNameForGranularityType(GranularityType enumValue) {
  switch (enumValue) {
    case GranularityType::NOT_SET:
      return {};
    case GranularityType::Daily:
      return "Daily";
    case GranularityType::Monthly:
      return "Monthly";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GranularityTypeMapper
}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
