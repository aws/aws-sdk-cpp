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

#include <aws/datasync/model/CreateTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTaskRequest::CreateTaskRequest() : 
    m_sourceLocationArnHasBeenSet(false),
    m_destinationLocationArnHasBeenSet(false),
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_excludesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceLocationArnHasBeenSet)
  {
   payload.WithString("SourceLocationArn", m_sourceLocationArn);

  }

  if(m_destinationLocationArnHasBeenSet)
  {
   payload.WithString("DestinationLocationArn", m_destinationLocationArn);

  }

  if(m_cloudWatchLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupArn", m_cloudWatchLogGroupArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateTask"));
  return headers;

}




