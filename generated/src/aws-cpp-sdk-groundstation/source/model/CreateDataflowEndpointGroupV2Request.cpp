/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/CreateDataflowEndpointGroupV2Request.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataflowEndpointGroupV2Request::SerializePayload() const {
  JsonValue payload;

  if (m_endpointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
    for (unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex) {
      endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
    }
    payload.WithArray("endpoints", std::move(endpointsJsonList));
  }

  if (m_contactPrePassDurationSecondsHasBeenSet) {
    payload.WithInteger("contactPrePassDurationSeconds", m_contactPrePassDurationSeconds);
  }

  if (m_contactPostPassDurationSecondsHasBeenSet) {
    payload.WithInteger("contactPostPassDurationSeconds", m_contactPostPassDurationSeconds);
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
