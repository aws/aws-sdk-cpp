/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/CreateSchemaMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSchemaMappingRequest::CreateSchemaMappingRequest() : 
    m_descriptionHasBeenSet(false),
    m_mappedInputFieldsHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSchemaMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_mappedInputFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mappedInputFieldsJsonList(m_mappedInputFields.size());
   for(unsigned mappedInputFieldsIndex = 0; mappedInputFieldsIndex < mappedInputFieldsJsonList.GetLength(); ++mappedInputFieldsIndex)
   {
     mappedInputFieldsJsonList[mappedInputFieldsIndex].AsObject(m_mappedInputFields[mappedInputFieldsIndex].Jsonize());
   }
   payload.WithArray("mappedInputFields", std::move(mappedInputFieldsJsonList));

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("schemaName", m_schemaName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




