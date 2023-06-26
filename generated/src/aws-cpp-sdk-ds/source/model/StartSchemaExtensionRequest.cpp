/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/StartSchemaExtensionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSchemaExtensionRequest::StartSchemaExtensionRequest() : 
    m_directoryIdHasBeenSet(false),
    m_createSnapshotBeforeSchemaExtension(false),
    m_createSnapshotBeforeSchemaExtensionHasBeenSet(false),
    m_ldifContentHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String StartSchemaExtensionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_createSnapshotBeforeSchemaExtensionHasBeenSet)
  {
   payload.WithBool("CreateSnapshotBeforeSchemaExtension", m_createSnapshotBeforeSchemaExtension);

  }

  if(m_ldifContentHasBeenSet)
  {
   payload.WithString("LdifContent", m_ldifContent);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSchemaExtensionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.StartSchemaExtension"));
  return headers;

}




