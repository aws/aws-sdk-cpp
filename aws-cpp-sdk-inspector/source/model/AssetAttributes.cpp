/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_ipv4AddressesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false)
{
}

AssetAttributes::AssetAttributes(JsonView jsonValue) : 
    m_schemaVersion(0),
    m_schemaVersionHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_ipv4AddressesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false)
{
  *this = jsonValue;
}

AssetAttributes& AssetAttributes::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> ipv4AddressesJsonList = jsonValue.GetArray("ipv4Addresses");
    for(unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex)
    {
      m_ipv4Addresses.push_back(ipv4AddressesJsonList[ipv4AddressesIndex].AsString());
    }
    m_ipv4AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> ipv4AddressesJsonList(m_ipv4Addresses.size());
   for(unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex)
   {
     ipv4AddressesJsonList[ipv4AddressesIndex].AsString(m_ipv4Addresses[ipv4AddressesIndex]);
   }
   payload.WithArray("ipv4Addresses", std::move(ipv4AddressesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
