/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/UpdateCapabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCapabilityRequest::UpdateCapabilityRequest() : 
    m_capabilityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_instructionsDocumentsHasBeenSet(false)
{
}

Aws::String UpdateCapabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilityIdHasBeenSet)
  {
   payload.WithString("capabilityId", m_capabilityId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_instructionsDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instructionsDocumentsJsonList(m_instructionsDocuments.size());
   for(unsigned instructionsDocumentsIndex = 0; instructionsDocumentsIndex < instructionsDocumentsJsonList.GetLength(); ++instructionsDocumentsIndex)
   {
     instructionsDocumentsJsonList[instructionsDocumentsIndex].AsObject(m_instructionsDocuments[instructionsDocumentsIndex].Jsonize());
   }
   payload.WithArray("instructionsDocuments", std::move(instructionsDocumentsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCapabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.UpdateCapability"));
  return headers;

}




