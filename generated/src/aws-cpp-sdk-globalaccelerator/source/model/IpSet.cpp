/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/IpSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

IpSet::IpSet() : 
    m_ipAddressesHasBeenSet(false),
    m_ipAddressFamily(IpAddressFamily::NOT_SET),
    m_ipAddressFamilyHasBeenSet(false)
{
}

IpSet::IpSet(JsonView jsonValue) : 
    m_ipAddressesHasBeenSet(false),
    m_ipAddressFamily(IpAddressFamily::NOT_SET),
    m_ipAddressFamilyHasBeenSet(false)
{
  *this = jsonValue;
}

IpSet& IpSet::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("IpAddressFamily"))
  {
    m_ipAddressFamily = IpAddressFamilyMapper::GetIpAddressFamilyForName(jsonValue.GetString("IpAddressFamily"));

    m_ipAddressFamilyHasBeenSet = true;
  }

  return *this;
}

JsonValue IpSet::Jsonize() const
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

  if(m_ipAddressFamilyHasBeenSet)
  {
   payload.WithString("IpAddressFamily", IpAddressFamilyMapper::GetNameForIpAddressFamily(m_ipAddressFamily));
  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
