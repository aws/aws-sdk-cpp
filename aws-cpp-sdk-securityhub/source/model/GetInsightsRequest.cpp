/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetInsightsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInsightsRequest::GetInsightsRequest() : 
    m_insightArnsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetInsightsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_insightArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insightArnsJsonList(m_insightArns.size());
   for(unsigned insightArnsIndex = 0; insightArnsIndex < insightArnsJsonList.GetLength(); ++insightArnsIndex)
   {
     insightArnsJsonList[insightArnsIndex].AsString(m_insightArns[insightArnsIndex]);
   }
   payload.WithArray("InsightArns", std::move(insightArnsJsonList));

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




