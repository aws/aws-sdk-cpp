/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeFleetAdvisorSchemasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetAdvisorSchemasResult::DescribeFleetAdvisorSchemasResult()
{
}

DescribeFleetAdvisorSchemasResult::DescribeFleetAdvisorSchemasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetAdvisorSchemasResult& DescribeFleetAdvisorSchemasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetAdvisorSchemas"))
  {
    Aws::Utils::Array<JsonView> fleetAdvisorSchemasJsonList = jsonValue.GetArray("FleetAdvisorSchemas");
    for(unsigned fleetAdvisorSchemasIndex = 0; fleetAdvisorSchemasIndex < fleetAdvisorSchemasJsonList.GetLength(); ++fleetAdvisorSchemasIndex)
    {
      m_fleetAdvisorSchemas.push_back(fleetAdvisorSchemasJsonList[fleetAdvisorSchemasIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
