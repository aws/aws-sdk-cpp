/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessGatewayStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWirelessGatewayStatisticsResult::GetWirelessGatewayStatisticsResult() : 
    m_connectionStatus(ConnectionStatus::NOT_SET)
{
}

GetWirelessGatewayStatisticsResult::GetWirelessGatewayStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectionStatus(ConnectionStatus::NOT_SET)
{
  *this = result;
}

GetWirelessGatewayStatisticsResult& GetWirelessGatewayStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WirelessGatewayId"))
  {
    m_wirelessGatewayId = jsonValue.GetString("WirelessGatewayId");

  }

  if(jsonValue.ValueExists("LastUplinkReceivedAt"))
  {
    m_lastUplinkReceivedAt = jsonValue.GetString("LastUplinkReceivedAt");

  }

  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("ConnectionStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
