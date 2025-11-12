/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/StartMetadataModelCreationRequest.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartMetadataModelCreationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_migrationProjectIdentifierHasBeenSet) {
    payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);
  }

  if (m_selectionRulesHasBeenSet) {
    payload.WithString("SelectionRules", m_selectionRules);
  }

  if (m_metadataModelNameHasBeenSet) {
    payload.WithString("MetadataModelName", m_metadataModelName);
  }

  if (m_propertiesHasBeenSet) {
    payload.WithObject("Properties", m_properties.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMetadataModelCreationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.StartMetadataModelCreation"));
  return headers;
}
