/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ssm/model/PutComplianceItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutComplianceItemsRequest::PutComplianceItemsRequest() : 
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_executionSummaryHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_itemContentHashHasBeenSet(false)
{
}

Aws::String PutComplianceItemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", m_complianceType);

  }

  if(m_executionSummaryHasBeenSet)
  {
   payload.WithObject("ExecutionSummary", m_executionSummary.Jsonize());

  }

  if(m_itemsHasBeenSet)
  {
   Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  if(m_itemContentHashHasBeenSet)
  {
   payload.WithString("ItemContentHash", m_itemContentHash);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutComplianceItemsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.PutComplianceItems"));
  return headers;

}




