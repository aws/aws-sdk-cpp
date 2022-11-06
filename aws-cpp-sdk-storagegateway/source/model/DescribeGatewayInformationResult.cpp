/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DescribeGatewayInformationResult::DescribeGatewayInformationResult() : 
    m_hostEnvironment(HostEnvironment::NOT_SET),
    m_gatewayCapacity(GatewayCapacity::NOT_SET)
{
}

DescribeGatewayInformationResult::DescribeGatewayInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hostEnvironment(HostEnvironment::NOT_SET),
    m_gatewayCapacity(GatewayCapacity::NOT_SET)
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
    Aws::Utils::Array<JsonView> gatewayNetworkInterfacesJsonList = jsonValue.GetArray("GatewayNetworkInterfaces");
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
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("VPCEndpoint"))
  {
    m_vPCEndpoint = jsonValue.GetString("VPCEndpoint");

  }

  if(jsonValue.ValueExists("CloudWatchLogGroupARN"))
  {
    m_cloudWatchLogGroupARN = jsonValue.GetString("CloudWatchLogGroupARN");

  }

  if(jsonValue.ValueExists("HostEnvironment"))
  {
    m_hostEnvironment = HostEnvironmentMapper::GetHostEnvironmentForName(jsonValue.GetString("HostEnvironment"));

  }

  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = jsonValue.GetString("EndpointType");

  }

  if(jsonValue.ValueExists("SoftwareUpdatesEndDate"))
  {
    m_softwareUpdatesEndDate = jsonValue.GetString("SoftwareUpdatesEndDate");

  }

  if(jsonValue.ValueExists("DeprecationDate"))
  {
    m_deprecationDate = jsonValue.GetString("DeprecationDate");

  }

  if(jsonValue.ValueExists("GatewayCapacity"))
  {
    m_gatewayCapacity = GatewayCapacityMapper::GetGatewayCapacityForName(jsonValue.GetString("GatewayCapacity"));

  }

  if(jsonValue.ValueExists("SupportedGatewayCapacities"))
  {
    Aws::Utils::Array<JsonView> supportedGatewayCapacitiesJsonList = jsonValue.GetArray("SupportedGatewayCapacities");
    for(unsigned supportedGatewayCapacitiesIndex = 0; supportedGatewayCapacitiesIndex < supportedGatewayCapacitiesJsonList.GetLength(); ++supportedGatewayCapacitiesIndex)
    {
      m_supportedGatewayCapacities.push_back(GatewayCapacityMapper::GetGatewayCapacityForName(supportedGatewayCapacitiesJsonList[supportedGatewayCapacitiesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("HostEnvironmentId"))
  {
    m_hostEnvironmentId = jsonValue.GetString("HostEnvironmentId");

  }



  return *this;
}
