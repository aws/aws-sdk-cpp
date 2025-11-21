/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ExpressGatewayServiceScalingMetric.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ExpressGatewayServiceScalingMetricMapper {

static const int AVERAGE_CPU_HASH = HashingUtils::HashString("AVERAGE_CPU");
static const int AVERAGE_MEMORY_HASH = HashingUtils::HashString("AVERAGE_MEMORY");
static const int REQUEST_COUNT_PER_TARGET_HASH = HashingUtils::HashString("REQUEST_COUNT_PER_TARGET");

ExpressGatewayServiceScalingMetric GetExpressGatewayServiceScalingMetricForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVERAGE_CPU_HASH) {
    return ExpressGatewayServiceScalingMetric::AVERAGE_CPU;
  } else if (hashCode == AVERAGE_MEMORY_HASH) {
    return ExpressGatewayServiceScalingMetric::AVERAGE_MEMORY;
  } else if (hashCode == REQUEST_COUNT_PER_TARGET_HASH) {
    return ExpressGatewayServiceScalingMetric::REQUEST_COUNT_PER_TARGET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExpressGatewayServiceScalingMetric>(hashCode);
  }

  return ExpressGatewayServiceScalingMetric::NOT_SET;
}

Aws::String GetNameForExpressGatewayServiceScalingMetric(ExpressGatewayServiceScalingMetric enumValue) {
  switch (enumValue) {
    case ExpressGatewayServiceScalingMetric::NOT_SET:
      return {};
    case ExpressGatewayServiceScalingMetric::AVERAGE_CPU:
      return "AVERAGE_CPU";
    case ExpressGatewayServiceScalingMetric::AVERAGE_MEMORY:
      return "AVERAGE_MEMORY";
    case ExpressGatewayServiceScalingMetric::REQUEST_COUNT_PER_TARGET:
      return "REQUEST_COUNT_PER_TARGET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExpressGatewayServiceScalingMetricMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
