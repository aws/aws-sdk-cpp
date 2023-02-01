/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/PutBackupVaultNotificationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutBackupVaultNotificationsRequest::PutBackupVaultNotificationsRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_sNSTopicArnHasBeenSet(false),
    m_backupVaultEventsHasBeenSet(false)
{
}

Aws::String PutBackupVaultNotificationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sNSTopicArnHasBeenSet)
  {
   payload.WithString("SNSTopicArn", m_sNSTopicArn);

  }

  if(m_backupVaultEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> backupVaultEventsJsonList(m_backupVaultEvents.size());
   for(unsigned backupVaultEventsIndex = 0; backupVaultEventsIndex < backupVaultEventsJsonList.GetLength(); ++backupVaultEventsIndex)
   {
     backupVaultEventsJsonList[backupVaultEventsIndex].AsString(BackupVaultEventMapper::GetNameForBackupVaultEvent(m_backupVaultEvents[backupVaultEventsIndex]));
   }
   payload.WithArray("BackupVaultEvents", std::move(backupVaultEventsJsonList));

  }

  return payload.View().WriteReadable();
}




