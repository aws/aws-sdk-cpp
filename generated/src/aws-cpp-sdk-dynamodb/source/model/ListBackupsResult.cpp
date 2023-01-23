/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ListBackupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBackupsResult::ListBackupsResult()
{
}

ListBackupsResult::ListBackupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBackupsResult& ListBackupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupSummaries"))
  {
    Aws::Utils::Array<JsonView> backupSummariesJsonList = jsonValue.GetArray("BackupSummaries");
    for(unsigned backupSummariesIndex = 0; backupSummariesIndex < backupSummariesJsonList.GetLength(); ++backupSummariesIndex)
    {
      m_backupSummaries.push_back(backupSummariesJsonList[backupSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LastEvaluatedBackupArn"))
  {
    m_lastEvaluatedBackupArn = jsonValue.GetString("LastEvaluatedBackupArn");

  }



  return *this;
}
