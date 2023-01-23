﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/CancelSchemaExtensionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelSchemaExtensionRequest::CancelSchemaExtensionRequest() : 
    m_directoryIdHasBeenSet(false),
    m_schemaExtensionIdHasBeenSet(false)
{
}

Aws::String CancelSchemaExtensionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_schemaExtensionIdHasBeenSet)
  {
   payload.WithString("SchemaExtensionId", m_schemaExtensionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelSchemaExtensionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.CancelSchemaExtension"));
  return headers;

}




