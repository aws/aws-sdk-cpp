/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListCostAllocationTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCostAllocationTagsRequest::ListCostAllocationTagsRequest() : 
    m_status(CostAllocationTagStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_type(CostAllocationTagType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListCostAllocationTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CostAllocationTagStatusMapper::GetNameForCostAllocationTagStatus(m_status));
  }

  if(m_tagKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeysJsonList(m_tagKeys.size());
   for(unsigned tagKeysIndex = 0; tagKeysIndex < tagKeysJsonList.GetLength(); ++tagKeysIndex)
   {
     tagKeysJsonList[tagKeysIndex].AsString(m_tagKeys[tagKeysIndex]);
   }
   payload.WithArray("TagKeys", std::move(tagKeysJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CostAllocationTagTypeMapper::GetNameForCostAllocationTagType(m_type));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListCostAllocationTagsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.ListCostAllocationTags"));
  return headers;

}




