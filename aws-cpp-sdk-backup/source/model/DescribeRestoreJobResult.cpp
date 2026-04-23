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

#include <aws/backup/model/DescribeRestoreJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRestoreJobResult::DescribeRestoreJobResult() : 
    m_status(RestoreJobStatus::NOT_SET),
    m_backupSizeInBytes(0),
    m_expectedCompletionTimeMinutes(0)
{
}

DescribeRestoreJobResult::DescribeRestoreJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RestoreJobStatus::NOT_SET),
    m_backupSizeInBytes(0),
    m_expectedCompletionTimeMinutes(0)
{
  *this = result;
}

DescribeRestoreJobResult& DescribeRestoreJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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



  return *this;
}
