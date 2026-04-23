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

#include <aws/codebuild/model/CreateWebhookRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWebhookRequest::CreateWebhookRequest() : 
    m_projectNameHasBeenSet(false),
    m_branchFilterHasBeenSet(false),
    m_filterGroupsHasBeenSet(false)
{
}

Aws::String CreateWebhookRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_branchFilterHasBeenSet)
  {
   payload.WithString("branchFilter", m_branchFilter);

  }

  if(m_filterGroupsHasBeenSet)
  {
   Array<JsonValue> filterGroupsJsonList(m_filterGroups.size());
   for(unsigned filterGroupsIndex = 0; filterGroupsIndex < filterGroupsJsonList.GetLength(); ++filterGroupsIndex)
   {
     Array<JsonValue> filterGroupJsonList(m_filterGroups[filterGroupsIndex].size());
     for(unsigned filterGroupIndex = 0; filterGroupIndex < filterGroupJsonList.GetLength(); ++filterGroupIndex)
     {
       filterGroupJsonList[filterGroupIndex].AsObject(m_filterGroups[filterGroupsIndex][filterGroupIndex].Jsonize());
     }
     filterGroupsJsonList[filterGroupsIndex].AsArray(std::move(filterGroupJsonList));
   }
   payload.WithArray("filterGroups", std::move(filterGroupsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWebhookRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.CreateWebhook"));
  return headers;

}




