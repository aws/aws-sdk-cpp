/*
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
    m_nameHasBeenSet(false),
    m_cloudWatchLogGroupArnHasBeenSet(false)
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
   Array<JsonValue> excludesJsonList(m_excludes.size());
   for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
   {
     excludesJsonList[excludesIndex].AsObject(m_excludes[excludesIndex].Jsonize());
   }
   payload.WithArray("Excludes", std::move(excludesJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_cloudWatchLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupArn", m_cloudWatchLogGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateTask"));
  return headers;

}




