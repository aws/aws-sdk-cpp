/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/MetricMonotonicity.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace MetricMonotonicityMapper {

static const int monotonic_HASH = HashingUtils::HashString("monotonic");
static const int non_monotonic_HASH = HashingUtils::HashString("non_monotonic");

MetricMonotonicity GetMetricMonotonicityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == monotonic_HASH) {
    return MetricMonotonicity::monotonic;
  } else if (hashCode == non_monotonic_HASH) {
    return MetricMonotonicity::non_monotonic;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricMonotonicity>(hashCode);
  }

  return MetricMonotonicity::NOT_SET;
}

Aws::String GetNameForMetricMonotonicity(MetricMonotonicity enumValue) {
  switch (enumValue) {
    case MetricMonotonicity::NOT_SET:
      return {};
    case MetricMonotonicity::monotonic:
      return "monotonic";
    case MetricMonotonicity::non_monotonic:
      return "non_monotonic";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricMonotonicityMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
