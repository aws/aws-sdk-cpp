/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListWirelessDevicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWirelessDevicesResult::ListWirelessDevicesResult()
{
}

ListWirelessDevicesResult::ListWirelessDevicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWirelessDevicesResult& ListWirelessDevicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("WirelessDeviceList"))
  {
    Aws::Utils::Array<JsonView> wirelessDeviceListJsonList = jsonValue.GetArray("WirelessDeviceList");
    for(unsigned wirelessDeviceListIndex = 0; wirelessDeviceListIndex < wirelessDeviceListJsonList.GetLength(); ++wirelessDeviceListIndex)
    {
      m_wirelessDeviceList.push_back(wirelessDeviceListJsonList[wirelessDeviceListIndex].AsObject());
    }
  }



  return *this;
}
