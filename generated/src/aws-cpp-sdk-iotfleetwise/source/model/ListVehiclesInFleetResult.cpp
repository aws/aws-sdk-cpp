/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListVehiclesInFleetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVehiclesInFleetResult::ListVehiclesInFleetResult()
{
}

ListVehiclesInFleetResult::ListVehiclesInFleetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVehiclesInFleetResult& ListVehiclesInFleetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("vehicles"))
  {
    Aws::Utils::Array<JsonView> vehiclesJsonList = jsonValue.GetArray("vehicles");
    for(unsigned vehiclesIndex = 0; vehiclesIndex < vehiclesJsonList.GetLength(); ++vehiclesIndex)
    {
      m_vehicles.push_back(vehiclesJsonList[vehiclesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
