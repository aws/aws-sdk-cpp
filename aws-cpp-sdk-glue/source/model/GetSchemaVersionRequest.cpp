/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetSchemaVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSchemaVersionRequest::GetSchemaVersionRequest() : 
    m_schemaIdHasBeenSet(false),
    m_schemaVersionIdHasBeenSet(false),
    m_schemaVersionNumberHasBeenSet(false)
{
}

Aws::String GetSchemaVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithObject("SchemaId", m_schemaId.Jsonize());

  }

  if(m_schemaVersionIdHasBeenSet)
  {
   payload.WithString("SchemaVersionId", m_schemaVersionId);

  }

  if(m_schemaVersionNumberHasBeenSet)
  {
   payload.WithObject("SchemaVersionNumber", m_schemaVersionNumber.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSchemaVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetSchemaVersion"));
  return headers;

}




