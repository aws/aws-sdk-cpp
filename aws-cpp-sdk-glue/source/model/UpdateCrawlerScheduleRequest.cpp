﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




