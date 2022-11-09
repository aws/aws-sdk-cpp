/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupPlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackupPlansResult::ListBackupPlansResult()
{
}

ListBackupPlansResult::ListBackupPlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackupPlansResult& ListBackupPlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("BackupPlansList"))
  {
    Aws::Utils::Array<JsonView> backupPlansListJsonList = jsonValue.GetArray("BackupPlansList");
    for(unsigned backupPlansListIndex = 0; backupPlansListIndex < backupPlansListJsonList.GetLength(); ++backupPlansListIndex)
    {
      m_backupPlansList.push_back(backupPlansListJsonList[backupPlansListIndex].AsObject());
    }
  }



  return *this;
}
