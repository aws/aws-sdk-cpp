/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetLogLevelsByResourceTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLogLevelsByResourceTypesResult::GetLogLevelsByResourceTypesResult() : 
    m_defaultLogLevel(LogLevel::NOT_SET)
{
}

GetLogLevelsByResourceTypesResult::GetLogLevelsByResourceTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_defaultLogLevel(LogLevel::NOT_SET)
{
  *this = result;
}

GetLogLevelsByResourceTypesResult& GetLogLevelsByResourceTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DefaultLogLevel"))
  {
    m_defaultLogLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("DefaultLogLevel"));

  }

  if(jsonValue.ValueExists("WirelessGatewayLogOptions"))
  {
    Aws::Utils::Array<JsonView> wirelessGatewayLogOptionsJsonList = jsonValue.GetArray("WirelessGatewayLogOptions");
    for(unsigned wirelessGatewayLogOptionsIndex = 0; wirelessGatewayLogOptionsIndex < wirelessGatewayLogOptionsJsonList.GetLength(); ++wirelessGatewayLogOptionsIndex)
    {
      m_wirelessGatewayLogOptions.push_back(wirelessGatewayLogOptionsJsonList[wirelessGatewayLogOptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("WirelessDeviceLogOptions"))
  {
    Aws::Utils::Array<JsonView> wirelessDeviceLogOptionsJsonList = jsonValue.GetArray("WirelessDeviceLogOptions");
    for(unsigned wirelessDeviceLogOptionsIndex = 0; wirelessDeviceLogOptionsIndex < wirelessDeviceLogOptionsJsonList.GetLength(); ++wirelessDeviceLogOptionsIndex)
    {
      m_wirelessDeviceLogOptions.push_back(wirelessDeviceLogOptionsJsonList[wirelessDeviceLogOptionsIndex].AsObject());
    }
  }



  return *this;
}
