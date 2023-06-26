/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSchemaRequest::CreateSchemaRequest() : 
    m_registryIdHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_dataFormat(DataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_compatibility(Compatibility::NOT_SET),
    m_compatibilityHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_schemaDefinitionHasBeenSet(false)
{
}

Aws::String CreateSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithObject("RegistryId", m_registryId.Jsonize());

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("DataFormat", DataFormatMapper::GetNameForDataFormat(m_dataFormat));
  }

  if(m_compatibilityHasBeenSet)
  {
   payload.WithString("Compatibility", CompatibilityMapper::GetNameForCompatibility(m_compatibility));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_schemaDefinitionHasBeenSet)
  {
   payload.WithString("SchemaDefinition", m_schemaDefinition);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSchemaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateSchema"));
  return headers;

}




