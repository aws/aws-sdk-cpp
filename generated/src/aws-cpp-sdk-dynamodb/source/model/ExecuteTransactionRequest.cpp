/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExecuteTransactionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteTransactionRequest::ExecuteTransactionRequest() : 
    m_transactStatementsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_returnConsumedCapacity(ReturnConsumedCapacity::NOT_SET),
    m_returnConsumedCapacityHasBeenSet(false)
{
}

Aws::String ExecuteTransactionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transactStatementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transactStatementsJsonList(m_transactStatements.size());
   for(unsigned transactStatementsIndex = 0; transactStatementsIndex < transactStatementsJsonList.GetLength(); ++transactStatementsIndex)
   {
     transactStatementsJsonList[transactStatementsIndex].AsObject(m_transactStatements[transactStatementsIndex].Jsonize());
   }
   payload.WithArray("TransactStatements", std::move(transactStatementsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExecuteTransactionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ExecuteTransaction"));
  return headers;

}




