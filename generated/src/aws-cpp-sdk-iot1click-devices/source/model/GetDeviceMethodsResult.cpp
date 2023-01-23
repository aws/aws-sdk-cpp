/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/GetDeviceMethodsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeviceMethodsResult::GetDeviceMethodsResult()
{
}

GetDeviceMethodsResult::GetDeviceMethodsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeviceMethodsResult& GetDeviceMethodsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceMethods"))
  {
    Aws::Utils::Array<JsonView> deviceMethodsJsonList = jsonValue.GetArray("deviceMethods");
    for(unsigned deviceMethodsIndex = 0; deviceMethodsIndex < deviceMethodsJsonList.GetLength(); ++deviceMethodsIndex)
    {
      m_deviceMethods.push_back(deviceMethodsJsonList[deviceMethodsIndex].AsObject());
    }
  }



  return *this;
}
