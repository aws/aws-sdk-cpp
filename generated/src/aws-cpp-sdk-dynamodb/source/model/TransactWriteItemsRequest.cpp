/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TransactWriteItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TransactWriteItemsRequest::SerializePayload() const
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

  if(m_returnItemCollectionMetricsHasBeenSet)
  {
   payload.WithString("ReturnItemCollectionMetrics", ReturnItemCollectionMetricsMapper::GetNameForReturnItemCollectionMetrics(m_returnItemCollectionMetrics));
  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TransactWriteItemsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.TransactWriteItems"));
  return headers;

}



TransactWriteItemsRequest::EndpointParameters TransactWriteItemsRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    //operation context params go here
    parameters.emplace_back(Aws::String{"ResourceArnList"}, this->GetOperationContextParams(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    return parameters;
}
//Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> TransactWriteItemsRequest::GetOperationContextParams() const{
  Aws::Vector<Aws::String> result;
  auto& TransactItemsElems = (*this).GetTransactItems();
  for (auto& TransactItemsElem : TransactItemsElems)
  {
  	auto& ConditionCheckElems = TransactItemsElem.GetConditionCheck().GetTableName();
  	result.emplace_back(ConditionCheckElems);
  	auto& PutElems = TransactItemsElem.GetPut().GetTableName();
  	result.emplace_back(PutElems);
  	auto& DeleteElems = TransactItemsElem.GetDelete().GetTableName();
  	result.emplace_back(DeleteElems);
  	auto& UpdateElems = TransactItemsElem.GetUpdate().GetTableName();
  	result.emplace_back(UpdateElems);
  }
  return result;
}


