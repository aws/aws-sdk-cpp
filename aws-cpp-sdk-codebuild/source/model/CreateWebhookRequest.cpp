/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_filterGroupsHasBeenSet(false),
    m_buildType(WebhookBuildType::NOT_SET),
    m_buildTypeHasBeenSet(false)
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
   Aws::Utils::Array<JsonValue> filterGroupsJsonList(m_filterGroups.size());
   for(unsigned filterGroupsIndex = 0; filterGroupsIndex < filterGroupsJsonList.GetLength(); ++filterGroupsIndex)
   {
     Aws::Utils::Array<JsonValue> filterGroupJsonList(m_filterGroups[filterGroupsIndex].size());
     for(unsigned filterGroupIndex = 0; filterGroupIndex < filterGroupJsonList.GetLength(); ++filterGroupIndex)
     {
       filterGroupJsonList[filterGroupIndex].AsObject(m_filterGroups[filterGroupsIndex][filterGroupIndex].Jsonize());
     }
     filterGroupsJsonList[filterGroupsIndex].AsArray(std::move(filterGroupJsonList));
   }
   payload.WithArray("filterGroups", std::move(filterGroupsJsonList));

  }

  if(m_buildTypeHasBeenSet)
  {
   payload.WithString("buildType", WebhookBuildTypeMapper::GetNameForWebhookBuildType(m_buildType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWebhookRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.CreateWebhook"));
  return headers;

}




