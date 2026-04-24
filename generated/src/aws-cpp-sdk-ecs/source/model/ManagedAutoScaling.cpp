/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ManagedAutoScaling.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ManagedAutoScaling::ManagedAutoScaling(JsonView jsonValue) { *this = jsonValue; }

ManagedAutoScaling& ManagedAutoScaling::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scalableTarget")) {
    m_scalableTarget = jsonValue.GetObject("scalableTarget");
    m_scalableTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationAutoScalingPolicies")) {
    Aws::Utils::Array<JsonView> applicationAutoScalingPoliciesJsonList = jsonValue.GetArray("applicationAutoScalingPolicies");
    for (unsigned applicationAutoScalingPoliciesIndex = 0;
         applicationAutoScalingPoliciesIndex < applicationAutoScalingPoliciesJsonList.GetLength(); ++applicationAutoScalingPoliciesIndex) {
      m_applicationAutoScalingPolicies.push_back(applicationAutoScalingPoliciesJsonList[applicationAutoScalingPoliciesIndex].AsObject());
    }
    m_applicationAutoScalingPoliciesHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedAutoScaling::Jsonize() const {
  JsonValue payload;

  if (m_scalableTargetHasBeenSet) {
    payload.WithObject("scalableTarget", m_scalableTarget.Jsonize());
  }

  if (m_applicationAutoScalingPoliciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> applicationAutoScalingPoliciesJsonList(m_applicationAutoScalingPolicies.size());
    for (unsigned applicationAutoScalingPoliciesIndex = 0;
         applicationAutoScalingPoliciesIndex < applicationAutoScalingPoliciesJsonList.GetLength(); ++applicationAutoScalingPoliciesIndex) {
      applicationAutoScalingPoliciesJsonList[applicationAutoScalingPoliciesIndex].AsObject(
          m_applicationAutoScalingPolicies[applicationAutoScalingPoliciesIndex].Jsonize());
    }
    payload.WithArray("applicationAutoScalingPolicies", std::move(applicationAutoScalingPoliciesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
