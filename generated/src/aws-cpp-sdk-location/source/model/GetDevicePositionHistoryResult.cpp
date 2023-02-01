/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetDevicePositionHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDevicePositionHistoryResult::GetDevicePositionHistoryResult()
{
}

GetDevicePositionHistoryResult::GetDevicePositionHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDevicePositionHistoryResult& GetDevicePositionHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DevicePositions"))
  {
    Aws::Utils::Array<JsonView> devicePositionsJsonList = jsonValue.GetArray("DevicePositions");
    for(unsigned devicePositionsIndex = 0; devicePositionsIndex < devicePositionsJsonList.GetLength(); ++devicePositionsIndex)
    {
      m_devicePositions.push_back(devicePositionsJsonList[devicePositionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
