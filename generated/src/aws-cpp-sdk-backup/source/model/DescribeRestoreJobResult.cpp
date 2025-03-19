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

DescribeRestoreJobResult::DescribeRestoreJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRestoreJobResult& DescribeRestoreJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
