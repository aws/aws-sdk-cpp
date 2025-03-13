/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/CreateTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyspaceNameHasBeenSet)
  {
   payload.WithString("keyspaceName", m_keyspaceName);

  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("typeName", m_typeName);

  }

  if(m_fieldDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldDefinitionsJsonList(m_fieldDefinitions.size());
   for(unsigned fieldDefinitionsIndex = 0; fieldDefinitionsIndex < fieldDefinitionsJsonList.GetLength(); ++fieldDefinitionsIndex)
   {
     fieldDefinitionsJsonList[fieldDefinitionsIndex].AsObject(m_fieldDefinitions[fieldDefinitionsIndex].Jsonize());
   }
   payload.WithArray("fieldDefinitions", std::move(fieldDefinitionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KeyspacesService.CreateType"));
  return headers;

}




