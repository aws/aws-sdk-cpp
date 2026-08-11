/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricFilterBooleanConditionComparison.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MetricFilterBooleanConditionComparisonMapper {

static const int IS_TRUE_HASH = HashingUtils::HashString("IS_TRUE");
static const int IS_FALSE_HASH = HashingUtils::HashString("IS_FALSE");

MetricFilterBooleanConditionComparison GetMetricFilterBooleanConditionComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IS_TRUE_HASH) {
    return MetricFilterBooleanConditionComparison::IS_TRUE;
  } else if (hashCode == IS_FALSE_HASH) {
    return MetricFilterBooleanConditionComparison::IS_FALSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricFilterBooleanConditionComparison>(hashCode);
  }

  return MetricFilterBooleanConditionComparison::NOT_SET;
}

Aws::String GetNameForMetricFilterBooleanConditionComparison(MetricFilterBooleanConditionComparison enumValue) {
  switch (enumValue) {
    case MetricFilterBooleanConditionComparison::NOT_SET:
      return {};
    case MetricFilterBooleanConditionComparison::IS_TRUE:
      return "IS_TRUE";
    case MetricFilterBooleanConditionComparison::IS_FALSE:
      return "IS_FALSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricFilterBooleanConditionComparisonMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
