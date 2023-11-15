/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupJobSummariesResult.h>
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

ListBackupJobSummariesResult::ListBackupJobSummariesResult()
{
}

ListBackupJobSummariesResult::ListBackupJobSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackupJobSummariesResult& ListBackupJobSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupJobSummaries"))
  {
    Aws::Utils::Array<JsonView> backupJobSummariesJsonList = jsonValue.GetArray("BackupJobSummaries");
    for(unsigned backupJobSummariesIndex = 0; backupJobSummariesIndex < backupJobSummariesJsonList.GetLength(); ++backupJobSummariesIndex)
    {
      m_backupJobSummaries.push_back(backupJobSummariesJsonList[backupJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AggregationPeriod"))
  {
    m_aggregationPeriod = jsonValue.GetString("AggregationPeriod");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
