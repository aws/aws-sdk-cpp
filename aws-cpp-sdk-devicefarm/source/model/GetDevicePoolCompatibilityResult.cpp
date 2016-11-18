/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/GetDevicePoolCompatibilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDevicePoolCompatibilityResult::GetDevicePoolCompatibilityResult()
{
}

GetDevicePoolCompatibilityResult::GetDevicePoolCompatibilityResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDevicePoolCompatibilityResult& GetDevicePoolCompatibilityResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("compatibleDevices"))
  {
    Array<JsonValue> compatibleDevicesJsonList = jsonValue.GetArray("compatibleDevices");
    for(unsigned compatibleDevicesIndex = 0; compatibleDevicesIndex < compatibleDevicesJsonList.GetLength(); ++compatibleDevicesIndex)
    {
      m_compatibleDevices.push_back(compatibleDevicesJsonList[compatibleDevicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("incompatibleDevices"))
  {
    Array<JsonValue> incompatibleDevicesJsonList = jsonValue.GetArray("incompatibleDevices");
    for(unsigned incompatibleDevicesIndex = 0; incompatibleDevicesIndex < incompatibleDevicesJsonList.GetLength(); ++incompatibleDevicesIndex)
    {
      m_incompatibleDevices.push_back(incompatibleDevicesJsonList[incompatibleDevicesIndex].AsObject());
    }
  }



  return *this;
}
