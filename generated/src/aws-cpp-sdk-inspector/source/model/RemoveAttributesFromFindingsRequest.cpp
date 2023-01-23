/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/RemoveAttributesFromFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveAttributesFromFindingsRequest::RemoveAttributesFromFindingsRequest() : 
    m_findingArnsHasBeenSet(false),
    m_attributeKeysHasBeenSet(false)
{
}

Aws::String RemoveAttributesFromFindingsRequest::SerializePayload() const
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

  if(m_attributeKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeKeysJsonList(m_attributeKeys.size());
   for(unsigned attributeKeysIndex = 0; attributeKeysIndex < attributeKeysJsonList.GetLength(); ++attributeKeysIndex)
   {
     attributeKeysJsonList[attributeKeysIndex].AsString(m_attributeKeys[attributeKeysIndex]);
   }
   payload.WithArray("attributeKeys", std::move(attributeKeysJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveAttributesFromFindingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.RemoveAttributesFromFindings"));
  return headers;

}




