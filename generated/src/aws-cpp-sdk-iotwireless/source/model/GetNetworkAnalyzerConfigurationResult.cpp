/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetNetworkAnalyzerConfigurationResult.h>
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

GetNetworkAnalyzerConfigurationResult::GetNetworkAnalyzerConfigurationResult()
{
}

GetNetworkAnalyzerConfigurationResult::GetNetworkAnalyzerConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetNetworkAnalyzerConfigurationResult& GetNetworkAnalyzerConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TraceContent"))
  {
    m_traceContent = jsonValue.GetObject("TraceContent");

  }

  if(jsonValue.ValueExists("WirelessDevices"))
  {
    Aws::Utils::Array<JsonView> wirelessDevicesJsonList = jsonValue.GetArray("WirelessDevices");
    for(unsigned wirelessDevicesIndex = 0; wirelessDevicesIndex < wirelessDevicesJsonList.GetLength(); ++wirelessDevicesIndex)
    {
      m_wirelessDevices.push_back(wirelessDevicesJsonList[wirelessDevicesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("WirelessGateways"))
  {
    Aws::Utils::Array<JsonView> wirelessGatewaysJsonList = jsonValue.GetArray("WirelessGateways");
    for(unsigned wirelessGatewaysIndex = 0; wirelessGatewaysIndex < wirelessGatewaysJsonList.GetLength(); ++wirelessGatewaysIndex)
    {
      m_wirelessGateways.push_back(wirelessGatewaysJsonList[wirelessGatewaysIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("MulticastGroups"))
  {
    Aws::Utils::Array<JsonView> multicastGroupsJsonList = jsonValue.GetArray("MulticastGroups");
    for(unsigned multicastGroupsIndex = 0; multicastGroupsIndex < multicastGroupsJsonList.GetLength(); ++multicastGroupsIndex)
    {
      m_multicastGroups.push_back(multicastGroupsJsonList[multicastGroupsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
