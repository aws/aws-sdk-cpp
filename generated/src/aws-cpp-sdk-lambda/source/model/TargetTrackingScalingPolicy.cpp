/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/TargetTrackingScalingPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

TargetTrackingScalingPolicy::TargetTrackingScalingPolicy(JsonView jsonValue) { *this = jsonValue; }

TargetTrackingScalingPolicy& TargetTrackingScalingPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PredefinedMetricType")) {
    m_predefinedMetricType = CapacityProviderPredefinedMetricTypeMapper::GetCapacityProviderPredefinedMetricTypeForName(
        jsonValue.GetString("PredefinedMetricType"));
    m_predefinedMetricTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetValue")) {
    m_targetValue = jsonValue.GetDouble("TargetValue");
    m_targetValueHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetTrackingScalingPolicy::Jsonize() const {
  JsonValue payload;

  if (m_predefinedMetricTypeHasBeenSet) {
    payload.WithString("PredefinedMetricType",
                       CapacityProviderPredefinedMetricTypeMapper::GetNameForCapacityProviderPredefinedMetricType(m_predefinedMetricType));
  }

  if (m_targetValueHasBeenSet) {
    payload.WithDouble("TargetValue", m_targetValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
