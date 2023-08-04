/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartMetadataModelExportAsScriptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMetadataModelExportAsScriptRequest::StartMetadataModelExportAsScriptRequest() : 
    m_migrationProjectIdentifierHasBeenSet(false),
    m_selectionRulesHasBeenSet(false),
    m_origin(OriginTypeValue::NOT_SET),
    m_originHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

Aws::String StartMetadataModelExportAsScriptRequest::SerializePayload() const
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

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("FileName", m_fileName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMetadataModelExportAsScriptRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.StartMetadataModelExportAsScript"));
  return headers;

}




