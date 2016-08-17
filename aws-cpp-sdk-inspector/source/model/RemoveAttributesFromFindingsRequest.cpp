/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> findingArnsJsonList(m_findingArns.size());
   for(unsigned findingArnsIndex = 0; findingArnsIndex < findingArnsJsonList.GetLength(); ++findingArnsIndex)
   {
     findingArnsJsonList[findingArnsIndex].AsString(m_findingArns[findingArnsIndex]);
   }
   payload.WithArray("findingArns", std::move(findingArnsJsonList));

  }

  if(m_attributeKeysHasBeenSet)
  {
   Array<JsonValue> attributeKeysJsonList(m_attributeKeys.size());
   for(unsigned attributeKeysIndex = 0; attributeKeysIndex < attributeKeysJsonList.GetLength(); ++attributeKeysIndex)
   {
     attributeKeysJsonList[attributeKeysIndex].AsString(m_attributeKeys[attributeKeysIndex]);
   }
   payload.WithArray("attributeKeys", std::move(attributeKeysJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveAttributesFromFindingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.RemoveAttributesFromFindings"));
  return headers;

}



