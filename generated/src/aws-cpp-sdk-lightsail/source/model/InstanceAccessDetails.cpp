﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceAccessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceAccessDetails::InstanceAccessDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceAccessDetails& InstanceAccessDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certKey"))
  {
    m_certKey = jsonValue.GetString("certKey");
    m_certKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");
    m_ipAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipv6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipv6AddressesJsonList = jsonValue.GetArray("ipv6Addresses");
    for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
    {
      m_ipv6Addresses.push_back(ipv6AddressesJsonList[ipv6AddressesIndex].AsString());
    }
    m_ipv6AddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("password"))
  {
    m_password = jsonValue.GetString("password");
    m_passwordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("passwordData"))
  {
    m_passwordData = jsonValue.GetObject("passwordData");
    m_passwordDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privateKey"))
  {
    m_privateKey = jsonValue.GetString("privateKey");
    m_privateKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = InstanceAccessProtocolMapper::GetInstanceAccessProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceName"))
  {
    m_instanceName = jsonValue.GetString("instanceName");
    m_instanceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostKeys"))
  {
    Aws::Utils::Array<JsonView> hostKeysJsonList = jsonValue.GetArray("hostKeys");
    for(unsigned hostKeysIndex = 0; hostKeysIndex < hostKeysJsonList.GetLength(); ++hostKeysIndex)
    {
      m_hostKeys.push_back(hostKeysJsonList[hostKeysIndex].AsObject());
    }
    m_hostKeysHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceAccessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_certKeyHasBeenSet)
  {
   payload.WithString("certKey", m_certKey);

  }

  if(m_expiresAtHasBeenSet)
  {
   payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_ipv6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6AddressesJsonList(m_ipv6Addresses.size());
   for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
   {
     ipv6AddressesJsonList[ipv6AddressesIndex].AsString(m_ipv6Addresses[ipv6AddressesIndex]);
   }
   payload.WithArray("ipv6Addresses", std::move(ipv6AddressesJsonList));

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  if(m_passwordDataHasBeenSet)
  {
   payload.WithObject("passwordData", m_passwordData.Jsonize());

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("privateKey", m_privateKey);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", InstanceAccessProtocolMapper::GetNameForInstanceAccessProtocol(m_protocol));
  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_hostKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hostKeysJsonList(m_hostKeys.size());
   for(unsigned hostKeysIndex = 0; hostKeysIndex < hostKeysJsonList.GetLength(); ++hostKeysIndex)
   {
     hostKeysJsonList[hostKeysIndex].AsObject(m_hostKeys[hostKeysIndex].Jsonize());
   }
   payload.WithArray("hostKeys", std::move(hostKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
