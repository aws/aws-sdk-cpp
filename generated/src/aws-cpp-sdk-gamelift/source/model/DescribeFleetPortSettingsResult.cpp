/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeFleetPortSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetPortSettingsResult::DescribeFleetPortSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetPortSettingsResult& DescribeFleetPortSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");
    m_fleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");
    m_fleetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InboundPermissions"))
  {
    Aws::Utils::Array<JsonView> inboundPermissionsJsonList = jsonValue.GetArray("InboundPermissions");
    for(unsigned inboundPermissionsIndex = 0; inboundPermissionsIndex < inboundPermissionsJsonList.GetLength(); ++inboundPermissionsIndex)
    {
      m_inboundPermissions.push_back(inboundPermissionsJsonList[inboundPermissionsIndex].AsObject());
    }
    m_inboundPermissionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = LocationUpdateStatusMapper::GetLocationUpdateStatusForName(jsonValue.GetString("UpdateStatus"));
    m_updateStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
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
