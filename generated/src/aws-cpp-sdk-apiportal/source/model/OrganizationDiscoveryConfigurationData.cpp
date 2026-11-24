/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/OrganizationDiscoveryConfigurationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

OrganizationDiscoveryConfigurationData::OrganizationDiscoveryConfigurationData(JsonView jsonValue) { *this = jsonValue; }

OrganizationDiscoveryConfigurationData& OrganizationDiscoveryConfigurationData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DiscoveryConfigurationStatusMapper::GetDiscoveryConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discoverySources")) {
    Aws::Utils::Array<JsonView> discoverySourcesJsonList = jsonValue.GetArray("discoverySources");
    for (unsigned discoverySourcesIndex = 0; discoverySourcesIndex < discoverySourcesJsonList.GetLength(); ++discoverySourcesIndex) {
      m_discoverySources.push_back(
          DiscoverySourceMapper::GetDiscoverySourceForName(discoverySourcesJsonList[discoverySourcesIndex].AsString()));
    }
    m_discoverySourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exclusionFilters")) {
    m_exclusionFilters = jsonValue.GetObject("exclusionFilters");
    m_exclusionFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discoveryFilters")) {
    m_discoveryFilters = jsonValue.GetObject("discoveryFilters");
    m_discoveryFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("features")) {
    Aws::Utils::Array<JsonView> featuresJsonList = jsonValue.GetArray("features");
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      m_features.push_back(DiscoveryFeatureMapper::GetDiscoveryFeatureForName(featuresJsonList[featuresIndex].AsString()));
    }
    m_featuresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationDiscoveryConfigurationData::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DiscoveryConfigurationStatusMapper::GetNameForDiscoveryConfigurationStatus(m_status));
  }

  if (m_discoverySourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> discoverySourcesJsonList(m_discoverySources.size());
    for (unsigned discoverySourcesIndex = 0; discoverySourcesIndex < discoverySourcesJsonList.GetLength(); ++discoverySourcesIndex) {
      discoverySourcesJsonList[discoverySourcesIndex].AsString(
          DiscoverySourceMapper::GetNameForDiscoverySource(m_discoverySources[discoverySourcesIndex]));
    }
    payload.WithArray("discoverySources", std::move(discoverySourcesJsonList));
  }

  if (m_exclusionFiltersHasBeenSet) {
    payload.WithObject("exclusionFilters", m_exclusionFilters.Jsonize());
  }

  if (m_discoveryFiltersHasBeenSet) {
    payload.WithObject("discoveryFilters", m_discoveryFilters.Jsonize());
  }

  if (m_featuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      featuresJsonList[featuresIndex].AsString(DiscoveryFeatureMapper::GetNameForDiscoveryFeature(m_features[featuresIndex]));
    }
    payload.WithArray("features", std::move(featuresJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
