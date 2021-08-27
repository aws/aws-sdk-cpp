/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSchemaRequest::UpdateSchemaRequest() : 
    m_schemaIdHasBeenSet(false),
    m_schemaVersionNumberHasBeenSet(false),
    m_compatibility(Compatibility::NOT_SET),
    m_compatibilityHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithObject("SchemaId", m_schemaId.Jsonize());

  }

  if(m_schemaVersionNumberHasBeenSet)
  {
   payload.WithObject("SchemaVersionNumber", m_schemaVersionNumber.Jsonize());

  }

  if(m_compatibilityHasBeenSet)
  {
   payload.WithString("Compatibility", CompatibilityMapper::GetNameForCompatibility(m_compatibility));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSchemaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateSchema"));
  return headers;

}




