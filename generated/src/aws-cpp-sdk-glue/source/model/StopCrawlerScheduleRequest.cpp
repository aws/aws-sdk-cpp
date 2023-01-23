/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StopCrawlerScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopCrawlerScheduleRequest::StopCrawlerScheduleRequest() : 
    m_crawlerNameHasBeenSet(false)
{
}

Aws::String StopCrawlerScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_crawlerNameHasBeenSet)
  {
   payload.WithString("CrawlerName", m_crawlerName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopCrawlerScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StopCrawlerSchedule"));
  return headers;

}




