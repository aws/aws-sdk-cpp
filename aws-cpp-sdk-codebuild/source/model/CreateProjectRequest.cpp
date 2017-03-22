/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codebuild/model/CreateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProjectRequest::CreateProjectRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_artifactsHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_artifactsHasBeenSet)
  {
   payload.WithObject("artifacts", m_artifacts.Jsonize());

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("environment", m_environment.Jsonize());

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("serviceRole", m_serviceRole);

  }

  if(m_timeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutes", m_timeoutInMinutes);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.CreateProject"));
  return headers;

}




