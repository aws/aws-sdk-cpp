/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/ThresholdMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace ThresholdModeMapper {

static const int COUNT_OF_RESULTS_HASH = HashingUtils::HashString("COUNT_OF_RESULTS");
static const int FIELD_VALUE_HASH = HashingUtils::HashString("FIELD_VALUE");

ThresholdMode GetThresholdModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COUNT_OF_RESULTS_HASH) {
    return ThresholdMode::COUNT_OF_RESULTS;
  } else if (hashCode == FIELD_VALUE_HASH) {
    return ThresholdMode::FIELD_VALUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThresholdMode>(hashCode);
  }

  return ThresholdMode::NOT_SET;
}

Aws::String GetNameForThresholdMode(ThresholdMode enumValue) {
  switch (enumValue) {
    case ThresholdMode::NOT_SET:
      return {};
    case ThresholdMode::COUNT_OF_RESULTS:
      return "COUNT_OF_RESULTS";
    case ThresholdMode::FIELD_VALUE:
      return "FIELD_VALUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThresholdModeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
