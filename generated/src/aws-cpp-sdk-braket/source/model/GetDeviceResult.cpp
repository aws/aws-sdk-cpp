/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/GetDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeviceResult::GetDeviceResult() : 
    m_deviceStatus(DeviceStatus::NOT_SET),
    m_deviceType(DeviceType::NOT_SET)
{
}

GetDeviceResult::GetDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deviceStatus(DeviceStatus::NOT_SET),
    m_deviceType(DeviceType::NOT_SET)
{
  *this = result;
}

GetDeviceResult& GetDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceArn"))
  {
    m_deviceArn = jsonValue.GetString("deviceArn");

  }

  if(jsonValue.ValueExists("deviceCapabilities"))
  {
    m_deviceCapabilities = jsonValue.GetString("deviceCapabilities");

  }

  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");

  }

  if(jsonValue.ValueExists("deviceStatus"))
  {
    m_deviceStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("deviceStatus"));

  }

  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = DeviceTypeMapper::GetDeviceTypeForName(jsonValue.GetString("deviceType"));

  }

  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");

  }



  return *this;
}
