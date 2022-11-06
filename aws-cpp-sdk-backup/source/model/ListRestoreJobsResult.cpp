/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListRestoreJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRestoreJobsResult::ListRestoreJobsResult()
{
}

ListRestoreJobsResult::ListRestoreJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRestoreJobsResult& ListRestoreJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RestoreJobs"))
  {
    Aws::Utils::Array<JsonView> restoreJobsJsonList = jsonValue.GetArray("RestoreJobs");
    for(unsigned restoreJobsIndex = 0; restoreJobsIndex < restoreJobsJsonList.GetLength(); ++restoreJobsIndex)
    {
      m_restoreJobs.push_back(restoreJobsJsonList[restoreJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
