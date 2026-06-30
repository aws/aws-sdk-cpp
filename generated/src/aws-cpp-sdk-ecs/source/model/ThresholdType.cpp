/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ThresholdType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ThresholdTypeMapper {

static const int COUNT_HASH = HashingUtils::HashString("COUNT");
static const int BOUNDED_PERCENT_HASH = HashingUtils::HashString("BOUNDED_PERCENT");
static const int UNBOUNDED_PERCENT_HASH = HashingUtils::HashString("UNBOUNDED_PERCENT");

ThresholdType GetThresholdTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COUNT_HASH) {
    return ThresholdType::COUNT;
  } else if (hashCode == BOUNDED_PERCENT_HASH) {
    return ThresholdType::BOUNDED_PERCENT;
  } else if (hashCode == UNBOUNDED_PERCENT_HASH) {
    return ThresholdType::UNBOUNDED_PERCENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThresholdType>(hashCode);
  }

  return ThresholdType::NOT_SET;
}

Aws::String GetNameForThresholdType(ThresholdType enumValue) {
  switch (enumValue) {
    case ThresholdType::NOT_SET:
      return {};
    case ThresholdType::COUNT:
      return "COUNT";
    case ThresholdType::BOUNDED_PERCENT:
      return "BOUNDED_PERCENT";
    case ThresholdType::UNBOUNDED_PERCENT:
      return "UNBOUNDED_PERCENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThresholdTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
