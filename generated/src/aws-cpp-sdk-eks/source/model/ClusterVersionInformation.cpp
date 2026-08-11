/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ClusterVersionInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ClusterVersionInformation::ClusterVersionInformation(JsonView jsonValue) { *this = jsonValue; }

ClusterVersionInformation& ClusterVersionInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clusterVersion")) {
    m_clusterVersion = jsonValue.GetString("clusterVersion");
    m_clusterVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterType")) {
    m_clusterType = jsonValue.GetString("clusterType");
    m_clusterTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultPlatformVersion")) {
    m_defaultPlatformVersion = jsonValue.GetString("defaultPlatformVersion");
    m_defaultPlatformVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultVersion")) {
    m_defaultVersion = jsonValue.GetBool("defaultVersion");
    m_defaultVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("releaseDate")) {
    m_releaseDate = jsonValue.GetDouble("releaseDate");
    m_releaseDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endOfStandardSupportDate")) {
    m_endOfStandardSupportDate = jsonValue.GetDouble("endOfStandardSupportDate");
    m_endOfStandardSupportDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endOfExtendedSupportDate")) {
    m_endOfExtendedSupportDate = jsonValue.GetDouble("endOfExtendedSupportDate");
    m_endOfExtendedSupportDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ClusterVersionStatusMapper::GetClusterVersionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionStatus")) {
    m_versionStatus = VersionStatusMapper::GetVersionStatusForName(jsonValue.GetString("versionStatus"));
    m_versionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kubernetesPatchVersion")) {
    m_kubernetesPatchVersion = jsonValue.GetString("kubernetesPatchVersion");
    m_kubernetesPatchVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("controlPlaneScalingTiers")) {
    Aws::Utils::Array<JsonView> controlPlaneScalingTiersJsonList = jsonValue.GetArray("controlPlaneScalingTiers");
    for (unsigned controlPlaneScalingTiersIndex = 0; controlPlaneScalingTiersIndex < controlPlaneScalingTiersJsonList.GetLength();
         ++controlPlaneScalingTiersIndex) {
      m_controlPlaneScalingTiers.push_back(controlPlaneScalingTiersJsonList[controlPlaneScalingTiersIndex].AsObject());
    }
    m_controlPlaneScalingTiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("controlPlaneComponentConfig")) {
    m_controlPlaneComponentConfig = jsonValue.GetObject("controlPlaneComponentConfig");
    m_controlPlaneComponentConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterVersionInformation::Jsonize() const {
  JsonValue payload;

  if (m_clusterVersionHasBeenSet) {
    payload.WithString("clusterVersion", m_clusterVersion);
  }

  if (m_clusterTypeHasBeenSet) {
    payload.WithString("clusterType", m_clusterType);
  }

  if (m_defaultPlatformVersionHasBeenSet) {
    payload.WithString("defaultPlatformVersion", m_defaultPlatformVersion);
  }

  if (m_defaultVersionHasBeenSet) {
    payload.WithBool("defaultVersion", m_defaultVersion);
  }

  if (m_releaseDateHasBeenSet) {
    payload.WithDouble("releaseDate", m_releaseDate.SecondsWithMSPrecision());
  }

  if (m_endOfStandardSupportDateHasBeenSet) {
    payload.WithDouble("endOfStandardSupportDate", m_endOfStandardSupportDate.SecondsWithMSPrecision());
  }

  if (m_endOfExtendedSupportDateHasBeenSet) {
    payload.WithDouble("endOfExtendedSupportDate", m_endOfExtendedSupportDate.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ClusterVersionStatusMapper::GetNameForClusterVersionStatus(m_status));
  }

  if (m_versionStatusHasBeenSet) {
    payload.WithString("versionStatus", VersionStatusMapper::GetNameForVersionStatus(m_versionStatus));
  }

  if (m_kubernetesPatchVersionHasBeenSet) {
    payload.WithString("kubernetesPatchVersion", m_kubernetesPatchVersion);
  }

  if (m_controlPlaneScalingTiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> controlPlaneScalingTiersJsonList(m_controlPlaneScalingTiers.size());
    for (unsigned controlPlaneScalingTiersIndex = 0; controlPlaneScalingTiersIndex < controlPlaneScalingTiersJsonList.GetLength();
         ++controlPlaneScalingTiersIndex) {
      controlPlaneScalingTiersJsonList[controlPlaneScalingTiersIndex].AsObject(
          m_controlPlaneScalingTiers[controlPlaneScalingTiersIndex].Jsonize());
    }
    payload.WithArray("controlPlaneScalingTiers", std::move(controlPlaneScalingTiersJsonList));
  }

  if (m_controlPlaneComponentConfigHasBeenSet) {
    payload.WithObject("controlPlaneComponentConfig", m_controlPlaneComponentConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
