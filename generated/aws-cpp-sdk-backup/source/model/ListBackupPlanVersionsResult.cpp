﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupPlanVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackupPlanVersionsResult::ListBackupPlanVersionsResult()
{
}

ListBackupPlanVersionsResult::ListBackupPlanVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackupPlanVersionsResult& ListBackupPlanVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("BackupPlanVersionsList"))
  {
    Array<JsonView> backupPlanVersionsListJsonList = jsonValue.GetArray("BackupPlanVersionsList");
    for(unsigned backupPlanVersionsListIndex = 0; backupPlanVersionsListIndex < backupPlanVersionsListJsonList.GetLength(); ++backupPlanVersionsListIndex)
    {
      m_backupPlanVersionsList.push_back(backupPlanVersionsListJsonList[backupPlanVersionsListIndex].AsObject());
    }
  }



  return *this;
}
