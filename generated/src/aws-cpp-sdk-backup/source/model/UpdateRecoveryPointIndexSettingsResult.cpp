/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateRecoveryPointIndexSettingsResult.h>
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

UpdateRecoveryPointIndexSettingsResult::UpdateRecoveryPointIndexSettingsResult() : 
    m_indexStatus(IndexStatus::NOT_SET),
    m_index(Index::NOT_SET)
{
}

UpdateRecoveryPointIndexSettingsResult::UpdateRecoveryPointIndexSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateRecoveryPointIndexSettingsResult()
{
  *this = result;
}

UpdateRecoveryPointIndexSettingsResult& UpdateRecoveryPointIndexSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");

  }

  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");

  }

  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("IndexStatus"));

  }

  if(jsonValue.ValueExists("Index"))
  {
    m_index = IndexMapper::GetIndexForName(jsonValue.GetString("Index"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
