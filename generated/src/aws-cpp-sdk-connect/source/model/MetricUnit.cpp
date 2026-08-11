/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricUnit.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MetricUnitMapper {

static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
static const int PERCENT_HASH = HashingUtils::HashString("PERCENT");
static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");

MetricUnit GetMetricUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTEGER_HASH) {
    return MetricUnit::INTEGER;
  } else if (hashCode == DOUBLE_HASH) {
    return MetricUnit::DOUBLE;
  } else if (hashCode == PERCENT_HASH) {
    return MetricUnit::PERCENT;
  } else if (hashCode == SECONDS_HASH) {
    return MetricUnit::SECONDS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricUnit>(hashCode);
  }

  return MetricUnit::NOT_SET;
}

Aws::String GetNameForMetricUnit(MetricUnit enumValue) {
  switch (enumValue) {
    case MetricUnit::NOT_SET:
      return {};
    case MetricUnit::INTEGER:
      return "INTEGER";
    case MetricUnit::DOUBLE:
      return "DOUBLE";
    case MetricUnit::PERCENT:
      return "PERCENT";
    case MetricUnit::SECONDS:
      return "SECONDS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricUnitMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
