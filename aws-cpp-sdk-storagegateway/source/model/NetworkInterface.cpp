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
#include <aws/storagegateway/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_ipv4AddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(const JsonValue& jsonValue) : 
    m_ipv4AddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Ipv4Address"))
  {
    m_ipv4Address = jsonValue.GetString("Ipv4Address");

    m_ipv4AddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MacAddress"))
  {
    m_macAddress = jsonValue.GetString("MacAddress");

    m_macAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6Address"))
  {
    m_ipv6Address = jsonValue.GetString("Ipv6Address");

    m_ipv6AddressHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_ipv4AddressHasBeenSet)
  {
   payload.WithString("Ipv4Address", m_ipv4Address);

  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("MacAddress", m_macAddress);

  }

  if(m_ipv6AddressHasBeenSet)
  {
   payload.WithString("Ipv6Address", m_ipv6Address);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws