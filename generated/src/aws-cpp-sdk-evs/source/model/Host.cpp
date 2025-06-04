/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/Host.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

Host::Host(JsonView jsonValue)
{
  *this = jsonValue;
}

Host& Host::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostName"))
  {
    m_hostName = jsonValue.GetString("hostName");
    m_hostNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");
    m_ipAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyName"))
  {
    m_keyName = jsonValue.GetString("keyName");
    m_keyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("placementGroupId"))
  {
    m_placementGroupId = jsonValue.GetString("placementGroupId");
    m_placementGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dedicatedHostId"))
  {
    m_dedicatedHostId = jsonValue.GetString("dedicatedHostId");
    m_dedicatedHostIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostState"))
  {
    m_hostState = HostStateMapper::GetHostStateForName(jsonValue.GetString("hostState"));
    m_hostStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateDetails"))
  {
    m_stateDetails = jsonValue.GetString("stateDetails");
    m_stateDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("ec2InstanceId");
    m_ec2InstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }
  return *this;
}

JsonValue Host::Jsonize() const
{
  JsonValue payload;

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("hostName", m_hostName);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("keyName", m_keyName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_placementGroupIdHasBeenSet)
  {
   payload.WithString("placementGroupId", m_placementGroupId);

  }

  if(m_dedicatedHostIdHasBeenSet)
  {
   payload.WithString("dedicatedHostId", m_dedicatedHostId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_hostStateHasBeenSet)
  {
   payload.WithString("hostState", HostStateMapper::GetNameForHostState(m_hostState));
  }

  if(m_stateDetailsHasBeenSet)
  {
   payload.WithString("stateDetails", m_stateDetails);

  }

  if(m_ec2InstanceIdHasBeenSet)
  {
   payload.WithString("ec2InstanceId", m_ec2InstanceId);

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
