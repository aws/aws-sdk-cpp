/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Instance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Instance::Instance() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_blueprintIdHasBeenSet(false),
    m_blueprintNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_addOnsHasBeenSet(false),
    m_isStaticIp(false),
    m_isStaticIpHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_hardwareHasBeenSet(false),
    m_networkingHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_sshKeyNameHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false)
{
}

Instance::Instance(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_blueprintIdHasBeenSet(false),
    m_blueprintNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_addOnsHasBeenSet(false),
    m_isStaticIp(false),
    m_isStaticIpHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_hardwareHasBeenSet(false),
    m_networkingHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_sshKeyNameHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

Instance& Instance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("blueprintId"))
  {
    m_blueprintId = jsonValue.GetString("blueprintId");

    m_blueprintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blueprintName"))
  {
    m_blueprintName = jsonValue.GetString("blueprintName");

    m_blueprintNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bundleId"))
  {
    m_bundleId = jsonValue.GetString("bundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addOns"))
  {
    Aws::Utils::Array<JsonView> addOnsJsonList = jsonValue.GetArray("addOns");
    for(unsigned addOnsIndex = 0; addOnsIndex < addOnsJsonList.GetLength(); ++addOnsIndex)
    {
      m_addOns.push_back(addOnsJsonList[addOnsIndex].AsObject());
    }
    m_addOnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isStaticIp"))
  {
    m_isStaticIp = jsonValue.GetBool("isStaticIp");

    m_isStaticIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicIpAddress"))
  {
    m_publicIpAddress = jsonValue.GetString("publicIpAddress");

    m_publicIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipv6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipv6AddressesJsonList = jsonValue.GetArray("ipv6Addresses");
    for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
    {
      m_ipv6Addresses.push_back(ipv6AddressesJsonList[ipv6AddressesIndex].AsString());
    }
    m_ipv6AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddressType"))
  {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("ipAddressType"));

    m_ipAddressTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hardware"))
  {
    m_hardware = jsonValue.GetObject("hardware");

    m_hardwareHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networking"))
  {
    m_networking = jsonValue.GetObject("networking");

    m_networkingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sshKeyName"))
  {
    m_sshKeyName = jsonValue.GetString("sshKeyName");

    m_sshKeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadataOptions"))
  {
    m_metadataOptions = jsonValue.GetObject("metadataOptions");

    m_metadataOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Instance::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
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

  if(m_blueprintIdHasBeenSet)
  {
   payload.WithString("blueprintId", m_blueprintId);

  }

  if(m_blueprintNameHasBeenSet)
  {
   payload.WithString("blueprintName", m_blueprintName);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_addOnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addOnsJsonList(m_addOns.size());
   for(unsigned addOnsIndex = 0; addOnsIndex < addOnsJsonList.GetLength(); ++addOnsIndex)
   {
     addOnsJsonList[addOnsIndex].AsObject(m_addOns[addOnsIndex].Jsonize());
   }
   payload.WithArray("addOns", std::move(addOnsJsonList));

  }

  if(m_isStaticIpHasBeenSet)
  {
   payload.WithBool("isStaticIp", m_isStaticIp);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  if(m_publicIpAddressHasBeenSet)
  {
   payload.WithString("publicIpAddress", m_publicIpAddress);

  }

  if(m_ipv6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6AddressesJsonList(m_ipv6Addresses.size());
   for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
   {
     ipv6AddressesJsonList[ipv6AddressesIndex].AsString(m_ipv6Addresses[ipv6AddressesIndex]);
   }
   payload.WithArray("ipv6Addresses", std::move(ipv6AddressesJsonList));

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if(m_hardwareHasBeenSet)
  {
   payload.WithObject("hardware", m_hardware.Jsonize());

  }

  if(m_networkingHasBeenSet)
  {
   payload.WithObject("networking", m_networking.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_sshKeyNameHasBeenSet)
  {
   payload.WithString("sshKeyName", m_sshKeyName);

  }

  if(m_metadataOptionsHasBeenSet)
  {
   payload.WithObject("metadataOptions", m_metadataOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
