/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/GetDevicePoolCompatibilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDevicePoolCompatibilityResult::GetDevicePoolCompatibilityResult()
{
}

GetDevicePoolCompatibilityResult::GetDevicePoolCompatibilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDevicePoolCompatibilityResult& GetDevicePoolCompatibilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("compatibleDevices"))
  {
    Aws::Utils::Array<JsonView> compatibleDevicesJsonList = jsonValue.GetArray("compatibleDevices");
    for(unsigned compatibleDevicesIndex = 0; compatibleDevicesIndex < compatibleDevicesJsonList.GetLength(); ++compatibleDevicesIndex)
    {
      m_compatibleDevices.push_back(compatibleDevicesJsonList[compatibleDevicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("incompatibleDevices"))
  {
    Aws::Utils::Array<JsonView> incompatibleDevicesJsonList = jsonValue.GetArray("incompatibleDevices");
    for(unsigned incompatibleDevicesIndex = 0; incompatibleDevicesIndex < incompatibleDevicesJsonList.GetLength(); ++incompatibleDevicesIndex)
    {
      m_incompatibleDevices.push_back(incompatibleDevicesJsonList[incompatibleDevicesIndex].AsObject());
    }
  }



  return *this;
}
