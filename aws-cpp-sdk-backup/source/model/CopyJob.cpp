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

#include <aws/backup/model/CopyJob.h>
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

CopyJob::CopyJob() : 
    m_copyJobIdHasBeenSet(false),
    m_sourceBackupVaultArnHasBeenSet(false),
    m_sourceRecoveryPointArnHasBeenSet(false),
    m_destinationBackupVaultArnHasBeenSet(false),
    m_destinationRecoveryPointArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_state(CopyJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_backupSizeInBytes(0),
    m_backupSizeInBytesHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

CopyJob::CopyJob(JsonView jsonValue) : 
    m_copyJobIdHasBeenSet(false),
    m_sourceBackupVaultArnHasBeenSet(false),
    m_sourceRecoveryPointArnHasBeenSet(false),
    m_destinationBackupVaultArnHasBeenSet(false),
    m_destinationRecoveryPointArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_state(CopyJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_backupSizeInBytes(0),
    m_backupSizeInBytesHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CopyJob& CopyJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CopyJobId"))
  {
    m_copyJobId = jsonValue.GetString("CopyJobId");

    m_copyJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceBackupVaultArn"))
  {
    m_sourceBackupVaultArn = jsonValue.GetString("SourceBackupVaultArn");

    m_sourceBackupVaultArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRecoveryPointArn"))
  {
    m_sourceRecoveryPointArn = jsonValue.GetString("SourceRecoveryPointArn");

    m_sourceRecoveryPointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationBackupVaultArn"))
  {
    m_destinationBackupVaultArn = jsonValue.GetString("DestinationBackupVaultArn");

    m_destinationBackupVaultArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationRecoveryPointArn"))
  {
    m_destinationRecoveryPointArn = jsonValue.GetString("DestinationRecoveryPointArn");

    m_destinationRecoveryPointArnHasBeenSet = true;
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
    m_state = CopyJobStateMapper::GetCopyJobStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
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

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CopyJob::Jsonize() const
{
  JsonValue payload;

  if(m_copyJobIdHasBeenSet)
  {
   payload.WithString("CopyJobId", m_copyJobId);

  }

  if(m_sourceBackupVaultArnHasBeenSet)
  {
   payload.WithString("SourceBackupVaultArn", m_sourceBackupVaultArn);

  }

  if(m_sourceRecoveryPointArnHasBeenSet)
  {
   payload.WithString("SourceRecoveryPointArn", m_sourceRecoveryPointArn);

  }

  if(m_destinationBackupVaultArnHasBeenSet)
  {
   payload.WithString("DestinationBackupVaultArn", m_destinationBackupVaultArn);

  }

  if(m_destinationRecoveryPointArnHasBeenSet)
  {
   payload.WithString("DestinationRecoveryPointArn", m_destinationRecoveryPointArn);

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
   payload.WithString("State", CopyJobStateMapper::GetNameForCopyJobState(m_state));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

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

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
