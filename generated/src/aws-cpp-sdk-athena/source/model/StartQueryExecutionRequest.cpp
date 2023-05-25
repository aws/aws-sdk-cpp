/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/StartQueryExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartQueryExecutionRequest::StartQueryExecutionRequest() : 
    m_queryStringHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_queryExecutionContextHasBeenSet(false),
    m_resultConfigurationHasBeenSet(false),
    m_workGroupHasBeenSet(false),
    m_executionParametersHasBeenSet(false),
    m_resultReuseConfigurationHasBeenSet(false)
{
}

Aws::String StartQueryExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_queryExecutionContextHasBeenSet)
  {
   payload.WithObject("QueryExecutionContext", m_queryExecutionContext.Jsonize());

  }

  if(m_resultConfigurationHasBeenSet)
  {
   payload.WithObject("ResultConfiguration", m_resultConfiguration.Jsonize());

  }

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_executionParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> executionParametersJsonList(m_executionParameters.size());
   for(unsigned executionParametersIndex = 0; executionParametersIndex < executionParametersJsonList.GetLength(); ++executionParametersIndex)
   {
     executionParametersJsonList[executionParametersIndex].AsString(m_executionParameters[executionParametersIndex]);
   }
   payload.WithArray("ExecutionParameters", std::move(executionParametersJsonList));

  }

  if(m_resultReuseConfigurationHasBeenSet)
  {
   payload.WithObject("ResultReuseConfiguration", m_resultReuseConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartQueryExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.StartQueryExecution"));
  return headers;

}




