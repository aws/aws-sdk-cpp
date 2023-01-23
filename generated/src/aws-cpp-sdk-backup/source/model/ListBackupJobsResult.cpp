/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackupJobsResult::ListBackupJobsResult()
{
}

ListBackupJobsResult::ListBackupJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackupJobsResult& ListBackupJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupJobs"))
  {
    Aws::Utils::Array<JsonView> backupJobsJsonList = jsonValue.GetArray("BackupJobs");
    for(unsigned backupJobsIndex = 0; backupJobsIndex < backupJobsJsonList.GetLength(); ++backupJobsIndex)
    {
      m_backupJobs.push_back(backupJobsJsonList[backupJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
