/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ListMigrationTaskUpdatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMigrationTaskUpdatesResult::ListMigrationTaskUpdatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMigrationTaskUpdatesResult& ListMigrationTaskUpdatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MigrationTaskUpdateList"))
  {
    Aws::Utils::Array<JsonView> migrationTaskUpdateListJsonList = jsonValue.GetArray("MigrationTaskUpdateList");
    for(unsigned migrationTaskUpdateListIndex = 0; migrationTaskUpdateListIndex < migrationTaskUpdateListJsonList.GetLength(); ++migrationTaskUpdateListIndex)
    {
      m_migrationTaskUpdateList.push_back(migrationTaskUpdateListJsonList[migrationTaskUpdateListIndex].AsObject());
    }
    m_migrationTaskUpdateListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
