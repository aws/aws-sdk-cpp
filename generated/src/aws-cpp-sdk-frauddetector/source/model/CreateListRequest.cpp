/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/CreateListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateListRequest::CreateListRequest() : 
    m_nameHasBeenSet(false),
    m_elementsHasBeenSet(false),
    m_variableTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_elementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elementsJsonList(m_elements.size());
   for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
   {
     elementsJsonList[elementsIndex].AsString(m_elements[elementsIndex]);
   }
   payload.WithArray("elements", std::move(elementsJsonList));

  }

  if(m_variableTypeHasBeenSet)
  {
   payload.WithString("variableType", m_variableType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

Aws::Http::HeaderValueCollection CreateListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.CreateList"));
  return headers;

}




