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
    m_recoveryPointTagsHasBeenSet(false)
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

  return payload.View().WriteReadable();
}




