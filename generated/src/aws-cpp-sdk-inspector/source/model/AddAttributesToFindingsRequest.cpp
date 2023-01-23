/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AddAttributesToFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddAttributesToFindingsRequest::AddAttributesToFindingsRequest() : 
    m_findingArnsHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Aws::String AddAttributesToFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingArnsJsonList(m_findingArns.size());
   for(unsigned findingArnsIndex = 0; findingArnsIndex < findingArnsJsonList.GetLength(); ++findingArnsIndex)
   {
     findingArnsJsonList[findingArnsIndex].AsString(m_findingArns[findingArnsIndex]);
   }
   payload.WithArray("findingArns", std::move(findingArnsJsonList));

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddAttributesToFindingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.AddAttributesToFindings"));
  return headers;

}




