/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  if(jsonValue.ValueExists("groundStations"))
  {
    Array<JsonView> groundStationsJsonList = jsonValue.GetArray("groundStations");
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
