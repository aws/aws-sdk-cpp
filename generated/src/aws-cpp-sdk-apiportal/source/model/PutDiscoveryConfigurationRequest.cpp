/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/PutDiscoveryConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIPortal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutDiscoveryConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_discoverySourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> discoverySourcesJsonList(m_discoverySources.size());
    for (unsigned discoverySourcesIndex = 0; discoverySourcesIndex < discoverySourcesJsonList.GetLength(); ++discoverySourcesIndex) {
      discoverySourcesJsonList[discoverySourcesIndex].AsString(
          DiscoverySourceMapper::GetNameForDiscoverySource(m_discoverySources[discoverySourcesIndex]));
    }
    payload.WithArray("discoverySources", std::move(discoverySourcesJsonList));
  }

  if (m_excludedResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludedResourcesJsonList(m_excludedResources.size());
    for (unsigned excludedResourcesIndex = 0; excludedResourcesIndex < excludedResourcesJsonList.GetLength(); ++excludedResourcesIndex) {
      excludedResourcesJsonList[excludedResourcesIndex].AsString(m_excludedResources[excludedResourcesIndex]);
    }
    payload.WithArray("excludedResources", std::move(excludedResourcesJsonList));
  }

  if (m_featuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      featuresJsonList[featuresIndex].AsString(DiscoveryFeatureMapper::GetNameForDiscoveryFeature(m_features[featuresIndex]));
    }
    payload.WithArray("features", std::move(featuresJsonList));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
