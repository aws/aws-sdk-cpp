/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ListMigrationTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMigrationTasksResult::ListMigrationTasksResult()
{
}

ListMigrationTasksResult::ListMigrationTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMigrationTasksResult& ListMigrationTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("MigrationTaskSummaryList"))
  {
    Aws::Utils::Array<JsonView> migrationTaskSummaryListJsonList = jsonValue.GetArray("MigrationTaskSummaryList");
    for(unsigned migrationTaskSummaryListIndex = 0; migrationTaskSummaryListIndex < migrationTaskSummaryListJsonList.GetLength(); ++migrationTaskSummaryListIndex)
    {
      m_migrationTaskSummaryList.push_back(migrationTaskSummaryListJsonList[migrationTaskSummaryListIndex].AsObject());
    }
  }



  return *this;
}
