/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/GetRecoveryPointIndexDetailsResult.h>
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

GetRecoveryPointIndexDetailsResult::GetRecoveryPointIndexDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecoveryPointIndexDetailsResult& GetRecoveryPointIndexDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");
    m_backupVaultArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceResourceArn"))
  {
    m_sourceResourceArn = jsonValue.GetString("SourceResourceArn");
    m_sourceResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexCreationDate"))
  {
    m_indexCreationDate = jsonValue.GetDouble("IndexCreationDate");
    m_indexCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexDeletionDate"))
  {
    m_indexDeletionDate = jsonValue.GetDouble("IndexDeletionDate");
    m_indexDeletionDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexCompletionDate"))
  {
    m_indexCompletionDate = jsonValue.GetDouble("IndexCompletionDate");
    m_indexCompletionDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("IndexStatus"));
    m_indexStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexStatusMessage"))
  {
    m_indexStatusMessage = jsonValue.GetString("IndexStatusMessage");
    m_indexStatusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalItemsIndexed"))
  {
    m_totalItemsIndexed = jsonValue.GetInt64("TotalItemsIndexed");
    m_totalItemsIndexedHasBeenSet = true;
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
