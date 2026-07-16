/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/CreateDataTransformationProfileRequest.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataTransformationProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceFormatHasBeenSet) {
    payload.WithString("SourceFormat", SourceFormatMapper::GetNameForSourceFormat(m_sourceFormat));
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("KmsKeyId", m_kmsKeyId);
  }

  if (m_profileDescriptionHasBeenSet) {
    payload.WithString("ProfileDescription", m_profileDescription);
  }

  if (m_profileNameHasBeenSet) {
    payload.WithString("ProfileName", m_profileName);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDataTransformationProfileRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.CreateDataTransformationProfile"));
  return headers;
}
