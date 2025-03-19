/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchGetItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestItemsHasBeenSet)
  {
   JsonValue requestItemsJsonMap;
   for(auto& requestItemsItem : m_requestItems)
   {
     requestItemsJsonMap.WithObject(requestItemsItem.first, requestItemsItem.second.Jsonize());
   }
   payload.WithObject("RequestItems", std::move(requestItemsJsonMap));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.BatchGetItem"));
  return headers;

}



BatchGetItemRequest::EndpointParameters BatchGetItemRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    //operation context params go here
    parameters.emplace_back(Aws::String{"ResourceArnList"}, this->GetOperationContextParams(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    return parameters;
}
//Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> BatchGetItemRequest::GetOperationContextParams() const{
  Aws::Vector<Aws::String> result;
  auto& RequestItemsElems = (*this).GetRequestItems();
  for (auto& keysElem : RequestItemsElems)
  {
  	result.emplace_back(keysElem.first);
  }
  return result;
}


