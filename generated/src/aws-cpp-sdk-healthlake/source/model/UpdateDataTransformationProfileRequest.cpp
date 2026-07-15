/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/UpdateDataTransformationProfileRequest.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDataTransformationProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  if (m_profileMappingHasBeenSet) {
    JsonValue profileMappingJsonMap;
    for (auto& profileMappingItem : m_profileMapping) {
      profileMappingJsonMap.WithString(profileMappingItem.first, profileMappingItem.second);
    }
    payload.WithObject("ProfileMapping", std::move(profileMappingJsonMap));
  }

  if (m_changeDescriptionHasBeenSet) {
    payload.WithString("ChangeDescription", m_changeDescription);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDataTransformationProfileRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.UpdateDataTransformationProfile"));
  return headers;
}
