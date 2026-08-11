/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricFilterNumberConditionComparison.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MetricFilterNumberConditionComparisonMapper {

static const int LESSER_HASH = HashingUtils::HashString("LESSER");
static const int LESSER_OR_EQUAL_HASH = HashingUtils::HashString("LESSER_OR_EQUAL");
static const int GREATER_HASH = HashingUtils::HashString("GREATER");
static const int GREATER_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_OR_EQUAL");

MetricFilterNumberConditionComparison GetMetricFilterNumberConditionComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LESSER_HASH) {
    return MetricFilterNumberConditionComparison::LESSER;
  } else if (hashCode == LESSER_OR_EQUAL_HASH) {
    return MetricFilterNumberConditionComparison::LESSER_OR_EQUAL;
  } else if (hashCode == GREATER_HASH) {
    return MetricFilterNumberConditionComparison::GREATER;
  } else if (hashCode == GREATER_OR_EQUAL_HASH) {
    return MetricFilterNumberConditionComparison::GREATER_OR_EQUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricFilterNumberConditionComparison>(hashCode);
  }

  return MetricFilterNumberConditionComparison::NOT_SET;
}

Aws::String GetNameForMetricFilterNumberConditionComparison(MetricFilterNumberConditionComparison enumValue) {
  switch (enumValue) {
    case MetricFilterNumberConditionComparison::NOT_SET:
      return {};
    case MetricFilterNumberConditionComparison::LESSER:
      return "LESSER";
    case MetricFilterNumberConditionComparison::LESSER_OR_EQUAL:
      return "LESSER_OR_EQUAL";
    case MetricFilterNumberConditionComparison::GREATER:
      return "GREATER";
    case MetricFilterNumberConditionComparison::GREATER_OR_EQUAL:
      return "GREATER_OR_EQUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricFilterNumberConditionComparisonMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
