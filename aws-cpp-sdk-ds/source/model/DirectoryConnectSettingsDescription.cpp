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
#include <aws/ds/model/DirectoryConnectSettingsDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

DirectoryConnectSettingsDescription::DirectoryConnectSettingsDescription() : 
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_customerUserNameHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_connectIpsHasBeenSet(false)
{
}

DirectoryConnectSettingsDescription::DirectoryConnectSettingsDescription(const JsonValue& jsonValue) : 
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_customerUserNameHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_connectIpsHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryConnectSettingsDescription& DirectoryConnectSettingsDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Array<JsonValue> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerUserName"))
  {
    m_customerUserName = jsonValue.GetString("CustomerUserName");

    m_customerUserNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupId"))
  {
    m_securityGroupId = jsonValue.GetString("SecurityGroupId");

    m_securityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Array<JsonValue> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectIps"))
  {
    Array<JsonValue> connectIpsJsonList = jsonValue.GetArray("ConnectIps");
    for(unsigned connectIpsIndex = 0; connectIpsIndex < connectIpsJsonList.GetLength(); ++connectIpsIndex)
    {
      m_connectIps.push_back(connectIpsJsonList[connectIpsIndex].AsString());
    }
    m_connectIpsHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectoryConnectSettingsDescription::Jsonize() const
{
  JsonValue payload;

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_customerUserNameHasBeenSet)
  {
   payload.WithString("CustomerUserName", m_customerUserName);

  }

  if(m_securityGroupIdHasBeenSet)
  {
   payload.WithString("SecurityGroupId", m_securityGroupId);

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_connectIpsHasBeenSet)
  {
   Array<JsonValue> connectIpsJsonList(m_connectIps.size());
   for(unsigned connectIpsIndex = 0; connectIpsIndex < connectIpsJsonList.GetLength(); ++connectIpsIndex)
   {
     connectIpsJsonList[connectIpsIndex].AsString(m_connectIps[connectIpsIndex]);
   }
   payload.WithArray("ConnectIps", std::move(connectIpsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws