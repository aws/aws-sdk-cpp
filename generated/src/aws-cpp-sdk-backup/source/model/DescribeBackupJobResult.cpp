/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeBackupJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBackupJobResult::DescribeBackupJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBackupJobResult& DescribeBackupJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
      m_childJobsInState[BackupJobStateMapper::GetBackupJobStateForName(childJobsInStateItem.first)] = childJobsInStateItem.second.AsInt64();
    }
    m_childJobsInStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");
    m_resourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiationDate"))
  {
    m_initiationDate = jsonValue.GetDouble("InitiationDate");
    m_initiationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessageCategory"))
  {
    m_messageCategory = jsonValue.GetString("MessageCategory");
    m_messageCategoryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
