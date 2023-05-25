/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetCrawlersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetCrawlersRequest::BatchGetCrawlersRequest() : 
    m_crawlerNamesHasBeenSet(false)
{
}

Aws::String BatchGetCrawlersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_crawlerNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crawlerNamesJsonList(m_crawlerNames.size());
   for(unsigned crawlerNamesIndex = 0; crawlerNamesIndex < crawlerNamesJsonList.GetLength(); ++crawlerNamesIndex)
   {
     crawlerNamesJsonList[crawlerNamesIndex].AsString(m_crawlerNames[crawlerNamesIndex]);
   }
   payload.WithArray("CrawlerNames", std::move(crawlerNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetCrawlersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetCrawlers"));
  return headers;

}




