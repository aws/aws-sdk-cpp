/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileSystemEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

FileSystemEndpoint::FileSystemEndpoint() : 
    m_dNSNameHasBeenSet(false),
    m_ipAddressesHasBeenSet(false)
{
}

FileSystemEndpoint::FileSystemEndpoint(JsonView jsonValue) : 
    m_dNSNameHasBeenSet(false),
    m_ipAddressesHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemEndpoint& FileSystemEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DNSName"))
  {
    m_dNSName = jsonValue.GetString("DNSName");

    m_dNSNameHasBeenSet = true;
  }

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

JsonValue FileSystemEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_dNSNameHasBeenSet)
  {
   payload.WithString("DNSName", m_dNSName);

  }

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
} // namespace FSx
} // namespace Aws
