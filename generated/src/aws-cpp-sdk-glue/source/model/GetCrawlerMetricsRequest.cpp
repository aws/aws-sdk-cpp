/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetCrawlerMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCrawlerMetricsRequest::GetCrawlerMetricsRequest() : 
    m_crawlerNameListHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetCrawlerMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_crawlerNameListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crawlerNameListJsonList(m_crawlerNameList.size());
   for(unsigned crawlerNameListIndex = 0; crawlerNameListIndex < crawlerNameListJsonList.GetLength(); ++crawlerNameListIndex)
   {
     crawlerNameListJsonList[crawlerNameListIndex].AsString(m_crawlerNameList[crawlerNameListIndex]);
   }
   payload.WithArray("CrawlerNameList", std::move(crawlerNameListJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCrawlerMetricsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetCrawlerMetrics"));
  return headers;

}




