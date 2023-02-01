/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeFleetAdvisorDatabasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetAdvisorDatabasesResult::DescribeFleetAdvisorDatabasesResult()
{
}

DescribeFleetAdvisorDatabasesResult::DescribeFleetAdvisorDatabasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetAdvisorDatabasesResult& DescribeFleetAdvisorDatabasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Databases"))
  {
    Aws::Utils::Array<JsonView> databasesJsonList = jsonValue.GetArray("Databases");
    for(unsigned databasesIndex = 0; databasesIndex < databasesJsonList.GetLength(); ++databasesIndex)
    {
      m_databases.push_back(databasesJsonList[databasesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
