/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricFilterStringConditionComparison.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MetricFilterStringConditionComparisonMapper {

static const int MATCHES_ANY_HASH = HashingUtils::HashString("MATCHES_ANY");
static const int MATCHES_NONE_HASH = HashingUtils::HashString("MATCHES_NONE");

MetricFilterStringConditionComparison GetMetricFilterStringConditionComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MATCHES_ANY_HASH) {
    return MetricFilterStringConditionComparison::MATCHES_ANY;
  } else if (hashCode == MATCHES_NONE_HASH) {
    return MetricFilterStringConditionComparison::MATCHES_NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricFilterStringConditionComparison>(hashCode);
  }

  return MetricFilterStringConditionComparison::NOT_SET;
}

Aws::String GetNameForMetricFilterStringConditionComparison(MetricFilterStringConditionComparison enumValue) {
  switch (enumValue) {
    case MetricFilterStringConditionComparison::NOT_SET:
      return {};
    case MetricFilterStringConditionComparison::MATCHES_ANY:
      return "MATCHES_ANY";
    case MetricFilterStringConditionComparison::MATCHES_NONE:
      return "MATCHES_NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricFilterStringConditionComparisonMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
