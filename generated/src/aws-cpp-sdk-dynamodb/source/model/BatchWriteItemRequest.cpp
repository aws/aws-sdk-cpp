/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchWriteItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchWriteItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestItemsHasBeenSet)
  {
   JsonValue requestItemsJsonMap;
   for(auto& requestItemsItem : m_requestItems)
   {
     Aws::Utils::Array<JsonValue> writeRequestsJsonList(requestItemsItem.second.size());
     for(unsigned writeRequestsIndex = 0; writeRequestsIndex < writeRequestsJsonList.GetLength(); ++writeRequestsIndex)
     {
       writeRequestsJsonList[writeRequestsIndex].AsObject(requestItemsItem.second[writeRequestsIndex].Jsonize());
     }
     requestItemsJsonMap.WithArray(requestItemsItem.first, std::move(writeRequestsJsonList));
   }
   payload.WithObject("RequestItems", std::move(requestItemsJsonMap));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  if(m_returnItemCollectionMetricsHasBeenSet)
  {
   payload.WithString("ReturnItemCollectionMetrics", ReturnItemCollectionMetricsMapper::GetNameForReturnItemCollectionMetrics(m_returnItemCollectionMetrics));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchWriteItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.BatchWriteItem"));
  return headers;

}



BatchWriteItemRequest::EndpointParameters BatchWriteItemRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    //operation context params go here
    parameters.emplace_back(Aws::String{"ResourceArnList"}, this->GetOperationContextParams(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    return parameters;
}
//Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> BatchWriteItemRequest::GetOperationContextParams() const{
  Aws::Vector<Aws::String> result;
  auto& RequestItemsElems = (*this).GetRequestItems();
  for (auto& keysElem : RequestItemsElems)
  {
  	result.emplace_back(keysElem.first);
  }
  return result;
}


