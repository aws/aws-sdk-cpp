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

#include <aws/directconnect/model/Lag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

Lag::Lag() : 
    m_connectionsBandwidthHasBeenSet(false),
    m_numberOfConnections(0),
    m_numberOfConnectionsHasBeenSet(false),
    m_lagIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_lagNameHasBeenSet(false),
    m_lagState(LagState::NOT_SET),
    m_lagStateHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_minimumLinks(0),
    m_minimumLinksHasBeenSet(false),
    m_awsDeviceHasBeenSet(false),
    m_awsDeviceV2HasBeenSet(false),
    m_connectionsHasBeenSet(false),
    m_allowsHostedConnections(false),
    m_allowsHostedConnectionsHasBeenSet(false),
    m_jumboFrameCapable(false),
    m_jumboFrameCapableHasBeenSet(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET),
    m_hasLogicalRedundancyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Lag::Lag(JsonView jsonValue) : 
    m_connectionsBandwidthHasBeenSet(false),
    m_numberOfConnections(0),
    m_numberOfConnectionsHasBeenSet(false),
    m_lagIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_lagNameHasBeenSet(false),
    m_lagState(LagState::NOT_SET),
    m_lagStateHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_minimumLinks(0),
    m_minimumLinksHasBeenSet(false),
    m_awsDeviceHasBeenSet(false),
    m_awsDeviceV2HasBeenSet(false),
    m_connectionsHasBeenSet(false),
    m_allowsHostedConnections(false),
    m_allowsHostedConnectionsHasBeenSet(false),
    m_jumboFrameCapable(false),
    m_jumboFrameCapableHasBeenSet(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET),
    m_hasLogicalRedundancyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Lag& Lag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectionsBandwidth"))
  {
    m_connectionsBandwidth = jsonValue.GetString("connectionsBandwidth");

    m_connectionsBandwidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfConnections"))
  {
    m_numberOfConnections = jsonValue.GetInteger("numberOfConnections");

    m_numberOfConnectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lagId"))
  {
    m_lagId = jsonValue.GetString("lagId");

    m_lagIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

    m_ownerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lagName"))
  {
    m_lagName = jsonValue.GetString("lagName");

    m_lagNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lagState"))
  {
    m_lagState = LagStateMapper::GetLagStateForName(jsonValue.GetString("lagState"));

    m_lagStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumLinks"))
  {
    m_minimumLinks = jsonValue.GetInteger("minimumLinks");

    m_minimumLinksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsDevice"))
  {
    m_awsDevice = jsonValue.GetString("awsDevice");

    m_awsDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsDeviceV2"))
  {
    m_awsDeviceV2 = jsonValue.GetString("awsDeviceV2");

    m_awsDeviceV2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("connections"))
  {
    Array<JsonView> connectionsJsonList = jsonValue.GetArray("connections");
    for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
    {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsObject());
    }
    m_connectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowsHostedConnections"))
  {
    m_allowsHostedConnections = jsonValue.GetBool("allowsHostedConnections");

    m_allowsHostedConnectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jumboFrameCapable"))
  {
    m_jumboFrameCapable = jsonValue.GetBool("jumboFrameCapable");

    m_jumboFrameCapableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hasLogicalRedundancy"))
  {
    m_hasLogicalRedundancy = HasLogicalRedundancyMapper::GetHasLogicalRedundancyForName(jsonValue.GetString("hasLogicalRedundancy"));

    m_hasLogicalRedundancyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Lag::Jsonize() const
{
  JsonValue payload;

  if(m_connectionsBandwidthHasBeenSet)
  {
   payload.WithString("connectionsBandwidth", m_connectionsBandwidth);

  }

  if(m_numberOfConnectionsHasBeenSet)
  {
   payload.WithInteger("numberOfConnections", m_numberOfConnections);

  }

  if(m_lagIdHasBeenSet)
  {
   payload.WithString("lagId", m_lagId);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_lagNameHasBeenSet)
  {
   payload.WithString("lagName", m_lagName);

  }

  if(m_lagStateHasBeenSet)
  {
   payload.WithString("lagState", LagStateMapper::GetNameForLagState(m_lagState));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_minimumLinksHasBeenSet)
  {
   payload.WithInteger("minimumLinks", m_minimumLinks);

  }

  if(m_awsDeviceHasBeenSet)
  {
   payload.WithString("awsDevice", m_awsDevice);

  }

  if(m_awsDeviceV2HasBeenSet)
  {
   payload.WithString("awsDeviceV2", m_awsDeviceV2);

  }

  if(m_connectionsHasBeenSet)
  {
   Array<JsonValue> connectionsJsonList(m_connections.size());
   for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
   {
     connectionsJsonList[connectionsIndex].AsObject(m_connections[connectionsIndex].Jsonize());
   }
   payload.WithArray("connections", std::move(connectionsJsonList));

  }

  if(m_allowsHostedConnectionsHasBeenSet)
  {
   payload.WithBool("allowsHostedConnections", m_allowsHostedConnections);

  }

  if(m_jumboFrameCapableHasBeenSet)
  {
   payload.WithBool("jumboFrameCapable", m_jumboFrameCapable);

  }

  if(m_hasLogicalRedundancyHasBeenSet)
  {
   payload.WithString("hasLogicalRedundancy", HasLogicalRedundancyMapper::GetNameForHasLogicalRedundancy(m_hasLogicalRedundancy));
  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
