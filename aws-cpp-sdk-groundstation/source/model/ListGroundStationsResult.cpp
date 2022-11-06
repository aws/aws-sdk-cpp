/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ListGroundStationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGroundStationsResult::ListGroundStationsResult()
{
}

ListGroundStationsResult::ListGroundStationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGroundStationsResult& ListGroundStationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("groundStationList"))
  {
    Aws::Utils::Array<JsonView> groundStationListJsonList = jsonValue.GetArray("groundStationList");
    for(unsigned groundStationListIndex = 0; groundStationListIndex < groundStationListJsonList.GetLength(); ++groundStationListIndex)
    {
      m_groundStationList.push_back(groundStationListJsonList[groundStationListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
