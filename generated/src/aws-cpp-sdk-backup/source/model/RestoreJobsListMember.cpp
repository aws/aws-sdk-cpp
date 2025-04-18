﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreJobsListMember.h>
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

RestoreJobsListMember::RestoreJobsListMember(JsonView jsonValue)
{
  *this = jsonValue;
}

RestoreJobsListMember& RestoreJobsListMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestoreJobId"))
  {
    m_restoreJobId = jsonValue.GetString("RestoreJobId");
    m_restoreJobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("Status"))
  {
    m_status = RestoreJobStatusMapper::GetRestoreJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
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
  if(jsonValue.ValueExists("ExpectedCompletionTimeMinutes"))
  {
    m_expectedCompletionTimeMinutes = jsonValue.GetInt64("ExpectedCompletionTimeMinutes");
    m_expectedCompletionTimeMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedResourceArn"))
  {
    m_createdResourceArn = jsonValue.GetString("CreatedResourceArn");
    m_createdResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecoveryPointCreationDate"))
  {
    m_recoveryPointCreationDate = jsonValue.GetDouble("RecoveryPointCreationDate");
    m_recoveryPointCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationStatus"))
  {
    m_validationStatus = RestoreValidationStatusMapper::GetRestoreValidationStatusForName(jsonValue.GetString("ValidationStatus"));
    m_validationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationStatusMessage"))
  {
    m_validationStatusMessage = jsonValue.GetString("ValidationStatusMessage");
    m_validationStatusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletionStatus"))
  {
    m_deletionStatus = RestoreDeletionStatusMapper::GetRestoreDeletionStatusForName(jsonValue.GetString("DeletionStatus"));
    m_deletionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletionStatusMessage"))
  {
    m_deletionStatusMessage = jsonValue.GetString("DeletionStatusMessage");
    m_deletionStatusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue RestoreJobsListMember::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_restoreJobIdHasBeenSet)
  {
   payload.WithString("RestoreJobId", m_restoreJobId);

  }

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_completionDateHasBeenSet)
  {
   payload.WithDouble("CompletionDate", m_completionDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RestoreJobStatusMapper::GetNameForRestoreJobStatus(m_status));
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

  if(m_expectedCompletionTimeMinutesHasBeenSet)
  {
   payload.WithInt64("ExpectedCompletionTimeMinutes", m_expectedCompletionTimeMinutes);

  }

  if(m_createdResourceArnHasBeenSet)
  {
   payload.WithString("CreatedResourceArn", m_createdResourceArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_recoveryPointCreationDateHasBeenSet)
  {
   payload.WithDouble("RecoveryPointCreationDate", m_recoveryPointCreationDate.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("ValidationStatus", RestoreValidationStatusMapper::GetNameForRestoreValidationStatus(m_validationStatus));
  }

  if(m_validationStatusMessageHasBeenSet)
  {
   payload.WithString("ValidationStatusMessage", m_validationStatusMessage);

  }

  if(m_deletionStatusHasBeenSet)
  {
   payload.WithString("DeletionStatus", RestoreDeletionStatusMapper::GetNameForRestoreDeletionStatus(m_deletionStatus));
  }

  if(m_deletionStatusMessageHasBeenSet)
  {
   payload.WithString("DeletionStatusMessage", m_deletionStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
