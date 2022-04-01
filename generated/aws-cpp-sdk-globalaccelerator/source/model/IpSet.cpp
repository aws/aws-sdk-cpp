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
    m_ipFamilyHasBeenSet(false),
    m_ipAddressesHasBeenSet(false)
{
}

IpSet::IpSet(JsonView jsonValue) : 
    m_ipFamilyHasBeenSet(false),
    m_ipAddressesHasBeenSet(false)
{
  *this = jsonValue;
}

IpSet& IpSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpFamily"))
  {
    m_ipFamily = jsonValue.GetString("IpFamily");

    m_ipFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddresses"))
  {
    Array<JsonView> ipAddressesJsonList = jsonValue.GetArray("IpAddresses");
    for(unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex)
    {
      m_ipAddresses.push_back(ipAddressesJsonList[ipAddressesIndex].AsString());
    }
    m_ipAddressesHasBeenSet = true;
  }

  return *this;
}

JsonValue IpSet::Jsonize() const
{
  JsonValue payload;

  if(m_ipFamilyHasBeenSet)
  {
   payload.WithString("IpFamily", m_ipFamily);

  }

  if(m_ipAddressesHasBeenSet)
  {
   Array<JsonValue> ipAddressesJsonList(m_ipAddresses.size());
   for(unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex)
   {
     ipAddressesJsonList[ipAddressesIndex].AsString(m_ipAddresses[ipAddressesIndex]);
   }
   payload.WithArray("IpAddresses", std::move(ipAddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
