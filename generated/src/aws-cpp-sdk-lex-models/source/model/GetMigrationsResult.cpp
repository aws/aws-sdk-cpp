/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetMigrationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMigrationsResult::GetMigrationsResult()
{
}

GetMigrationsResult::GetMigrationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMigrationsResult& GetMigrationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("migrationSummaries"))
  {
    Aws::Utils::Array<JsonView> migrationSummariesJsonList = jsonValue.GetArray("migrationSummaries");
    for(unsigned migrationSummariesIndex = 0; migrationSummariesIndex < migrationSummariesJsonList.GetLength(); ++migrationSummariesIndex)
    {
      m_migrationSummaries.push_back(migrationSummariesJsonList[migrationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
