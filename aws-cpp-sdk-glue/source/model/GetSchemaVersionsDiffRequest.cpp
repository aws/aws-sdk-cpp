/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetSchemaVersionsDiffRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSchemaVersionsDiffRequest::GetSchemaVersionsDiffRequest() : 
    m_schemaIdHasBeenSet(false),
    m_firstSchemaVersionNumberHasBeenSet(false),
    m_secondSchemaVersionNumberHasBeenSet(false),
    m_schemaDiffType(SchemaDiffType::NOT_SET),
    m_schemaDiffTypeHasBeenSet(false)
{
}

Aws::String GetSchemaVersionsDiffRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithObject("SchemaId", m_schemaId.Jsonize());

  }

  if(m_firstSchemaVersionNumberHasBeenSet)
  {
   payload.WithObject("FirstSchemaVersionNumber", m_firstSchemaVersionNumber.Jsonize());

  }

  if(m_secondSchemaVersionNumberHasBeenSet)
  {
   payload.WithObject("SecondSchemaVersionNumber", m_secondSchemaVersionNumber.Jsonize());

  }

  if(m_schemaDiffTypeHasBeenSet)
  {
   payload.WithString("SchemaDiffType", SchemaDiffTypeMapper::GetNameForSchemaDiffType(m_schemaDiffType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSchemaVersionsDiffRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetSchemaVersionsDiff"));
  return headers;

}




