/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ControlPlaneScalingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ControlPlaneScalingConfig::ControlPlaneScalingConfig(JsonView jsonValue) { *this = jsonValue; }

ControlPlaneScalingConfig& ControlPlaneScalingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tier")) {
    m_tier = ProvisionedControlPlaneTierMapper::GetProvisionedControlPlaneTierForName(jsonValue.GetString("tier"));
    m_tierHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlPlaneScalingConfig::Jsonize() const {
  JsonValue payload;

  if (m_tierHasBeenSet) {
    payload.WithString("tier", ProvisionedControlPlaneTierMapper::GetNameForProvisionedControlPlaneTier(m_tier));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
