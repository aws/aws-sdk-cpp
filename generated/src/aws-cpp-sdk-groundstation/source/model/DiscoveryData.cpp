/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DiscoveryData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

DiscoveryData::DiscoveryData() : 
    m_capabilityArnsHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false)
{
}

DiscoveryData::DiscoveryData(JsonView jsonValue) : 
    m_capabilityArnsHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false)
{
  *this = jsonValue;
}

DiscoveryData& DiscoveryData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capabilityArns"))
  {
    Aws::Utils::Array<JsonView> capabilityArnsJsonList = jsonValue.GetArray("capabilityArns");
    for(unsigned capabilityArnsIndex = 0; capabilityArnsIndex < capabilityArnsJsonList.GetLength(); ++capabilityArnsIndex)
    {
      m_capabilityArns.push_back(capabilityArnsJsonList[capabilityArnsIndex].AsString());
    }
    m_capabilityArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpAddresses"))
  {
    Aws::Utils::Array<JsonView> privateIpAddressesJsonList = jsonValue.GetArray("privateIpAddresses");
    for(unsigned privateIpAddressesIndex = 0; privateIpAddressesIndex < privateIpAddressesJsonList.GetLength(); ++privateIpAddressesIndex)
    {
      m_privateIpAddresses.push_back(privateIpAddressesJsonList[privateIpAddressesIndex].AsString());
    }
    m_privateIpAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicIpAddresses"))
  {
    Aws::Utils::Array<JsonView> publicIpAddressesJsonList = jsonValue.GetArray("publicIpAddresses");
    for(unsigned publicIpAddressesIndex = 0; publicIpAddressesIndex < publicIpAddressesJsonList.GetLength(); ++publicIpAddressesIndex)
    {
      m_publicIpAddresses.push_back(publicIpAddressesJsonList[publicIpAddressesIndex].AsString());
    }
    m_publicIpAddressesHasBeenSet = true;
  }

  return *this;
}

JsonValue DiscoveryData::Jsonize() const
{
  JsonValue payload;

  if(m_capabilityArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilityArnsJsonList(m_capabilityArns.size());
   for(unsigned capabilityArnsIndex = 0; capabilityArnsIndex < capabilityArnsJsonList.GetLength(); ++capabilityArnsIndex)
   {
     capabilityArnsJsonList[capabilityArnsIndex].AsString(m_capabilityArns[capabilityArnsIndex]);
   }
   payload.WithArray("capabilityArns", std::move(capabilityArnsJsonList));

  }

  if(m_privateIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> privateIpAddressesJsonList(m_privateIpAddresses.size());
   for(unsigned privateIpAddressesIndex = 0; privateIpAddressesIndex < privateIpAddressesJsonList.GetLength(); ++privateIpAddressesIndex)
   {
     privateIpAddressesJsonList[privateIpAddressesIndex].AsString(m_privateIpAddresses[privateIpAddressesIndex]);
   }
   payload.WithArray("privateIpAddresses", std::move(privateIpAddressesJsonList));

  }

  if(m_publicIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publicIpAddressesJsonList(m_publicIpAddresses.size());
   for(unsigned publicIpAddressesIndex = 0; publicIpAddressesIndex < publicIpAddressesJsonList.GetLength(); ++publicIpAddressesIndex)
   {
     publicIpAddressesJsonList[publicIpAddressesIndex].AsString(m_publicIpAddresses[publicIpAddressesIndex]);
   }
   payload.WithArray("publicIpAddresses", std::move(publicIpAddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
