/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateCrawlerScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCrawlerScheduleRequest::UpdateCrawlerScheduleRequest() : 
    m_crawlerNameHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
}

Aws::String UpdateCrawlerScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_crawlerNameHasBeenSet)
  {
   payload.WithString("CrawlerName", m_crawlerName);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCrawlerScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateCrawlerSchedule"));
  return headers;

}




