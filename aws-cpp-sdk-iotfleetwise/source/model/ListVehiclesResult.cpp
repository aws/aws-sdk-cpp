/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListVehiclesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVehiclesResult::ListVehiclesResult()
{
}

ListVehiclesResult::ListVehiclesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVehiclesResult& ListVehiclesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("vehicleSummaries"))
  {
    Aws::Utils::Array<JsonView> vehicleSummariesJsonList = jsonValue.GetArray("vehicleSummaries");
    for(unsigned vehicleSummariesIndex = 0; vehicleSummariesIndex < vehicleSummariesJsonList.GetLength(); ++vehicleSummariesIndex)
    {
      m_vehicleSummaries.push_back(vehicleSummariesJsonList[vehicleSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
