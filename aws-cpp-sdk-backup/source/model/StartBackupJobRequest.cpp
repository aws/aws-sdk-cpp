/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/StartBackupJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBackupJobRequest::StartBackupJobRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_startWindowMinutes(0),
    m_startWindowMinutesHasBeenSet(false),
    m_completeWindowMinutes(0),
    m_completeWindowMinutesHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_recoveryPointTagsHasBeenSet(false),
    m_backupOptionsHasBeenSet(false)
{
}

Aws::String StartBackupJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_startWindowMinutesHasBeenSet)
  {
   payload.WithInt64("StartWindowMinutes", m_startWindowMinutes);

  }

  if(m_completeWindowMinutesHasBeenSet)
  {
   payload.WithInt64("CompleteWindowMinutes", m_completeWindowMinutes);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  if(m_recoveryPointTagsHasBeenSet)
  {
   JsonValue recoveryPointTagsJsonMap;
   for(auto& recoveryPointTagsItem : m_recoveryPointTags)
   {
     recoveryPointTagsJsonMap.WithString(recoveryPointTagsItem.first, recoveryPointTagsItem.second);
   }
   payload.WithObject("RecoveryPointTags", std::move(recoveryPointTagsJsonMap));

  }

  if(m_backupOptionsHasBeenSet)
  {
   JsonValue backupOptionsJsonMap;
   for(auto& backupOptionsItem : m_backupOptions)
   {
     backupOptionsJsonMap.WithString(backupOptionsItem.first, backupOptionsItem.second);
   }
   payload.WithObject("BackupOptions", std::move(backupOptionsJsonMap));

  }

  return payload.View().WriteReadable();
}




