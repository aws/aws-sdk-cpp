/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/IpAddresses.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

IpAddresses::IpAddresses(JsonView jsonValue)
{
  *this = jsonValue;
}

IpAddresses& IpAddresses::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipV4Addresses"))
  {
    Aws::Utils::Array<JsonView> ipV4AddressesJsonList = jsonValue.GetArray("ipV4Addresses");
    for(unsigned ipV4AddressesIndex = 0; ipV4AddressesIndex < ipV4AddressesJsonList.GetLength(); ++ipV4AddressesIndex)
    {
      m_ipV4Addresses.push_back(ipV4AddressesJsonList[ipV4AddressesIndex].AsString());
    }
    m_ipV4AddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipV6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipV6AddressesJsonList = jsonValue.GetArray("ipV6Addresses");
    for(unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex)
    {
      m_ipV6Addresses.push_back(ipV6AddressesJsonList[ipV6AddressesIndex].AsString());
    }
    m_ipV6AddressesHasBeenSet = true;
  }
  return *this;
}

JsonValue IpAddresses::Jsonize() const
{
  JsonValue payload;

  if(m_ipV4AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipV4AddressesJsonList(m_ipV4Addresses.size());
   for(unsigned ipV4AddressesIndex = 0; ipV4AddressesIndex < ipV4AddressesJsonList.GetLength(); ++ipV4AddressesIndex)
   {
     ipV4AddressesJsonList[ipV4AddressesIndex].AsString(m_ipV4Addresses[ipV4AddressesIndex]);
   }
   payload.WithArray("ipV4Addresses", std::move(ipV4AddressesJsonList));

  }

  if(m_ipV6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipV6AddressesJsonList(m_ipV6Addresses.size());
   for(unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex)
   {
     ipV6AddressesJsonList[ipV6AddressesIndex].AsString(m_ipV6Addresses[ipV6AddressesIndex]);
   }
   payload.WithArray("ipV6Addresses", std::move(ipV6AddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
