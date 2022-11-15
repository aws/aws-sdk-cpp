/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListFleetsForVehicleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFleetsForVehicleResult::ListFleetsForVehicleResult()
{
}

ListFleetsForVehicleResult::ListFleetsForVehicleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFleetsForVehicleResult& ListFleetsForVehicleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("fleets"))
  {
    Aws::Utils::Array<JsonView> fleetsJsonList = jsonValue.GetArray("fleets");
    for(unsigned fleetsIndex = 0; fleetsIndex < fleetsJsonList.GetLength(); ++fleetsIndex)
    {
      m_fleets.push_back(fleetsJsonList[fleetsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
