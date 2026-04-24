/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/DescribeMetadataModelCreationsRequest.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeMetadataModelCreationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_markerHasBeenSet) {
    payload.WithString("Marker", m_marker);
  }

  if (m_maxRecordsHasBeenSet) {
    payload.WithInteger("MaxRecords", m_maxRecords);
  }

  if (m_migrationProjectIdentifierHasBeenSet) {
    payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeMetadataModelCreationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DescribeMetadataModelCreations"));
  return headers;
}
