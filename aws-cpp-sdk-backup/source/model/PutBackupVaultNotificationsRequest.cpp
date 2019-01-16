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
   Array<JsonValue> backupVaultEventsJsonList(m_backupVaultEvents.size());
   for(unsigned backupVaultEventsIndex = 0; backupVaultEventsIndex < backupVaultEventsJsonList.GetLength(); ++backupVaultEventsIndex)
   {
     backupVaultEventsJsonList[backupVaultEventsIndex].AsString(BackupVaultEventMapper::GetNameForBackupVaultEvent(m_backupVaultEvents[backupVaultEventsIndex]));
   }
   payload.WithArray("BackupVaultEvents", std::move(backupVaultEventsJsonList));

  }

  return payload.View().WriteReadable();
}




