/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CreateCapabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCapabilityRequest::CreateCapabilityRequest() : 
    m_nameHasBeenSet(false),
    m_type(CapabilityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_instructionsDocumentsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCapabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CapabilityTypeMapper::GetNameForCapabilityType(m_type));
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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCapabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.CreateCapability"));
  return headers;

}




