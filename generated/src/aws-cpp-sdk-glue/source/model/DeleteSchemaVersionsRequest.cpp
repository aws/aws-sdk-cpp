/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeleteSchemaVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSchemaVersionsRequest::DeleteSchemaVersionsRequest() : 
    m_schemaIdHasBeenSet(false),
    m_versionsHasBeenSet(false)
{
}

Aws::String DeleteSchemaVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithObject("SchemaId", m_schemaId.Jsonize());

  }

  if(m_versionsHasBeenSet)
  {
   payload.WithString("Versions", m_versions);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSchemaVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.DeleteSchemaVersions"));
  return headers;

}




