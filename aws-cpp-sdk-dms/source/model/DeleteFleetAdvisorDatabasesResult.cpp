/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DeleteFleetAdvisorDatabasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteFleetAdvisorDatabasesResult::DeleteFleetAdvisorDatabasesResult()
{
}

DeleteFleetAdvisorDatabasesResult::DeleteFleetAdvisorDatabasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteFleetAdvisorDatabasesResult& DeleteFleetAdvisorDatabasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatabaseIds"))
  {
    Aws::Utils::Array<JsonView> databaseIdsJsonList = jsonValue.GetArray("DatabaseIds");
    for(unsigned databaseIdsIndex = 0; databaseIdsIndex < databaseIdsJsonList.GetLength(); ++databaseIdsIndex)
    {
      m_databaseIds.push_back(databaseIdsJsonList[databaseIdsIndex].AsString());
    }
  }



  return *this;
}
