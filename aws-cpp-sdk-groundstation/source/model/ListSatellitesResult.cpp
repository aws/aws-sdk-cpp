/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ListSatellitesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSatellitesResult::ListSatellitesResult()
{
}

ListSatellitesResult::ListSatellitesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSatellitesResult& ListSatellitesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("satellites"))
  {
    Aws::Utils::Array<JsonView> satellitesJsonList = jsonValue.GetArray("satellites");
    for(unsigned satellitesIndex = 0; satellitesIndex < satellitesJsonList.GetLength(); ++satellitesIndex)
    {
      m_satellites.push_back(satellitesJsonList[satellitesIndex].AsObject());
    }
  }



  return *this;
}
