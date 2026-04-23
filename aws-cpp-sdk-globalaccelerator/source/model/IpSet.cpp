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
