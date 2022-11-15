/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/UpdateCostAllocationTagsStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCostAllocationTagsStatusRequest::UpdateCostAllocationTagsStatusRequest() : 
    m_costAllocationTagsStatusHasBeenSet(false)
{
}

Aws::String UpdateCostAllocationTagsStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_costAllocationTagsStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> costAllocationTagsStatusJsonList(m_costAllocationTagsStatus.size());
   for(unsigned costAllocationTagsStatusIndex = 0; costAllocationTagsStatusIndex < costAllocationTagsStatusJsonList.GetLength(); ++costAllocationTagsStatusIndex)
   {
     costAllocationTagsStatusJsonList[costAllocationTagsStatusIndex].AsObject(m_costAllocationTagsStatus[costAllocationTagsStatusIndex].Jsonize());
   }
   payload.WithArray("CostAllocationTagsStatus", std::move(costAllocationTagsStatusJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCostAllocationTagsStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.UpdateCostAllocationTagsStatus"));
  return headers;

}




