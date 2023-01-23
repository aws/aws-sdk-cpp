/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTaskRequest::UpdateTaskRequest() : 
    m_taskArnHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_excludesHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_includesHasBeenSet(false)
{
}

Aws::String UpdateTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("Options", m_options.Jsonize());

  }

  if(m_excludesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludesJsonList(m_excludes.size());
   for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
   {
     excludesJsonList[excludesIndex].AsObject(m_excludes[excludesIndex].Jsonize());
   }
   payload.WithArray("Excludes", std::move(excludesJsonList));

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_cloudWatchLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupArn", m_cloudWatchLogGroupArn);

  }

  if(m_includesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includesJsonList(m_includes.size());
   for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
   {
     includesJsonList[includesIndex].AsObject(m_includes[includesIndex].Jsonize());
   }
   payload.WithArray("Includes", std::move(includesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateTask"));
  return headers;

}




