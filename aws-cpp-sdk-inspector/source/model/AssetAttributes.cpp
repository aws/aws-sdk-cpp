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

#include <aws/inspector/model/AssetAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AssetAttributes::AssetAttributes() : 
    m_schemaVersion(0),
    m_schemaVersionHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_ipv4AddressesHasBeenSet(false)
{
}

AssetAttributes::AssetAttributes(const JsonValue& jsonValue) : 
    m_schemaVersion(0),
    m_schemaVersionHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_ipv4AddressesHasBeenSet(false)
{
  *this = jsonValue;
}

AssetAttributes& AssetAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetInteger("schemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroup"))
  {
    m_autoScalingGroup = jsonValue.GetString("autoScalingGroup");

    m_autoScalingGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amiId"))
  {
    m_amiId = jsonValue.GetString("amiId");

    m_amiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipv4Addresses"))
  {
    Array<JsonValue> ipv4AddressesJsonList = jsonValue.GetArray("ipv4Addresses");
    for(unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex)
    {
      m_ipv4Addresses.push_back(ipv4AddressesJsonList[ipv4AddressesIndex].AsString());
    }
    m_ipv4AddressesHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithInteger("schemaVersion", m_schemaVersion);

  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_autoScalingGroupHasBeenSet)
  {
   payload.WithString("autoScalingGroup", m_autoScalingGroup);

  }

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("amiId", m_amiId);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_ipv4AddressesHasBeenSet)
  {
   Array<JsonValue> ipv4AddressesJsonList(m_ipv4Addresses.size());
   for(unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex)
   {
     ipv4AddressesJsonList[ipv4AddressesIndex].AsString(m_ipv4Addresses[ipv4AddressesIndex]);
   }
   payload.WithArray("ipv4Addresses", std::move(ipv4AddressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
