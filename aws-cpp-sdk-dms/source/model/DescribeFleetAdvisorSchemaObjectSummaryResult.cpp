/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeFleetAdvisorSchemaObjectSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetAdvisorSchemaObjectSummaryResult::DescribeFleetAdvisorSchemaObjectSummaryResult()
{
}

DescribeFleetAdvisorSchemaObjectSummaryResult::DescribeFleetAdvisorSchemaObjectSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetAdvisorSchemaObjectSummaryResult& DescribeFleetAdvisorSchemaObjectSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetAdvisorSchemaObjects"))
  {
    Aws::Utils::Array<JsonView> fleetAdvisorSchemaObjectsJsonList = jsonValue.GetArray("FleetAdvisorSchemaObjects");
    for(unsigned fleetAdvisorSchemaObjectsIndex = 0; fleetAdvisorSchemaObjectsIndex < fleetAdvisorSchemaObjectsJsonList.GetLength(); ++fleetAdvisorSchemaObjectsIndex)
    {
      m_fleetAdvisorSchemaObjects.push_back(fleetAdvisorSchemaObjectsJsonList[fleetAdvisorSchemaObjectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
