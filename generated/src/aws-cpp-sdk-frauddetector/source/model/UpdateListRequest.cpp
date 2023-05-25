/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/UpdateListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateListRequest::UpdateListRequest() : 
    m_nameHasBeenSet(false),
    m_elementsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updateMode(ListUpdateMode::NOT_SET),
    m_updateModeHasBeenSet(false),
    m_variableTypeHasBeenSet(false)
{
}

Aws::String UpdateListRequest::SerializePayload() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_updateModeHasBeenSet)
  {
   payload.WithString("updateMode", ListUpdateModeMapper::GetNameForListUpdateMode(m_updateMode));
  }

  if(m_variableTypeHasBeenSet)
  {
   payload.WithString("variableType", m_variableType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateList"));
  return headers;

}




