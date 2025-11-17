/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ListIntegrationResourcePropertiesRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListIntegrationResourcePropertiesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_markerHasBeenSet) {
    payload.WithString("Marker", m_marker);
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_maxRecordsHasBeenSet) {
    payload.WithInteger("MaxRecords", m_maxRecords);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListIntegrationResourcePropertiesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.ListIntegrationResourceProperties"));
  return headers;
}
