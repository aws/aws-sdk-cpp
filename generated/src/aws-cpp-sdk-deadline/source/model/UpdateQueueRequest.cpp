/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQueueRequest::UpdateQueueRequest() : 
    m_allowedStorageProfileIdsToAddHasBeenSet(false),
    m_allowedStorageProfileIdsToRemoveHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_defaultBudgetAction(DefaultQueueBudgetAction::NOT_SET),
    m_defaultBudgetActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_farmIdHasBeenSet(false),
    m_jobAttachmentSettingsHasBeenSet(false),
    m_jobRunAsUserHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_requiredFileSystemLocationNamesToAddHasBeenSet(false),
    m_requiredFileSystemLocationNamesToRemoveHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String UpdateQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_allowedStorageProfileIdsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedStorageProfileIdsToAddJsonList(m_allowedStorageProfileIdsToAdd.size());
   for(unsigned allowedStorageProfileIdsToAddIndex = 0; allowedStorageProfileIdsToAddIndex < allowedStorageProfileIdsToAddJsonList.GetLength(); ++allowedStorageProfileIdsToAddIndex)
   {
     allowedStorageProfileIdsToAddJsonList[allowedStorageProfileIdsToAddIndex].AsString(m_allowedStorageProfileIdsToAdd[allowedStorageProfileIdsToAddIndex]);
   }
   payload.WithArray("allowedStorageProfileIdsToAdd", std::move(allowedStorageProfileIdsToAddJsonList));

  }

  if(m_allowedStorageProfileIdsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedStorageProfileIdsToRemoveJsonList(m_allowedStorageProfileIdsToRemove.size());
   for(unsigned allowedStorageProfileIdsToRemoveIndex = 0; allowedStorageProfileIdsToRemoveIndex < allowedStorageProfileIdsToRemoveJsonList.GetLength(); ++allowedStorageProfileIdsToRemoveIndex)
   {
     allowedStorageProfileIdsToRemoveJsonList[allowedStorageProfileIdsToRemoveIndex].AsString(m_allowedStorageProfileIdsToRemove[allowedStorageProfileIdsToRemoveIndex]);
   }
   payload.WithArray("allowedStorageProfileIdsToRemove", std::move(allowedStorageProfileIdsToRemoveJsonList));

  }

  if(m_defaultBudgetActionHasBeenSet)
  {
   payload.WithString("defaultBudgetAction", DefaultQueueBudgetActionMapper::GetNameForDefaultQueueBudgetAction(m_defaultBudgetAction));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_jobAttachmentSettingsHasBeenSet)
  {
   payload.WithObject("jobAttachmentSettings", m_jobAttachmentSettings.Jsonize());

  }

  if(m_jobRunAsUserHasBeenSet)
  {
   payload.WithObject("jobRunAsUser", m_jobRunAsUser.Jsonize());

  }

  if(m_requiredFileSystemLocationNamesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredFileSystemLocationNamesToAddJsonList(m_requiredFileSystemLocationNamesToAdd.size());
   for(unsigned requiredFileSystemLocationNamesToAddIndex = 0; requiredFileSystemLocationNamesToAddIndex < requiredFileSystemLocationNamesToAddJsonList.GetLength(); ++requiredFileSystemLocationNamesToAddIndex)
   {
     requiredFileSystemLocationNamesToAddJsonList[requiredFileSystemLocationNamesToAddIndex].AsString(m_requiredFileSystemLocationNamesToAdd[requiredFileSystemLocationNamesToAddIndex]);
   }
   payload.WithArray("requiredFileSystemLocationNamesToAdd", std::move(requiredFileSystemLocationNamesToAddJsonList));

  }

  if(m_requiredFileSystemLocationNamesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredFileSystemLocationNamesToRemoveJsonList(m_requiredFileSystemLocationNamesToRemove.size());
   for(unsigned requiredFileSystemLocationNamesToRemoveIndex = 0; requiredFileSystemLocationNamesToRemoveIndex < requiredFileSystemLocationNamesToRemoveJsonList.GetLength(); ++requiredFileSystemLocationNamesToRemoveIndex)
   {
     requiredFileSystemLocationNamesToRemoveJsonList[requiredFileSystemLocationNamesToRemoveIndex].AsString(m_requiredFileSystemLocationNamesToRemove[requiredFileSystemLocationNamesToRemoveIndex]);
   }
   payload.WithArray("requiredFileSystemLocationNamesToRemove", std::move(requiredFileSystemLocationNamesToRemoveJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateQueueRequest::GetRequestSpecificHeaders() const
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




