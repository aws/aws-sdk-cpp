/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/GetDevicesInPlacementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDevicesInPlacementResult::GetDevicesInPlacementResult()
{
}

GetDevicesInPlacementResult::GetDevicesInPlacementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDevicesInPlacementResult& GetDevicesInPlacementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("devices"))
  {
    Aws::Map<Aws::String, JsonView> devicesJsonMap = jsonValue.GetObject("devices").GetAllObjects();
    for(auto& devicesItem : devicesJsonMap)
    {
      m_devices[devicesItem.first] = devicesItem.second.AsString();
    }
  }



  return *this;
}
