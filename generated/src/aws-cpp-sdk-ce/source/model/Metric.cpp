/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Metric.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CostExplorer {
namespace Model {
namespace MetricMapper {

static const int BLENDED_COST_HASH = HashingUtils::HashString("BLENDED_COST");
static const int UNBLENDED_COST_HASH = HashingUtils::HashString("UNBLENDED_COST");
static const int AMORTIZED_COST_HASH = HashingUtils::HashString("AMORTIZED_COST");
static const int NET_UNBLENDED_COST_HASH = HashingUtils::HashString("NET_UNBLENDED_COST");
static const int NET_AMORTIZED_COST_HASH = HashingUtils::HashString("NET_AMORTIZED_COST");
static const int USAGE_QUANTITY_HASH = HashingUtils::HashString("USAGE_QUANTITY");
static const int NORMALIZED_USAGE_AMOUNT_HASH = HashingUtils::HashString("NORMALIZED_USAGE_AMOUNT");
static const int LIST_COST_HASH = HashingUtils::HashString("LIST_COST");
static const int CONTRACTED_COST_HASH = HashingUtils::HashString("CONTRACTED_COST");
static const int BILLED_COST_HASH = HashingUtils::HashString("BILLED_COST");
static const int PUBLIC_EQUIVALENT_BILLED_COST_HASH = HashingUtils::HashString("PUBLIC_EQUIVALENT_BILLED_COST");
static const int PUBLIC_ON_DEMAND_COST_HASH = HashingUtils::HashString("PUBLIC_ON_DEMAND_COST");

Metric GetMetricForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BLENDED_COST_HASH) {
    return Metric::BLENDED_COST;
  } else if (hashCode == UNBLENDED_COST_HASH) {
    return Metric::UNBLENDED_COST;
  } else if (hashCode == AMORTIZED_COST_HASH) {
    return Metric::AMORTIZED_COST;
  } else if (hashCode == NET_UNBLENDED_COST_HASH) {
    return Metric::NET_UNBLENDED_COST;
  } else if (hashCode == NET_AMORTIZED_COST_HASH) {
    return Metric::NET_AMORTIZED_COST;
  } else if (hashCode == USAGE_QUANTITY_HASH) {
    return Metric::USAGE_QUANTITY;
  } else if (hashCode == NORMALIZED_USAGE_AMOUNT_HASH) {
    return Metric::NORMALIZED_USAGE_AMOUNT;
  } else if (hashCode == LIST_COST_HASH) {
    return Metric::LIST_COST;
  } else if (hashCode == CONTRACTED_COST_HASH) {
    return Metric::CONTRACTED_COST;
  } else if (hashCode == BILLED_COST_HASH) {
    return Metric::BILLED_COST;
  } else if (hashCode == PUBLIC_EQUIVALENT_BILLED_COST_HASH) {
    return Metric::PUBLIC_EQUIVALENT_BILLED_COST;
  } else if (hashCode == PUBLIC_ON_DEMAND_COST_HASH) {
    return Metric::PUBLIC_ON_DEMAND_COST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Metric>(hashCode);
  }

  return Metric::NOT_SET;
}

Aws::String GetNameForMetric(Metric enumValue) {
  switch (enumValue) {
    case Metric::NOT_SET:
      return {};
    case Metric::BLENDED_COST:
      return "BLENDED_COST";
    case Metric::UNBLENDED_COST:
      return "UNBLENDED_COST";
    case Metric::AMORTIZED_COST:
      return "AMORTIZED_COST";
    case Metric::NET_UNBLENDED_COST:
      return "NET_UNBLENDED_COST";
    case Metric::NET_AMORTIZED_COST:
      return "NET_AMORTIZED_COST";
    case Metric::USAGE_QUANTITY:
      return "USAGE_QUANTITY";
    case Metric::NORMALIZED_USAGE_AMOUNT:
      return "NORMALIZED_USAGE_AMOUNT";
    case Metric::LIST_COST:
      return "LIST_COST";
    case Metric::CONTRACTED_COST:
      return "CONTRACTED_COST";
    case Metric::BILLED_COST:
      return "BILLED_COST";
    case Metric::PUBLIC_EQUIVALENT_BILLED_COST:
      return "PUBLIC_EQUIVALENT_BILLED_COST";
    case Metric::PUBLIC_ON_DEMAND_COST:
      return "PUBLIC_ON_DEMAND_COST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricMapper
}  // namespace Model
}  // namespace CostExplorer
}  // namespace Aws
