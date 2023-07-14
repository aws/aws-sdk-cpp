/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/GetExecutionHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetExecutionHistoryRequest::GetExecutionHistoryRequest() : 
    m_executionArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_reverseOrder(false),
    m_reverseOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_includeExecutionData(false),
    m_includeExecutionDataHasBeenSet(false)
{
}

Aws::String GetExecutionHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionArnHasBeenSet)
  {
   payload.WithString("executionArn", m_executionArn);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_reverseOrderHasBeenSet)
  {
   payload.WithBool("reverseOrder", m_reverseOrder);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_includeExecutionDataHasBeenSet)
  {
   payload.WithBool("includeExecutionData", m_includeExecutionData);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetExecutionHistoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.GetExecutionHistory"));
  return headers;

}




