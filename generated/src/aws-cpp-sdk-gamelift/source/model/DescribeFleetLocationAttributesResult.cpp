/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeFleetLocationAttributesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetLocationAttributesResult::DescribeFleetLocationAttributesResult()
{
}

DescribeFleetLocationAttributesResult::DescribeFleetLocationAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetLocationAttributesResult& DescribeFleetLocationAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

  }

  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");

  }

  if(jsonValue.ValueExists("LocationAttributes"))
  {
    Aws::Utils::Array<JsonView> locationAttributesJsonList = jsonValue.GetArray("LocationAttributes");
    for(unsigned locationAttributesIndex = 0; locationAttributesIndex < locationAttributesJsonList.GetLength(); ++locationAttributesIndex)
    {
      m_locationAttributes.push_back(locationAttributesJsonList[locationAttributesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
