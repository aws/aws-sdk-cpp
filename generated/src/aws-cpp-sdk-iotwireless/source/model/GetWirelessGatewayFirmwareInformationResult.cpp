﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessGatewayFirmwareInformationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWirelessGatewayFirmwareInformationResult::GetWirelessGatewayFirmwareInformationResult()
{
}

GetWirelessGatewayFirmwareInformationResult::GetWirelessGatewayFirmwareInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWirelessGatewayFirmwareInformationResult& GetWirelessGatewayFirmwareInformationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

  }



  return *this;
}
