/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ExpressGatewayScalingTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ExpressGatewayScalingTarget::ExpressGatewayScalingTarget(JsonView jsonValue) { *this = jsonValue; }

ExpressGatewayScalingTarget& ExpressGatewayScalingTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minTaskCount")) {
    m_minTaskCount = jsonValue.GetInteger("minTaskCount");
    m_minTaskCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxTaskCount")) {
    m_maxTaskCount = jsonValue.GetInteger("maxTaskCount");
    m_maxTaskCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoScalingMetric")) {
    m_autoScalingMetric =
        ExpressGatewayServiceScalingMetricMapper::GetExpressGatewayServiceScalingMetricForName(jsonValue.GetString("autoScalingMetric"));
    m_autoScalingMetricHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoScalingTargetValue")) {
    m_autoScalingTargetValue = jsonValue.GetInteger("autoScalingTargetValue");
    m_autoScalingTargetValueHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressGatewayScalingTarget::Jsonize() const {
  JsonValue payload;

  if (m_minTaskCountHasBeenSet) {
    payload.WithInteger("minTaskCount", m_minTaskCount);
  }

  if (m_maxTaskCountHasBeenSet) {
    payload.WithInteger("maxTaskCount", m_maxTaskCount);
  }

  if (m_autoScalingMetricHasBeenSet) {
    payload.WithString("autoScalingMetric",
                       ExpressGatewayServiceScalingMetricMapper::GetNameForExpressGatewayServiceScalingMetric(m_autoScalingMetric));
  }

  if (m_autoScalingTargetValueHasBeenSet) {
    payload.WithInteger("autoScalingTargetValue", m_autoScalingTargetValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
