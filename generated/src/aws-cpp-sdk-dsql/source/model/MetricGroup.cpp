/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dsql/model/MetricGroup.h>

using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {
namespace MetricGroupMapper {

static const int STATEMENT_STATISTICS_HASH = HashingUtils::HashString("STATEMENT_STATISTICS");

MetricGroup GetMetricGroupForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STATEMENT_STATISTICS_HASH) {
    return MetricGroup::STATEMENT_STATISTICS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricGroup>(hashCode);
  }

  return MetricGroup::NOT_SET;
}

Aws::String GetNameForMetricGroup(MetricGroup enumValue) {
  switch (enumValue) {
    case MetricGroup::NOT_SET:
      return {};
    case MetricGroup::STATEMENT_STATISTICS:
      return "STATEMENT_STATISTICS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricGroupMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
