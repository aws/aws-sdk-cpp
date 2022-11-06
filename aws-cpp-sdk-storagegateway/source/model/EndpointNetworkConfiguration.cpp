/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/EndpointNetworkConfiguration.h>
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

EndpointNetworkConfiguration::EndpointNetworkConfiguration() : 
    m_ipAddressesHasBeenSet(false)
{
}

EndpointNetworkConfiguration::EndpointNetworkConfiguration(JsonView jsonValue) : 
    m_ipAddressesHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointNetworkConfiguration& EndpointNetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpAddresses"))
  {
    Aws::Utils::Array<JsonView> ipAddressesJsonList = jsonValue.GetArray("IpAddresses");
    for(unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex)
    {
      m_ipAddresses.push_back(ipAddressesJsonList[ipAddressesIndex].AsString());
    }
    m_ipAddressesHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointNetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipAddressesJsonList(m_ipAddresses.size());
   for(unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex)
   {
     ipAddressesJsonList[ipAddressesIndex].AsString(m_ipAddresses[ipAddressesIndex]);
   }
   payload.WithArray("IpAddresses", std::move(ipAddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
