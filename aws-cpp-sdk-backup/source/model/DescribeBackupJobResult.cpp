/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeBackupJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBackupJobResult::DescribeBackupJobResult() : 
    m_state(BackupJobState::NOT_SET),
    m_backupSizeInBytes(0),
    m_bytesTransferred(0),
    m_isParent(false),
    m_numberOfChildJobs(0)
{
}

DescribeBackupJobResult::DescribeBackupJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(BackupJobState::NOT_SET),
    m_backupSizeInBytes(0),
    m_bytesTransferred(0),
    m_isParent(false),
    m_numberOfChildJobs(0)
{
  *this = result;
}

DescribeBackupJobResult& DescribeBackupJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

  }

  if(jsonValue.ValueExists("BackupJobId"))
  {
    m_backupJobId = jsonValue.GetString("BackupJobId");

  }

  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");

  }

  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");

  }

  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");

  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetDouble("CompletionDate");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = BackupJobStateMapper::GetBackupJobStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("PercentDone"))
  {
    m_percentDone = jsonValue.GetString("PercentDone");

  }

  if(jsonValue.ValueExists("BackupSizeInBytes"))
  {
    m_backupSizeInBytes = jsonValue.GetInt64("BackupSizeInBytes");

  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

  }

  if(jsonValue.ValueExists("BytesTransferred"))
  {
    m_bytesTransferred = jsonValue.GetInt64("BytesTransferred");

  }

  if(jsonValue.ValueExists("ExpectedCompletionDate"))
  {
    m_expectedCompletionDate = jsonValue.GetDouble("ExpectedCompletionDate");

  }

  if(jsonValue.ValueExists("StartBy"))
  {
    m_startBy = jsonValue.GetDouble("StartBy");

  }

  if(jsonValue.ValueExists("BackupOptions"))
  {
    Aws::Map<Aws::String, JsonView> backupOptionsJsonMap = jsonValue.GetObject("BackupOptions").GetAllObjects();
    for(auto& backupOptionsItem : backupOptionsJsonMap)
    {
      m_backupOptions[backupOptionsItem.first] = backupOptionsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("BackupType"))
  {
    m_backupType = jsonValue.GetString("BackupType");

  }

  if(jsonValue.ValueExists("ParentJobId"))
  {
    m_parentJobId = jsonValue.GetString("ParentJobId");

  }

  if(jsonValue.ValueExists("IsParent"))
  {
    m_isParent = jsonValue.GetBool("IsParent");

  }

  if(jsonValue.ValueExists("NumberOfChildJobs"))
  {
    m_numberOfChildJobs = jsonValue.GetInt64("NumberOfChildJobs");

  }

  if(jsonValue.ValueExists("ChildJobsInState"))
  {
    Aws::Map<Aws::String, JsonView> childJobsInStateJsonMap = jsonValue.GetObject("ChildJobsInState").GetAllObjects();
    for(auto& childJobsInStateItem : childJobsInStateJsonMap)
    {
      m_childJobsInState[BackupJobStateMapper::GetBackupJobStateForName(childJobsInStateItem.first)] = childJobsInStateItem.second.AsInt64();
    }
  }



  return *this;
}
