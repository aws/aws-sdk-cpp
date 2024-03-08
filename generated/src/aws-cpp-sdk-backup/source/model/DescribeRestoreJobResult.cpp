/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeRestoreJobResult.h>
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

DescribeRestoreJobResult::DescribeRestoreJobResult() : 
    m_status(RestoreJobStatus::NOT_SET),
    m_backupSizeInBytes(0),
    m_expectedCompletionTimeMinutes(0),
    m_validationStatus(RestoreValidationStatus::NOT_SET),
    m_deletionStatus(RestoreDeletionStatus::NOT_SET)
{
}

DescribeRestoreJobResult::DescribeRestoreJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RestoreJobStatus::NOT_SET),
    m_backupSizeInBytes(0),
    m_expectedCompletionTimeMinutes(0),
    m_validationStatus(RestoreValidationStatus::NOT_SET),
    m_deletionStatus(RestoreDeletionStatus::NOT_SET)
{
  *this = result;
}

DescribeRestoreJobResult& DescribeRestoreJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

  }

  if(jsonValue.ValueExists("RestoreJobId"))
  {
    m_restoreJobId = jsonValue.GetString("RestoreJobId");

  }

  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetDouble("CompletionDate");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RestoreJobStatusMapper::GetRestoreJobStatusForName(jsonValue.GetString("Status"));

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

  if(jsonValue.ValueExists("ExpectedCompletionTimeMinutes"))
  {
    m_expectedCompletionTimeMinutes = jsonValue.GetInt64("ExpectedCompletionTimeMinutes");

  }

  if(jsonValue.ValueExists("CreatedResourceArn"))
  {
    m_createdResourceArn = jsonValue.GetString("CreatedResourceArn");

  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

  }

  if(jsonValue.ValueExists("RecoveryPointCreationDate"))
  {
    m_recoveryPointCreationDate = jsonValue.GetDouble("RecoveryPointCreationDate");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("ValidationStatus"))
  {
    m_validationStatus = RestoreValidationStatusMapper::GetRestoreValidationStatusForName(jsonValue.GetString("ValidationStatus"));

  }

  if(jsonValue.ValueExists("ValidationStatusMessage"))
  {
    m_validationStatusMessage = jsonValue.GetString("ValidationStatusMessage");

  }

  if(jsonValue.ValueExists("DeletionStatus"))
  {
    m_deletionStatus = RestoreDeletionStatusMapper::GetRestoreDeletionStatusForName(jsonValue.GetString("DeletionStatus"));

  }

  if(jsonValue.ValueExists("DeletionStatusMessage"))
  {
    m_deletionStatusMessage = jsonValue.GetString("DeletionStatusMessage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
