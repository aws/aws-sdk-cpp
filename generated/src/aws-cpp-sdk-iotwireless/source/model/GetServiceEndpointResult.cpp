/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetServiceEndpointResult.h>
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

GetServiceEndpointResult::GetServiceEndpointResult() : 
    m_serviceType(WirelessGatewayServiceType::NOT_SET)
{
}

GetServiceEndpointResult::GetServiceEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_serviceType(WirelessGatewayServiceType::NOT_SET)
{
  *this = result;
}

GetServiceEndpointResult& GetServiceEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceType"))
  {
    m_serviceType = WirelessGatewayServiceTypeMapper::GetWirelessGatewayServiceTypeForName(jsonValue.GetString("ServiceType"));

  }

  if(jsonValue.ValueExists("ServiceEndpoint"))
  {
    m_serviceEndpoint = jsonValue.GetString("ServiceEndpoint");

  }

  if(jsonValue.ValueExists("ServerTrust"))
  {
    m_serverTrust = jsonValue.GetString("ServerTrust");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
