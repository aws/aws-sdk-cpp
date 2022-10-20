/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeFleetPortSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetPortSettingsResult::DescribeFleetPortSettingsResult() : 
    m_updateStatus(LocationUpdateStatus::NOT_SET)
{
}

DescribeFleetPortSettingsResult::DescribeFleetPortSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_updateStatus(LocationUpdateStatus::NOT_SET)
{
  *this = result;
}

DescribeFleetPortSettingsResult& DescribeFleetPortSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("InboundPermissions"))
  {
    Aws::Utils::Array<JsonView> inboundPermissionsJsonList = jsonValue.GetArray("InboundPermissions");
    for(unsigned inboundPermissionsIndex = 0; inboundPermissionsIndex < inboundPermissionsJsonList.GetLength(); ++inboundPermissionsIndex)
    {
      m_inboundPermissions.push_back(inboundPermissionsJsonList[inboundPermissionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = LocationUpdateStatusMapper::GetLocationUpdateStatusForName(jsonValue.GetString("UpdateStatus"));

  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

  }



  return *this;
}
