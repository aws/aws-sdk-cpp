/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AggregationThresholdType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace AggregationThresholdTypeMapper {

static const int COUNT_DISTINCT_HASH = HashingUtils::HashString("COUNT_DISTINCT");

AggregationThresholdType GetAggregationThresholdTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COUNT_DISTINCT_HASH) {
    return AggregationThresholdType::COUNT_DISTINCT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AggregationThresholdType>(hashCode);
  }

  return AggregationThresholdType::NOT_SET;
}

Aws::String GetNameForAggregationThresholdType(AggregationThresholdType enumValue) {
  switch (enumValue) {
    case AggregationThresholdType::NOT_SET:
      return {};
    case AggregationThresholdType::COUNT_DISTINCT:
      return "COUNT_DISTINCT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AggregationThresholdTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
