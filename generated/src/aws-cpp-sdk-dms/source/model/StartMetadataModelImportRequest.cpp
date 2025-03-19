/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartMetadataModelImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartMetadataModelImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_migrationProjectIdentifierHasBeenSet)
  {
   payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);

  }

  if(m_selectionRulesHasBeenSet)
  {
   payload.WithString("SelectionRules", m_selectionRules);

  }

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", OriginTypeValueMapper::GetNameForOriginTypeValue(m_origin));
  }

  if(m_refreshHasBeenSet)
  {
   payload.WithBool("Refresh", m_refresh);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMetadataModelImportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.StartMetadataModelImport"));
  return headers;

}




