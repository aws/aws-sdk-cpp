/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ControlPlaneScalingTierInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ControlPlaneScalingTierInfo::ControlPlaneScalingTierInfo(JsonView jsonValue) { *this = jsonValue; }

ControlPlaneScalingTierInfo& ControlPlaneScalingTierInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tierName")) {
    m_tierName = jsonValue.GetString("tierName");
    m_tierNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiRequestConcurrency")) {
    m_apiRequestConcurrency = jsonValue.GetInteger("apiRequestConcurrency");
    m_apiRequestConcurrencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("podSchedulingRatePerSecond")) {
    m_podSchedulingRatePerSecond = jsonValue.GetInteger("podSchedulingRatePerSecond");
    m_podSchedulingRatePerSecondHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterDatabaseSizeGb")) {
    m_clusterDatabaseSizeGb = jsonValue.GetInteger("clusterDatabaseSizeGb");
    m_clusterDatabaseSizeGbHasBeenSet = true;
  }
  if (jsonValue.ValueExists("controlPlaneComponentConfigOverrides")) {
    m_controlPlaneComponentConfigOverrides = jsonValue.GetObject("controlPlaneComponentConfigOverrides");
    m_controlPlaneComponentConfigOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlPlaneScalingTierInfo::Jsonize() const {
  JsonValue payload;

  if (m_tierNameHasBeenSet) {
    payload.WithString("tierName", m_tierName);
  }

  if (m_apiRequestConcurrencyHasBeenSet) {
    payload.WithInteger("apiRequestConcurrency", m_apiRequestConcurrency);
  }

  if (m_podSchedulingRatePerSecondHasBeenSet) {
    payload.WithInteger("podSchedulingRatePerSecond", m_podSchedulingRatePerSecond);
  }

  if (m_clusterDatabaseSizeGbHasBeenSet) {
    payload.WithInteger("clusterDatabaseSizeGb", m_clusterDatabaseSizeGb);
  }

  if (m_controlPlaneComponentConfigOverridesHasBeenSet) {
    payload.WithObject("controlPlaneComponentConfigOverrides", m_controlPlaneComponentConfigOverrides.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
