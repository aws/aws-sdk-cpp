/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGatewayInformationResult::DescribeGatewayInformationResult()
{
}

DescribeGatewayInformationResult::DescribeGatewayInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGatewayInformationResult& DescribeGatewayInformationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Array<JsonView> gatewayNetworkInterfacesJsonList = jsonValue.GetArray("GatewayNetworkInterfaces");
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

  if(jsonValue.ValueExists("Ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("Ec2InstanceId");

  }

  if(jsonValue.ValueExists("Ec2InstanceRegion"))
  {
    m_ec2InstanceRegion = jsonValue.GetString("Ec2InstanceRegion");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("VPCEndpoint"))
  {
    m_vPCEndpoint = jsonValue.GetString("VPCEndpoint");

  }



  return *this;
}
