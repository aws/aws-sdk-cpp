﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessGatewayTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWirelessGatewayTaskResult::GetWirelessGatewayTaskResult() : 
    m_status(WirelessGatewayTaskStatus::NOT_SET)
{
}

GetWirelessGatewayTaskResult::GetWirelessGatewayTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(WirelessGatewayTaskStatus::NOT_SET)
{
  *this = result;
}

GetWirelessGatewayTaskResult& GetWirelessGatewayTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WirelessGatewayId"))
  {
    m_wirelessGatewayId = jsonValue.GetString("WirelessGatewayId");

  }

  if(jsonValue.ValueExists("WirelessGatewayTaskDefinitionId"))
  {
    m_wirelessGatewayTaskDefinitionId = jsonValue.GetString("WirelessGatewayTaskDefinitionId");

  }

  if(jsonValue.ValueExists("LastUplinkReceivedAt"))
  {
    m_lastUplinkReceivedAt = jsonValue.GetString("LastUplinkReceivedAt");

  }

  if(jsonValue.ValueExists("TaskCreatedAt"))
  {
    m_taskCreatedAt = jsonValue.GetString("TaskCreatedAt");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = WirelessGatewayTaskStatusMapper::GetWirelessGatewayTaskStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
