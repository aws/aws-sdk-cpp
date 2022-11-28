/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_accountIdHasBeenSet(false),
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
    m_resourceTypeHasBeenSet(false),
    m_parentJobIdHasBeenSet(false),
    m_isParent(false),
    m_isParentHasBeenSet(false),
    m_compositeMemberIdentifierHasBeenSet(false),
    m_numberOfChildJobs(0),
    m_numberOfChildJobsHasBeenSet(false),
    m_childJobsInStateHasBeenSet(false)
{
}

CopyJob::CopyJob(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
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
    m_resourceTypeHasBeenSet(false),
    m_parentJobIdHasBeenSet(false),
    m_isParent(false),
    m_isParentHasBeenSet(false),
    m_compositeMemberIdentifierHasBeenSet(false),
    m_numberOfChildJobs(0),
    m_numberOfChildJobsHasBeenSet(false),
    m_childJobsInStateHasBeenSet(false)
{
  *this = jsonValue;
}

CopyJob& CopyJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("CompositeMemberIdentifier"))
  {
    m_compositeMemberIdentifier = jsonValue.GetString("CompositeMemberIdentifier");

    m_compositeMemberIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfChildJobs"))
  {
    m_numberOfChildJobs = jsonValue.GetInt64("NumberOfChildJobs");

    m_numberOfChildJobsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChildJobsInState"))
  {
    Aws::Map<Aws::String, JsonView> childJobsInStateJsonMap = jsonValue.GetObject("ChildJobsInState").GetAllObjects();
    for(auto& childJobsInStateItem : childJobsInStateJsonMap)
    {
      m_childJobsInState[CopyJobStateMapper::GetCopyJobStateForName(childJobsInStateItem.first)] = childJobsInStateItem.second.AsInt64();
    }
    m_childJobsInStateHasBeenSet = true;
  }

  return *this;
}

JsonValue CopyJob::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

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

  if(m_parentJobIdHasBeenSet)
  {
   payload.WithString("ParentJobId", m_parentJobId);

  }

  if(m_isParentHasBeenSet)
  {
   payload.WithBool("IsParent", m_isParent);

  }

  if(m_compositeMemberIdentifierHasBeenSet)
  {
   payload.WithString("CompositeMemberIdentifier", m_compositeMemberIdentifier);

  }

  if(m_numberOfChildJobsHasBeenSet)
  {
   payload.WithInt64("NumberOfChildJobs", m_numberOfChildJobs);

  }

  if(m_childJobsInStateHasBeenSet)
  {
   JsonValue childJobsInStateJsonMap;
   for(auto& childJobsInStateItem : m_childJobsInState)
   {
     childJobsInStateJsonMap.WithInt64(CopyJobStateMapper::GetNameForCopyJobState(childJobsInStateItem.first), childJobsInStateItem.second);
   }
   payload.WithObject("ChildJobsInState", std::move(childJobsInStateJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
