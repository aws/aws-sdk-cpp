/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CapacityProviderScalingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CapacityProviderScalingConfig::CapacityProviderScalingConfig(JsonView jsonValue) { *this = jsonValue; }

CapacityProviderScalingConfig& CapacityProviderScalingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxVCpuCount")) {
    m_maxVCpuCount = jsonValue.GetInteger("MaxVCpuCount");
    m_maxVCpuCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScalingMode")) {
    m_scalingMode = CapacityProviderScalingModeMapper::GetCapacityProviderScalingModeForName(jsonValue.GetString("ScalingMode"));
    m_scalingModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScalingPolicies")) {
    Aws::Utils::Array<JsonView> scalingPoliciesJsonList = jsonValue.GetArray("ScalingPolicies");
    for (unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex) {
      m_scalingPolicies.push_back(scalingPoliciesJsonList[scalingPoliciesIndex].AsObject());
    }
    m_scalingPoliciesHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProviderScalingConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxVCpuCountHasBeenSet) {
    payload.WithInteger("MaxVCpuCount", m_maxVCpuCount);
  }

  if (m_scalingModeHasBeenSet) {
    payload.WithString("ScalingMode", CapacityProviderScalingModeMapper::GetNameForCapacityProviderScalingMode(m_scalingMode));
  }

  if (m_scalingPoliciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scalingPoliciesJsonList(m_scalingPolicies.size());
    for (unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex) {
      scalingPoliciesJsonList[scalingPoliciesIndex].AsObject(m_scalingPolicies[scalingPoliciesIndex].Jsonize());
    }
    payload.WithArray("ScalingPolicies", std::move(scalingPoliciesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
