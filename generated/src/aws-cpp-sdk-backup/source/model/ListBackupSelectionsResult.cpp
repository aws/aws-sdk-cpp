/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupSelectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackupSelectionsResult::ListBackupSelectionsResult()
{
}

ListBackupSelectionsResult::ListBackupSelectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackupSelectionsResult& ListBackupSelectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("BackupSelectionsList"))
  {
    Aws::Utils::Array<JsonView> backupSelectionsListJsonList = jsonValue.GetArray("BackupSelectionsList");
    for(unsigned backupSelectionsListIndex = 0; backupSelectionsListIndex < backupSelectionsListJsonList.GetLength(); ++backupSelectionsListIndex)
    {
      m_backupSelectionsList.push_back(backupSelectionsListJsonList[backupSelectionsListIndex].AsObject());
    }
  }



  return *this;
}
