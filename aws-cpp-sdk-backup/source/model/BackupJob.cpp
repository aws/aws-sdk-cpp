/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

BackupJob::BackupJob() : 
    m_accountIdHasBeenSet(false),
    m_backupJobIdHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultArnHasBeenSet(false),
    m_recoveryPointArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_state(BackupJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_percentDoneHasBeenSet(false),
    m_backupSizeInBytes(0),
    m_backupSizeInBytesHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_expectedCompletionDateHasBeenSet(false),
    m_startByHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_bytesTransferred(0),
    m_bytesTransferredHasBeenSet(false),
    m_backupOptionsHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_parentJobIdHasBeenSet(false),
    m_isParent(false),
    m_isParentHasBeenSet(false)
{
}

BackupJob::BackupJob(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_backupJobIdHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultArnHasBeenSet(false),
    m_recoveryPointArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_state(BackupJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_percentDoneHasBeenSet(false),
    m_backupSizeInBytes(0),
    m_backupSizeInBytesHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_expectedCompletionDateHasBeenSet(false),
    m_startByHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_bytesTransferred(0),
    m_bytesTransferredHasBeenSet(false),
    m_backupOptionsHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_parentJobIdHasBeenSet(false),
    m_isParent(false),
    m_isParentHasBeenSet(false)
{
  *this = jsonValue;
}

BackupJob& BackupJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupJobId"))
  {
    m_backupJobId = jsonValue.GetString("BackupJobId");

    m_backupJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");

    m_backupVaultNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");

    m_backupVaultArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");

    m_recoveryPointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetDouble("CompletionDate");

    m_completionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = BackupJobStateMapper::GetBackupJobStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentDone"))
  {
    m_percentDone = jsonValue.GetString("PercentDone");

    m_percentDoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupSizeInBytes"))
  {
    m_backupSizeInBytes = jsonValue.GetInt64("BackupSizeInBytes");

    m_backupSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedCompletionDate"))
  {
    m_expectedCompletionDate = jsonValue.GetDouble("ExpectedCompletionDate");

    m_expectedCompletionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartBy"))
  {
    m_startBy = jsonValue.GetDouble("StartBy");

    m_startByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BytesTransferred"))
  {
    m_bytesTransferred = jsonValue.GetInt64("BytesTransferred");

    m_bytesTransferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupOptions"))
  {
    Aws::Map<Aws::String, JsonView> backupOptionsJsonMap = jsonValue.GetObject("BackupOptions").GetAllObjects();
    for(auto& backupOptionsItem : backupOptionsJsonMap)
    {
      m_backupOptions[backupOptionsItem.first] = backupOptionsItem.second.AsString();
    }
    m_backupOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupType"))
  {
    m_backupType = jsonValue.GetString("BackupType");

    m_backupTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentJobId"))
  {
    m_parentJobId = jsonValue.GetString("ParentJobId");

    m_parentJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsParent"))
  {
    m_isParent = jsonValue.GetBool("IsParent");

    m_isParentHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupJob::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_backupJobIdHasBeenSet)
  {
   payload.WithString("BackupJobId", m_backupJobId);

  }

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

  if(m_backupVaultArnHasBeenSet)
  {
   payload.WithString("BackupVaultArn", m_backupVaultArn);

  }

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_completionDateHasBeenSet)
  {
   payload.WithDouble("CompletionDate", m_completionDate.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", BackupJobStateMapper::GetNameForBackupJobState(m_state));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_percentDoneHasBeenSet)
  {
   payload.WithString("PercentDone", m_percentDone);

  }

  if(m_backupSizeInBytesHasBeenSet)
  {
   payload.WithInt64("BackupSizeInBytes", m_backupSizeInBytes);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_expectedCompletionDateHasBeenSet)
  {
   payload.WithDouble("ExpectedCompletionDate", m_expectedCompletionDate.SecondsWithMSPrecision());
  }

  if(m_startByHasBeenSet)
  {
   payload.WithDouble("StartBy", m_startBy.SecondsWithMSPrecision());
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_bytesTransferredHasBeenSet)
  {
   payload.WithInt64("BytesTransferred", m_bytesTransferred);

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

  if(m_backupTypeHasBeenSet)
  {
   payload.WithString("BackupType", m_backupType);

  }

  if(m_parentJobIdHasBeenSet)
  {
   payload.WithString("ParentJobId", m_parentJobId);

  }

  if(m_isParentHasBeenSet)
  {
   payload.WithBool("IsParent", m_isParent);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
