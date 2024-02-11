/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartMetadataModelExportToTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMetadataModelExportToTargetRequest::StartMetadataModelExportToTargetRequest() : 
    m_migrationProjectIdentifierHasBeenSet(false),
    m_selectionRulesHasBeenSet(false),
    m_overwriteExtensionPack(false),
    m_overwriteExtensionPackHasBeenSet(false)
{
}

Aws::String StartMetadataModelExportToTargetRequest::SerializePayload() const
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

  if(m_overwriteExtensionPackHasBeenSet)
  {
   payload.WithBool("OverwriteExtensionPack", m_overwriteExtensionPack);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMetadataModelExportToTargetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.StartMetadataModelExportToTarget"));
  return headers;

}




