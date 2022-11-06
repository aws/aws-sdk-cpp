/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeFleetUtilizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetUtilizationResult::DescribeFleetUtilizationResult()
{
}

DescribeFleetUtilizationResult::DescribeFleetUtilizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetUtilizationResult& DescribeFleetUtilizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetUtilization"))
  {
    Aws::Utils::Array<JsonView> fleetUtilizationJsonList = jsonValue.GetArray("FleetUtilization");
    for(unsigned fleetUtilizationIndex = 0; fleetUtilizationIndex < fleetUtilizationJsonList.GetLength(); ++fleetUtilizationIndex)
    {
      m_fleetUtilization.push_back(fleetUtilizationJsonList[fleetUtilizationIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
