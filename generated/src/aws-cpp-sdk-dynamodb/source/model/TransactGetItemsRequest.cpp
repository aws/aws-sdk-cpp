/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TransactGetItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TransactGetItemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transactItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transactItemsJsonList(m_transactItems.size());
   for(unsigned transactItemsIndex = 0; transactItemsIndex < transactItemsJsonList.GetLength(); ++transactItemsIndex)
   {
     transactItemsJsonList[transactItemsIndex].AsObject(m_transactItems[transactItemsIndex].Jsonize());
   }
   payload.WithArray("TransactItems", std::move(transactItemsJsonList));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TransactGetItemsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.TransactGetItems"));
  return headers;

}



TransactGetItemsRequest::EndpointParameters TransactGetItemsRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    //operation context params go here
    parameters.emplace_back(Aws::String{"ResourceArnList"}, this->GetOperationContextParams(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    return parameters;
}
//Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> TransactGetItemsRequest::GetOperationContextParams() const{
  Aws::Vector<Aws::String> result;
  auto& TransactItemsElems = (*this).GetTransactItems();
  for (auto& TransactItemsElem : TransactItemsElems)
  {
  	auto& GetElems = TransactItemsElem.GetGet().GetTableName();
  	result.emplace_back(GetElems);
  }
  return result;
}


