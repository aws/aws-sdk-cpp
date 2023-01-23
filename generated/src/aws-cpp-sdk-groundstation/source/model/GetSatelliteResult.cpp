/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetSatelliteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSatelliteResult::GetSatelliteResult() : 
    m_noradSatelliteID(0)
{
}

GetSatelliteResult::GetSatelliteResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_noradSatelliteID(0)
{
  *this = result;
}

GetSatelliteResult& GetSatelliteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("currentEphemeris"))
  {
    m_currentEphemeris = jsonValue.GetObject("currentEphemeris");

  }

  if(jsonValue.ValueExists("groundStations"))
  {
    Aws::Utils::Array<JsonView> groundStationsJsonList = jsonValue.GetArray("groundStations");
    for(unsigned groundStationsIndex = 0; groundStationsIndex < groundStationsJsonList.GetLength(); ++groundStationsIndex)
    {
      m_groundStations.push_back(groundStationsJsonList[groundStationsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("noradSatelliteID"))
  {
    m_noradSatelliteID = jsonValue.GetInteger("noradSatelliteID");

  }

  if(jsonValue.ValueExists("satelliteArn"))
  {
    m_satelliteArn = jsonValue.GetString("satelliteArn");

  }

  if(jsonValue.ValueExists("satelliteId"))
  {
    m_satelliteId = jsonValue.GetString("satelliteId");

  }



  return *this;
}
