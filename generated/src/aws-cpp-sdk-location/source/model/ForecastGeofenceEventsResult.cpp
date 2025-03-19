/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ForecastGeofenceEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ForecastGeofenceEventsResult::ForecastGeofenceEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ForecastGeofenceEventsResult& ForecastGeofenceEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ForecastedEvents"))
  {
    Aws::Utils::Array<JsonView> forecastedEventsJsonList = jsonValue.GetArray("ForecastedEvents");
    for(unsigned forecastedEventsIndex = 0; forecastedEventsIndex < forecastedEventsJsonList.GetLength(); ++forecastedEventsIndex)
    {
      m_forecastedEvents.push_back(forecastedEventsJsonList[forecastedEventsIndex].AsObject());
    }
    m_forecastedEventsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DistanceUnit"))
  {
    m_distanceUnit = DistanceUnitMapper::GetDistanceUnitForName(jsonValue.GetString("DistanceUnit"));
    m_distanceUnitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpeedUnit"))
  {
    m_speedUnit = SpeedUnitMapper::GetSpeedUnitForName(jsonValue.GetString("SpeedUnit"));
    m_speedUnitHasBeenSet = true;
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
