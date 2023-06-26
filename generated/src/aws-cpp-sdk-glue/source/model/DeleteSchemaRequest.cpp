/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeleteSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSchemaRequest::DeleteSchemaRequest() : 
    m_schemaIdHasBeenSet(false)
{
}

Aws::String DeleteSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithObject("SchemaId", m_schemaId.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSchemaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.DeleteSchema"));
  return headers;

}




