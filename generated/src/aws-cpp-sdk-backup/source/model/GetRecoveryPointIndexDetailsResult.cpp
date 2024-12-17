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

GetRecoveryPointIndexDetailsResult::GetRecoveryPointIndexDetailsResult() : 
    m_indexStatus(IndexStatus::NOT_SET),
    m_totalItemsIndexed(0)
{
}

GetRecoveryPointIndexDetailsResult::GetRecoveryPointIndexDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetRecoveryPointIndexDetailsResult()
{
  *this = result;
}

GetRecoveryPointIndexDetailsResult& GetRecoveryPointIndexDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");

  }

  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");

  }

  if(jsonValue.ValueExists("SourceResourceArn"))
  {
    m_sourceResourceArn = jsonValue.GetString("SourceResourceArn");

  }

  if(jsonValue.ValueExists("IndexCreationDate"))
  {
    m_indexCreationDate = jsonValue.GetDouble("IndexCreationDate");

  }

  if(jsonValue.ValueExists("IndexDeletionDate"))
  {
    m_indexDeletionDate = jsonValue.GetDouble("IndexDeletionDate");

  }

  if(jsonValue.ValueExists("IndexCompletionDate"))
  {
    m_indexCompletionDate = jsonValue.GetDouble("IndexCompletionDate");

  }

  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("IndexStatus"));

  }

  if(jsonValue.ValueExists("IndexStatusMessage"))
  {
    m_indexStatusMessage = jsonValue.GetString("IndexStatusMessage");

  }

  if(jsonValue.ValueExists("TotalItemsIndexed"))
  {
    m_totalItemsIndexed = jsonValue.GetInt64("TotalItemsIndexed");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
