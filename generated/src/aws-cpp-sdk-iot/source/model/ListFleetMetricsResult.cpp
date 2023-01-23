/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListFleetMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFleetMetricsResult::ListFleetMetricsResult()
{
}

ListFleetMetricsResult::ListFleetMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFleetMetricsResult& ListFleetMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("fleetMetrics"))
  {
    Aws::Utils::Array<JsonView> fleetMetricsJsonList = jsonValue.GetArray("fleetMetrics");
    for(unsigned fleetMetricsIndex = 0; fleetMetricsIndex < fleetMetricsJsonList.GetLength(); ++fleetMetricsIndex)
    {
      m_fleetMetrics.push_back(fleetMetricsJsonList[fleetMetricsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
