/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetSatelliteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSatelliteResult::GetSatelliteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSatelliteResult& GetSatelliteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("currentEphemeris"))
  {
    m_currentEphemeris = jsonValue.GetObject("currentEphemeris");
    m_currentEphemerisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groundStations"))
  {
    Aws::Utils::Array<JsonView> groundStationsJsonList = jsonValue.GetArray("groundStations");
    for(unsigned groundStationsIndex = 0; groundStationsIndex < groundStationsJsonList.GetLength(); ++groundStationsIndex)
    {
      m_groundStations.push_back(groundStationsJsonList[groundStationsIndex].AsString());
    }
    m_groundStationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("noradSatelliteID"))
  {
    m_noradSatelliteID = jsonValue.GetInteger("noradSatelliteID");
    m_noradSatelliteIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("satelliteArn"))
  {
    m_satelliteArn = jsonValue.GetString("satelliteArn");
    m_satelliteArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("satelliteId"))
  {
    m_satelliteId = jsonValue.GetString("satelliteId");
    m_satelliteIdHasBeenSet = true;
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
