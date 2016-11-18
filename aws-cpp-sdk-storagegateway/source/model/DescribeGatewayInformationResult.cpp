/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/storagegateway/model/DescribeGatewayInformationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGatewayInformationResult::DescribeGatewayInformationResult()
{
}

DescribeGatewayInformationResult::DescribeGatewayInformationResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGatewayInformationResult& DescribeGatewayInformationResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

  }

  if(jsonValue.ValueExists("GatewayName"))
  {
    m_gatewayName = jsonValue.GetString("GatewayName");

  }

  if(jsonValue.ValueExists("GatewayTimezone"))
  {
    m_gatewayTimezone = jsonValue.GetString("GatewayTimezone");

  }

  if(jsonValue.ValueExists("GatewayState"))
  {
    m_gatewayState = jsonValue.GetString("GatewayState");

  }

  if(jsonValue.ValueExists("GatewayNetworkInterfaces"))
  {
    Array<JsonValue> gatewayNetworkInterfacesJsonList = jsonValue.GetArray("GatewayNetworkInterfaces");
    for(unsigned gatewayNetworkInterfacesIndex = 0; gatewayNetworkInterfacesIndex < gatewayNetworkInterfacesJsonList.GetLength(); ++gatewayNetworkInterfacesIndex)
    {
      m_gatewayNetworkInterfaces.push_back(gatewayNetworkInterfacesJsonList[gatewayNetworkInterfacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("GatewayType"))
  {
    m_gatewayType = jsonValue.GetString("GatewayType");

  }

  if(jsonValue.ValueExists("NextUpdateAvailabilityDate"))
  {
    m_nextUpdateAvailabilityDate = jsonValue.GetString("NextUpdateAvailabilityDate");

  }

  if(jsonValue.ValueExists("LastSoftwareUpdate"))
  {
    m_lastSoftwareUpdate = jsonValue.GetString("LastSoftwareUpdate");

  }



  return *this;
}
