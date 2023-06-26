/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RegisterSchemaVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterSchemaVersionRequest::RegisterSchemaVersionRequest() : 
    m_schemaIdHasBeenSet(false),
    m_schemaDefinitionHasBeenSet(false)
{
}

Aws::String RegisterSchemaVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithObject("SchemaId", m_schemaId.Jsonize());

  }

  if(m_schemaDefinitionHasBeenSet)
  {
   payload.WithString("SchemaDefinition", m_schemaDefinition);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterSchemaVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.RegisterSchemaVersion"));
  return headers;

}




