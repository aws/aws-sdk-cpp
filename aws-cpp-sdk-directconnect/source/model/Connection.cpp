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

#include <aws/directconnect/model/Connection.h>
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

Connection::Connection() : 
    m_ownerAccountHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_connectionState(ConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_partnerNameHasBeenSet(false),
    m_loaIssueTimeHasBeenSet(false),
    m_lagIdHasBeenSet(false),
    m_awsDeviceHasBeenSet(false),
    m_jumboFrameCapable(false),
    m_jumboFrameCapableHasBeenSet(false),
    m_awsDeviceV2HasBeenSet(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET),
    m_hasLogicalRedundancyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Connection::Connection(JsonView jsonValue) : 
    m_ownerAccountHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_connectionState(ConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_partnerNameHasBeenSet(false),
    m_loaIssueTimeHasBeenSet(false),
    m_lagIdHasBeenSet(false),
    m_awsDeviceHasBeenSet(false),
    m_jumboFrameCapable(false),
    m_jumboFrameCapableHasBeenSet(false),
    m_awsDeviceV2HasBeenSet(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET),
    m_hasLogicalRedundancyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Connection& Connection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

    m_ownerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

    m_connectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionName"))
  {
    m_connectionName = jsonValue.GetString("connectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("connectionState"));

    m_connectionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bandwidth"))
  {
    m_bandwidth = jsonValue.GetString("bandwidth");

    m_bandwidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vlan"))
  {
    m_vlan = jsonValue.GetInteger("vlan");

    m_vlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partnerName"))
  {
    m_partnerName = jsonValue.GetString("partnerName");

    m_partnerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loaIssueTime"))
  {
    m_loaIssueTime = jsonValue.GetDouble("loaIssueTime");

    m_loaIssueTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lagId"))
  {
    m_lagId = jsonValue.GetString("lagId");

    m_lagIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsDevice"))
  {
    m_awsDevice = jsonValue.GetString("awsDevice");

    m_awsDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jumboFrameCapable"))
  {
    m_jumboFrameCapable = jsonValue.GetBool("jumboFrameCapable");

    m_jumboFrameCapableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsDeviceV2"))
  {
    m_awsDeviceV2 = jsonValue.GetString("awsDeviceV2");

    m_awsDeviceV2HasBeenSet = true;
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

JsonValue Connection::Jsonize() const
{
  JsonValue payload;

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("connectionName", m_connectionName);

  }

  if(m_connectionStateHasBeenSet)
  {
   payload.WithString("connectionState", ConnectionStateMapper::GetNameForConnectionState(m_connectionState));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_bandwidthHasBeenSet)
  {
   payload.WithString("bandwidth", m_bandwidth);

  }

  if(m_vlanHasBeenSet)
  {
   payload.WithInteger("vlan", m_vlan);

  }

  if(m_partnerNameHasBeenSet)
  {
   payload.WithString("partnerName", m_partnerName);

  }

  if(m_loaIssueTimeHasBeenSet)
  {
   payload.WithDouble("loaIssueTime", m_loaIssueTime.SecondsWithMSPrecision());
  }

  if(m_lagIdHasBeenSet)
  {
   payload.WithString("lagId", m_lagId);

  }

  if(m_awsDeviceHasBeenSet)
  {
   payload.WithString("awsDevice", m_awsDevice);

  }

  if(m_jumboFrameCapableHasBeenSet)
  {
   payload.WithBool("jumboFrameCapable", m_jumboFrameCapable);

  }

  if(m_awsDeviceV2HasBeenSet)
  {
   payload.WithString("awsDeviceV2", m_awsDeviceV2);

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
