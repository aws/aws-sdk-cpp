/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DirectoryConnectSettingsDescription::DirectoryConnectSettingsDescription(JsonView jsonValue) : 
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_customerUserNameHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_connectIpsHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryConnectSettingsDescription& DirectoryConnectSettingsDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
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
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectIps"))
  {
    Aws::Utils::Array<JsonView> connectIpsJsonList = jsonValue.GetArray("ConnectIps");
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
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
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
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_connectIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectIpsJsonList(m_connectIps.size());
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
