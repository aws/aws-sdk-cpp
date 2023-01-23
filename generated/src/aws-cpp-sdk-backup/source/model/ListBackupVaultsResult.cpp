/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupVaultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackupVaultsResult::ListBackupVaultsResult()
{
}

ListBackupVaultsResult::ListBackupVaultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackupVaultsResult& ListBackupVaultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupVaultList"))
  {
    Aws::Utils::Array<JsonView> backupVaultListJsonList = jsonValue.GetArray("BackupVaultList");
    for(unsigned backupVaultListIndex = 0; backupVaultListIndex < backupVaultListJsonList.GetLength(); ++backupVaultListIndex)
    {
      m_backupVaultList.push_back(backupVaultListJsonList[backupVaultListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
