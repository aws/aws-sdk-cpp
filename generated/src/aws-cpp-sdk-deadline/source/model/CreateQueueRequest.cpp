/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CreateQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_defaultBudgetActionHasBeenSet)
  {
   payload.WithString("defaultBudgetAction", DefaultQueueBudgetActionMapper::GetNameForDefaultQueueBudgetAction(m_defaultBudgetAction));
  }

  if(m_jobAttachmentSettingsHasBeenSet)
  {
   payload.WithObject("jobAttachmentSettings", m_jobAttachmentSettings.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_jobRunAsUserHasBeenSet)
  {
   payload.WithObject("jobRunAsUser", m_jobRunAsUser.Jsonize());

  }

  if(m_requiredFileSystemLocationNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredFileSystemLocationNamesJsonList(m_requiredFileSystemLocationNames.size());
   for(unsigned requiredFileSystemLocationNamesIndex = 0; requiredFileSystemLocationNamesIndex < requiredFileSystemLocationNamesJsonList.GetLength(); ++requiredFileSystemLocationNamesIndex)
   {
     requiredFileSystemLocationNamesJsonList[requiredFileSystemLocationNamesIndex].AsString(m_requiredFileSystemLocationNames[requiredFileSystemLocationNamesIndex]);
   }
   payload.WithArray("requiredFileSystemLocationNames", std::move(requiredFileSystemLocationNamesJsonList));

  }

  if(m_allowedStorageProfileIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedStorageProfileIdsJsonList(m_allowedStorageProfileIds.size());
   for(unsigned allowedStorageProfileIdsIndex = 0; allowedStorageProfileIdsIndex < allowedStorageProfileIdsJsonList.GetLength(); ++allowedStorageProfileIdsIndex)
   {
     allowedStorageProfileIdsJsonList[allowedStorageProfileIdsIndex].AsString(m_allowedStorageProfileIds[allowedStorageProfileIdsIndex]);
   }
   payload.WithArray("allowedStorageProfileIds", std::move(allowedStorageProfileIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateQueueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




