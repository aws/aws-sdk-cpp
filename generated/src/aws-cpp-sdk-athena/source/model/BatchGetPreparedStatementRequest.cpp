/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/BatchGetPreparedStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetPreparedStatementRequest::BatchGetPreparedStatementRequest() : 
    m_preparedStatementNamesHasBeenSet(false),
    m_workGroupHasBeenSet(false)
{
}

Aws::String BatchGetPreparedStatementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_preparedStatementNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> preparedStatementNamesJsonList(m_preparedStatementNames.size());
   for(unsigned preparedStatementNamesIndex = 0; preparedStatementNamesIndex < preparedStatementNamesJsonList.GetLength(); ++preparedStatementNamesIndex)
   {
     preparedStatementNamesJsonList[preparedStatementNamesIndex].AsString(m_preparedStatementNames[preparedStatementNamesIndex]);
   }
   payload.WithArray("PreparedStatementNames", std::move(preparedStatementNamesJsonList));

  }

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetPreparedStatementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.BatchGetPreparedStatement"));
  return headers;

}




