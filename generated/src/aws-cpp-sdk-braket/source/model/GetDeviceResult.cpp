/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/GetDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeviceResult::GetDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeviceResult& GetDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceArn"))
  {
    m_deviceArn = jsonValue.GetString("deviceArn");
    m_deviceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");
    m_deviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");
    m_providerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = DeviceTypeMapper::GetDeviceTypeForName(jsonValue.GetString("deviceType"));
    m_deviceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceStatus"))
  {
    m_deviceStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("deviceStatus"));
    m_deviceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceCapabilities"))
  {
    m_deviceCapabilities = jsonValue.GetString("deviceCapabilities");
    m_deviceCapabilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceQueueInfo"))
  {
    Aws::Utils::Array<JsonView> deviceQueueInfoJsonList = jsonValue.GetArray("deviceQueueInfo");
    for(unsigned deviceQueueInfoIndex = 0; deviceQueueInfoIndex < deviceQueueInfoJsonList.GetLength(); ++deviceQueueInfoIndex)
    {
      m_deviceQueueInfo.push_back(deviceQueueInfoJsonList[deviceQueueInfoIndex].AsObject());
    }
    m_deviceQueueInfoHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
